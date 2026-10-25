// from server: 100% by tester
// roc 2008-06 005a2e30  unit: RBX::Workspace  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2e30
//
// 005a2e30  56                   push esi
// 005a2e31  8d442408             lea eax, [esp + 8]
// 005a2e35  8bf1                 mov esi, ecx
// 005a2e37  50                   push eax
// 005a2e38  c70600000000         mov dword ptr [esi], 0
// 005a2e3e  e8ad740600           call 0x60a2f0
// 005a2e43  83c404               add esp, 4
// 005a2e46  84c0                 test al, al
// 005a2e48  752e                 jne 0x5a2e78
// 005a2e4a  8d4608               lea eax, [esi + 8]
// 005a2e4d  85c0                 test eax, eax
// 005a2e4f  741b                 je 0x5a2e6c
// 005a2e51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a2e55  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a2e59  8908                 mov dword ptr [eax], ecx
// 005a2e5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a2e5f  895004               mov dword ptr [eax + 4], edx
// 005a2e62  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a2e66  894808               mov dword ptr [eax + 8], ecx
// 005a2e69  89500c               mov dword ptr [eax + 0xc], edx
// 005a2e6c  c706e0388300         mov dword ptr [esi], 0x8338e0
// 005a2e72  8bc6                 mov eax, esi
// 005a2e74  5e                   pop esi
// 005a2e75  c21400               ret 0x14
// 005a2e78  c70600000000         mov dword ptr [esi], 0
// 005a2e7e  8bc6                 mov eax, esi
// 005a2e80  5e                   pop esi
// 005a2e81  c21400               ret 0x14

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
