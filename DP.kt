fun fibo_dp(n: Int): Int{
    var list: MutableList<Int> = mutableListOf()
    for(i in 0..n){
        if(i==0 || i >= 2){
            list.add(i, 0)
        }else{
            list.add(i, 1)
        }
    }
    for(i in 2..n){
        list[i] = list[i-1] + list[i-2]
    }
    return list[n]
}

fun main(){
    println(fibo_dp(6))
}