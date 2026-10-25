// from server: 100% by tester
// roc 2008-06 005acbf0  unit: RBX::Reflection::Z::$$A6AXM::?$TSignalDesc::TSignalInstance  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acbf0
//
// 005acbf0  56                   push esi
// 005acbf1  8d442408             lea eax, [esp + 8]
// 005acbf5  8bf1                 mov esi, ecx
// 005acbf7  50                   push eax
// 005acbf8  c70600000000         mov dword ptr [esi], 0
// 005acbfe  e8edd60500           call 0x60a2f0
// 005acc03  83c404               add esp, 4
// 005acc06  84c0                 test al, al
// 005acc08  752e                 jne 0x5acc38
// 005acc0a  8d4608               lea eax, [esi + 8]
// 005acc0d  85c0                 test eax, eax
// 005acc0f  741b                 je 0x5acc2c
// 005acc11  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005acc15  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005acc19  8908                 mov dword ptr [eax], ecx
// 005acc1b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005acc1f  895004               mov dword ptr [eax + 4], edx
// 005acc22  8b542414             mov edx, dword ptr [esp + 0x14]
// 005acc26  894808               mov dword ptr [eax + 8], ecx
// 005acc29  89500c               mov dword ptr [eax + 0xc], edx
// 005acc2c  c706bc458300         mov dword ptr [esi], 0x8345bc
// 005acc32  8bc6                 mov eax, esi
// 005acc34  5e                   pop esi
// 005acc35  c21400               ret 0x14
// 005acc38  c70600000000         mov dword ptr [esi], 0
// 005acc3e  8bc6                 mov eax, esi
// 005acc40  5e                   pop esi
// 005acc41  c21400               ret 0x14

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
