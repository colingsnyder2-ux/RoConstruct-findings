// from server: 100% by tester
// roc 2008-06 0060ac60  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ac60
//
// 0060ac60  56                   push esi
// 0060ac61  8d442408             lea eax, [esp + 8]
// 0060ac65  8bf1                 mov esi, ecx
// 0060ac67  50                   push eax
// 0060ac68  c70600000000         mov dword ptr [esi], 0
// 0060ac6e  e87df6ffff           call 0x60a2f0
// 0060ac73  83c404               add esp, 4
// 0060ac76  84c0                 test al, al
// 0060ac78  752e                 jne 0x60aca8
// 0060ac7a  8d4608               lea eax, [esi + 8]
// 0060ac7d  85c0                 test eax, eax
// 0060ac7f  741b                 je 0x60ac9c
// 0060ac81  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ac85  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0060ac89  8908                 mov dword ptr [eax], ecx
// 0060ac8b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060ac8f  895004               mov dword ptr [eax + 4], edx
// 0060ac92  8b542414             mov edx, dword ptr [esp + 0x14]
// 0060ac96  894808               mov dword ptr [eax + 8], ecx
// 0060ac99  89500c               mov dword ptr [eax + 0xc], edx
// 0060ac9c  c706502f8400         mov dword ptr [esi], 0x842f50
// 0060aca2  8bc6                 mov eax, esi
// 0060aca4  5e                   pop esi
// 0060aca5  c21400               ret 0x14
// 0060aca8  c70600000000         mov dword ptr [esi], 0
// 0060acae  8bc6                 mov eax, esi
// 0060acb0  5e                   pop esi
// 0060acb1  c21400               ret 0x14

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
