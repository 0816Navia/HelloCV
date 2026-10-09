仓库里分别有加法减法，乘法除法的单独的代码
然后有个叫sizeyunsuan的文件是最后的计算器
我是先分别写好加减和乘除的代码
默认主分支main
先个git switch jiajian确定第一个分支
之后添加写好的加减的代码，用git status查看状态
git switch main回到主干
相同步骤搞好乘除
用git merge +分支整理好
但是我合并出现了冲突
所以进行了调整
最后直接输入算式就可以计算了
