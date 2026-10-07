// roc 2008-06 007a53b0  unit: CXTIconHandle  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a53b0
//
// 007a53b0  8b542404             mov edx, dword ptr [esp + 4]
// 007a53b4  8d8294000000         lea eax, [edx + 0x94]
// 007a53ba  8d8a88090000         lea ecx, [edx + 0x988]
// 007a53c0  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 007a53c6  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 007a53cc  33c9                 xor ecx, ecx
// 007a53ce  8d827c0a0000         lea eax, [edx + 0xa7c]
// 007a53d4  c782200b0000b8bd9600 mov dword ptr [edx + 0xb20], 0x96bdb8
// 007a53de  c7822c0b0000ccbd9600 mov dword ptr [edx + 0xb2c], 0x96bdcc
// 007a53e8  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 007a53ee  c782380b0000e0bd9600 mov dword ptr [edx + 0xb38], 0x96bde0
// 007a53f8  66898ab8160000       mov word ptr [edx + 0x16b8], cx
// 007a53ff  898abc160000         mov dword ptr [edx + 0x16bc], ecx
// 007a5405  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 007a540f  e97cedffff           jmp 0x7a4190
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
