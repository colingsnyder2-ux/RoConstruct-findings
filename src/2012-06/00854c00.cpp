// roc 2012-06 00854c00  unit: lua_exception  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854c00
//
// 00854c00  8b4628               mov eax, dword ptr [esi + 0x28]
// 00854c03  894614               mov dword ptr [esi + 0x14], eax
// 00854c06  8b00                 mov eax, dword ptr [eax]
// 00854c08  50                   push eax
// 00854c09  56                   push esi
// 00854c0a  89460c               mov dword ptr [esi + 0xc], eax
// 00854c0d  e82e1a0e00           call 0x936640
// 00854c12  8b460c               mov eax, dword ptr [esi + 0xc]
// 00854c15  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00854c19  50                   push eax
// 00854c1a  51                   push ecx
// 00854c1b  56                   push esi
// 00854c1c  e8eff7ffff           call 0x854410
// 00854c21  668b5636             mov dx, word ptr [esi + 0x36]
// 00854c25  83c414               add esp, 0x14
// 00854c28  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 00854c2f  66895634             mov word ptr [esi + 0x34], dx
// 00854c33  c6463901             mov byte ptr [esi + 0x39], 1
// 00854c37  7e2f                 jle 0x854c68
// 00854c39  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00854c3c  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 00854c3f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00854c44  f7e9                 imul ecx
// 00854c46  c1fa02               sar edx, 2
// 00854c49  8bc2                 mov eax, edx
// 00854c4b  c1e81f               shr eax, 0x1f
// 00854c4e  8d4c0201             lea ecx, [edx + eax + 1]
// 00854c52  81f9204e0000         cmp ecx, 0x4e20
// 00854c58  7d0e                 jge 0x854c68
// 00854c5a  68204e0000           push 0x4e20
// 00854c5f  56                   push esi
// 00854c60  e87bfaffff           call 0x8546e0
// 00854c65  83c408               add esp, 8
// 00854c68  33c0                 xor eax, eax
// 00854c6a  894674               mov dword ptr [esi + 0x74], eax
// 00854c6d  894670               mov dword ptr [esi + 0x70], eax
// 00854c70  c3                   ret 
// library lua-5.1.4/ldo.c (function _resetstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
