// roc 2008-06 0057cb30  unit: RBX::VInstance::?$SignalDesc  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057cb30
//
// 0057cb30  83ec0c               sub esp, 0xc
// 0057cb33  53                   push ebx
// 0057cb34  55                   push ebp
// 0057cb35  56                   push esi
// 0057cb36  8be9                 mov ebp, ecx
// 0057cb38  57                   push edi
// 0057cb39  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0057cb3c  8b7704               mov esi, dword ptr [edi + 4]
// 0057cb3f  807e1900             cmp byte ptr [esi + 0x19], 0
// 0057cb43  b001                 mov al, 1
// 0057cb45  88442410             mov byte ptr [esp + 0x10], al
// 0057cb49  7529                 jne 0x57cb74
// 0057cb4b  eb03                 jmp 0x57cb50
// 0057cb4d  8d4900               lea ecx, [ecx]
// 0057cb50  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057cb54  8d460c               lea eax, [esi + 0xc]
// 0057cb57  50                   push eax
// 0057cb58  8bfe                 mov edi, esi
// 0057cb5a  e881820100           call 0x594de0
// 0057cb5f  88442410             mov byte ptr [esp + 0x10], al
// 0057cb63  84c0                 test al, al
// 0057cb65  7404                 je 0x57cb6b
// 0057cb67  8b36                 mov esi, dword ptr [esi]
// 0057cb69  eb03                 jmp 0x57cb6e
// 0057cb6b  8b7608               mov esi, dword ptr [esi + 8]
// 0057cb6e  807e1900             cmp byte ptr [esi + 0x19], 0
// 0057cb72  74dc                 je 0x57cb50
// 0057cb74  8b7500               mov esi, dword ptr [ebp]
// 0057cb77  8bdf                 mov ebx, edi
// 0057cb79  895c2418             mov dword ptr [esp + 0x18], ebx
// 0057cb7d  89742414             mov dword ptr [esp + 0x14], esi
// 0057cb81  84c0                 test al, al
// 0057cb83  745a                 je 0x57cbdf
// 0057cb85  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0057cb88  8b19                 mov ebx, dword ptr [ecx]
// 0057cb8a  85f6                 test esi, esi
// 0057cb8c  7404                 je 0x57cb92
// 0057cb8e  3bf6                 cmp esi, esi
// 0057cb90  7406                 je 0x57cb98
// 0057cb92  ff1590288000         call dword ptr [0x802890]
// 0057cb98  3bfb                 cmp edi, ebx
// 0057cb9a  7532                 jne 0x57cbce
// 0057cb9c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057cba0  52                   push edx
// 0057cba1  57                   push edi
// 0057cba2  6a01                 push 1
// 0057cba4  8d442420             lea eax, [esp + 0x20]
// 0057cba8  50                   push eax
// 0057cba9  8bcd                 mov ecx, ebp
// 0057cbab  e880fdffff           call 0x57c930
// 0057cbb0  5f                   pop edi
// 0057cbb1  8bc8                 mov ecx, eax
// 0057cbb3  8b11                 mov edx, dword ptr [ecx]
// 0057cbb5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057cbb9  8b4904               mov ecx, dword ptr [ecx + 4]
// 0057cbbc  5e                   pop esi
// 0057cbbd  5d                   pop ebp
// 0057cbbe  8910                 mov dword ptr [eax], edx
// 0057cbc0  894804               mov dword ptr [eax + 4], ecx
// 0057cbc3  c6400801             mov byte ptr [eax + 8], 1
// 0057cbc7  5b                   pop ebx
// 0057cbc8  83c40c               add esp, 0xc
// 0057cbcb  c20800               ret 8
// 0057cbce  8d4c2414             lea ecx, [esp + 0x14]
// 0057cbd2  e869f3f2ff           call 0x4abf40
// 0057cbd7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057cbdb  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057cbdf  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057cbe3  52                   push edx
// 0057cbe4  8d4b0c               lea ecx, [ebx + 0xc]
// 0057cbe7  e8f4810100           call 0x594de0
// 0057cbec  84c0                 test al, al
// 0057cbee  7412                 je 0x57cc02
// 0057cbf0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057cbf4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057cbf8  50                   push eax
// 0057cbf9  57                   push edi
// 0057cbfa  51                   push ecx
// 0057cbfb  8d542420             lea edx, [esp + 0x20]
// 0057cbff  52                   push edx
// 0057cc00  eba7                 jmp 0x57cba9
// 0057cc02  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057cc06  5f                   pop edi
// 0057cc07  8930                 mov dword ptr [eax], esi
// 0057cc09  5e                   pop esi
// 0057cc0a  5d                   pop ebp
// 0057cc0b  895804               mov dword ptr [eax + 4], ebx
// 0057cc0e  c6400800             mov byte ptr [eax + 8], 0
// 0057cc12  5b                   pop ebx
// 0057cc13  83c40c               add esp, 0xc
// 0057cc16  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
