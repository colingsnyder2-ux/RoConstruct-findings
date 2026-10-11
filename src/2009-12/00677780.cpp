// roc 2009-12 00677780  unit: RBX::GlobalSettings  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677780
//
// 00677780  83ec0c               sub esp, 0xc
// 00677783  53                   push ebx
// 00677784  55                   push ebp
// 00677785  56                   push esi
// 00677786  8be9                 mov ebp, ecx
// 00677788  57                   push edi
// 00677789  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0067778c  8b7704               mov esi, dword ptr [edi + 4]
// 0067778f  807e1900             cmp byte ptr [esi + 0x19], 0
// 00677793  b001                 mov al, 1
// 00677795  88442410             mov byte ptr [esp + 0x10], al
// 00677799  7529                 jne 0x6777c4
// 0067779b  eb03                 jmp 0x6777a0
// 0067779d  8d4900               lea ecx, [ecx]
// 006777a0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006777a4  8d460c               lea eax, [esi + 0xc]
// 006777a7  50                   push eax
// 006777a8  8bfe                 mov edi, esi
// 006777aa  e851e40400           call 0x6c5c00
// 006777af  88442410             mov byte ptr [esp + 0x10], al
// 006777b3  84c0                 test al, al
// 006777b5  7404                 je 0x6777bb
// 006777b7  8b36                 mov esi, dword ptr [esi]
// 006777b9  eb03                 jmp 0x6777be
// 006777bb  8b7608               mov esi, dword ptr [esi + 8]
// 006777be  807e1900             cmp byte ptr [esi + 0x19], 0
// 006777c2  74dc                 je 0x6777a0
// 006777c4  8b7500               mov esi, dword ptr [ebp]
// 006777c7  8bdf                 mov ebx, edi
// 006777c9  895c2418             mov dword ptr [esp + 0x18], ebx
// 006777cd  89742414             mov dword ptr [esp + 0x14], esi
// 006777d1  84c0                 test al, al
// 006777d3  745a                 je 0x67782f
// 006777d5  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 006777d8  8b19                 mov ebx, dword ptr [ecx]
// 006777da  85f6                 test esi, esi
// 006777dc  7404                 je 0x6777e2
// 006777de  3bf6                 cmp esi, esi
// 006777e0  7406                 je 0x6777e8
// 006777e2  ff1560b79800         call dword ptr [0x98b760]
// 006777e8  3bfb                 cmp edi, ebx
// 006777ea  7532                 jne 0x67781e
// 006777ec  8b542424             mov edx, dword ptr [esp + 0x24]
// 006777f0  52                   push edx
// 006777f1  57                   push edi
// 006777f2  6a01                 push 1
// 006777f4  8d442420             lea eax, [esp + 0x20]
// 006777f8  50                   push eax
// 006777f9  8bcd                 mov ecx, ebp
// 006777fb  e880fdffff           call 0x677580
// 00677800  5f                   pop edi
// 00677801  8bc8                 mov ecx, eax
// 00677803  8b11                 mov edx, dword ptr [ecx]
// 00677805  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00677809  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067780c  5e                   pop esi
// 0067780d  5d                   pop ebp
// 0067780e  8910                 mov dword ptr [eax], edx
// 00677810  894804               mov dword ptr [eax + 4], ecx
// 00677813  c6400801             mov byte ptr [eax + 8], 1
// 00677817  5b                   pop ebx
// 00677818  83c40c               add esp, 0xc
// 0067781b  c20800               ret 8
// 0067781e  8d4c2414             lea ecx, [esp + 0x14]
// 00677822  e889f6ffff           call 0x676eb0
// 00677827  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0067782b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0067782f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00677833  52                   push edx
// 00677834  8d4b0c               lea ecx, [ebx + 0xc]
// 00677837  e8c4e30400           call 0x6c5c00
// 0067783c  84c0                 test al, al
// 0067783e  7412                 je 0x677852
// 00677840  8b442424             mov eax, dword ptr [esp + 0x24]
// 00677844  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00677848  50                   push eax
// 00677849  57                   push edi
// 0067784a  51                   push ecx
// 0067784b  8d542420             lea edx, [esp + 0x20]
// 0067784f  52                   push edx
// 00677850  eba7                 jmp 0x6777f9
// 00677852  8b442420             mov eax, dword ptr [esp + 0x20]
// 00677856  5f                   pop edi
// 00677857  8930                 mov dword ptr [eax], esi
// 00677859  5e                   pop esi
// 0067785a  5d                   pop ebp
// 0067785b  895804               mov dword ptr [eax + 4], ebx
// 0067785e  c6400800             mov byte ptr [eax + 8], 0
// 00677862  5b                   pop ebx
// 00677863  83c40c               add esp, 0xc
// 00677866  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
