// roc 2008-06 007a4170  unit: CXTIconHandle  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a4170
//
// 007a4170  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007a4174  85c9                 test ecx, ecx
// 007a4176  7503                 jne 0x7a417b
// 007a4178  33c0                 xor eax, eax
// 007a417a  c3                   ret 
// 007a417b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007a417f  8b442404             mov eax, dword ptr [esp + 4]
// 007a4183  e908fdffff           jmp 0x7a3e90
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
