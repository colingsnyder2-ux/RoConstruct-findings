// from server: 40% by colin
struct RBXName {
    void* p;
};

struct DescribedBase {
    void* vtable;
};

struct Instance : DescribedBase {
    char pad[0xb8];
    void* getSomething();
};

struct PartInstance : Instance {
};

struct JointInstance : Instance {
};

struct VelocityMotor : JointInstance {
};

struct FactoryProduct {
    char pad[0xf8];
    void* field_f8;
};

extern "C" void* __stdcall sub_630d36(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_475050(void* p);
extern "C" void __cdecl sub_5095d0(void* p, void* q);
extern "C" void __cdecl sub_5da080(void* p, void* q);
extern "C" void __cdecl sub_60a0a0(void* p, void* q, void* r);

extern const char* sInstance;
extern const char* sPartInstance;

void FactoryProduct_ctor(FactoryProduct* self, int a, int b)
{
    void* edi = 0;
    if (a != 0) {
        void* eax = sub_630d36(*(void**)((char*)a + 0xbc), 0, (void*)0x881f4c, (void*)0x884a28, 0);
        if (eax != 0) {
            edi = *(void**)((char*)eax + 0x1d8);
        }
    }

    void* esi;
    char buf[0x30];
    if (a != 0) {
        sub_5da080((void*)a, buf);
        esi = (void*)a;
    } else {
        sub_475050(buf);
        esi = 0;
    }

    char local[0x30];
    sub_5095d0(local, esi);

    float f0 = *(float*)((char*)esi + 0x24);
    float f1 = *(float*)((char*)esi + 0x28);
    float f2 = *(float*)((char*)esi + 0x2c);

    void* ecx = *(void**)((char*)self + 0xf8);
    if (*(void**)((char*)ecx + a * 4 + 8) != edi) {
        void** vt = *(void***)ecx;
        void (*fn)(void*, int, void*) = (void (*)(void*, int, void*))vt[4];
        fn(ecx, a, edi);
        if (edi != 0) {
            sub_60a0a0(*(void**)((char*)self + 0xf8), (void*)a, local);
        }
    }
}
