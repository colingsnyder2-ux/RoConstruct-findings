// roc 2009-12 00843140  unit: CXTPPopupBar  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843140
//
// 00843140  56                   push esi
// 00843141  8bf1                 mov esi, ecx
// 00843143  83be8001000000       cmp dword ptr [esi + 0x180], 0
// 0084314a  0f8491010000         je 0x8432e1
// 00843150  55                   push ebp
// 00843151  57                   push edi
// 00843152  e82916fcff           call 0x804780
// 00843157  8bf8                 mov edi, eax
// 00843159  8b06                 mov eax, dword ptr [esi]
// 0084315b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00843161  8bce                 mov ecx, esi
// 00843163  ffd2                 call edx
// 00843165  8be8                 mov ebp, eax
// 00843167  85ed                 test ebp, ebp
// 00843169  0f8470010000         je 0x8432df
// 0084316f  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00843175  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 0084317f  f680d400000004       test byte ptr [eax + 0xd4], 4
// 00843186  7504                 jne 0x84318c
// 00843188  85ff                 test edi, edi
// 0084318a  740a                 je 0x843196
// 0084318c  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 00843196  f785ec00000000002000 test dword ptr [ebp + 0xec], 0x200000
// 008431a0  53                   push ebx
// 008431a1  7416                 je 0x8431b9
// 008431a3  83bd0001000005       cmp dword ptr [ebp + 0x100], 5
// 008431aa  750d                 jne 0x8431b9
// 008431ac  bb02000000           mov ebx, 2
// 008431b1  099e9c010000         or dword ptr [esi + 0x19c], ebx
// 008431b7  eb5f                 jmp 0x843218
// 008431b9  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 008431bf  bb02000000           mov ebx, 2
// 008431c4  3bc3                 cmp eax, ebx
// 008431c6  741f                 je 0x8431e7
// 008431c8  83f803               cmp eax, 3
// 008431cb  7441                 je 0x84320e
// 008431cd  83f805               cmp eax, 5
// 008431d0  7415                 je 0x8431e7
// 008431d2  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 008431d8  7505                 jne 0x8431df
// 008431da  83f804               cmp eax, 4
// 008431dd  7408                 je 0x8431e7
// 008431df  099e9c010000         or dword ptr [esi + 0x19c], ebx
// 008431e5  eb31                 jmp 0x843218
// 008431e7  83f803               cmp eax, 3
// 008431ea  7422                 je 0x84320e
// 008431ec  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 008431f2  7524                 jne 0x843218
// 008431f4  8b5500               mov edx, dword ptr [ebp]
// 008431f7  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 008431fd  8bcd                 mov ecx, ebp
// 008431ff  ffd0                 call eax
// 00843201  85c0                 test eax, eax
// 00843203  7413                 je 0x843218
// 00843205  f6859c01000001       test byte ptr [ebp + 0x19c], 1
// 0084320c  740a                 je 0x843218
// 0084320e  c7869c01000001000000 mov dword ptr [esi + 0x19c], 1
// 00843218  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 0084321e  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00843224  898e8c010000         mov dword ptr [esi + 0x18c], ecx
// 0084322a  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00843230  8dbe8c010000         lea edi, [esi + 0x18c]
// 00843236  895704               mov dword ptr [edi + 4], edx
// 00843239  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0084323f  894f08               mov dword ptr [edi + 8], ecx
// 00843242  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00843248  89570c               mov dword ptr [edi + 0xc], edx
// 0084324b  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 00843252  7510                 jne 0x843264
// 00843254  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 0084325a  7408                 je 0x843264
// 0084325c  099e9c010000         or dword ptr [esi + 0x19c], ebx
// 00843262  eb38                 jmp 0x84329c
// 00843264  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 0084326a  3bc3                 cmp eax, ebx
// 0084326c  741b                 je 0x843289
// 0084326e  83f803               cmp eax, 3
// 00843271  7416                 je 0x843289
// 00843273  83f805               cmp eax, 5
// 00843276  7411                 je 0x843289
// 00843278  399df8000000         cmp dword ptr [ebp + 0xf8], ebx
// 0084327e  7505                 jne 0x843285
// 00843280  83f804               cmp eax, 4
// 00843283  7404                 je 0x843289
// 00843285  33c0                 xor eax, eax
// 00843287  eb05                 jmp 0x84328e
// 00843289  b801000000           mov eax, 1
// 0084328e  8b16                 mov edx, dword ptr [esi]
// 00843290  50                   push eax
// 00843291  8b820c020000         mov eax, dword ptr [edx + 0x20c]
// 00843297  57                   push edi
// 00843298  8bce                 mov ecx, esi
// 0084329a  ffd0                 call eax
// 0084329c  57                   push edi
// 0084329d  8bcd                 mov ecx, ebp
// 0084329f  e8560bfbff           call 0x7f3dfa
// 008432a4  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 008432aa  23c3                 and eax, ebx
// 008432ac  5b                   pop ebx
// 008432ad  7404                 je 0x8432b3
// 008432af  8b3f                 mov edi, dword ptr [edi]
// 008432b1  eb06                 jmp 0x8432b9
// 008432b3  8bbe94010000         mov edi, dword ptr [esi + 0x194]
// 008432b9  89be84010000         mov dword ptr [esi + 0x184], edi
// 008432bf  85c0                 test eax, eax
// 008432c1  7410                 je 0x8432d3
// 008432c3  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 008432c9  5f                   pop edi
// 008432ca  5d                   pop ebp
// 008432cb  898688010000         mov dword ptr [esi + 0x188], eax
// 008432d1  5e                   pop esi
// 008432d2  c3                   ret 
// 008432d3  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 008432d9  898688010000         mov dword ptr [esi + 0x188], eax
// 008432df  5f                   pop edi
// 008432e0  5d                   pop ebp
// 008432e1  5e                   pop esi
// 008432e2  c3                   ret 
// copied from an identical function in another client (function ?UpdateFlags@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp