class Student{
    int marks;
    String Name;
    void input(){
        System.out.println("Enter the name  and marks of student");
    }
}
class Lakshay1 extends Student{
   
    void display(){
        Name = "Lakshay";
        marks = 10;
        System.out.println(Name + " " + marks);
    }
    public static void main(String[] args){
        Lakshay1 lv = new Lakshay1();
        lv.display();
    }
}
class Kashish1 extends Student{
    void display(){
        Name ="Kashish";
        marks = 100;
        System.out.println(Name + " " + marks);
    }
    public static void main(String[] args){
        Kashish1 ka = new Kashish1();
        ka.display();
    }
}