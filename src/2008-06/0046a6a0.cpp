// from server: 85% by atomic.potato
struct CWebToolbox
{
    char pad[0xf8];
    void* field_f8;
    void func_006a0ad6(int, int, int);
    void sub_006a0a28();
    void func_0046a6a0(int, int, int);
};

void CWebToolbox::func_0046a6a0(int a, int b, int c)
{
    func_006a0ad6(a, b, c);
    if (field_f8 != 0) {
        sub_006a0a28();
    }
}
