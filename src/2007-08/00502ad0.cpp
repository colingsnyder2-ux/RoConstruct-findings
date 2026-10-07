// roc 2007-08 00502ad0  unit: G3D::Log  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502ad0
//
// 00502ad0  53                   push ebx
// 00502ad1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00502ad5  56                   push esi
// 00502ad6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00502ada  85f6                 test esi, esi
// 00502adc  57                   push edi
// 00502add  8b7b18               mov edi, dword ptr [ebx + 0x18]
// 00502ae0  7e1b                 jle 0x502afd
// 00502ae2  3b7704               cmp esi, dword ptr [edi + 4]
// 00502ae5  7e11                 jle 0x502af8
// 00502ae7  2b7704               sub esi, dword ptr [edi + 4]
// 00502aea  53                   push ebx
// 00502aeb  e890ffffff           call 0x502a80
// 00502af0  83c404               add esp, 4
// 00502af3  3b7704               cmp esi, dword ptr [edi + 4]
// 00502af6  7fef                 jg 0x502ae7
// 00502af8  0137                 add dword ptr [edi], esi
// 00502afa  297704               sub dword ptr [edi + 4], esi
// 00502afd  5f                   pop edi
// 00502afe  5e                   pop esi
// 00502aff  5b                   pop ebx
// 00502b00  c3                   ret 
// library jpeg-6b/jdatasrc.c (function _skip_input_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdatasrc.c
