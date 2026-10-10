// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall G1_func_00559e90();
extern "C" void __stdcall G1_func_00541630();
extern "C" void __stdcall G1_func_005d03e0();

struct S {
    char pad[0xc0];
    void* field_c0;
    char pad2[0x160 - 0xc4];
    int field_160;
    void func_005d1730(int);
};

void S::func_005d1730(int arg)
{
    G1_func_00559e90();
    G1_func_00541630();
    void* p = field_c0;
    int count;
    if (p != 0 && *(int*)((char*)p + 4) != 0) {
        count = (*(int*)((char*)p + 8) - *(int*)((char*)p + 4)) >> 3;
    } else {
        count = 0;
    }
    int esi = count - 1;
    int edi;
    if (field_160 < 0) {
        edi = esi;
    } else {
        if (esi < field_160) {
            edi = esi;
        } else {
            edi = field_160;
        }
    }
    while (esi > edi) {
        void* q = field_c0;
        int* base = (int*)((char*)q + 4);
        if (base == 0 || (unsigned)(esi - 1) >= (unsigned)((*(int*)((char*)q + 8) - (int)base) >> 3)) {
            G1_func_005d03e0();
        }
        void* q2 = field_c0;
        int* base2 = (int*)((char*)q2 + 4);
        int ebx = *(int*)((char*)base2 + esi * 8 - 8);
        if (base2 == 0 || (unsigned)esi >= (unsigned)((*(int*)((char*)q2 + 8) - (int)base2) >> 3)) {
            G1_func_005d03e0();
        }
        int* base3 = (int*)((char*)field_c0 + 4);
        int ecx = *(int*)((char*)base3 + esi * 8);
        int eax = *(int*)((char*)ebx + 0x100);
        G1_func_005d03e0();
        esi--;
    }
    void* q3 = field_c0;
    int* base4 = (int*)((char*)q3 + 4);
    if (base4 == 0 || (unsigned)edi >= (unsigned)((*(int*)((char*)q3 + 8) - (int)base4) >> 3)) {
        G1_func_005d03e0();
    }
    int* base5 = (int*)((char*)field_c0 + 4);
    int ecx2 = *(int*)((char*)base5 + edi * 8);
    G1_func_005d03e0();
    void* r = *(void**)((char*)this + 0x1c);
    field_160 = -1;
    if (r != 0) {
        long old = _InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1);
        if (old == 1) {
            void** vt = *(void***)r;
            ((void (__stdcall*)(void*))vt[1])(r);
            long old2 = _InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1);
            if (old2 == 1) {
                void** vt2 = *(void***)r;
                ((void (__stdcall*)(void*))vt2[2])(r);
            }
        }
    }
}
