// from server: 100% by tester
// roc 2008-06 0042b6d0  unit: EventHandler  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b6d0
//
// 0042b6d0  56                   push esi
// 0042b6d1  8d442408             lea eax, [esp + 8]
// 0042b6d5  8bf1                 mov esi, ecx
// 0042b6d7  50                   push eax
// 0042b6d8  c70600000000         mov dword ptr [esi], 0
// 0042b6de  e80dec1d00           call 0x60a2f0
// 0042b6e3  83c404               add esp, 4
// 0042b6e6  84c0                 test al, al
// 0042b6e8  752e                 jne 0x42b718
// 0042b6ea  8d4608               lea eax, [esi + 8]
// 0042b6ed  85c0                 test eax, eax
// 0042b6ef  741b                 je 0x42b70c
// 0042b6f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042b6f5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0042b6f9  8908                 mov dword ptr [eax], ecx
// 0042b6fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042b6ff  895004               mov dword ptr [eax + 4], edx
// 0042b702  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042b706  894808               mov dword ptr [eax + 8], ecx
// 0042b709  89500c               mov dword ptr [eax + 0xc], edx
// 0042b70c  c70610068100         mov dword ptr [esi], 0x810610
// 0042b712  8bc6                 mov eax, esi
// 0042b714  5e                   pop esi
// 0042b715  c21400               ret 0x14
// 0042b718  c70600000000         mov dword ptr [esi], 0
// 0042b71e  8bc6                 mov eax, esi
// 0042b720  5e                   pop esi
// 0042b721  c21400               ret 0x14

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
