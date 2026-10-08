// from server: 100% by colin
// roc 2007-08 00505310  unit: G3D::Log  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00505310
//
// 00505310  56                   push esi
// 00505311  8bf1                 mov esi, ecx
// 00505313  e848f3ffff           call 0x504660
// 00505318  8b442408             mov eax, dword ptr [esp + 8]
// 0050531c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00505320  8b542410             mov edx, dword ptr [esp + 0x10]
// 00505324  894608               mov dword ptr [esi + 8], eax
// 00505327  0fafc1               imul eax, ecx
// 0050532a  0fafc2               imul eax, edx
// 0050532d  6a01                 push 1
// 0050532f  50                   push eax
// 00505330  894e0c               mov dword ptr [esi + 0xc], ecx
// 00505333  895610               mov dword ptr [esi + 0x10], edx
// 00505336  e835b3ffff           call 0x500670
// 0050533b  83c408               add esp, 8
// 0050533e  894604               mov dword ptr [esi + 4], eax
// 00505341  5e                   pop esi
// 00505342  c20c00               ret 0xc

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
