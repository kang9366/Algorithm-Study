fun main(){
    val list = mutableListOf<Int>(7, 4, 5, 1, 3)
    var temp: Int
    for(i in 0..list.size-2){
        for(i in 0..list.size-2){
            if(list[i] > list[i+1]){
                temp = list[i]
                list[i] = list[i+1]
                list[i+1] = temp
            }
        }
    }
    println(list)
}
