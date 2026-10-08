// roc 2007-03 004b9700  unit: seg_004b0000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9700
//
// 004b9700  83ec50               sub esp, 0x50
// 004b9703  6a50                 push 0x50
// 004b9705  8d442404             lea eax, [esp + 4]
// 004b9709  50                   push eax
// 004b970a  ff156cf07700         call dword ptr [0x77f06c]
// 004b9710  83f8ff               cmp eax, -1
// 004b9713  745c                 je 0x4b9771
// 004b9715  53                   push ebx
// 004b9716  8d4c2404             lea ecx, [esp + 4]
// 004b971a  51                   push ecx
// 004b971b  ff155cf07700         call dword ptr [0x77f05c]
// 004b9721  8bd8                 mov ebx, eax
// 004b9723  85db                 test ebx, ebx
// 004b9725  7449                 je 0x4b9770
// 004b9727  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004b972a  833800               cmp dword ptr [eax], 0
// 004b972d  7441                 je 0x4b9770
// 004b972f  55                   push ebp
// 004b9730  8b2d3cf07700         mov ebp, dword ptr [0x77f03c]
// 004b9736  56                   push esi
// 004b9737  57                   push edi
// 004b9738  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 004b973c  33f6                 xor esi, esi
// 004b973e  8bff                 mov edi, edi
// 004b9740  83fe28               cmp esi, 0x28
// 004b9743  7d28                 jge 0x4b976d
// 004b9745  8b1406               mov edx, dword ptr [esi + eax]
// 004b9748  8b02                 mov eax, dword ptr [edx]
// 004b974a  50                   push eax
// 004b974b  ffd5                 call ebp
// 004b974d  8bd7                 mov edx, edi
// 004b974f  90                   nop 
// 004b9750  8a08                 mov cl, byte ptr [eax]
// 004b9752  880a                 mov byte ptr [edx], cl
// 004b9754  83c001               add eax, 1
// 004b9757  83c201               add edx, 1
// 004b975a  84c9                 test cl, cl
// 004b975c  75f2                 jne 0x4b9750
// 004b975e  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004b9761  83c604               add esi, 4
// 004b9764  83c710               add edi, 0x10
// 004b9767  833c0600             cmp dword ptr [esi + eax], 0
// 004b976b  75d3                 jne 0x4b9740
// 004b976d  5f                   pop edi
// 004b976e  5e                   pop esi
// 004b976f  5d                   pop ebp
// 004b9770  5b                   pop ebx
// 004b9771  83c450               add esp, 0x50
// 004b9774  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?GetMyIP@SocketLayer@@QAEXQAY0BA@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
