// roc 2011-06 00573f10  unit: seg_00570000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573f10
//
// 00573f10  8b542404             mov edx, dword ptr [esp + 4]
// 00573f14  8d8294000000         lea eax, [edx + 0x94]
// 00573f1a  8d8a88090000         lea ecx, [edx + 0x988]
// 00573f20  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 00573f26  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 00573f2c  33c9                 xor ecx, ecx
// 00573f2e  8d827c0a0000         lea eax, [edx + 0xa7c]
// 00573f34  c782200b0000ec37c300 mov dword ptr [edx + 0xb20], 0xc337ec
// 00573f3e  c7822c0b00000038c300 mov dword ptr [edx + 0xb2c], 0xc33800
// 00573f48  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 00573f4e  c782380b00001438c300 mov dword ptr [edx + 0xb38], 0xc33814
// 00573f58  66898ab8160000       mov word ptr [edx + 0x16b8], cx
// 00573f5f  898abc160000         mov dword ptr [edx + 0x16bc], ecx
// 00573f65  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 00573f6f  e99cedffff           jmp 0x572d10
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
