// from server: 42% by tester
struct RefItem {
    char pad0[0x20];
    char pad1[0xE0];
    char pad2[0x100];
    void method(int a, int b);
};

extern "C" void* __stdcall sub_77ddb8(void*);
extern "C" void __fastcall sub_43c9d0(void*, int, int);
extern "C" int __fastcall sub_689740(void*);
extern "C" void __fastcall sub_697a10(void*, int);
extern "C" void __fastcall sub_698630(void*);

void RefItem::method(int a, int b) {
    sub_43c9d0(this, a, b);
    *(void**)this = (void*)0x78ebc4;
    *(void**)((char*)this + 0x20) = (void*)0x78eb64;
    *(void**)((char*)this + 0x100) = (void*)0x78eb5c;
    int v = sub_689740(this);
    sub_697a10(this, v | 2);
    int w = sub_689740(this);
    sub_697a10(this, w & ~1);
    void* tmp;
    sub_77ddb8(&tmp);
    sub_698630(this);
}
