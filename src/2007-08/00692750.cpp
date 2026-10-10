// from server: 69% by colin
struct CXTPStatusBarPane
{
    char pad_00[0x20];
    void* field_20;
    char pad_24[0x88];
    char field_ac;
    int method_63022c();
    int method_630238(int);

    int method_692750(int a, int b);
};

extern "C" void* __stdcall CreateFontIndirectA(const void*);
extern "C" int __stdcall GetObjectA(void*, int, void*);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

int CXTPStatusBarPane::method_692750(int a, int b)
{
    char buffer[0x3c];
    void* font;
    int result;

    font = CreateFontIndirectA(*(void**)(a + 4));
    this->method_63022c();
    GetObjectA(font, 0x3c, buffer);
    this->method_630238((int)buffer);
    result = (int)this->field_ac;
    if (result != 0)
        result = *(int*)(result + 4);
    SendMessageA(this->field_20, 0x30, result, b);
    return 0;
}
