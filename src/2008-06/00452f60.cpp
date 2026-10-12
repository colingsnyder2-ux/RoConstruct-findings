// from server: 98% by king_originala
struct S
{
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void finish(int);

    int check();
    void perform();
    int func_00452f60();
};

int S::func_00452f60()
{
    if (!check())
        return 0;

    try
    {
        perform();
    }
    catch (S* exception)
    {
        return 0;
    }

    finish(0);
    return 1;
}
