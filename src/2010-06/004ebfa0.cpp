// roc 2010-06 004ebfa0  unit: RBX::Network::DirectPhysicsReceiver  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ebfa0
//
// 004ebfa0  83ec0c               sub esp, 0xc
// 004ebfa3  53                   push ebx
// 004ebfa4  55                   push ebp
// 004ebfa5  56                   push esi
// 004ebfa6  8be9                 mov ebp, ecx
// 004ebfa8  57                   push edi
// 004ebfa9  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 004ebfac  8b7704               mov esi, dword ptr [edi + 4]
// 004ebfaf  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ebfb3  b001                 mov al, 1
// 004ebfb5  88442410             mov byte ptr [esp + 0x10], al
// 004ebfb9  7529                 jne 0x4ebfe4
// 004ebfbb  eb03                 jmp 0x4ebfc0
// 004ebfbd  8d4900               lea ecx, [ecx]
// 004ebfc0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ebfc4  8d460c               lea eax, [esi + 0xc]
// 004ebfc7  50                   push eax
// 004ebfc8  8bfe                 mov edi, esi
// 004ebfca  e8e11b0100           call 0x4fdbb0
// 004ebfcf  88442410             mov byte ptr [esp + 0x10], al
// 004ebfd3  84c0                 test al, al
// 004ebfd5  7404                 je 0x4ebfdb
// 004ebfd7  8b36                 mov esi, dword ptr [esi]
// 004ebfd9  eb03                 jmp 0x4ebfde
// 004ebfdb  8b7608               mov esi, dword ptr [esi + 8]
// 004ebfde  807e1900             cmp byte ptr [esi + 0x19], 0
// 004ebfe2  74dc                 je 0x4ebfc0
// 004ebfe4  8b7500               mov esi, dword ptr [ebp]
// 004ebfe7  8bdf                 mov ebx, edi
// 004ebfe9  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ebfed  89742414             mov dword ptr [esp + 0x14], esi
// 004ebff1  84c0                 test al, al
// 004ebff3  745a                 je 0x4ec04f
// 004ebff5  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 004ebff8  8b19                 mov ebx, dword ptr [ecx]
// 004ebffa  85f6                 test esi, esi
// 004ebffc  7404                 je 0x4ec002
// 004ebffe  3bf6                 cmp esi, esi
// 004ec000  7406                 je 0x4ec008
// 004ec002  ff150ca99e00         call dword ptr [0x9ea90c]
// 004ec008  3bfb                 cmp edi, ebx
// 004ec00a  7532                 jne 0x4ec03e
// 004ec00c  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ec010  52                   push edx
// 004ec011  57                   push edi
// 004ec012  6a01                 push 1
// 004ec014  8d442420             lea eax, [esp + 0x20]
// 004ec018  50                   push eax
// 004ec019  8bcd                 mov ecx, ebp
// 004ec01b  e84079fdff           call 0x4c3960
// 004ec020  5f                   pop edi
// 004ec021  8bc8                 mov ecx, eax
// 004ec023  8b11                 mov edx, dword ptr [ecx]
// 004ec025  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004ec029  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ec02c  5e                   pop esi
// 004ec02d  5d                   pop ebp
// 004ec02e  8910                 mov dword ptr [eax], edx
// 004ec030  894804               mov dword ptr [eax + 4], ecx
// 004ec033  c6400801             mov byte ptr [eax + 8], 1
// 004ec037  5b                   pop ebx
// 004ec038  83c40c               add esp, 0xc
// 004ec03b  c20800               ret 8
// 004ec03e  8d4c2414             lea ecx, [esp + 0x14]
// 004ec042  e87982f4ff           call 0x4342c0
// 004ec047  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ec04b  8b742414             mov esi, dword ptr [esp + 0x14]
// 004ec04f  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ec053  52                   push edx
// 004ec054  8d4b0c               lea ecx, [ebx + 0xc]
// 004ec057  e8541b0100           call 0x4fdbb0
// 004ec05c  84c0                 test al, al
// 004ec05e  7412                 je 0x4ec072
// 004ec060  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ec064  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ec068  50                   push eax
// 004ec069  57                   push edi
// 004ec06a  51                   push ecx
// 004ec06b  8d542420             lea edx, [esp + 0x20]
// 004ec06f  52                   push edx
// 004ec070  eba7                 jmp 0x4ec019
// 004ec072  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ec076  5f                   pop edi
// 004ec077  8930                 mov dword ptr [eax], esi
// 004ec079  5e                   pop esi
// 004ec07a  5d                   pop ebp
// 004ec07b  895804               mov dword ptr [eax + 4], ebx
// 004ec07e  c6400800             mov byte ptr [eax + 8], 0
// 004ec082  5b                   pop ebx
// 004ec083  83c40c               add esp, 0xc
// 004ec086  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
