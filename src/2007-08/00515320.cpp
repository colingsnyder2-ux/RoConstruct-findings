// from server: 81% by colin
struct G3D_DialogTemplate {
    void method_515320(int, int);
};

extern "C" void __cdecl sub_514F70(void*, int, int, int);
extern "C" void __cdecl sub_514F30(void*, int);
extern "C" void __cdecl sub_51ECD0(void*, int);

void G3D_DialogTemplate::method_515320(int a, int b) {
    sub_514F70(this, a, 0x7fff, -1);
    if (*(int*)((char*)this + 0x220) != 0) {
        sub_51ECD0(this, *(int*)((char*)this + 0x224));
        *(int*)((char*)this + 0x224) = 0;
        *(int*)((char*)this + 0x220) = 0;
    }
    sub_514F30((char*)this + 0xc, 0x120);
}
