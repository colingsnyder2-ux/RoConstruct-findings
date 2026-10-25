// from server: 100% by tester
// roc 2008-06 005a2f50  unit: RBX::Workspace  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2f50
//
// 005a2f50  56                   push esi
// 005a2f51  8d442408             lea eax, [esp + 8]
// 005a2f55  8bf1                 mov esi, ecx
// 005a2f57  50                   push eax
// 005a2f58  c70600000000         mov dword ptr [esi], 0
// 005a2f5e  e88d730600           call 0x60a2f0
// 005a2f63  83c404               add esp, 4
// 005a2f66  84c0                 test al, al
// 005a2f68  752e                 jne 0x5a2f98
// 005a2f6a  8d4608               lea eax, [esi + 8]
// 005a2f6d  85c0                 test eax, eax
// 005a2f6f  741b                 je 0x5a2f8c
// 005a2f71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a2f75  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a2f79  8908                 mov dword ptr [eax], ecx
// 005a2f7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a2f7f  895004               mov dword ptr [eax + 4], edx
// 005a2f82  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a2f86  894808               mov dword ptr [eax + 8], ecx
// 005a2f89  89500c               mov dword ptr [eax + 0xc], edx
// 005a2f8c  c706f8388300         mov dword ptr [esi], 0x8338f8
// 005a2f92  8bc6                 mov eax, esi
// 005a2f94  5e                   pop esi
// 005a2f95  c21400               ret 0x14
// 005a2f98  c70600000000         mov dword ptr [esi], 0
// 005a2f9e  8bc6                 mov eax, esi
// 005a2fa0  5e                   pop esi
// 005a2fa1  c21400               ret 0x14

struct Data {
    unsigned long a, b, c, d;
};

struct Argument {
    Data data;
    unsigned long extra;
};

extern bool __cdecl func_0060a2f0();
extern unsigned char tag;

struct S {
    const void *type;
    unsigned long unused;
    Data data;

    S(Argument value);
};

S::S(Argument value)
{
    type = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument *)>(
            &func_0060a2f0)(&value)) {
        Data *destination = &data;
        if (destination)
            *destination = value.data;
        type = &tag;
    } else {
        type = 0;
    }
}
