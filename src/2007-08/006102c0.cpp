// roc 2007-08 006102c0  unit: RBX::Ball  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006102c0
//
// 006102c0  53                   push ebx
// 006102c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006102c5  55                   push ebp
// 006102c6  8b2b                 mov ebp, dword ptr [ebx]
// 006102c8  57                   push edi
// 006102c9  8bf8                 mov edi, eax
// 006102cb  8b4608               mov eax, dword ptr [esi + 8]
// 006102ce  8928                 mov dword ptr [eax], ebp
// 006102d0  8b6b04               mov ebp, dword ptr [ebx + 4]
// 006102d3  896804               mov dword ptr [eax + 4], ebp
// 006102d6  8b5b08               mov ebx, dword ptr [ebx + 8]
// 006102d9  895808               mov dword ptr [eax + 8], ebx
// 006102dc  8b1f                 mov ebx, dword ptr [edi]
// 006102de  8b4608               mov eax, dword ptr [esi + 8]
// 006102e1  895810               mov dword ptr [eax + 0x10], ebx
// 006102e4  8b5f04               mov ebx, dword ptr [edi + 4]
// 006102e7  895814               mov dword ptr [eax + 0x14], ebx
// 006102ea  8b7f08               mov edi, dword ptr [edi + 8]
// 006102ed  897818               mov dword ptr [eax + 0x18], edi
// 006102f0  8b3a                 mov edi, dword ptr [edx]
// 006102f2  83c010               add eax, 0x10
// 006102f5  8b4608               mov eax, dword ptr [esi + 8]
// 006102f8  897820               mov dword ptr [eax + 0x20], edi
// 006102fb  8b7a04               mov edi, dword ptr [edx + 4]
// 006102fe  897824               mov dword ptr [eax + 0x24], edi
// 00610301  8b5208               mov edx, dword ptr [edx + 8]
// 00610304  83c020               add eax, 0x20
// 00610307  895008               mov dword ptr [eax + 8], edx
// 0061030a  8b4608               mov eax, dword ptr [esi + 8]
// 0061030d  8b11                 mov edx, dword ptr [ecx]
// 0061030f  83c030               add eax, 0x30
// 00610312  8910                 mov dword ptr [eax], edx
// 00610314  8b5104               mov edx, dword ptr [ecx + 4]
// 00610317  895004               mov dword ptr [eax + 4], edx
// 0061031a  8b4908               mov ecx, dword ptr [ecx + 8]
// 0061031d  894808               mov dword ptr [eax + 8], ecx
// 00610320  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00610323  2b5608               sub edx, dword ptr [esi + 8]
// 00610326  5f                   pop edi
// 00610327  83fa40               cmp edx, 0x40
// 0061032a  5d                   pop ebp
// 0061032b  5b                   pop ebx
// 0061032c  7f0b                 jg 0x610339
// 0061032e  6a04                 push 4
// 00610330  56                   push esi
// 00610331  e8da57fbff           call 0x5c5b10
// 00610336  83c408               add esp, 8
// 00610339  83460840             add dword ptr [esi + 8], 0x40
// 0061033d  8b4608               mov eax, dword ptr [esi + 8]
// 00610340  6a00                 push 0
// 00610342  83c0c0               add eax, -0x40
// 00610345  50                   push eax
// 00610346  56                   push esi
// 00610347  e8845ffbff           call 0x5c62d0
// 0061034c  83c40c               add esp, 0xc
// 0061034f  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
