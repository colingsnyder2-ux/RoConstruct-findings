// roc 2007-03 00725820  unit: seg_00720000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725820
//
// 00725820  8b542404             mov edx, dword ptr [esp + 4]
// 00725824  8d8294000000         lea eax, [edx + 0x94]
// 0072582a  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 00725830  8d827c0a0000         lea eax, [edx + 0xa7c]
// 00725836  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 0072583c  33c0                 xor eax, eax
// 0072583e  8d8a88090000         lea ecx, [edx + 0x988]
// 00725844  c782200b000014508b00 mov dword ptr [edx + 0xb20], 0x8b5014
// 0072584e  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 00725854  c7822c0b000028508b00 mov dword ptr [edx + 0xb2c], 0x8b5028
// 0072585e  c782380b00003c508b00 mov dword ptr [edx + 0xb38], 0x8b503c
// 00725868  668982b8160000       mov word ptr [edx + 0x16b8], ax
// 0072586f  8982bc160000         mov dword ptr [edx + 0x16bc], eax
// 00725875  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 0072587f  e93cedffff           jmp 0x7245c0
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
