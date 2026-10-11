// from server: 38% by colin
struct GImage {
    void* vtable;
    int field4;
    int field8;
    void* fieldC;
    char pad10[0x2C];
    void* field3C;

    void Error();
};

extern "C" int __cdecl sub_473670();
extern "C" void __stdcall sub_8029B0(void*, int);
extern "C" void __stdcall sub_802468(void*);

extern int dword_96EF44;

void GImage::Error()
{
    this->vtable = (void*)0x81E36C;
    int n = sub_473670();
    dword_96EF44 -= n;
    this->fieldC = 0;
    sub_8029B0(&this->fieldC, 1);
    sub_802468(&this->field3C);
    this->vtable = (void*)0x81E1E0;
}
