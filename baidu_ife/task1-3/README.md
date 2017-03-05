# 任务三：三栏式布局

## 盒子模型
在布局中，经常听盒子模型，并不是它因为难，而是不了解盒子模型的话，就无从计算每个盒子的大小，从而无法达到想要的效果。

盒子模型分为两种：标准盒子模型和非标准盒子模型。这两者之间的差别主要出现在width包含哪些内容上，弄明白width包含哪些内容，就理解了盒子模型。

在HTML中，所有的元素都可以看作一个盒子，每个盒子包含了：margin、border、padding、content四个属性。而我们在设置元素的width时，width指的谁的宽度？

在标准盒子中，元素width仅代表content的宽度，而在非标准盒子中却不是这样。在IE6/7中，元素width指的是border、padding、content三者加起来的宽度。

## Position 定位
position的属性分为static、relative、absolute、fixed。

position默认为static，即正常的布局行为，标准的文档流。

relative是在static的基础上增加了top、left、right、bottom。通过周围文档流中的元素（非脱离文档流的元素）调整位置。

absolute不为元素预留空间，通过指定元素相对于最近的非 static 定位祖先元素的偏移，来确定元素位置。

fixed不为元素预留空间，通过指定元素相对于屏幕视口（viewport）的位置来指定元素位置。

## 浮动
对于浮动，常见的问题是不能包裹子类元素，从而影响布局，赭石就要清除浮动。清除浮动大致分为两种：

- 父类结尾添加div空标签

    ```
    .clear{
      clear:both;
    }
    ```

- 伪类::after

    另一类是在父类元素上使用伪类`::after`的方式：
    ```
    .clearfix::after {
      display: block;
      content: "";
      clear: both;
    }
    ```