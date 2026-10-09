// from server: 42% by colin
// roc 2007-08 00624660  unit: RBX::ArrowButton  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00624660
//
// 00624660  6aff                 push -1
// 00624662  68c8cf7500           push 0x75cfc8
// 00624667  64a100000000         mov eax, dword ptr fs:[0]
// 0062466d  50                   push eax
// 0062466e  64892500000000       mov dword ptr fs:[0], esp
// 00624675  51                   push ecx
// 00624676  33c0                 xor eax, eax
// 00624678  56                   push esi
// 00624679  8bf1                 mov esi, ecx
// 0062467b  89742404             mov dword ptr [esp + 4], esi
// 0062467f  894604               mov dword ptr [esi + 4], eax
// 00624682  894608               mov dword ptr [esi + 8], eax
// 00624685  89460c               mov dword ptr [esi + 0xc], eax
// 00624688  8d4e10               lea ecx, [esi + 0x10]
// 0062468b  89442410             mov dword ptr [esp + 0x10], eax
// 0062468f  ff15a4e67700         call dword ptr [0x77e6a4]
// 00624695  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00624699  8bc6                 mov eax, esi
// 0062469b  5e                   pop esi
// 0062469c  64890d00000000       mov dword ptr fs:[0], ecx
// 006246a3  83c410               add esp, 0x10
// 006246a6  c3                   ret 

struct ArrowButton {
    int field0;
    int field4;
    int field8;
    int fieldC;
    char string10[0x10];
    ArrowButton();
};

extern "C" void __stdcall basic_string_ctor(void*);

ArrowButton::ArrowButton()
{
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    basic_string_ctor(&string10[0]);
}
