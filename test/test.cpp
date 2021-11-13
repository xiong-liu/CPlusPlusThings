//.h
class Base
{
  public:
    int base_public = 1;
    void func1();

  protected:
    int base_protect = 2;
    void func2();

  private:
    int base_private = 3;
    void func3();
};

class Derive1 : private Base  //私有继承
{
  public:
    //在public作用域声明基类中的成员
    using Base::base_public;  //成功，基类公有->派生类公有
    using Base::func1;        //成功，基类公有->派生类公有
    using Base::func2;        //成功，基类保护->派生类公有
  protected:
    using Base::base_protect;  //成功，基类保护->派生类保护
    using Base::func3;  //错误，基类私有->派生类保护；编译器报错 , 不可访问
  private:
    using Base::base_private;  // 错误, 基类私有->派生类私有；编译器报错 , 不可访问
};
