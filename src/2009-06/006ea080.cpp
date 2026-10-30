// from server: 100% by auto
// roc 2009-06 006ea080  unit: RBX::PartDropTool  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ea080
//
// 006ea080  53                   push ebx
// 006ea081  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006ea085  55                   push ebp
// 006ea086  8b2b                 mov ebp, dword ptr [ebx]
// 006ea088  57                   push edi
// 006ea089  8bf8                 mov edi, eax
// 006ea08b  8b4608               mov eax, dword ptr [esi + 8]
// 006ea08e  8928                 mov dword ptr [eax], ebp
// 006ea090  8b6b04               mov ebp, dword ptr [ebx + 4]
// 006ea093  896804               mov dword ptr [eax + 4], ebp
// 006ea096  8b5b08               mov ebx, dword ptr [ebx + 8]
// 006ea099  895808               mov dword ptr [eax + 8], ebx
// 006ea09c  8b1f                 mov ebx, dword ptr [edi]
// 006ea09e  8b4608               mov eax, dword ptr [esi + 8]
// 006ea0a1  895810               mov dword ptr [eax + 0x10], ebx
// 006ea0a4  8b5f04               mov ebx, dword ptr [edi + 4]
// 006ea0a7  895814               mov dword ptr [eax + 0x14], ebx
// 006ea0aa  8b7f08               mov edi, dword ptr [edi + 8]
// 006ea0ad  897818               mov dword ptr [eax + 0x18], edi
// 006ea0b0  8b3a                 mov edi, dword ptr [edx]
// 006ea0b2  83c010               add eax, 0x10
// 006ea0b5  8b4608               mov eax, dword ptr [esi + 8]
// 006ea0b8  897820               mov dword ptr [eax + 0x20], edi
// 006ea0bb  8b7a04               mov edi, dword ptr [edx + 4]
// 006ea0be  897824               mov dword ptr [eax + 0x24], edi
// 006ea0c1  8b5208               mov edx, dword ptr [edx + 8]
// 006ea0c4  83c020               add eax, 0x20
// 006ea0c7  895008               mov dword ptr [eax + 8], edx
// 006ea0ca  8b4608               mov eax, dword ptr [esi + 8]
// 006ea0cd  8b11                 mov edx, dword ptr [ecx]
// 006ea0cf  83c030               add eax, 0x30
// 006ea0d2  8910                 mov dword ptr [eax], edx
// 006ea0d4  8b5104               mov edx, dword ptr [ecx + 4]
// 006ea0d7  895004               mov dword ptr [eax + 4], edx
// 006ea0da  8b4908               mov ecx, dword ptr [ecx + 8]
// 006ea0dd  894808               mov dword ptr [eax + 8], ecx
// 006ea0e0  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006ea0e3  2b5608               sub edx, dword ptr [esi + 8]
// 006ea0e6  5f                   pop edi
// 006ea0e7  83fa40               cmp edx, 0x40
// 006ea0ea  5d                   pop ebp
// 006ea0eb  5b                   pop ebx
// 006ea0ec  7f0b                 jg 0x6ea0f9
// 006ea0ee  6a04                 push 4
// 006ea0f0  56                   push esi
// 006ea0f1  e8ca8cfdff           call 0x6c2dc0
// 006ea0f6  83c408               add esp, 8
// 006ea0f9  83460840             add dword ptr [esi + 8], 0x40
// 006ea0fd  8b4608               mov eax, dword ptr [esi + 8]
// 006ea100  6a00                 push 0
// 006ea102  83c0c0               add eax, -0x40
// 006ea105  50                   push eax
// 006ea106  56                   push esi
// 006ea107  e88494fdff           call 0x6c3590
// 006ea10c  83c40c               add esp, 0xc
// 006ea10f  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
