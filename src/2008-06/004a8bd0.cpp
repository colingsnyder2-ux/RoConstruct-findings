// from server: 99% by colin
// roc 2008-06 00498300  unit: RBX::VInstance::?$NonFactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498300
//
// 00498300  83ec0c               sub esp, 0xc
// 00498303  53                   push ebx
// 00498304  55                   push ebp
// 00498305  56                   push esi
// 00498306  8be9                 mov ebp, ecx
// 00498308  57                   push edi
// 00498309  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0049830c  8b7704               mov esi, dword ptr [edi + 4]
// 0049830f  807e1900             cmp byte ptr [esi + 0x19], 0
// 00498313  b001                 mov al, 1
// 00498315  88442410             mov byte ptr [esp + 0x10], al
// 00498319  7529                 jne 0x498344
// 0049831b  eb03                 jmp 0x498320
// 0049831d  8d4900               lea ecx, [ecx]
// 00498320  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00498324  8d460c               lea eax, [esi + 0xc]
// 00498327  50                   push eax
// 00498328  8bfe                 mov edi, esi
// 0049832a  e8e1fe1000           call 0x5a8210
// 0049832f  88442410             mov byte ptr [esp + 0x10], al
// 00498333  84c0                 test al, al
// 00498335  7404                 je 0x49833b
// 00498337  8b36                 mov esi, dword ptr [esi]
// 00498339  eb03                 jmp 0x49833e
// 0049833b  8b7608               mov esi, dword ptr [esi + 8]
// 0049833e  807e1900             cmp byte ptr [esi + 0x19], 0
// 00498342  74dc                 je 0x498320
// 00498344  8b7500               mov esi, dword ptr [ebp]
// 00498347  8bdf                 mov ebx, edi
// 00498349  895c2418             mov dword ptr [esp + 0x18], ebx
// 0049834d  89742414             mov dword ptr [esp + 0x14], esi
// 00498351  84c0                 test al, al
// 00498353  745a                 je 0x4983af
// 00498355  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00498358  8b19                 mov ebx, dword ptr [ecx]
// 0049835a  85f6                 test esi, esi
// 0049835c  7404                 je 0x498362
// 0049835e  3bf6                 cmp esi, esi
// 00498360  7406                 je 0x498368
// 00498362  ff1590288000         call dword ptr [0x802890]
// 00498368  3bfb                 cmp edi, ebx
// 0049836a  7532                 jne 0x49839e
// 0049836c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00498370  52                   push edx
// 00498371  57                   push edi
// 00498372  6a01                 push 1
// 00498374  8d442420             lea eax, [esp + 0x20]
// 00498378  50                   push eax
// 00498379  8bcd                 mov ecx, ebp
// 0049837b  e880f5ffff           call 0x497900
// 00498380  5f                   pop edi
// 00498381  8bc8                 mov ecx, eax
// 00498383  8b11                 mov edx, dword ptr [ecx]
// 00498385  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00498389  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049838c  5e                   pop esi
// 0049838d  5d                   pop ebp
// 0049838e  8910                 mov dword ptr [eax], edx
// 00498390  894804               mov dword ptr [eax + 4], ecx
// 00498393  c6400801             mov byte ptr [eax + 8], 1
// 00498397  5b                   pop ebx
// 00498398  83c40c               add esp, 0xc
// 0049839b  c20800               ret 8
// 0049839e  8d4c2414             lea ecx, [esp + 0x14]
// 004983a2  e8993b0100           call 0x4abf40
// 004983a7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004983ab  8b742414             mov esi, dword ptr [esp + 0x14]
// 004983af  8b542424             mov edx, dword ptr [esp + 0x24]
// 004983b3  52                   push edx
// 004983b4  8d4b0c               lea ecx, [ebx + 0xc]
// 004983b7  e854fe1000           call 0x5a8210
// 004983bc  84c0                 test al, al
// 004983be  7412                 je 0x4983d2
// 004983c0  8b442424             mov eax, dword ptr [esp + 0x24]
// 004983c4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004983c8  50                   push eax
// 004983c9  57                   push edi
// 004983ca  51                   push ecx
// 004983cb  8d542420             lea edx, [esp + 0x20]
// 004983cf  52                   push edx
// 004983d0  eba7                 jmp 0x498379
// 004983d2  8b442420             mov eax, dword ptr [esp + 0x20]
// 004983d6  5f                   pop edi
// 004983d7  8930                 mov dword ptr [eax], esi
// 004983d9  5e                   pop esi
// 004983da  5d                   pop ebp
// 004983db  895804               mov dword ptr [eax + 4], ebx
// 004983de  c6400800             mov byte ptr [eax + 8], 0
// 004983e2  5b                   pop ebx
// 004983e3  83c40c               add esp, 0xc
// 004983e6  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
