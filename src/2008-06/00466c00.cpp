// from server: 48% by atomic.potato
// roc 2008-06 00466c00  unit: CSettingsExplorer  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466c00
//
// 00466c00  6aff                 push -1
// 00466c02  6868917d00           push 0x7d9168
// 00466c07  64a100000000         mov eax, dword ptr fs:[0]
// 00466c0d  50                   push eax
// 00466c0e  64892500000000       mov dword ptr fs:[0], esp
// 00466c15  83ec08               sub esp, 8
// 00466c18  57                   push edi
// 00466c19  6aff                 push -1
// 00466c1b  6a40                 push 0x40
// 00466c1d  688f000000           push 0x8f
// 00466c22  8bf9                 mov edi, ecx
// 00466c24  e837a52300           call 0x6a1160
// 00466c29  8d442404             lea eax, [esp + 4]
// 00466c2d  50                   push eax
// 00466c2e  e8bd241000           call 0x5690f0
// 00466c33  83c404               add esp, 4
// 00466c36  8b08                 mov ecx, dword ptr [eax]
// 00466c38  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00466c40  e88b181000           call 0x5684d0
// 00466c45  8b442408             mov eax, dword ptr [esp + 8]
// 00466c49  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00466c51  85c0                 test eax, eax
// 00466c53  742e                 je 0x466c83
// 00466c55  56                   push esi
// 00466c56  8bf0                 mov esi, eax
// 00466c58  83c004               add eax, 4
// 00466c5b  83c9ff               or ecx, 0xffffffff
// 00466c5e  f00fc108             lock xadd dword ptr [eax], ecx
// 00466c62  751e                 jne 0x466c82
// 00466c64  8b16                 mov edx, dword ptr [esi]
// 00466c66  8b4204               mov eax, dword ptr [edx + 4]
// 00466c69  8bce                 mov ecx, esi
// 00466c6b  ffd0                 call eax
// 00466c6d  8d4e08               lea ecx, [esi + 8]
// 00466c70  83caff               or edx, 0xffffffff
// 00466c73  f00fc111             lock xadd dword ptr [ecx], edx
// 00466c77  7509                 jne 0x466c82
// 00466c79  8b06                 mov eax, dword ptr [esi]
// 00466c7b  8b5008               mov edx, dword ptr [eax + 8]
// 00466c7e  8bce                 mov ecx, esi
// 00466c80  ffd2                 call edx
// 00466c82  5e                   pop esi
// 00466c83  6a02                 push 2
// 00466c85  8bcf                 mov ecx, edi
// 00466c87  e80aa82300           call 0x6a1496
// 00466c8c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00466c90  5f                   pop edi
// 00466c91  64890d00000000       mov dword ptr fs:[0], ecx
// 00466c98  83c414               add esp, 0x14
// 00466c9b  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long ref1;
    volatile long ref2;
};

struct CSettingsExplorer {
    void func();
};

extern "C" void* __cdecl sub_6A1160(int, int, int);
extern "C" void* __cdecl sub_5690F0(void*);
extern "C" void __cdecl sub_5684D0(void*);
extern "C" void __cdecl sub_6A1496(void*, int);

void CSettingsExplorer::func()
{
    void* p = sub_6A1160(0x8f, 0x40, -1);
    void* q = sub_5690F0(&p);
    void* obj = *(void**)q;
    sub_5684D0(obj);
    void* r = *(void**)((char*)&p + 4);
    if (r != 0) {
        RefCounted* rc = (RefCounted*)r;
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            rc->unknown1();
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                rc->unknown2();
            }
        }
    }
    sub_6A1496(this, 2);
}
