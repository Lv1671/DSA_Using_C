class A {
    A(){
        System.out.println("Hello peter");
    }
}
class B extends A{
    B(){
        
        System.out.println("sUPER SAY UPR");
    }
}
class C{
    public static void main(String[] args){
        B ref = new B();
    }
}
