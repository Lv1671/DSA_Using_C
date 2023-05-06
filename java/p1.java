class A {
    int a = 10;
    static int b = 20;
    public static void main(String[] args){
        A ref = new A();
        A.show();
        ref.disp();
    }
    static void show(){
        A ref = new A();
        System.out.println(ref.a + " " + b);
    }
    void disp(){
        System.out.println(a + " " + b);
    }
}