double average(int* salary, int salarySize){
    /*
    int a[2];
    a[0] = a[1] = salary[0];
    min_max(salary, salarySize, a);
    
    double sum=0;
    for(int i=0; i < salarySize; i++) {
        if((salary[i] != a[0]) && (salary[i] != a[1]))
            sum += salary[i];
    }
    return sum/(salarySize-2);
    */
    
    int min = salary[0], max = salary[0];
    
    double sum=0;
    
    for(int i=0; i<salarySize; i++) {
        if(salary[i] < min)
            min = salary[i];
        if(salary[i] > max)
            max = salary[i];
    }
    
    for(int i=0; i<salarySize; i++) {
        if((salary[i]!=min) && (salary[i]!=max))
            sum += salary[i];
    }
    return sum/(salarySize-2);
}