// from server: 100% by auto
// roc 2010-06 005742c0  unit: seg_00570000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005742c0
//
// 005742c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005742c4  85c9                 test ecx, ecx
// 005742c6  7503                 jne 0x5742cb
// 005742c8  33c0                 xor eax, eax
// 005742ca  c3                   ret 
// 005742cb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005742cf  8b442404             mov eax, dword ptr [esp + 4]
// 005742d3  e908fdffff           jmp 0x573fe0
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
