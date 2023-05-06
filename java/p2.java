class A {

    static int b = 20;
    public static void main(String[] args){
        B.show();
    }
    static void show(){
        System.out.println(b);
    }
    
}
class B {
    static int b = 30;
    public static void main(String[] args){
        C.show();
    }
    static void show(){
        System.out.println(b);
    }
}
class C {
    
    static int b = 40;
    public static void main(String[] args){
        C.show();
    }
    static void show(){
        System.out.println(b);
    }
   
}