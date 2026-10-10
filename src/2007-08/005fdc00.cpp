// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct Name {
    void* rep;
};

struct SharedPtr {
    void* px;
    void* pi;
};

struct CloneTool {
    char pad0[0x18];
    void* field18;
    char pad1[0x4];
    void* field20;
    void* method(int);
};

extern "C" void __stdcall sub_573F80(void*);
extern "C" void __stdcall sub_5405E0(void*, void*);
extern "C" void __stdcall sub_492940(void*, void*, void*);
extern "C" void __stdcall sub_424410(void*, void*);
extern "C" void __stdcall sub_568C20(void*, void*, int, int, int);
extern "C" void* __stdcall sub_561B10(void*, int);
extern "C" void __stdcall sub_58C810(void*);
extern "C" void* __stdcall sub_62FEF6(int);
extern "C" void __stdcall sub_625D40(void*, void*, void*);
extern "C" void __stdcall sub_40DB50(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_62FC62(void*);

void* CloneTool::method(int arg)
{
    void* result = 0;
    if (this->field20 != 0) {
        sub_573F80(this->field20);
        void* tmp1 = 0;
        sub_5405E0(this->field20, &tmp1);
        void* tmp2 = 0;
        sub_492940(&tmp2, &tmp1, 0);
        void* p = tmp1;
        if (p != 0) {
            RefCounted* rc = (RefCounted*)p;
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void** vt = (void**)rc->vptr;
                ((void (__thiscall*)(void*))vt[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    void** vt2 = (void**)rc->vptr;
                    ((void (__thiscall*)(void*))vt2[2])(rc);
                }
            }
        }
        void* sp1 = 0;
        void* sp2 = 0;
        void* sp3 = 0;
        void* esi = tmp2;
        void* ecx = tmp1;
        void* local_c = ecx;
        void* local_10 = esi;
        if (esi != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)esi + 4), 1);
        }
        sub_424410(&sp1, &local_c);
        if (esi != 0) {
            RefCounted* rc = (RefCounted*)esi;
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void** vt = (void**)rc->vptr;
                ((void (__thiscall*)(void*))vt[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    void** vt2 = (void**)rc->vptr;
                    ((void (__thiscall*)(void*))vt2[2])(rc);
                }
            }
        }
        void* local_18 = 0;
        sub_568C20(&local_18, &sp1, 1, 1, (int)this->field18);
        void* v = sub_561B10(this->field18, 8);
        sub_58C810(v);
        void* mem = sub_62FEF6(0x40);
        void* ebp = mem;
        if (ebp != 0) {
            void* edi = local_18;
            sub_573F80(edi);
            sub_625D40(ebp, edi, (char*)v + 0x24);
        } else {
            result = 0;
        }
        void** vt = (void**)(*(void**)result);
        ((void (__thiscall*)(void*, int))vt[1])(result, arg);
        void* ret = result;
        if (sp1 != 0) {
            sub_40DB50(sp1, sp2, &local_c, sp3, 0);
            sub_62FC62(sp3);
        }
        if (esi != 0) {
            RefCounted* rc = (RefCounted*)esi;
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                ((void (__thiscall*)(void*))vt2[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    void** vt3 = (void**)rc->vptr;
                    ((void (__thiscall*)(void*))vt3[2])(rc);
                }
            }
        }
        return ret;
    }
    return 0;
}
