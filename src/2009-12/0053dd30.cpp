// roc 2009-12 0053dd30  unit: RBX::Network::DirectPhysicsReceiver  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053dd30
//
// 0053dd30  83ec0c               sub esp, 0xc
// 0053dd33  53                   push ebx
// 0053dd34  55                   push ebp
// 0053dd35  56                   push esi
// 0053dd36  8be9                 mov ebp, ecx
// 0053dd38  57                   push edi
// 0053dd39  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0053dd3c  8b7704               mov esi, dword ptr [edi + 4]
// 0053dd3f  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053dd43  b001                 mov al, 1
// 0053dd45  88442410             mov byte ptr [esp + 0x10], al
// 0053dd49  7529                 jne 0x53dd74
// 0053dd4b  eb03                 jmp 0x53dd50
// 0053dd4d  8d4900               lea ecx, [ecx]
// 0053dd50  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053dd54  8d460c               lea eax, [esi + 0xc]
// 0053dd57  50                   push eax
// 0053dd58  8bfe                 mov edi, esi
// 0053dd5a  e8b1531d00           call 0x713110
// 0053dd5f  88442410             mov byte ptr [esp + 0x10], al
// 0053dd63  84c0                 test al, al
// 0053dd65  7404                 je 0x53dd6b
// 0053dd67  8b36                 mov esi, dword ptr [esi]
// 0053dd69  eb03                 jmp 0x53dd6e
// 0053dd6b  8b7608               mov esi, dword ptr [esi + 8]
// 0053dd6e  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053dd72  74dc                 je 0x53dd50
// 0053dd74  8b7500               mov esi, dword ptr [ebp]
// 0053dd77  8bdf                 mov ebx, edi
// 0053dd79  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053dd7d  89742414             mov dword ptr [esp + 0x14], esi
// 0053dd81  84c0                 test al, al
// 0053dd83  745a                 je 0x53dddf
// 0053dd85  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0053dd88  8b19                 mov ebx, dword ptr [ecx]
// 0053dd8a  85f6                 test esi, esi
// 0053dd8c  7404                 je 0x53dd92
// 0053dd8e  3bf6                 cmp esi, esi
// 0053dd90  7406                 je 0x53dd98
// 0053dd92  ff1560b79800         call dword ptr [0x98b760]
// 0053dd98  3bfb                 cmp edi, ebx
// 0053dd9a  7532                 jne 0x53ddce
// 0053dd9c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053dda0  52                   push edx
// 0053dda1  57                   push edi
// 0053dda2  6a01                 push 1
// 0053dda4  8d442420             lea eax, [esp + 0x20]
// 0053dda8  50                   push eax
// 0053dda9  8bcd                 mov ecx, ebp
// 0053ddab  e820edffff           call 0x53cad0
// 0053ddb0  5f                   pop edi
// 0053ddb1  8bc8                 mov ecx, eax
// 0053ddb3  8b11                 mov edx, dword ptr [ecx]
// 0053ddb5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053ddb9  8b4904               mov ecx, dword ptr [ecx + 4]
// 0053ddbc  5e                   pop esi
// 0053ddbd  5d                   pop ebp
// 0053ddbe  8910                 mov dword ptr [eax], edx
// 0053ddc0  894804               mov dword ptr [eax + 4], ecx
// 0053ddc3  c6400801             mov byte ptr [eax + 8], 1
// 0053ddc7  5b                   pop ebx
// 0053ddc8  83c40c               add esp, 0xc
// 0053ddcb  c20800               ret 8
// 0053ddce  8d4c2414             lea ecx, [esp + 0x14]
// 0053ddd2  e8d9901300           call 0x676eb0
// 0053ddd7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0053dddb  8b742414             mov esi, dword ptr [esp + 0x14]
// 0053dddf  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053dde3  52                   push edx
// 0053dde4  8d4b0c               lea ecx, [ebx + 0xc]
// 0053dde7  e824531d00           call 0x713110
// 0053ddec  84c0                 test al, al
// 0053ddee  7412                 je 0x53de02
// 0053ddf0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053ddf4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053ddf8  50                   push eax
// 0053ddf9  57                   push edi
// 0053ddfa  51                   push ecx
// 0053ddfb  8d542420             lea edx, [esp + 0x20]
// 0053ddff  52                   push edx
// 0053de00  eba7                 jmp 0x53dda9
// 0053de02  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053de06  5f                   pop edi
// 0053de07  8930                 mov dword ptr [eax], esi
// 0053de09  5e                   pop esi
// 0053de0a  5d                   pop ebp
// 0053de0b  895804               mov dword ptr [eax + 4], ebx
// 0053de0e  c6400800             mov byte ptr [eax + 8], 0
// 0053de12  5b                   pop ebx
// 0053de13  83c40c               add esp, 0xc
// 0053de16  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
