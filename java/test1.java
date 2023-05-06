class Demo{
    int a ;
    String S1;
    
    Demo(){
        a = 0;
        S1 = "Kashish aggarwal";
    }
    void Show(){
        System.out.println(a +" "+ S1 +" hello jp");
    }
    public static void main(String[] args){

    }
   
}
class Jp{
    public static void main(String[] args){
        Demo d1 = new Demo();
        d1.Show();
    }
}