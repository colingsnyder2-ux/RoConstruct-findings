// from server: 48% by atomic.potato
// roc 2011-06 004e4670  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e4670
//
// 004e4670  64a100000000         mov eax, dword ptr fs:[0]
// 004e4676  6aff                 push -1
// 004e4678  68585f9d00           push 0x9d5f58
// 004e467d  50                   push eax
// 004e467e  64892500000000       mov dword ptr fs:[0], esp
// 004e4685  56                   push esi
// 004e4686  8bf1                 mov esi, ecx
// 004e4688  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e468c  8b01                 mov eax, dword ptr [ecx]
// 004e468e  8b500c               mov edx, dword ptr [eax + 0xc]
// 004e4691  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e4699  ffd2                 call edx
// 004e469b  0106                 add dword ptr [esi], eax
// 004e469d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e46a1  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004e46a9  85f6                 test esi, esi
// 004e46ab  742a                 je 0x4e46d7
// 004e46ad  8d4604               lea eax, [esi + 4]
// 004e46b0  83c9ff               or ecx, 0xffffffff
// 004e46b3  f00fc108             lock xadd dword ptr [eax], ecx
// 004e46b7  751e                 jne 0x4e46d7
// 004e46b9  8b16                 mov edx, dword ptr [esi]
// 004e46bb  8b4204               mov eax, dword ptr [edx + 4]
// 004e46be  8bce                 mov ecx, esi
// 004e46c0  ffd0                 call eax
// 004e46c2  8d4e08               lea ecx, [esi + 8]
// 004e46c5  83caff               or edx, 0xffffffff
// 004e46c8  f00fc111             lock xadd dword ptr [ecx], edx
// 004e46cc  7509                 jne 0x4e46d7
// 004e46ce  8b06                 mov eax, dword ptr [esi]
// 004e46d0  8b5008               mov edx, dword ptr [eax + 8]
// 004e46d3  8bce                 mov ecx, esi
// 004e46d5  ffd2                 call edx
// 004e46d7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e46db  64890d00000000       mov dword ptr fs:[0], ecx
// 004e46e2  5e                   pop esi
// 004e46e3  83c40c               add esp, 0xc
// 004e46e6  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    virtual void f1();
    virtual void f2();
    virtual int f3();
};

struct Obj {
    virtual void g1();
    virtual void g2();
    virtual int g3();
};

struct S {
    int field0;
    int f(Obj* a, Inner* b);
};

int S::f(Obj* a, Inner* b)
{
    int r = a->g3();
    this->field0 += r;
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            b->f1();
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                b->f2();
            }
        }
    }
    return this->field0;
}
