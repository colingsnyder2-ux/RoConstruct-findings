// from server: 91% by colin
// roc 2007-08 00571aa0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571aa0
//
// 00571aa0  837c240800           cmp dword ptr [esp + 8], 0
// 00571aa5  56                   push esi
// 00571aa6  751b                 jne 0x571ac3
// 00571aa8  6a0c                 push 0xc
// 00571aaa  e847e40b00           call 0x62fef6
// 00571aaf  8bf0                 mov esi, eax
// 00571ab1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00571ab5  50                   push eax
// 00571ab6  56                   push esi
// 00571ab7  e894f7ffff           call 0x571250
// 00571abc  83c40c               add esp, 0xc
// 00571abf  8bc6                 mov eax, esi
// 00571ac1  5e                   pop esi
// 00571ac2  c3                   ret 
// 00571ac3  8b742408             mov esi, dword ptr [esp + 8]
// 00571ac7  833e00               cmp dword ptr [esi], 0
// 00571aca  7410                 je 0x571adc
// 00571acc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00571acf  8b16                 mov edx, dword ptr [esi]
// 00571ad1  6a01                 push 1
// 00571ad3  51                   push ecx
// 00571ad4  ffd2                 call edx
// 00571ad6  83c408               add esp, 8
// 00571ad9  894604               mov dword ptr [esi + 4], eax
// 00571adc  56                   push esi
// 00571add  c70600000000         mov dword ptr [esi], 0
// 00571ae3  c7460800000000       mov dword ptr [esi + 8], 0
// 00571aea  e873e10b00           call 0x62fc62
// 00571aef  83c404               add esp, 4
// 00571af2  33c0                 xor eax, eax
// 00571af4  5e                   pop esi
// 00571af5  c3                   ret 

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct Udata {
    void* field0;
    void* field4;
    void* field8;
};

void __cdecl sub_571250(void*, void*);
void __cdecl sub_62fc62(void*);

void* __cdecl func_571aa0(Udata* b, int a);

void* __cdecl func_571aa0(Udata* b, int a)
{
    if (a == 0) {
        Udata* p = (Udata*)operator_new(0xc);
        sub_571250(p, b);
        return p;
    } else {
        Udata* u = b;
        if (u->field0 != 0) {
            void* (*fn)(void*, int) = (void* (*)(void*, int))u->field0;
            u->field4 = fn(u->field4, 1);
        }
        u->field0 = 0;
        u->field8 = 0;
        sub_62fc62(u);
        return 0;
    }
}
