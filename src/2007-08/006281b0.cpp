// from server: 39% by colin
struct Assembly;
struct Primitive;

struct AssemblyStage {
    char pad[0x7c];
    int state[1];
    Assembly* onEngineChanging(Primitive* p, int a, int b);
};

extern "C" int __stdcall sub_60A200(int, int, int, int);
extern "C" int __stdcall sub_60A860(int, int, int, int, int, int);
extern "C" int __stdcall sub_60A260(int, int, int, int, int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __fastcall sub_475050(void*);

Assembly* AssemblyStage::onEngineChanging(Primitive* p, int a, int b) {
    int v1 = state[a];
    int v2 = state[b];
    if ((v1 == 3 && v2 == 4) || (v1 == 4 && v2 == 3)) {
        if (sub_60A200(a, b, (int)this, (int)p)) {
            char buf1[0x30];
            char buf2[0x30];
            sub_475050(buf2);
            sub_475050(buf1);
            sub_60A860(a, b, (int)this, (int)p, (int)buf1, (int)buf2);
            Assembly* asm_ = (Assembly*)sub_62FEF6(0x88);
            if (asm_) {
                sub_60A260((int)asm_, (int)this, (int)p, (int)buf2, (int)buf1);
                *(int*)asm_ = 0x7b6184;
                return asm_;
            }
        }
    }
    return 0;
}
