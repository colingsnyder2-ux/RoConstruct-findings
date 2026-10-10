// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RBXName {
    void* p;
};

struct CreatorEntry {
    RBXName* name;
    void* creator;
};

struct CreatorVector {
    CreatorEntry* begin;
    CreatorEntry* end;
};

struct ICreator {
    virtual void v0();
    virtual void v1();
};

struct FactoryProductBase {
    char pad0[0x134];
    CreatorEntry* creatorsBegin;
    CreatorEntry* creatorsEnd;
};

extern "C" void* __cdecl sub_45A270(void* self);
extern "C" void __cdecl sub_459570(void* out);
extern "C" void __cdecl sub_458270();
extern "C" void __cdecl sub_402A60(void* dst, void* src);
extern "C" void __cdecl sub_541630(void* self, void* arg);
extern "C" void __cdecl sub_725520(void* a, void* b, void* c);
extern "C" void* __cdecl sub_77E6D8();

struct VCameraFactoryProduct : public FactoryProductBase {
    void* Creator();
};

void* VCameraFactoryProduct::Creator()
{
    void* result = sub_45A270(this);
    if (result != 0)
        return result;

    void* local10 = 0;
    sub_459570(&local10);

    void* ebx = local10;

    sub_725520((void*)0x8bbfd8, (void*)0x4588d0, 0);
    sub_458270();

    void* edi = result;

    CreatorEntry* begin = this->creatorsBegin;
    if (begin == 0) {
        sub_77E6D8();
    } else {
        unsigned int count = (unsigned int)((char*)this->creatorsEnd - (char*)begin) >> 3;
        if ((unsigned int)edi >= count) {
            sub_77E6D8();
        }
    }

    CreatorEntry* slot = this->creatorsBegin + (unsigned int)edi;
    slot->name = (RBXName*)local10;
    sub_402A60(&slot->creator, &local10);

    sub_541630(ebx, this);

    void* ref = local10;
    if (ref != 0) {
        volatile long* rc = (volatile long*)((char*)ref + 4);
        if (_InterlockedExchangeAdd(rc, -1) == 1) {
            void** vt = *(void***)ref;
            void (*dtor)(void*) = (void (*)(void*))vt[1];
            dtor(ref);
            volatile long* rc2 = (volatile long*)((char*)ref + 8);
            if (_InterlockedExchangeAdd(rc2, -1) == 1) {
                void** vt2 = *(void***)ref;
                void (*dtor2)(void*) = (void (*)(void*))vt2[2];
                dtor2(ref);
            }
        }
    }

    return ebx;
}
