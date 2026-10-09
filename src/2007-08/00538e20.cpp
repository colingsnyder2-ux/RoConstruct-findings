// from server: 100% by colin
// roc 2007-08 00538e20  unit: RBX::VScriptContext::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538e20
//
// 00538e20  83ec08               sub esp, 8
// 00538e23  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00538e27  56                   push esi
// 00538e28  8bf1                 mov esi, ecx
// 00538e2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00538e2e  8d542404             lea edx, [esp + 4]
// 00538e32  52                   push edx
// 00538e33  89442408             mov dword ptr [esp + 8], eax
// 00538e37  894c240c             mov dword ptr [esp + 0xc], ecx
// 00538e3b  e890ebf4ff           call 0x4879d0
// 00538e40  83c404               add esp, 4
// 00538e43  84c0                 test al, al
// 00538e45  752b                 jne 0x538e72
// 00538e47  6a08                 push 8
// 00538e49  c74608207d5300       mov dword ptr [esi + 8], 0x537d20
// 00538e50  c706407d5300         mov dword ptr [esi], 0x537d40
// 00538e56  e89b700f00           call 0x62fef6
// 00538e5b  83c404               add esp, 4
// 00538e5e  85c0                 test eax, eax
// 00538e60  740d                 je 0x538e6f
// 00538e62  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00538e66  8908                 mov dword ptr [eax], ecx
// 00538e68  8b542408             mov edx, dword ptr [esp + 8]
// 00538e6c  895004               mov dword ptr [eax + 4], edx
// 00538e6f  894604               mov dword ptr [esi + 4], eax
// 00538e72  5e                   pop esi
// 00538e73  83c408               add esp, 8
// 00538e76  c20800               ret 8

extern "C" char __cdecl func_004879d0(int*);
extern "C" int __cdecl func_0062fef6(int);

struct S {
    void f(int, int);
};

void S::f(int a, int b)
{
    int local[2];
    local[0] = a;
    local[1] = b;
    if (func_004879d0(local) == 0) {
        *(int*)((char*)this + 8) = 0x537d20;
        *(int*)this = 0x537d40;
        int* p = (int*)func_0062fef6(8);
        if (p != 0) {
            p[0] = local[0];
            p[1] = local[1];
        }
        *(int*)((char*)this + 4) = (int)p;
    }
}
