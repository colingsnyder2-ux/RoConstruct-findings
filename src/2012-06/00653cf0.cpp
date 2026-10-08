// from server: 100% by auto
// roc 2012-06 00653cf0  unit: seg_00650000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653cf0
//
// 00653cf0  56                   push esi
// 00653cf1  8b742408             mov esi, dword ptr [esp + 8]
// 00653cf5  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00653cfb  c700303c6500         mov dword ptr [eax], 0x653c30
// 00653d01  c6401000             mov byte ptr [eax + 0x10], 0
// 00653d05  c6401100             mov byte ptr [eax + 0x11], 0
// 00653d09  c6401401             mov byte ptr [eax + 0x14], 1
// 00653d0d  8b06                 mov eax, dword ptr [esi]
// 00653d0f  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00653d12  56                   push esi
// 00653d13  ffd1                 call ecx
// 00653d15  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00653d1b  8b02                 mov eax, dword ptr [edx]
// 00653d1d  56                   push esi
// 00653d1e  ffd0                 call eax
// 00653d20  83c408               add esp, 8
// 00653d23  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 00653d2d  5e                   pop esi
// 00653d2e  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
