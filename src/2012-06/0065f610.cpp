// roc 2012-06 0065f610  unit: seg_00650000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f610
//
// 0065f610  8b542404             mov edx, dword ptr [esp + 4]
// 0065f614  8d8294000000         lea eax, [edx + 0x94]
// 0065f61a  8d8a88090000         lea ecx, [edx + 0x988]
// 0065f620  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 0065f626  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 0065f62c  33c9                 xor ecx, ecx
// 0065f62e  8d827c0a0000         lea eax, [edx + 0xa7c]
// 0065f634  c782200b00003068d900 mov dword ptr [edx + 0xb20], 0xd96830
// 0065f63e  c7822c0b00004468d900 mov dword ptr [edx + 0xb2c], 0xd96844
// 0065f648  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 0065f64e  c782380b00005868d900 mov dword ptr [edx + 0xb38], 0xd96858
// 0065f658  66898ab8160000       mov word ptr [edx + 0x16b8], cx
// 0065f65f  898abc160000         mov dword ptr [edx + 0x16bc], ecx
// 0065f665  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 0065f66f  e99cedffff           jmp 0x65e410
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
