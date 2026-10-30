// from server: 100% by auto
// roc 2010-06 00730030  unit: lua_exception  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730030
//
// 00730030  8b4628               mov eax, dword ptr [esi + 0x28]
// 00730033  894614               mov dword ptr [esi + 0x14], eax
// 00730036  8b00                 mov eax, dword ptr [eax]
// 00730038  50                   push eax
// 00730039  56                   push esi
// 0073003a  89460c               mov dword ptr [esi + 0xc], eax
// 0073003d  e89ee00400           call 0x77e0e0
// 00730042  8b460c               mov eax, dword ptr [esi + 0xc]
// 00730045  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00730049  50                   push eax
// 0073004a  51                   push ecx
// 0073004b  56                   push esi
// 0073004c  e8dff7ffff           call 0x72f830
// 00730051  668b5636             mov dx, word ptr [esi + 0x36]
// 00730055  83c414               add esp, 0x14
// 00730058  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 0073005f  66895634             mov word ptr [esi + 0x34], dx
// 00730063  c6463901             mov byte ptr [esi + 0x39], 1
// 00730067  7e2f                 jle 0x730098
// 00730069  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0073006c  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 0073006f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00730074  f7e9                 imul ecx
// 00730076  c1fa02               sar edx, 2
// 00730079  8bc2                 mov eax, edx
// 0073007b  c1e81f               shr eax, 0x1f
// 0073007e  8d4c0201             lea ecx, [edx + eax + 1]
// 00730082  81f9204e0000         cmp ecx, 0x4e20
// 00730088  7d0e                 jge 0x730098
// 0073008a  68204e0000           push 0x4e20
// 0073008f  56                   push esi
// 00730090  e87bfaffff           call 0x72fb10
// 00730095  83c408               add esp, 8
// 00730098  33c0                 xor eax, eax
// 0073009a  894674               mov dword ptr [esi + 0x74], eax
// 0073009d  894670               mov dword ptr [esi + 0x70], eax
// 007300a0  c3                   ret 
// library lua-5.1.4/ldo.c (function _resetstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
