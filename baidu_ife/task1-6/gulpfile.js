var gulp = require('gulp')
var sass = require('gulp-sass')
var browserSync = require('browser-sync').create()
var reload = browserSync.reload;
gulp.task('scss', function(){
  return gulp.src('./src/**/*.scss')
            .pipe(sass())
            .pipe(gulp.dest('./css'))
            .pipe(reload({stream:true}))
})

gulp.task('bs', ['scss'], function(){
  browserSync.init({
    server: {
      baseDir: './'
    }
  })
  gulp.watch('./src/**/*.scss', ['scss'])
})

