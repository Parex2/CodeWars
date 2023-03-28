int solution(int number){
    int sum = 0;
    if(number < 3){
        return sum;
    }else{
        for (int i = 3; i < number; i++){
            if((i % 3 == 0) && (i % 5) == 0){
                sum += i;
            }else if(i % 3 == 0){
                sum += i;
            }else if(i % 5 == 0){
                sum += i;
            }
        }
    }

    return sum;
}