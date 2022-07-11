fun main(){
    var min: Int
    var temp: Int
    var index: Int
    val list: MutableList<Int> = mutableListOf(2, 4, 1, 5, 3, 7, 6, 10)
    
    for(i in 0 until list.size){
        min = list[i]
        index = i
        for(j in i until list.size-1){
            if(min > list[j+1]){
                min = list[j+1]
                index = j+1
            }
        }
        temp = list[i]
        list[i] = list[index]
        list[index] = temp
    }
    println(list)
}
