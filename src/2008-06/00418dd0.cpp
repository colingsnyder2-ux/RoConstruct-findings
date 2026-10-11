// from server: 40% by atomic.potato
// roc 2008-06 00418dd0  unit: VCLuaFunction::?$CComAggObject  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00418dd0
//
// 00418dd0  6aff                 push -1
// 00418dd2  6830dd7b00           push 0x7bdd30
// 00418dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00418ddd  50                   push eax
// 00418dde  64892500000000       mov dword ptr fs:[0], esp
// 00418de5  83ec08               sub esp, 8
// 00418de8  56                   push esi
// 00418de9  57                   push edi
// 00418dea  8bf9                 mov edi, ecx
// 00418dec  897c2408             mov dword ptr [esp + 8], edi
// 00418df0  8b442430             mov eax, dword ptr [esp + 0x30]
// 00418df4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00418df8  50                   push eax
// 00418df9  83ec08               sub esp, 8
// 00418dfc  8bc4                 mov eax, esp
// 00418dfe  8908                 mov dword ptr [eax], ecx
// 00418e00  8b542438             mov edx, dword ptr [esp + 0x38]
// 00418e04  895004               mov dword ptr [eax + 4], edx
// 00418e07  8b442438             mov eax, dword ptr [esp + 0x38]
// 00418e0b  c744242402000000     mov dword ptr [esp + 0x24], 2
// 00418e13  89642418             mov dword ptr [esp + 0x18], esp
// 00418e17  85c0                 test eax, eax
// 00418e19  740c                 je 0x418e27
// 00418e1b  83c004               add eax, 4
// 00418e1e  b901000000           mov ecx, 1
// 00418e23  f00fc108             lock xadd dword ptr [eax], ecx
// 00418e27  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00418e2b  83ec08               sub esp, 8
// 00418e2e  8bc4                 mov eax, esp
// 00418e30  8910                 mov dword ptr [eax], edx
// 00418e32  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00418e36  894804               mov dword ptr [eax + 4], ecx
// 00418e39  8b442438             mov eax, dword ptr [esp + 0x38]
// 00418e3d  89642420             mov dword ptr [esp + 0x20], esp
// 00418e41  85c0                 test eax, eax
// 00418e43  740c                 je 0x418e51
// 00418e45  83c004               add eax, 4
// 00418e48  ba01000000           mov edx, 1
// 00418e4d  f00fc110             lock xadd dword ptr [eax], edx
// 00418e51  8bcf                 mov ecx, edi
// 00418e53  e8c8f3ffff           call 0x418220
// 00418e58  8d442434             lea eax, [esp + 0x34]
// 00418e5c  8d4f14               lea ecx, [edi + 0x14]
// 00418e5f  50                   push eax
// 00418e60  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00418e65  ff155c248000         call dword ptr [0x80245c]
// 00418e6b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00418e6f  c644241801           mov byte ptr [esp + 0x18], 1
// 00418e74  85c0                 test eax, eax
// 00418e76  742c                 je 0x418ea4
// 00418e78  8bf0                 mov esi, eax
// 00418e7a  83c004               add eax, 4
// 00418e7d  83c9ff               or ecx, 0xffffffff
// 00418e80  f00fc108             lock xadd dword ptr [eax], ecx
// 00418e84  751e                 jne 0x418ea4
// 00418e86  8b16                 mov edx, dword ptr [esi]
// 00418e88  8b4204               mov eax, dword ptr [edx + 4]
// 00418e8b  8bce                 mov ecx, esi
// 00418e8d  ffd0                 call eax
// 00418e8f  8d4e08               lea ecx, [esi + 8]
// 00418e92  83caff               or edx, 0xffffffff
// 00418e95  f00fc111             lock xadd dword ptr [ecx], edx
// 00418e99  7509                 jne 0x418ea4
// 00418e9b  8b06                 mov eax, dword ptr [esi]
// 00418e9d  8b5008               mov edx, dword ptr [eax + 8]
// 00418ea0  8bce                 mov ecx, esi
// 00418ea2  ffd2                 call edx
// 00418ea4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00418ea8  c644241800           mov byte ptr [esp + 0x18], 0
// 00418ead  85f6                 test esi, esi
// 00418eaf  742a                 je 0x418edb
// 00418eb1  8d4604               lea eax, [esi + 4]
// 00418eb4  83c9ff               or ecx, 0xffffffff
// 00418eb7  f00fc108             lock xadd dword ptr [eax], ecx
// 00418ebb  751e                 jne 0x418edb
// 00418ebd  8b16                 mov edx, dword ptr [esi]
// 00418ebf  8b4204               mov eax, dword ptr [edx + 4]
// 00418ec2  8bce                 mov ecx, esi
// 00418ec4  ffd0                 call eax
// 00418ec6  8d4e08               lea ecx, [esi + 8]
// 00418ec9  83caff               or edx, 0xffffffff
// 00418ecc  f00fc111             lock xadd dword ptr [ecx], edx
// 00418ed0  7509                 jne 0x418edb
// 00418ed2  8b06                 mov eax, dword ptr [esi]
// 00418ed4  8b5008               mov edx, dword ptr [eax + 8]
// 00418ed7  8bce                 mov ecx, esi
// 00418ed9  ffd2                 call edx
// 00418edb  8d4c2434             lea ecx, [esp + 0x34]
// 00418edf  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00418ee7  ff1568248000         call dword ptr [0x802468]
// 00418eed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00418ef1  8bc7                 mov eax, edi
// 00418ef3  5f                   pop edi
// 00418ef4  64890d00000000       mov dword ptr fs:[0], ecx
// 00418efb  5e                   pop esi
// 00418efc  83c414               add esp, 0x14
// 00418eff  c23000               ret 0x30

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Str {
    void* pad0;
    char pad[16];
    Str(const Str&);
    ~Str();
};

struct Obj {
    void** vptr;
    long ref;
    char pad[8];
    long ref2;
};

extern "C" void __stdcall sub_80245c(void*);
extern "C" void __stdcall sub_802468(void*);

struct S {
    char pad0[0x14];
    Str str;
    void f(Str*, Str*, Obj*, Obj*, Str*);
};

void S::f(Str* a, Str* b, Obj* c, Obj* d, Str* e) {
    if (c) _InterlockedExchangeAdd(&c->ref, 1);
    if (d) _InterlockedExchangeAdd(&d->ref, 1);
    ((void(__thiscall*)(S*))0x418220)(this);
    sub_80245c(&str);
    if (c) {
        if (_InterlockedExchangeAdd(&c->ref, -1) == 1) {
            ((void(__thiscall*)(Obj*))c->vptr[1])(c);
            if (_InterlockedExchangeAdd(&c->ref2, -1) == 1) {
                ((void(__thiscall*)(Obj*))c->vptr[2])(c);
            }
        }
    }
    if (d) {
        if (_InterlockedExchangeAdd(&d->ref, -1) == 1) {
            ((void(__thiscall*)(Obj*))d->vptr[1])(d);
            if (_InterlockedExchangeAdd(&d->ref2, -1) == 1) {
                ((void(__thiscall*)(Obj*))d->vptr[2])(d);
            }
        }
    }
    sub_802468(&str);
}
