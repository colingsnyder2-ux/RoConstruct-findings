// roc 2010-06 004c4f50  unit: RBX::VInstance::?$NonFactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c4f50
//
// 004c4f50  83ec0c               sub esp, 0xc
// 004c4f53  53                   push ebx
// 004c4f54  55                   push ebp
// 004c4f55  56                   push esi
// 004c4f56  8be9                 mov ebp, ecx
// 004c4f58  57                   push edi
// 004c4f59  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 004c4f5c  8b7704               mov esi, dword ptr [edi + 4]
// 004c4f5f  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c4f63  b001                 mov al, 1
// 004c4f65  88442410             mov byte ptr [esp + 0x10], al
// 004c4f69  7529                 jne 0x4c4f94
// 004c4f6b  eb03                 jmp 0x4c4f70
// 004c4f6d  8d4900               lea ecx, [ecx]
// 004c4f70  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c4f74  8d460c               lea eax, [esi + 0xc]
// 004c4f77  50                   push eax
// 004c4f78  8bfe                 mov edi, esi
// 004c4f7a  e851541400           call 0x60a3d0
// 004c4f7f  88442410             mov byte ptr [esp + 0x10], al
// 004c4f83  84c0                 test al, al
// 004c4f85  7404                 je 0x4c4f8b
// 004c4f87  8b36                 mov esi, dword ptr [esi]
// 004c4f89  eb03                 jmp 0x4c4f8e
// 004c4f8b  8b7608               mov esi, dword ptr [esi + 8]
// 004c4f8e  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c4f92  74dc                 je 0x4c4f70
// 004c4f94  8b7500               mov esi, dword ptr [ebp]
// 004c4f97  8bdf                 mov ebx, edi
// 004c4f99  895c2418             mov dword ptr [esp + 0x18], ebx
// 004c4f9d  89742414             mov dword ptr [esp + 0x14], esi
// 004c4fa1  84c0                 test al, al
// 004c4fa3  745a                 je 0x4c4fff
// 004c4fa5  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 004c4fa8  8b19                 mov ebx, dword ptr [ecx]
// 004c4faa  85f6                 test esi, esi
// 004c4fac  7404                 je 0x4c4fb2
// 004c4fae  3bf6                 cmp esi, esi
// 004c4fb0  7406                 je 0x4c4fb8
// 004c4fb2  ff150ca99e00         call dword ptr [0x9ea90c]
// 004c4fb8  3bfb                 cmp edi, ebx
// 004c4fba  7532                 jne 0x4c4fee
// 004c4fbc  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c4fc0  52                   push edx
// 004c4fc1  57                   push edi
// 004c4fc2  6a01                 push 1
// 004c4fc4  8d442420             lea eax, [esp + 0x20]
// 004c4fc8  50                   push eax
// 004c4fc9  8bcd                 mov ecx, ebp
// 004c4fcb  e890e9ffff           call 0x4c3960
// 004c4fd0  5f                   pop edi
// 004c4fd1  8bc8                 mov ecx, eax
// 004c4fd3  8b11                 mov edx, dword ptr [ecx]
// 004c4fd5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c4fd9  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c4fdc  5e                   pop esi
// 004c4fdd  5d                   pop ebp
// 004c4fde  8910                 mov dword ptr [eax], edx
// 004c4fe0  894804               mov dword ptr [eax + 4], ecx
// 004c4fe3  c6400801             mov byte ptr [eax + 8], 1
// 004c4fe7  5b                   pop ebx
// 004c4fe8  83c40c               add esp, 0xc
// 004c4feb  c20800               ret 8
// 004c4fee  8d4c2414             lea ecx, [esp + 0x14]
// 004c4ff2  e8c9f2f6ff           call 0x4342c0
// 004c4ff7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c4ffb  8b742414             mov esi, dword ptr [esp + 0x14]
// 004c4fff  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c5003  52                   push edx
// 004c5004  8d4b0c               lea ecx, [ebx + 0xc]
// 004c5007  e8c4531400           call 0x60a3d0
// 004c500c  84c0                 test al, al
// 004c500e  7412                 je 0x4c5022
// 004c5010  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c5014  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c5018  50                   push eax
// 004c5019  57                   push edi
// 004c501a  51                   push ecx
// 004c501b  8d542420             lea edx, [esp + 0x20]
// 004c501f  52                   push edx
// 004c5020  eba7                 jmp 0x4c4fc9
// 004c5022  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c5026  5f                   pop edi
// 004c5027  8930                 mov dword ptr [eax], esi
// 004c5029  5e                   pop esi
// 004c502a  5d                   pop ebp
// 004c502b  895804               mov dword ptr [eax + 4], ebx
// 004c502e  c6400800             mov byte ptr [eax + 8], 0
// 004c5032  5b                   pop ebx
// 004c5033  83c40c               add esp, 0xc
// 004c5036  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
