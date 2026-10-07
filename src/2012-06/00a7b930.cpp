// roc 2012-06 00a7b930  unit: CXTIconHandle  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7b930
//
// 00a7b930  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a7b934  85c9                 test ecx, ecx
// 00a7b936  7503                 jne 0xa7b93b
// 00a7b938  33c0                 xor eax, eax
// 00a7b93a  c3                   ret 
// 00a7b93b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a7b93f  8b442404             mov eax, dword ptr [esp + 4]
// 00a7b943  e908fdffff           jmp 0xa7b650
// library zlib-1.2.3/crc32.c (function _crc32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 crc32.c
