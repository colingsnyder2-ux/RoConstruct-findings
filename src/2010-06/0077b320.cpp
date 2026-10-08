// from server: 100% by auto
// roc 2010-06 0077b320  unit: RBX::PartDropTool  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b320
//
// 0077b320  53                   push ebx
// 0077b321  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0077b325  55                   push ebp
// 0077b326  8b2b                 mov ebp, dword ptr [ebx]
// 0077b328  57                   push edi
// 0077b329  8bf8                 mov edi, eax
// 0077b32b  8b4608               mov eax, dword ptr [esi + 8]
// 0077b32e  8928                 mov dword ptr [eax], ebp
// 0077b330  8b6b04               mov ebp, dword ptr [ebx + 4]
// 0077b333  896804               mov dword ptr [eax + 4], ebp
// 0077b336  8b5b08               mov ebx, dword ptr [ebx + 8]
// 0077b339  895808               mov dword ptr [eax + 8], ebx
// 0077b33c  8b1f                 mov ebx, dword ptr [edi]
// 0077b33e  8b4608               mov eax, dword ptr [esi + 8]
// 0077b341  895810               mov dword ptr [eax + 0x10], ebx
// 0077b344  8b5f04               mov ebx, dword ptr [edi + 4]
// 0077b347  895814               mov dword ptr [eax + 0x14], ebx
// 0077b34a  8b7f08               mov edi, dword ptr [edi + 8]
// 0077b34d  897818               mov dword ptr [eax + 0x18], edi
// 0077b350  8b3a                 mov edi, dword ptr [edx]
// 0077b352  83c010               add eax, 0x10
// 0077b355  8b4608               mov eax, dword ptr [esi + 8]
// 0077b358  897820               mov dword ptr [eax + 0x20], edi
// 0077b35b  8b7a04               mov edi, dword ptr [edx + 4]
// 0077b35e  897824               mov dword ptr [eax + 0x24], edi
// 0077b361  8b5208               mov edx, dword ptr [edx + 8]
// 0077b364  83c020               add eax, 0x20
// 0077b367  895008               mov dword ptr [eax + 8], edx
// 0077b36a  8b4608               mov eax, dword ptr [esi + 8]
// 0077b36d  8b11                 mov edx, dword ptr [ecx]
// 0077b36f  83c030               add eax, 0x30
// 0077b372  8910                 mov dword ptr [eax], edx
// 0077b374  8b5104               mov edx, dword ptr [ecx + 4]
// 0077b377  895004               mov dword ptr [eax + 4], edx
// 0077b37a  8b4908               mov ecx, dword ptr [ecx + 8]
// 0077b37d  894808               mov dword ptr [eax + 8], ecx
// 0077b380  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0077b383  2b5608               sub edx, dword ptr [esi + 8]
// 0077b386  5f                   pop edi
// 0077b387  83fa40               cmp edx, 0x40
// 0077b38a  5d                   pop ebp
// 0077b38b  5b                   pop ebx
// 0077b38c  7f0b                 jg 0x77b399
// 0077b38e  6a04                 push 4
// 0077b390  56                   push esi
// 0077b391  e8fa47fbff           call 0x72fb90
// 0077b396  83c408               add esp, 8
// 0077b399  83460840             add dword ptr [esi + 8], 0x40
// 0077b39d  8b4608               mov eax, dword ptr [esi + 8]
// 0077b3a0  6a00                 push 0
// 0077b3a2  83c0c0               add eax, -0x40
// 0077b3a5  50                   push eax
// 0077b3a6  56                   push esi
// 0077b3a7  e8b44ffbff           call 0x730360
// 0077b3ac  83c40c               add esp, 0xc
// 0077b3af  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
