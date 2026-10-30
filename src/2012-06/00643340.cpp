// from server: 100% by auto
// roc 2012-06 00643340  unit: seg_00640000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643340
//
// 00643340  83f90c               cmp ecx, 0xc
// 00643343  0f8282000000         jb 0x6433cb
// 00643349  803841               cmp byte ptr [eax], 0x41
// 0064334c  757d                 jne 0x6433cb
// 0064334e  80780164             cmp byte ptr [eax + 1], 0x64
// 00643352  7577                 jne 0x6433cb
// 00643354  8078026f             cmp byte ptr [eax + 2], 0x6f
// 00643358  7571                 jne 0x6433cb
// 0064335a  80780362             cmp byte ptr [eax + 3], 0x62
// 0064335e  756b                 jne 0x6433cb
// 00643360  80780465             cmp byte ptr [eax + 4], 0x65
// 00643364  7565                 jne 0x6433cb
// 00643366  0fb65007             movzx edx, byte ptr [eax + 7]
// 0064336a  0fb64808             movzx ecx, byte ptr [eax + 8]
// 0064336e  53                   push ebx
// 0064336f  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 00643373  55                   push ebp
// 00643374  0fb66805             movzx ebp, byte ptr [eax + 5]
// 00643378  57                   push edi
// 00643379  0fb67809             movzx edi, byte ptr [eax + 9]
// 0064337d  c1e208               shl edx, 8
// 00643380  03d1                 add edx, ecx
// 00643382  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 00643386  0fb64006             movzx eax, byte ptr [eax + 6]
// 0064338a  c1e708               shl edi, 8
// 0064338d  03f9                 add edi, ecx
// 0064338f  8b0e                 mov ecx, dword ptr [esi]
// 00643391  83c118               add ecx, 0x18
// 00643394  c1e508               shl ebp, 8
// 00643397  03e8                 add ebp, eax
// 00643399  8929                 mov dword ptr [ecx], ebp
// 0064339b  895104               mov dword ptr [ecx + 4], edx
// 0064339e  897908               mov dword ptr [ecx + 8], edi
// 006433a1  89590c               mov dword ptr [ecx + 0xc], ebx
// 006433a4  8b0e                 mov ecx, dword ptr [esi]
// 006433a6  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 006433ad  8b16                 mov edx, dword ptr [esi]
// 006433af  8b4204               mov eax, dword ptr [edx + 4]
// 006433b2  6a01                 push 1
// 006433b4  56                   push esi
// 006433b5  ffd0                 call eax
// 006433b7  83c408               add esp, 8
// 006433ba  5f                   pop edi
// 006433bb  5d                   pop ebp
// 006433bc  889e09010000         mov byte ptr [esi + 0x109], bl
// 006433c2  c6860801000001       mov byte ptr [esi + 0x108], 1
// 006433c9  5b                   pop ebx
// 006433ca  c3                   ret 
// 006433cb  8b16                 mov edx, dword ptr [esi]
// 006433cd  8b442404             mov eax, dword ptr [esp + 4]
// 006433d1  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 006433d8  8b16                 mov edx, dword ptr [esi]
// 006433da  03c8                 add ecx, eax
// 006433dc  894a18               mov dword ptr [edx + 0x18], ecx
// 006433df  8b06                 mov eax, dword ptr [esi]
// 006433e1  8b4804               mov ecx, dword ptr [eax + 4]
// 006433e4  6a01                 push 1
// 006433e6  56                   push esi
// 006433e7  ffd1                 call ecx
// 006433e9  83c408               add esp, 8
// 006433ec  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
