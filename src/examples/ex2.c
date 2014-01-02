void main() {
    int arr[2];
    int i;
    i = 0;
    arr[0] = 10;
    arr[1] = 100;
    
    arr[i=i+1] += 100;
    print arr[0];
    print arr[1];
    print i;
    println;

    int j;
    j = 2;
    arr[j=j-1] -= 100;
    print arr[0];
    print arr[1];
    print j;
    println;
}
