// from server: 100% by auto
// roc 2010-06 0057d420  unit: seg_00570000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d420
//
// 0057d420  8b542404             mov edx, dword ptr [esp + 4]
// 0057d424  8d8294000000         lea eax, [edx + 0x94]
// 0057d42a  8d8a88090000         lea ecx, [edx + 0x988]
// 0057d430  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 0057d436  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 0057d43c  33c9                 xor ecx, ecx
// 0057d43e  8d827c0a0000         lea eax, [edx + 0xa7c]
// 0057d444  c782200b000084b9b900 mov dword ptr [edx + 0xb20], 0xb9b984
// 0057d44e  c7822c0b000098b9b900 mov dword ptr [edx + 0xb2c], 0xb9b998
// 0057d458  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 0057d45e  c782380b0000acb9b900 mov dword ptr [edx + 0xb38], 0xb9b9ac
// 0057d468  66898ab8160000       mov word ptr [edx + 0x16b8], cx
// 0057d46f  898abc160000         mov dword ptr [edx + 0x16bc], ecx
// 0057d475  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 0057d47f  e99cedffff           jmp 0x57c220
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
