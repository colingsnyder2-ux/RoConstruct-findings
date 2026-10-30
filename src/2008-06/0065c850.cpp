// from server: 100% by auto
// roc 2008-06 0065c850  unit: RBX::BallBallContact  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c850
//
// 0065c850  53                   push ebx
// 0065c851  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0065c855  55                   push ebp
// 0065c856  8b2b                 mov ebp, dword ptr [ebx]
// 0065c858  57                   push edi
// 0065c859  8bf8                 mov edi, eax
// 0065c85b  8b4608               mov eax, dword ptr [esi + 8]
// 0065c85e  8928                 mov dword ptr [eax], ebp
// 0065c860  8b6b04               mov ebp, dword ptr [ebx + 4]
// 0065c863  896804               mov dword ptr [eax + 4], ebp
// 0065c866  8b5b08               mov ebx, dword ptr [ebx + 8]
// 0065c869  895808               mov dword ptr [eax + 8], ebx
// 0065c86c  8b1f                 mov ebx, dword ptr [edi]
// 0065c86e  8b4608               mov eax, dword ptr [esi + 8]
// 0065c871  895810               mov dword ptr [eax + 0x10], ebx
// 0065c874  8b5f04               mov ebx, dword ptr [edi + 4]
// 0065c877  895814               mov dword ptr [eax + 0x14], ebx
// 0065c87a  8b7f08               mov edi, dword ptr [edi + 8]
// 0065c87d  897818               mov dword ptr [eax + 0x18], edi
// 0065c880  8b3a                 mov edi, dword ptr [edx]
// 0065c882  83c010               add eax, 0x10
// 0065c885  8b4608               mov eax, dword ptr [esi + 8]
// 0065c888  897820               mov dword ptr [eax + 0x20], edi
// 0065c88b  8b7a04               mov edi, dword ptr [edx + 4]
// 0065c88e  897824               mov dword ptr [eax + 0x24], edi
// 0065c891  8b5208               mov edx, dword ptr [edx + 8]
// 0065c894  83c020               add eax, 0x20
// 0065c897  895008               mov dword ptr [eax + 8], edx
// 0065c89a  8b4608               mov eax, dword ptr [esi + 8]
// 0065c89d  8b11                 mov edx, dword ptr [ecx]
// 0065c89f  83c030               add eax, 0x30
// 0065c8a2  8910                 mov dword ptr [eax], edx
// 0065c8a4  8b5104               mov edx, dword ptr [ecx + 4]
// 0065c8a7  895004               mov dword ptr [eax + 4], edx
// 0065c8aa  8b4908               mov ecx, dword ptr [ecx + 8]
// 0065c8ad  894808               mov dword ptr [eax + 8], ecx
// 0065c8b0  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0065c8b3  2b5608               sub edx, dword ptr [esi + 8]
// 0065c8b6  5f                   pop edi
// 0065c8b7  83fa40               cmp edx, 0x40
// 0065c8ba  5d                   pop ebp
// 0065c8bb  5b                   pop ebx
// 0065c8bc  7f0b                 jg 0x65c8c9
// 0065c8be  6a04                 push 4
// 0065c8c0  56                   push esi
// 0065c8c1  e88a52fcff           call 0x621b50
// 0065c8c6  83c408               add esp, 8
// 0065c8c9  83460840             add dword ptr [esi + 8], 0x40
// 0065c8cd  8b4608               mov eax, dword ptr [esi + 8]
// 0065c8d0  6a00                 push 0
// 0065c8d2  83c0c0               add eax, -0x40
// 0065c8d5  50                   push eax
// 0065c8d6  56                   push esi
// 0065c8d7  e8245afcff           call 0x622300
// 0065c8dc  83c40c               add esp, 0xc
// 0065c8df  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
