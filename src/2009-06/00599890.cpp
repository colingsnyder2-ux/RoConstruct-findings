// roc 2009-06 00599890  unit: seg_00590000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599890
//
// 00599890  8b542404             mov edx, dword ptr [esp + 4]
// 00599894  8d8294000000         lea eax, [edx + 0x94]
// 0059989a  8d8a88090000         lea ecx, [edx + 0x988]
// 005998a0  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 005998a6  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 005998ac  33c9                 xor ecx, ecx
// 005998ae  8d827c0a0000         lea eax, [edx + 0xa7c]
// 005998b4  c782200b000020cb9f00 mov dword ptr [edx + 0xb20], 0x9fcb20
// 005998be  c7822c0b000034cb9f00 mov dword ptr [edx + 0xb2c], 0x9fcb34
// 005998c8  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 005998ce  c782380b000048cb9f00 mov dword ptr [edx + 0xb38], 0x9fcb48
// 005998d8  66898ab8160000       mov word ptr [edx + 0x16b8], cx
// 005998df  898abc160000         mov dword ptr [edx + 0x16bc], ecx
// 005998e5  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 005998ef  e99cedffff           jmp 0x598690
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
