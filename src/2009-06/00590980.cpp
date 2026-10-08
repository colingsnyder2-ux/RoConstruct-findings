// from server: 100% by auto
// roc 2009-06 00590980  unit: seg_00590000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00590980
//
// 00590980  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00590984  85c9                 test ecx, ecx
// 00590986  7503                 jne 0x59098b
// 00590988  33c0                 xor eax, eax
// 0059098a  c3                   ret 
// 0059098b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059098f  8b442404             mov eax, dword ptr [esp + 4]
// 00590993  e908fdffff           jmp 0x5906a0
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
