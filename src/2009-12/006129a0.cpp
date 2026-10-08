// roc 2009-12 006129a0  unit: seg_00610000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006129a0
//
// 006129a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006129a4  85c9                 test ecx, ecx
// 006129a6  7503                 jne 0x6129ab
// 006129a8  33c0                 xor eax, eax
// 006129aa  c3                   ret 
// 006129ab  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006129af  8b442404             mov eax, dword ptr [esp + 4]
// 006129b3  e908fdffff           jmp 0x6126c0
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
