// roc 2007-08 00613b90  unit: seg_00610000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613b90
//
// 00613b90  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00613b93  50                   push eax
// 00613b94  52                   push edx
// 00613b95  e8564e0100           call 0x6289f0
// 00613b9a  83c9ff               or ecx, 0xffffffff
// 00613b9d  83c408               add esp, 8
// 00613ba0  894e10               mov dword ptr [esi + 0x10], ecx
// 00613ba3  894e14               mov dword ptr [esi + 0x14], ecx
// 00613ba6  c70604000000         mov dword ptr [esi], 4
// 00613bac  894608               mov dword ptr [esi + 8], eax
// 00613baf  c3                   ret 
// library lua-5.1.4/lparser.c (function _codestring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
