// from server: 49% by colin
struct RBX_BaseClass {
    void construct();
};

struct RBX_ICreator {
    void* vfptr;
    int field4;
    int field8;
};

struct RBX_Reflection_DescribedBase {
    void* vfptr;
    int field4;
    int field8;
    void* fieldC;
};

struct RBX_Reflection_DescribedBase_ctor {
    void* vfptr;
    int field4;
    int field8;
    void* fieldC;
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);

extern "C" void __stdcall RBX_Reflection_DescribedBase_ctor_fn(void* self, void* arg);
extern "C" void __stdcall RBX_shared_ptr_assign(void* self, void* p);

struct RBX_VControllerService_FactoryProduct : RBX_BaseClass {
    void* vfptr0;
    void* vfptr4;
    char pad8[8];
    void* vfptr10;
    void* vfptr14;
    char pad18[0x14];
    void* vfptr2c;
    char pad30[0x14];
    void* vfptr44;
    char pad48[0x14];
    void* vfptr5c;
    char pad60[0x14];
    void* vfptr74;
    char pad78[0x14];
    void* vfptr8c;
    char pad90[0x58];
    int fieldE8;
    int fieldEC;
    void* fieldF0;
    void* fieldF4;
    void* fieldF8;

    RBX_VControllerService_FactoryProduct();
};

RBX_VControllerService_FactoryProduct::RBX_VControllerService_FactoryProduct()
{
    RBX_BaseClass::construct();

    vfptr0 = (void*)0x7b14e4;
    vfptr4 = (void*)0x7b14dc;
    vfptr10 = (void*)0x7b14d4;
    vfptr14 = (void*)0x7b14c4;
    vfptr2c = (void*)0x7b14b4;
    vfptr44 = (void*)0x7b14a4;
    vfptr5c = (void*)0x7b1494;
    vfptr74 = (void*)0x7b1484;
    vfptr8c = (void*)0x7b1474;

    fieldE8 = 0;
    fieldEC = 0;

    {
        void* p = operator_new(0x10);
        if (p) {
            *(void**)p = (void*)0x797984;
            *(int*)((char*)p + 4) = 0;
            *(int*)((char*)p + 8) = 0;
            *(void**)((char*)p + 0xc) = this;
            *(void**)p = (void*)0x7b111c;
        } else {
            p = 0;
        }
        fieldF0 = 0;
        RBX_shared_ptr_assign(&fieldF0, p);
    }

    {
        void* p = operator_new(0x10);
        if (p) {
            *(void**)p = (void*)0x797984;
            *(int*)((char*)p + 4) = 0;
            *(int*)((char*)p + 8) = 0;
            *(void**)((char*)p + 0xc) = this;
            *(void**)p = (void*)0x7b1134;
        } else {
            p = 0;
        }
        fieldF4 = 0;
        RBX_shared_ptr_assign(&fieldF4, p);
    }

    {
        void* p = operator_new(0xc);
        if (p) {
            *(void**)p = (void*)0x797984;
            *(int*)((char*)p + 4) = 0;
            *(int*)((char*)p + 8) = 0;
            *(void**)p = (void*)0x7aa894;
        } else {
            p = 0;
        }
        fieldF8 = 0;
        RBX_shared_ptr_assign(&fieldF8, p);
    }
}
