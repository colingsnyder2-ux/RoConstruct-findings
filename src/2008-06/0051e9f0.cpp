// from server: 100% by colin
// roc 2008-06 0051e9f0  unit: seg_00510000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e9f0
//
// 0051e9f0  8b442404             mov eax, dword ptr [esp + 4]
// 0051e9f4  8b08                 mov ecx, dword ptr [eax]
// 0051e9f6  81ecc8000000         sub esp, 0xc8
// 0051e9fc  8d1424               lea edx, [esp]
// 0051e9ff  52                   push edx
// 0051ea00  50                   push eax
// 0051ea01  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0051ea04  ffd0                 call eax
// 0051ea06  83c408               add esp, 8
// 0051ea09  8d0c24               lea ecx, [esp]
// 0051ea0c  51                   push ecx
// 0051ea0d  68b47a8200           push 0x827ab4
// 0051ea12  ff1558278000         call dword ptr [0x802758]
// 0051ea18  83c040               add eax, 0x40
// 0051ea1b  50                   push eax
// 0051ea1c  ff151c288000         call dword ptr [0x80281c]
// 0051ea22  81c4d4000000         add esp, 0xd4
// 0051ea28  c3                   ret 
// library g3d-6.09-ijg-dll/jerror.c (function _output_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jerror.c
