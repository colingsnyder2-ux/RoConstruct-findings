// from server: 48% by colin
// roc 2007-08 00573e00  unit: RBX::PartInstance  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573e00
//
// 00573e00  83ec30               sub esp, 0x30
// 00573e03  56                   push esi
// 00573e04  8bf1                 mov esi, ecx
// 00573e06  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 00573e0c  50                   push eax
// 00573e0d  8d4c2408             lea ecx, [esp + 8]
// 00573e11  51                   push ecx
// 00573e12  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00573e16  e8e5f3efff           call 0x473200
// 00573e1b  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00573e21  8d542404             lea edx, [esp + 4]
// 00573e25  52                   push edx
// 00573e26  e845180400           call 0x5b5670
// 00573e2b  5e                   pop esi
// 00573e2c  83c430               add esp, 0x30
// 00573e2f  c20400               ret 4

struct PartInstance {
    char pad[0x154];
    int field154;
    char pad2[0x1d8 - 0x158];
    int field1d8;
    void sub_573E00(int);
};

extern "C" void __stdcall sub_473200(void*, int);
extern "C" void __stdcall sub_5B5670(int*, int*);

void PartInstance::sub_573E00(int arg) {
    char buf[0x30];
    sub_473200(buf, field154);
    sub_5B5670(&field1d8, (int*)buf);
}
