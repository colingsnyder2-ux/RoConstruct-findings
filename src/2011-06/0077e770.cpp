// roc 2011-06 0077e770  unit: lua_exception  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e770
//
// 0077e770  8b4628               mov eax, dword ptr [esi + 0x28]
// 0077e773  894614               mov dword ptr [esi + 0x14], eax
// 0077e776  8b00                 mov eax, dword ptr [eax]
// 0077e778  50                   push eax
// 0077e779  56                   push esi
// 0077e77a  89460c               mov dword ptr [esi + 0xc], eax
// 0077e77d  e89ebd0500           call 0x7da520
// 0077e782  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077e785  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077e789  50                   push eax
// 0077e78a  51                   push ecx
// 0077e78b  56                   push esi
// 0077e78c  e8eff7ffff           call 0x77df80
// 0077e791  668b5636             mov dx, word ptr [esi + 0x36]
// 0077e795  83c414               add esp, 0x14
// 0077e798  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 0077e79f  66895634             mov word ptr [esi + 0x34], dx
// 0077e7a3  c6463901             mov byte ptr [esi + 0x39], 1
// 0077e7a7  7e2f                 jle 0x77e7d8
// 0077e7a9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077e7ac  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 0077e7af  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0077e7b4  f7e9                 imul ecx
// 0077e7b6  c1fa02               sar edx, 2
// 0077e7b9  8bc2                 mov eax, edx
// 0077e7bb  c1e81f               shr eax, 0x1f
// 0077e7be  8d4c0201             lea ecx, [edx + eax + 1]
// 0077e7c2  81f9204e0000         cmp ecx, 0x4e20
// 0077e7c8  7d0e                 jge 0x77e7d8
// 0077e7ca  68204e0000           push 0x4e20
// 0077e7cf  56                   push esi
// 0077e7d0  e87bfaffff           call 0x77e250
// 0077e7d5  83c408               add esp, 8
// 0077e7d8  33c0                 xor eax, eax
// 0077e7da  894674               mov dword ptr [esi + 0x74], eax
// 0077e7dd  894670               mov dword ptr [esi + 0x70], eax
// 0077e7e0  c3                   ret 
// library lua-5.1.4/ldo.c (function _resetstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
