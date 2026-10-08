// from server: 100% by auto
// roc 2007-08 007232d0  unit: CXTIconHandle  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007232d0
//
// 007232d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007232d4  85c9                 test ecx, ecx
// 007232d6  7503                 jne 0x7232db
// 007232d8  33c0                 xor eax, eax
// 007232da  c3                   ret 
// 007232db  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007232df  8b442404             mov eax, dword ptr [esp + 4]
// 007232e3  e948fdffff           jmp 0x723030
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
