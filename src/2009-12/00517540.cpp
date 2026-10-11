// roc 2009-12 00517540  unit: RBX::VInstance::?$NonFactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00517540
//
// 00517540  83ec0c               sub esp, 0xc
// 00517543  53                   push ebx
// 00517544  55                   push ebp
// 00517545  56                   push esi
// 00517546  8be9                 mov ebp, ecx
// 00517548  57                   push edi
// 00517549  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0051754c  8b7704               mov esi, dword ptr [edi + 4]
// 0051754f  807e1900             cmp byte ptr [esi + 0x19], 0
// 00517553  b001                 mov al, 1
// 00517555  88442410             mov byte ptr [esp + 0x10], al
// 00517559  7529                 jne 0x517584
// 0051755b  eb03                 jmp 0x517560
// 0051755d  8d4900               lea ecx, [ecx]
// 00517560  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00517564  8d460c               lea eax, [esi + 0xc]
// 00517567  50                   push eax
// 00517568  8bfe                 mov edi, esi
// 0051756a  e871751800           call 0x69eae0
// 0051756f  88442410             mov byte ptr [esp + 0x10], al
// 00517573  84c0                 test al, al
// 00517575  7404                 je 0x51757b
// 00517577  8b36                 mov esi, dword ptr [esi]
// 00517579  eb03                 jmp 0x51757e
// 0051757b  8b7608               mov esi, dword ptr [esi + 8]
// 0051757e  807e1900             cmp byte ptr [esi + 0x19], 0
// 00517582  74dc                 je 0x517560
// 00517584  8b7500               mov esi, dword ptr [ebp]
// 00517587  8bdf                 mov ebx, edi
// 00517589  895c2418             mov dword ptr [esp + 0x18], ebx
// 0051758d  89742414             mov dword ptr [esp + 0x14], esi
// 00517591  84c0                 test al, al
// 00517593  745a                 je 0x5175ef
// 00517595  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00517598  8b19                 mov ebx, dword ptr [ecx]
// 0051759a  85f6                 test esi, esi
// 0051759c  7404                 je 0x5175a2
// 0051759e  3bf6                 cmp esi, esi
// 005175a0  7406                 je 0x5175a8
// 005175a2  ff1560b79800         call dword ptr [0x98b760]
// 005175a8  3bfb                 cmp edi, ebx
// 005175aa  7532                 jne 0x5175de
// 005175ac  8b542424             mov edx, dword ptr [esp + 0x24]
// 005175b0  52                   push edx
// 005175b1  57                   push edi
// 005175b2  6a01                 push 1
// 005175b4  8d442420             lea eax, [esp + 0x20]
// 005175b8  50                   push eax
// 005175b9  8bcd                 mov ecx, ebp
// 005175bb  e810550200           call 0x53cad0
// 005175c0  5f                   pop edi
// 005175c1  8bc8                 mov ecx, eax
// 005175c3  8b11                 mov edx, dword ptr [ecx]
// 005175c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005175c9  8b4904               mov ecx, dword ptr [ecx + 4]
// 005175cc  5e                   pop esi
// 005175cd  5d                   pop ebp
// 005175ce  8910                 mov dword ptr [eax], edx
// 005175d0  894804               mov dword ptr [eax + 4], ecx
// 005175d3  c6400801             mov byte ptr [eax + 8], 1
// 005175d7  5b                   pop ebx
// 005175d8  83c40c               add esp, 0xc
// 005175db  c20800               ret 8
// 005175de  8d4c2414             lea ecx, [esp + 0x14]
// 005175e2  e8c9f81500           call 0x676eb0
// 005175e7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005175eb  8b742414             mov esi, dword ptr [esp + 0x14]
// 005175ef  8b542424             mov edx, dword ptr [esp + 0x24]
// 005175f3  52                   push edx
// 005175f4  8d4b0c               lea ecx, [ebx + 0xc]
// 005175f7  e8e4741800           call 0x69eae0
// 005175fc  84c0                 test al, al
// 005175fe  7412                 je 0x517612
// 00517600  8b442424             mov eax, dword ptr [esp + 0x24]
// 00517604  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00517608  50                   push eax
// 00517609  57                   push edi
// 0051760a  51                   push ecx
// 0051760b  8d542420             lea edx, [esp + 0x20]
// 0051760f  52                   push edx
// 00517610  eba7                 jmp 0x5175b9
// 00517612  8b442420             mov eax, dword ptr [esp + 0x20]
// 00517616  5f                   pop edi
// 00517617  8930                 mov dword ptr [eax], esi
// 00517619  5e                   pop esi
// 0051761a  5d                   pop ebp
// 0051761b  895804               mov dword ptr [eax + 4], ebx
// 0051761e  c6400800             mov byte ptr [eax + 8], 0
// 00517622  5b                   pop ebx
// 00517623  83c40c               add esp, 0xc
// 00517626  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
