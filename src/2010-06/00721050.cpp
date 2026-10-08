// from server: 100% by auto
// roc 2010-06 00721050  unit: RBX::UniversalTool  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00721050
//
// 00721050  56                   push esi
// 00721051  8b742408             mov esi, dword ptr [esp + 8]
// 00721055  57                   push edi
// 00721056  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072105a  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00721060  7516                 jne 0x721078
// 00721062  8b4614               mov eax, dword ptr [esi + 0x14]
// 00721065  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00721068  750e                 jne 0x721078
// 0072106a  6888cea400           push 0xa4ce88
// 0072106f  56                   push esi
// 00721070  e82b2b0100           call 0x733ba0
// 00721075  83c408               add esp, 8
// 00721078  8bc7                 mov eax, edi
// 0072107a  8bce                 mov ecx, esi
// 0072107c  e81ffdffff           call 0x720da0
// 00721081  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00721087  7529                 jne 0x7210b2
// 00721089  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0072108c  8b5104               mov edx, dword ptr [ecx + 4]
// 0072108f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00721092  8b02                 mov eax, dword ptr [edx]
// 00721094  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 00721097  89500c               mov dword ptr [eax + 0xc], edx
// 0072109a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0072109d  ba04000000           mov edx, 4
// 007210a2  3951f8               cmp dword ptr [ecx - 8], edx
// 007210a5  7c58                 jl 0x7210ff
// 007210a7  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 007210aa  f6410503             test byte ptr [ecx + 5], 3
// 007210ae  744f                 je 0x7210ff
// 007210b0  eb3d                 jmp 0x7210ef
// 007210b2  8b4e08               mov ecx, dword ptr [esi + 8]
// 007210b5  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 007210b8  83e910               sub ecx, 0x10
// 007210bb  81ffeed8ffff         cmp edi, 0xffffd8ee
// 007210c1  8910                 mov dword ptr [eax], edx
// 007210c3  8b5104               mov edx, dword ptr [ecx + 4]
// 007210c6  895004               mov dword ptr [eax + 4], edx
// 007210c9  8b4908               mov ecx, dword ptr [ecx + 8]
// 007210cc  894808               mov dword ptr [eax + 8], ecx
// 007210cf  7d2e                 jge 0x7210ff
// 007210d1  8b4608               mov eax, dword ptr [esi + 8]
// 007210d4  ba04000000           mov edx, 4
// 007210d9  3950f8               cmp dword ptr [eax - 8], edx
// 007210dc  7c21                 jl 0x7210ff
// 007210de  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 007210e1  f6410503             test byte ptr [ecx + 5], 3
// 007210e5  7418                 je 0x7210ff
// 007210e7  8b4614               mov eax, dword ptr [esi + 0x14]
// 007210ea  8b4004               mov eax, dword ptr [eax + 4]
// 007210ed  8b00                 mov eax, dword ptr [eax]
// 007210ef  845005               test byte ptr [eax + 5], dl
// 007210f2  740b                 je 0x7210ff
// 007210f4  51                   push ecx
// 007210f5  50                   push eax
// 007210f6  56                   push esi
// 007210f7  e8549e0500           call 0x77af50
// 007210fc  83c40c               add esp, 0xc
// 007210ff  834608f0             add dword ptr [esi + 8], -0x10
// 00721103  5f                   pop edi
// 00721104  5e                   pop esi
// 00721105  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_replace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
