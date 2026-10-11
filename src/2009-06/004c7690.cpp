// roc 2009-06 004c7690  unit: RBX::VInstance::?$NonFactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c7690
//
// 004c7690  83ec0c               sub esp, 0xc
// 004c7693  53                   push ebx
// 004c7694  55                   push ebp
// 004c7695  56                   push esi
// 004c7696  8be9                 mov ebp, ecx
// 004c7698  57                   push edi
// 004c7699  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 004c769c  8b7704               mov esi, dword ptr [edi + 4]
// 004c769f  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c76a3  b001                 mov al, 1
// 004c76a5  88442410             mov byte ptr [esp + 0x10], al
// 004c76a9  7529                 jne 0x4c76d4
// 004c76ab  eb03                 jmp 0x4c76b0
// 004c76ad  8d4900               lea ecx, [ecx]
// 004c76b0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c76b4  8d460c               lea eax, [esi + 0xc]
// 004c76b7  50                   push eax
// 004c76b8  8bfe                 mov edi, esi
// 004c76ba  e871b51600           call 0x632c30
// 004c76bf  88442410             mov byte ptr [esp + 0x10], al
// 004c76c3  84c0                 test al, al
// 004c76c5  7404                 je 0x4c76cb
// 004c76c7  8b36                 mov esi, dword ptr [esi]
// 004c76c9  eb03                 jmp 0x4c76ce
// 004c76cb  8b7608               mov esi, dword ptr [esi + 8]
// 004c76ce  807e1900             cmp byte ptr [esi + 0x19], 0
// 004c76d2  74dc                 je 0x4c76b0
// 004c76d4  8b7500               mov esi, dword ptr [ebp]
// 004c76d7  8bdf                 mov ebx, edi
// 004c76d9  895c2418             mov dword ptr [esp + 0x18], ebx
// 004c76dd  89742414             mov dword ptr [esp + 0x14], esi
// 004c76e1  84c0                 test al, al
// 004c76e3  745a                 je 0x4c773f
// 004c76e5  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 004c76e8  8b19                 mov ebx, dword ptr [ecx]
// 004c76ea  85f6                 test esi, esi
// 004c76ec  7404                 je 0x4c76f2
// 004c76ee  3bf6                 cmp esi, esi
// 004c76f0  7406                 je 0x4c76f8
// 004c76f2  ff15ace98900         call dword ptr [0x89e9ac]
// 004c76f8  3bfb                 cmp edi, ebx
// 004c76fa  7532                 jne 0x4c772e
// 004c76fc  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c7700  52                   push edx
// 004c7701  57                   push edi
// 004c7702  6a01                 push 1
// 004c7704  8d442420             lea eax, [esp + 0x20]
// 004c7708  50                   push eax
// 004c7709  8bcd                 mov ecx, ebp
// 004c770b  e8f0f3ffff           call 0x4c6b00
// 004c7710  5f                   pop edi
// 004c7711  8bc8                 mov ecx, eax
// 004c7713  8b11                 mov edx, dword ptr [ecx]
// 004c7715  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c7719  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c771c  5e                   pop esi
// 004c771d  5d                   pop ebp
// 004c771e  8910                 mov dword ptr [eax], edx
// 004c7720  894804               mov dword ptr [eax + 4], ecx
// 004c7723  c6400801             mov byte ptr [eax + 8], 1
// 004c7727  5b                   pop ebx
// 004c7728  83c40c               add esp, 0xc
// 004c772b  c20800               ret 8
// 004c772e  8d4c2414             lea ecx, [esp + 0x14]
// 004c7732  e879c70100           call 0x4e3eb0
// 004c7737  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004c773b  8b742414             mov esi, dword ptr [esp + 0x14]
// 004c773f  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c7743  52                   push edx
// 004c7744  8d4b0c               lea ecx, [ebx + 0xc]
// 004c7747  e8e4b41600           call 0x632c30
// 004c774c  84c0                 test al, al
// 004c774e  7412                 je 0x4c7762
// 004c7750  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c7754  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c7758  50                   push eax
// 004c7759  57                   push edi
// 004c775a  51                   push ecx
// 004c775b  8d542420             lea edx, [esp + 0x20]
// 004c775f  52                   push edx
// 004c7760  eba7                 jmp 0x4c7709
// 004c7762  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c7766  5f                   pop edi
// 004c7767  8930                 mov dword ptr [eax], esi
// 004c7769  5e                   pop esi
// 004c776a  5d                   pop ebp
// 004c776b  895804               mov dword ptr [eax + 4], ebx
// 004c776e  c6400800             mov byte ptr [eax + 8], 0
// 004c7772  5b                   pop ebx
// 004c7773  83c40c               add esp, 0xc
// 004c7776  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
