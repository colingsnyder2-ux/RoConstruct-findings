// from server: 73% by colin
struct CXTPPropertyGridInplaceEdit
{
    char pad[0x20];
    void* field_20;
    char pad2[0x78];
    void* field_9c;
    void* field_a0;
    void sub_8c();
    void sub_90();
    void sub_6a096e(int);
    void func_00773730();
};

extern "C" void __stdcall sub_803e84();
extern "C" int __stdcall IsWindow(void*);

void CXTPPropertyGridInplaceEdit::func_00773730()
{
    field_a0 = 0;
    field_9c = 0;
    sub_803e84();
    sub_90();
    if (IsWindow(field_20))
    {
        sub_6a096e(0);
    }
}
