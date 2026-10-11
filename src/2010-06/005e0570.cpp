// roc 2010-06 005e0570  unit: RBX::GlobalSettings  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0570
//
// 005e0570  83ec0c               sub esp, 0xc
// 005e0573  53                   push ebx
// 005e0574  55                   push ebp
// 005e0575  56                   push esi
// 005e0576  8be9                 mov ebp, ecx
// 005e0578  57                   push edi
// 005e0579  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 005e057c  8b7704               mov esi, dword ptr [edi + 4]
// 005e057f  807e1900             cmp byte ptr [esi + 0x19], 0
// 005e0583  b001                 mov al, 1
// 005e0585  88442410             mov byte ptr [esp + 0x10], al
// 005e0589  7529                 jne 0x5e05b4
// 005e058b  eb03                 jmp 0x5e0590
// 005e058d  8d4900               lea ecx, [ecx]
// 005e0590  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e0594  8d460c               lea eax, [esi + 0xc]
// 005e0597  50                   push eax
// 005e0598  8bfe                 mov edi, esi
// 005e059a  e801140500           call 0x6319a0
// 005e059f  88442410             mov byte ptr [esp + 0x10], al
// 005e05a3  84c0                 test al, al
// 005e05a5  7404                 je 0x5e05ab
// 005e05a7  8b36                 mov esi, dword ptr [esi]
// 005e05a9  eb03                 jmp 0x5e05ae
// 005e05ab  8b7608               mov esi, dword ptr [esi + 8]
// 005e05ae  807e1900             cmp byte ptr [esi + 0x19], 0
// 005e05b2  74dc                 je 0x5e0590
// 005e05b4  8b7500               mov esi, dword ptr [ebp]
// 005e05b7  8bdf                 mov ebx, edi
// 005e05b9  895c2418             mov dword ptr [esp + 0x18], ebx
// 005e05bd  89742414             mov dword ptr [esp + 0x14], esi
// 005e05c1  84c0                 test al, al
// 005e05c3  745a                 je 0x5e061f
// 005e05c5  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005e05c8  8b19                 mov ebx, dword ptr [ecx]
// 005e05ca  85f6                 test esi, esi
// 005e05cc  7404                 je 0x5e05d2
// 005e05ce  3bf6                 cmp esi, esi
// 005e05d0  7406                 je 0x5e05d8
// 005e05d2  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e05d8  3bfb                 cmp edi, ebx
// 005e05da  7532                 jne 0x5e060e
// 005e05dc  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e05e0  52                   push edx
// 005e05e1  57                   push edi
// 005e05e2  6a01                 push 1
// 005e05e4  8d442420             lea eax, [esp + 0x20]
// 005e05e8  50                   push eax
// 005e05e9  8bcd                 mov ecx, ebp
// 005e05eb  e880fdffff           call 0x5e0370
// 005e05f0  5f                   pop edi
// 005e05f1  8bc8                 mov ecx, eax
// 005e05f3  8b11                 mov edx, dword ptr [ecx]
// 005e05f5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e05f9  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e05fc  5e                   pop esi
// 005e05fd  5d                   pop ebp
// 005e05fe  8910                 mov dword ptr [eax], edx
// 005e0600  894804               mov dword ptr [eax + 4], ecx
// 005e0603  c6400801             mov byte ptr [eax + 8], 1
// 005e0607  5b                   pop ebx
// 005e0608  83c40c               add esp, 0xc
// 005e060b  c20800               ret 8
// 005e060e  8d4c2414             lea ecx, [esp + 0x14]
// 005e0612  e8a93ce5ff           call 0x4342c0
// 005e0617  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005e061b  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e061f  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e0623  52                   push edx
// 005e0624  8d4b0c               lea ecx, [ebx + 0xc]
// 005e0627  e874130500           call 0x6319a0
// 005e062c  84c0                 test al, al
// 005e062e  7412                 je 0x5e0642
// 005e0630  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e0634  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e0638  50                   push eax
// 005e0639  57                   push edi
// 005e063a  51                   push ecx
// 005e063b  8d542420             lea edx, [esp + 0x20]
// 005e063f  52                   push edx
// 005e0640  eba7                 jmp 0x5e05e9
// 005e0642  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e0646  5f                   pop edi
// 005e0647  8930                 mov dword ptr [eax], esi
// 005e0649  5e                   pop esi
// 005e064a  5d                   pop ebp
// 005e064b  895804               mov dword ptr [eax + 4], ebx
// 005e064e  c6400800             mov byte ptr [eax + 8], 0
// 005e0652  5b                   pop ebx
// 005e0653  83c40c               add esp, 0xc
// 005e0656  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
