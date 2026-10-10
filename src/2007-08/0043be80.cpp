// from server: 35% by colin
struct MVCXTPPropertyGridItem {
    char pad[0x100];
    int f(int, int);
};

extern "C" void* __stdcall sub_77e6a8(void*);
extern "C" void __stdcall sub_69a040(void*, int, int, void*);
extern "C" void __stdcall sub_43b5d0(void*, void*, int);
extern "C" void __stdcall sub_698cc0(void*, int);

int MVCXTPPropertyGridItem::f(int a, int b) {
    void* p = sub_77e6a8((char*)this + 4);
    sub_69a040(this, 0, 0, p);
    sub_43b5d0((char*)this + 0x100, (void*)b, a);
    *(int*)((char*)this + 0xf0) = 1;
    *(void**)((char*)this) = (void*)0x78d8bc;
    *(void**)((char*)this + 0x20) = (void*)0x78d85c;
    *(void**)((char*)this + 0x100) = (void*)0x78d850;
    *(void**)((char*)this + 0x118) = (void*)b;
    sub_698cc0(this, 1);
    return (int)this;
}
