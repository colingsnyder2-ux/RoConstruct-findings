// roc 2007-03 007245a0  unit: seg_00720000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007245a0
//
// 007245a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007245a4  85c9                 test ecx, ecx
// 007245a6  7503                 jne 0x7245ab
// 007245a8  33c0                 xor eax, eax
// 007245aa  c3                   ret 
// 007245ab  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007245af  8b442404             mov eax, dword ptr [esp + 4]
// 007245b3  e948fdffff           jmp 0x724300
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
