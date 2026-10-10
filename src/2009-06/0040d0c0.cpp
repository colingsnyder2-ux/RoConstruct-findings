// from server: 92% by colin
struct VCSecureHtmlView
{
    char pad[0xf8];
    void* field_f8;
    int sub_718bb2(int, int, int, int);
    int sub_72b610(int, int, int, int);
    int func_0040d0c0(int, int, int, int);
};

int VCSecureHtmlView::func_0040d0c0(int a, int b, int c, int d)
{
    if (field_f8 != 0)
    {
        if (sub_72b610(a, b, c, d) != 0)
            return 1;
    }
    return sub_718bb2(a, b, c, d);
}
