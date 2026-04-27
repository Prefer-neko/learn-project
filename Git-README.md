is my second 创建 git project

question
git add C51 //没有点，点是全部文件


git remote -v  //查看当前关联的地址



git pull origin main --allow-unrelated-histories



  
//deepseek：你之前已经执行过 git remote add origin ... 了，本地仓库已经关联了一个名为 origin 的远程地址，不能重复添加。





//我没搞懂什么东西，慎用 有懂的大佬可以解释一下






git push origin main  //最后直接上传  一开始是git push -u origin main








is my frist 创建 git project







 D:  
 //到d盘中
 
 cd "D:\work\project"






 //到“文件地址”（上传文件）







 git init       
 //初始化（生成git文件，给github识别）  //deepseek:在当前文件夹中创建一个隐藏的 .git 目录。这标志着该文件夹开始被 Git 接管，支持版本控制。







 git add.                    git add C51






 //上传文件中的所有文件        //单独上传C51这个文件       //deepseek:把文件的当前修改放入“暂存区”，相当于拍一张快照准备提交。只有进入暂存区，文件的修改才会被下一个 commit 记录。






 git status    
 //检查上传文件状态






 git commit -m "first submission"





 //上传时的日志大概内容      //deepseek:正式将暂存区的快照存入本地仓库，形成一个可追溯的版本。“-m”后面的信息必须写，方便日后理解这次提交的目的。






 git log  
 //查看上传时间 作者 版本





 
 git remote add origin https://github.com/----------------------.git





 //链接github仓库地址   //deepseek:让本地仓库知道它对应的远程仓库是谁。“origin”是远程仓库的别名，通常指主仓库的地址。





 
git branch -M main





//没懂  //deepseek:这条命令的作用是强制重命名当前分支。






git push -u origin main





//上传上传到github  往后直接输入这个不需要git push -u origin main直接输入git push






