// from server: 100% by auto
// roc 2010-06 00790260  unit: RBX::GroupDragTool  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790260
//
// 00790260  83ec20               sub esp, 0x20
// 00790263  56                   push esi
// 00790264  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00790268  8b4610               mov eax, dword ptr [esi + 0x10]
// 0079026b  57                   push edi
// 0079026c  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00790270  56                   push esi
// 00790271  57                   push edi
// 00790272  3b4614               cmp eax, dword ptr [esi + 0x14]
// 00790275  7407                 je 0x79027e
// 00790277  e874ffffff           call 0x7901f0
// 0079027c  eb05                 jmp 0x790283
// 0079027e  e85dfbffff           call 0x78fde0
// 00790283  8b06                 mov eax, dword ptr [esi]
// 00790285  8d48ff               lea ecx, [eax - 1]
// 00790288  83c408               add esp, 8
// 0079028b  83f904               cmp ecx, 4
// 0079028e  0f87a2000000         ja 0x790336
// 00790294  ff248d48037900       jmp dword ptr [ecx*4 + 0x790348]
// 0079029b  817f28ff000000       cmp dword ptr [edi + 0x28], 0xff
// 007902a2  0f8f8e000000         jg 0x790336
// 007902a8  83f801               cmp eax, 1
// 007902ab  7519                 jne 0x7902c6
// 007902ad  8b4f04               mov ecx, dword ptr [edi + 4]
// 007902b0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007902b8  c744241005000000     mov dword ptr [esp + 0x10], 5
// 007902c0  8d542418             lea edx, [esp + 0x18]
// 007902c4  eb3f                 jmp 0x790305
// 007902c6  83f805               cmp eax, 5
// 007902c9  7526                 jne 0x7902f1
// 007902cb  dd4608               fld qword ptr [esi + 8]
// 007902ce  83ec08               sub esp, 8
// 007902d1  dd1c24               fstp qword ptr [esp]
// 007902d4  57                   push edi
// 007902d5  e856f5ffff           call 0x78f830
// 007902da  83c40c               add esp, 0xc
// 007902dd  894608               mov dword ptr [esi + 8], eax
// 007902e0  5f                   pop edi
// 007902e1  c70604000000         mov dword ptr [esi], 4
// 007902e7  0d00010000           or eax, 0x100
// 007902ec  5e                   pop esi
// 007902ed  83c420               add esp, 0x20
// 007902f0  c3                   ret 
// 007902f1  33c9                 xor ecx, ecx
// 007902f3  83f802               cmp eax, 2
// 007902f6  0f94c1               sete cl
// 007902f9  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00790301  8d542408             lea edx, [esp + 8]
// 00790305  894c2408             mov dword ptr [esp + 8], ecx
// 00790309  52                   push edx
// 0079030a  8d4c240c             lea ecx, [esp + 0xc]
// 0079030e  8bc7                 mov eax, edi
// 00790310  e80bf4ffff           call 0x78f720
// 00790315  83c404               add esp, 4
// 00790318  894608               mov dword ptr [esi + 8], eax
// 0079031b  c70604000000         mov dword ptr [esi], 4
// 00790321  5f                   pop edi
// 00790322  0d00010000           or eax, 0x100
// 00790327  5e                   pop esi
// 00790328  83c420               add esp, 0x20
// 0079032b  c3                   ret 
// 0079032c  8b4608               mov eax, dword ptr [esi + 8]
// 0079032f  3dff000000           cmp eax, 0xff
// 00790334  7eeb                 jle 0x790321
// 00790336  56                   push esi
// 00790337  57                   push edi
// 00790338  e8b3feffff           call 0x7901f0
// 0079033d  83c408               add esp, 8
// 00790340  5f                   pop edi
// 00790341  5e                   pop esi
// 00790342  83c420               add esp, 0x20
// 00790345  c3                   ret 
// 00790346  8bff                 mov edi, edi
// 00790348  9b                   wait 
// 00790349  027900               add bh, byte ptr [ecx]
// 0079034c  9b                   wait 
// 0079034d  027900               add bh, byte ptr [ecx]
// 00790350  9b                   wait 
// 00790351  027900               add bh, byte ptr [ecx]
// 00790354  2c03                 sub al, 3
// 00790356  7900                 jns 0x790358
// 00790358  9b                   wait 
// 00790359  027900               add bh, byte ptr [ecx]
// library lua-5.1.4/lcode.c (function _luaK_exp2RK)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
