// roc 2008-06 005691b0  unit: RBX::ServiceProvider  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005691b0
//
// 005691b0  83ec10               sub esp, 0x10
// 005691b3  53                   push ebx
// 005691b4  56                   push esi
// 005691b5  8bf1                 mov esi, ecx
// 005691b7  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005691ba  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005691bd  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005691c0  c1f902               sar ecx, 2
// 005691c3  33c0                 xor eax, eax
// 005691c5  89542414             mov dword ptr [esp + 0x14], edx
// 005691c9  8d54240c             lea edx, [esp + 0xc]
// 005691cd  57                   push edi
// 005691ce  89442410             mov dword ptr [esp + 0x10], eax
// 005691d2  894c2414             mov dword ptr [esp + 0x14], ecx
// 005691d6  89561c               mov dword ptr [esi + 0x1c], edx
// 005691d9  85c9                 test ecx, ecx
// 005691db  765f                 jbe 0x56923c
// 005691dd  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005691e3  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005691e6  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005691e9  8bf8                 mov edi, eax
// 005691eb  c1f902               sar ecx, 2
// 005691ee  3bc1                 cmp eax, ecx
// 005691f0  7202                 jb 0x5691f4
// 005691f2  ffd3                 call ebx
// 005691f4  8b5610               mov edx, dword ptr [esi + 0x10]
// 005691f7  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005691fa  50                   push eax
// 005691fb  8b442424             mov eax, dword ptr [esp + 0x24]
// 005691ff  83ec28               sub esp, 0x28
// 00569202  8bfc                 mov edi, esp
// 00569204  8d4c2450             lea ecx, [esp + 0x50]
// 00569208  89642438             mov dword ptr [esp + 0x38], esp
// 0056920c  51                   push ecx
// 0056920d  8d4f04               lea ecx, [edi + 4]
// 00569210  8907                 mov dword ptr [edi], eax
// 00569212  ff155c248000         call dword ptr [0x80245c]
// 00569218  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0056921c  895720               mov dword ptr [edi + 0x20], edx
// 0056921f  8b442470             mov eax, dword ptr [esp + 0x70]
// 00569223  8bce                 mov ecx, esi
// 00569225  894724               mov dword ptr [edi + 0x24], eax
// 00569228  e853050000           call 0x569780
// 0056922d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569231  40                   inc eax
// 00569232  89442410             mov dword ptr [esp + 0x10], eax
// 00569236  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0056923a  72a7                 jb 0x5691e3
// 0056923c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00569240  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00569243  8d4c2424             lea ecx, [esp + 0x24]
// 00569247  ff1568248000         call dword ptr [0x802468]
// 0056924d  5f                   pop edi
// 0056924e  5e                   pop esi
// 0056924f  5b                   pop ebx
// 00569250  83c410               add esp, 0x10
// 00569253  c22800               ret 0x28
// library openrbx-client/App\util\standardout.cpp (function ?raise@?$Notifier@VStandardOut@RBX@@UStandardOutMessage@2@@RBX@@IBEXUStandardOutMessage@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/standardout.cpp
