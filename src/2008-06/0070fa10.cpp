// from server: 24% by colin
struct CStatusCmdUI
{
    void func_70f670(int, int);
    int func_70e0f0();
    void func_6a0c68();
    void func_6a0f44(void*);
    void func_6f7c60(void*);
    void func_70f3b0(void*);
    void func_6f7da0();
    void func_6a0f3e();
    void func_70fa10();
};

void CStatusCmdUI::func_70fa10()
{
    func_70f670(0, 1);
    if (func_70e0f0() == 0)
    {
        func_6a0c68();
        return;
    }

    char buf1[0x30];
    func_6a0f44(this);

    char buf2[0x30];
    func_6f7c60(buf2);

    func_70f3b0(buf2);
    func_6f7da0();
    func_6a0f3e();
}
