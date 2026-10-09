// roc 2007-03 004f9d00  unit: seg_004f0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f9d00
//
// 004f9d00  56                   push esi
// 004f9d01  8bf1                 mov esi, ecx
// 004f9d03  e848f3ffff           call 0x4f9050
// 004f9d08  8b442408             mov eax, dword ptr [esp + 8]
// 004f9d0c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f9d10  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f9d14  894608               mov dword ptr [esi + 8], eax
// 004f9d17  0fafc1               imul eax, ecx
// 004f9d1a  0fafc2               imul eax, edx
// 004f9d1d  6a01                 push 1
// 004f9d1f  50                   push eax
// 004f9d20  894e0c               mov dword ptr [esi + 0xc], ecx
// 004f9d23  895610               mov dword ptr [esi + 0x10], edx
// 004f9d26  e8b5a4ffff           call 0x4f41e0
// 004f9d2b  83c408               add esp, 8
// 004f9d2e  894604               mov dword ptr [esi + 4], eax
// 004f9d31  5e                   pop esi
// 004f9d32  c20c00               ret 0xc
// copied from an identical function in another client (function ?construct@G3D_Log@ns_ROCX000001@@QAEXHHH@Z)

namespace ns_ROCX000001 {
struct G3D_Log {
    void construct(int a, int b, int c);
    char pad0[4];
    int field4;
    int field8;
    int fieldC;
    int field10;
};

extern "C" {
    void __stdcall sub_504660();
    void* __cdecl sub_500670(int size, int flag);
}

void G3D_Log::construct(int a, int b, int c) {
    sub_504660();
    field8 = a;
    fieldC = b;
    field10 = c;
    field4 = (int)sub_500670(a * b * c, 1);
}
}
