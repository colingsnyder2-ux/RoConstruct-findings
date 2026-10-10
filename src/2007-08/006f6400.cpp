// from server: 39% by colin
struct CXTPPropertyGridInplaceEdit
{
    char pad[0x80];
    int field_80;
    int field_84;
    void Sync();
};

extern "C" int __stdcall sub_77dcc8(int);
extern "C" int __stdcall sub_77d92c(int, int);
extern "C" int __stdcall sub_77d434(int, int);
extern "C" int __stdcall sub_77dc3c(int, int, int);
extern "C" int __stdcall sub_77d564(int, int);
extern "C" int __stdcall sub_77ddbc(int);

void CXTPPropertyGridInplaceEdit::Sync()
{
    int a = sub_77dcc8((int)&field_84);
    int b = sub_77dcc8((int)&field_80);
    if (b > a)
    {
        int tmp;
        sub_77d92c((int)&field_80, (int)&tmp);
        sub_77d434((int)&field_80, tmp);
        sub_77ddbc((int)&tmp);
    }
    else if (b < a)
    {
        int tmp;
        sub_77dc3c((int)&field_84, a, b - a);
        sub_77d564((int)&field_80, tmp);
        sub_77ddbc((int)&tmp);
    }
}
