// roc 2010-06 007909c0  unit: RBX::GroupDragTool  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007909c0
//
// 007909c0  8b442408             mov eax, dword ptr [esp + 8]
// 007909c4  83f80e               cmp eax, 0xe
// 007909c7  7766                 ja 0x790a2f
// 007909c9  0fb680580a7900       movzx eax, byte ptr [eax + 0x790a58]
// 007909d0  ff2485440a7900       jmp dword ptr [eax*4 + 0x790a44]
// 007909d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007909db  8b542404             mov edx, dword ptr [esp + 4]
// 007909df  51                   push ecx
// 007909e0  52                   push edx
// 007909e1  e8aafbffff           call 0x790590
// 007909e6  83c408               add esp, 8
// 007909e9  c3                   ret 
// 007909ea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007909ee  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007909f2  e939fcffff           jmp 0x790630
// 007909f7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007909fb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007909ff  50                   push eax
// 00790a00  51                   push ecx
// 00790a01  e86af7ffff           call 0x790170
// 00790a06  83c408               add esp, 8
// 00790a09  c3                   ret 
// 00790a0a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00790a0e  833805               cmp dword ptr [eax], 5
// 00790a11  750d                 jne 0x790a20
// 00790a13  83c9ff               or ecx, 0xffffffff
// 00790a16  394810               cmp dword ptr [eax + 0x10], ecx
// 00790a19  7505                 jne 0x790a20
// 00790a1b  394814               cmp dword ptr [eax + 0x14], ecx
// 00790a1e  7421                 je 0x790a41
// 00790a20  8b542404             mov edx, dword ptr [esp + 4]
// 00790a24  50                   push eax
// 00790a25  52                   push edx
// 00790a26  e835f8ffff           call 0x790260
// 00790a2b  83c408               add esp, 8
// 00790a2e  c3                   ret 
// 00790a2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00790a33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00790a37  50                   push eax
// 00790a38  51                   push ecx
// 00790a39  e822f8ffff           call 0x790260
// 00790a3e  83c408               add esp, 8
// 00790a41  c3                   ret 
// 00790a42  8bff                 mov edi, edi
// 00790a44  0a0a                 or cl, byte ptr [edx]
// 00790a46  7900                 jns 0x790a48
// 00790a48  f7097900d709         test dword ptr [ecx], 0x9d70079
// 00790a4e  7900                 jns 0x790a50
// 00790a50  ea0979002f0a79       ljmp 0x790a:0x2f007909
// 00790a57  0000                 add byte ptr [eax], al
// 00790a59  0000                 add byte ptr [eax], al
// 00790a5b  0000                 add byte ptr [eax], al
// 00790a5d  0001                 add byte ptr [ecx], al
// 00790a5f  0404                 add al, 4
// 00790a61  0404                 add al, 4
// 00790a63  0404                 add al, 4
// 00790a65  0203                 add al, byte ptr [ebx]
// library lua-5.1.4/lcode.c (function _luaK_infix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
