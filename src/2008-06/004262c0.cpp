// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void __stdcall sub_802890();
extern "C" void __fastcall sub_411B40(void*);
extern "C" void __fastcall sub_5773C0(void*);
extern "C" void __fastcall sub_5A2FE0(void*);
extern "C" void __fastcall sub_4259F0(void*, void*);
extern "C" void __fastcall sub_423AC0(void*, void*, void*, void*, void*, void*, void*);

struct CRobloxTreeCtrlNode {
    char pad0[0xc];
    void* field_c;
    char pad10[0x48];
    void* field_58;
    void method();
};

void CRobloxTreeCtrlNode::method()
{
    void* local30 = 0;
    void* local3c = 0;
    void* local40 = 0;
    void* local44 = 0;
    void* local18[2];
    void* local28;
    void* local20;
    void* local2c;
    void* local10;

    void* p = sub_6A0920(4);
    if (p) {
        *(void**)p = &local30;
    } else {
        p = 0;
    }
    local30 = p;
    local3c = 0;
    local40 = 0;
    local44 = 0;

    void* obj = field_58;
    void** vtbl = *(void***)obj;
    void* (__thiscall *fn)(void*, void*) = (void* (__thiscall *)(void*, void*))vtbl[0x154/4];
    void* r = fn(obj, local18);

    void* a = *(void**)r;
    void* b = *(void**)((char*)r + 4);
    local20 = a;
    local2c = b;
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }

    sub_411B40(&local28);

    void* esi = local20;
    if (esi) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1) == 1) {
            void** v = *(void***)esi;
            void (*f1)(void*) = (void (*)(void*))v[1];
            f1(esi);
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1) == 1) {
                void** v2 = *(void***)esi;
                void (*f2)(void*) = (void (*)(void*))v2[2];
                f2(esi);
            }
        }
    }

    void* e = field_c;
    if (*(void**)((char*)e + 0x108)) {
        void* arg = *(void**)((char*)e + 0x108);
        sub_4259F0(&local30, arg);
    }

    sub_5773C0(&local20);

    void* esi2 = (void*)0x424580;
    void* edi2 = 0;
    void* eax2 = local40;
    void* ecx2 = local3c;
    void* ebx2 = eax2;
    if (ecx2 > eax2) {
        sub_802890();
        eax2 = local40;
        ecx2 = local3c;
    }
    void* ebp2 = local30;
    local10 = ecx2;
    if (ecx2 > eax2) {
        sub_802890();
    }
    void* ecx3 = local10;
    void* edx3 = local2c;

    void* args[4];
    args[0] = esi2;
    args[1] = edi2;
    args[2] = ecx3;
    args[3] = edx3;

    void* eax3 = local20;
    void* ecx4 = local40;
    sub_423AC0(&local30, ecx4, eax3, ebp2, ebx2, args, 0);

    sub_5A2FE0(&local30);
}
