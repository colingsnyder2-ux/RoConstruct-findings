// roc 2007-03 004f6780  unit: seg_004f0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6780
//
// 004f6780  53                   push ebx
// 004f6781  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004f6785  56                   push esi
// 004f6786  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f678a  85f6                 test esi, esi
// 004f678c  57                   push edi
// 004f678d  8b7b18               mov edi, dword ptr [ebx + 0x18]
// 004f6790  7e1b                 jle 0x4f67ad
// 004f6792  3b7704               cmp esi, dword ptr [edi + 4]
// 004f6795  7e11                 jle 0x4f67a8
// 004f6797  2b7704               sub esi, dword ptr [edi + 4]
// 004f679a  53                   push ebx
// 004f679b  e890ffffff           call 0x4f6730
// 004f67a0  83c404               add esp, 4
// 004f67a3  3b7704               cmp esi, dword ptr [edi + 4]
// 004f67a6  7fef                 jg 0x4f6797
// 004f67a8  0137                 add dword ptr [edi], esi
// 004f67aa  297704               sub dword ptr [edi + 4], esi
// 004f67ad  5f                   pop edi
// 004f67ae  5e                   pop esi
// 004f67af  5b                   pop ebx
// 004f67b0  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _skip_input_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
