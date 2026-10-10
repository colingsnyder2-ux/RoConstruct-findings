// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" double __fastcall func_004fff30(void*);
extern "C" void* __fastcall func_00573f80(void*);
extern "C" bool __cdecl func_004b7fe0(void*, void*);
extern "C" void* __fastcall func_004b8190(void*, void*);
extern "C" void __fastcall func_00432530(void*, void*);
extern "C" void __fastcall func_00423240(void*, void*);
extern "C" void __fastcall func_00597ee0(void*, void*);

struct ClientPhysics {
    char pad0[8];
    double field_8;
    char pad10[8];
    void* field_18;
    char field_1c[0x24];
    float field_40;
    float field_44;
    float field_48;
    void method_4b8310();
    void method_4b8460(void*);
};

void ClientPhysics::method_4b8460(void* a1)
{
    double d = func_004fff30(this);
    field_8 = d;

    void* ebx = func_00573f80(field_18);
    char* ebp = (char*)this + 0x1c;

    if (func_004b7fe0(ebp, ebx)) {
        method_4b8310();
        return;
    }

    int* src = (int*)ebx;
    int* dst = (int*)ebp;
    for (int i = 0; i < 9; ++i) {
        dst[i] = src[i];
    }
    *(float*)((char*)ebp + 0x24) = *(float*)((char*)ebx + 0x24);
    *(float*)((char*)ebp + 0x28) = *(float*)((char*)ebx + 0x28);
    *(float*)((char*)ebp + 0x2c) = *(float*)((char*)ebx + 0x2c);

    void* esi = (char*)this + 0x10;

    void* p1;
    func_004b8190(esi, &p1);
    void* v1 = *(void**)p1;
    bool bl = (v1 != *(void**)a1);

    if (p1) {
        void* obj = p1;
        if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 4), -1) == 1) {
            void** vt = *(void***)obj;
            ((void(__thiscall*)(void*))vt[1])(obj);
            if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 8), -1) == 1) {
                void** vt2 = *(void***)obj;
                ((void(__thiscall*)(void*))vt2[2])(obj);
            }
        }
    }

    if (!bl) {
        return;
    }

    void* p2;
    func_004b8190(esi, &p2);
    void* v2 = *(void**)p2;
    if (v2) {
        func_00432530((char*)v2 + 0xe8, this);
    }

    void* p3;
    func_004b8190(esi, &p3);
    void* v3 = *(void**)p3;
    if (v3) {
        func_00423240((char*)v3 + 0xe8, this);
    }

    func_00597ee0(esi, a1);

    void* p4;
    func_004b8190(esi, &p4);
    void* v4 = *(void**)p4;
    if (v4) {
        func_00423240((char*)v4 + 0xe8, this);
    }
}
