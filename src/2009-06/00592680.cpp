// from server: 100% by auto
// roc 2009-06 00592680  unit: seg_00590000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592680
//
// 00592680  56                   push esi
// 00592681  8b742408             mov esi, dword ptr [esp + 8]
// 00592685  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0059268b  c700c0255900         mov dword ptr [eax], 0x5925c0
// 00592691  c6401000             mov byte ptr [eax + 0x10], 0
// 00592695  c6401100             mov byte ptr [eax + 0x11], 0
// 00592699  c6401401             mov byte ptr [eax + 0x14], 1
// 0059269d  8b06                 mov eax, dword ptr [esi]
// 0059269f  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005926a2  56                   push esi
// 005926a3  ffd1                 call ecx
// 005926a5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 005926ab  8b02                 mov eax, dword ptr [edx]
// 005926ad  56                   push esi
// 005926ae  ffd0                 call eax
// 005926b0  83c408               add esp, 8
// 005926b3  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 005926bd  5e                   pop esi
// 005926be  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
