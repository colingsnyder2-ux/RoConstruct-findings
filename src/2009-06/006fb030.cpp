// from server: 100% by auto
// roc 2009-06 006fb030  unit: RBX::GroupDragTool  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fb030
//
// 006fb030  8b442408             mov eax, dword ptr [esp + 8]
// 006fb034  83f80e               cmp eax, 0xe
// 006fb037  7766                 ja 0x6fb09f
// 006fb039  0fb680c8b06f00       movzx eax, byte ptr [eax + 0x6fb0c8]
// 006fb040  ff2485b4b06f00       jmp dword ptr [eax*4 + 0x6fb0b4]
// 006fb047  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fb04b  8b542404             mov edx, dword ptr [esp + 4]
// 006fb04f  51                   push ecx
// 006fb050  52                   push edx
// 006fb051  e8aafbffff           call 0x6fac00
// 006fb056  83c408               add esp, 8
// 006fb059  c3                   ret 
// 006fb05a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fb05e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fb062  e939fcffff           jmp 0x6faca0
// 006fb067  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fb06b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fb06f  50                   push eax
// 006fb070  51                   push ecx
// 006fb071  e86af7ffff           call 0x6fa7e0
// 006fb076  83c408               add esp, 8
// 006fb079  c3                   ret 
// 006fb07a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fb07e  833805               cmp dword ptr [eax], 5
// 006fb081  750d                 jne 0x6fb090
// 006fb083  83c9ff               or ecx, 0xffffffff
// 006fb086  394810               cmp dword ptr [eax + 0x10], ecx
// 006fb089  7505                 jne 0x6fb090
// 006fb08b  394814               cmp dword ptr [eax + 0x14], ecx
// 006fb08e  7421                 je 0x6fb0b1
// 006fb090  8b542404             mov edx, dword ptr [esp + 4]
// 006fb094  50                   push eax
// 006fb095  52                   push edx
// 006fb096  e835f8ffff           call 0x6fa8d0
// 006fb09b  83c408               add esp, 8
// 006fb09e  c3                   ret 
// 006fb09f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fb0a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fb0a7  50                   push eax
// 006fb0a8  51                   push ecx
// 006fb0a9  e822f8ffff           call 0x6fa8d0
// 006fb0ae  83c408               add esp, 8
// 006fb0b1  c3                   ret 
// 006fb0b2  8bff                 mov edi, edi
// 006fb0b4  7ab0                 jp 0x6fb066
// 006fb0b6  6f                   outsd dx, dword ptr [esi]
// 006fb0b7  0067b0               add byte ptr [edi - 0x50], ah
// 006fb0ba  6f                   outsd dx, dword ptr [esi]
// 006fb0bb  0047b0               add byte ptr [edi - 0x50], al
// 006fb0be  6f                   outsd dx, dword ptr [esi]
// 006fb0bf  005ab0               add byte ptr [edx - 0x50], bl
// 006fb0c2  6f                   outsd dx, dword ptr [esi]
// 006fb0c3  009fb06f0000         add byte ptr [edi + 0x6fb0], bl
// 006fb0c9  0000                 add byte ptr [eax], al
// 006fb0cb  0000                 add byte ptr [eax], al
// 006fb0cd  0001                 add byte ptr [ecx], al
// 006fb0cf  0404                 add al, 4
// 006fb0d1  0404                 add al, 4
// 006fb0d3  0404                 add al, 4
// 006fb0d5  0203                 add al, byte ptr [ebx]
// library lua-5.1.4/lcode.c (function _luaK_infix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
