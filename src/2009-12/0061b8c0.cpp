// roc 2009-12 0061b8c0  unit: seg_00610000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b8c0
//
// 0061b8c0  8b542404             mov edx, dword ptr [esp + 4]
// 0061b8c4  8d8294000000         lea eax, [edx + 0x94]
// 0061b8ca  8d8a88090000         lea ecx, [edx + 0x988]
// 0061b8d0  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 0061b8d6  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 0061b8dc  33c9                 xor ecx, ecx
// 0061b8de  8d827c0a0000         lea eax, [edx + 0xa7c]
// 0061b8e4  c782200b00007073b200 mov dword ptr [edx + 0xb20], 0xb27370
// 0061b8ee  c7822c0b00008473b200 mov dword ptr [edx + 0xb2c], 0xb27384
// 0061b8f8  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 0061b8fe  c782380b00009873b200 mov dword ptr [edx + 0xb38], 0xb27398
// 0061b908  66898ab8160000       mov word ptr [edx + 0x16b8], cx
// 0061b90f  898abc160000         mov dword ptr [edx + 0x16bc], ecx
// 0061b915  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 0061b91f  e99cedffff           jmp 0x61a6c0
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
