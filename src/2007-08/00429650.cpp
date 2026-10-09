// from server: 78% by colin
// roc 2007-08 00429650  unit: seg_00420000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00429650
//
// 00429650  837c240800           cmp dword ptr [esp + 8], 0
// 00429655  56                   push esi
// 00429656  751b                 jne 0x429673
// 00429658  6a0c                 push 0xc
// 0042965a  e897682000           call 0x62fef6
// 0042965f  8bf0                 mov esi, eax
// 00429661  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00429665  50                   push eax
// 00429666  56                   push esi
// 00429667  e834010200           call 0x4497a0
// 0042966c  83c40c               add esp, 0xc
// 0042966f  8bc6                 mov eax, esi
// 00429671  5e                   pop esi
// 00429672  c3                   ret 
// 00429673  8b742408             mov esi, dword ptr [esp + 8]
// 00429677  833e00               cmp dword ptr [esi], 0
// 0042967a  7410                 je 0x42968c
// 0042967c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042967f  8b16                 mov edx, dword ptr [esi]
// 00429681  6a01                 push 1
// 00429683  51                   push ecx
// 00429684  ffd2                 call edx
// 00429686  83c408               add esp, 8
// 00429689  894604               mov dword ptr [esi + 4], eax
// 0042968c  56                   push esi
// 0042968d  c70600000000         mov dword ptr [esi], 0
// 00429693  c7460800000000       mov dword ptr [esi + 8], 0
// 0042969a  e8c3652000           call 0x62fc62
// 0042969f  83c404               add esp, 4
// 004296a2  33c0                 xor eax, eax
// 004296a4  5e                   pop esi
// 004296a5  c3                   ret 

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_4497A0(void* p, void* arg);
extern "C" void __cdecl sub_62FC62(void* p);

struct ThreadLogManager {
    void* field0;
    void* field4;
    void* field8;
};

void* __cdecl ThreadLogManager_op(void* arg0, void* arg1)
{
    if (arg1 == 0) {
        void* mem = sub_62FEF6(0xc);
        sub_4497A0(mem, arg0);
        return mem;
    }
    ThreadLogManager* p = (ThreadLogManager*)arg1;
    if (p->field0 != 0) {
        void* (*fn)(void*, int) = (void* (*)(void*, int))p->field0;
        p->field4 = fn(p->field4, 1);
    }
    p->field0 = 0;
    p->field8 = 0;
    sub_62FC62(p);
    return 0;
}
