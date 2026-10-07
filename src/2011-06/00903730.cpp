// roc 2011-06 00903730  unit: CXTIconHandle  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903730
//
// 00903730  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00903734  85c9                 test ecx, ecx
// 00903736  7503                 jne 0x90373b
// 00903738  33c0                 xor eax, eax
// 0090373a  c3                   ret 
// 0090373b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0090373f  8b442404             mov eax, dword ptr [esp + 4]
// 00903743  e908fdffff           jmp 0x903450
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
