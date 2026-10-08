// from server: 100% by auto
// roc 2007-08 00724540  unit: CXTIconHandle  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724540
//
// 00724540  8b542404             mov edx, dword ptr [esp + 4]
// 00724544  8d8294000000         lea eax, [edx + 0x94]
// 0072454a  8982180b0000         mov dword ptr [edx + 0xb18], eax
// 00724550  8d827c0a0000         lea eax, [edx + 0xa7c]
// 00724556  8982300b0000         mov dword ptr [edx + 0xb30], eax
// 0072455c  33c0                 xor eax, eax
// 0072455e  8d8a88090000         lea ecx, [edx + 0x988]
// 00724564  c782200b000028ab8b00 mov dword ptr [edx + 0xb20], 0x8bab28
// 0072456e  898a240b0000         mov dword ptr [edx + 0xb24], ecx
// 00724574  c7822c0b00003cab8b00 mov dword ptr [edx + 0xb2c], 0x8bab3c
// 0072457e  c782380b000050ab8b00 mov dword ptr [edx + 0xb38], 0x8bab50
// 00724588  668982b8160000       mov word ptr [edx + 0x16b8], ax
// 0072458f  8982bc160000         mov dword ptr [edx + 0x16bc], eax
// 00724595  c782b416000008000000 mov dword ptr [edx + 0x16b4], 8
// 0072459f  e94cedffff           jmp 0x7232f0
// library zlib-1.2.3/trees.c (function __tr_init)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
