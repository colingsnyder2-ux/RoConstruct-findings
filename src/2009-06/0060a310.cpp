// roc 2009-06 0060a310  unit: RBX::GlobalSettings  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060a310
//
// 0060a310  83ec0c               sub esp, 0xc
// 0060a313  53                   push ebx
// 0060a314  55                   push ebp
// 0060a315  56                   push esi
// 0060a316  8be9                 mov ebp, ecx
// 0060a318  57                   push edi
// 0060a319  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0060a31c  8b7704               mov esi, dword ptr [edi + 4]
// 0060a31f  807e1900             cmp byte ptr [esi + 0x19], 0
// 0060a323  b001                 mov al, 1
// 0060a325  88442410             mov byte ptr [esp + 0x10], al
// 0060a329  7529                 jne 0x60a354
// 0060a32b  eb03                 jmp 0x60a330
// 0060a32d  8d4900               lea ecx, [ecx]
// 0060a330  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060a334  8d460c               lea eax, [esi + 0xc]
// 0060a337  50                   push eax
// 0060a338  8bfe                 mov edi, esi
// 0060a33a  e841220400           call 0x64c580
// 0060a33f  88442410             mov byte ptr [esp + 0x10], al
// 0060a343  84c0                 test al, al
// 0060a345  7404                 je 0x60a34b
// 0060a347  8b36                 mov esi, dword ptr [esi]
// 0060a349  eb03                 jmp 0x60a34e
// 0060a34b  8b7608               mov esi, dword ptr [esi + 8]
// 0060a34e  807e1900             cmp byte ptr [esi + 0x19], 0
// 0060a352  74dc                 je 0x60a330
// 0060a354  8b7500               mov esi, dword ptr [ebp]
// 0060a357  8bdf                 mov ebx, edi
// 0060a359  895c2418             mov dword ptr [esp + 0x18], ebx
// 0060a35d  89742414             mov dword ptr [esp + 0x14], esi
// 0060a361  84c0                 test al, al
// 0060a363  745a                 je 0x60a3bf
// 0060a365  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0060a368  8b19                 mov ebx, dword ptr [ecx]
// 0060a36a  85f6                 test esi, esi
// 0060a36c  7404                 je 0x60a372
// 0060a36e  3bf6                 cmp esi, esi
// 0060a370  7406                 je 0x60a378
// 0060a372  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a378  3bfb                 cmp edi, ebx
// 0060a37a  7532                 jne 0x60a3ae
// 0060a37c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0060a380  52                   push edx
// 0060a381  57                   push edi
// 0060a382  6a01                 push 1
// 0060a384  8d442420             lea eax, [esp + 0x20]
// 0060a388  50                   push eax
// 0060a389  8bcd                 mov ecx, ebp
// 0060a38b  e880fdffff           call 0x60a110
// 0060a390  5f                   pop edi
// 0060a391  8bc8                 mov ecx, eax
// 0060a393  8b11                 mov edx, dword ptr [ecx]
// 0060a395  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060a399  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060a39c  5e                   pop esi
// 0060a39d  5d                   pop ebp
// 0060a39e  8910                 mov dword ptr [eax], edx
// 0060a3a0  894804               mov dword ptr [eax + 4], ecx
// 0060a3a3  c6400801             mov byte ptr [eax + 8], 1
// 0060a3a7  5b                   pop ebx
// 0060a3a8  83c40c               add esp, 0xc
// 0060a3ab  c20800               ret 8
// 0060a3ae  8d4c2414             lea ecx, [esp + 0x14]
// 0060a3b2  e8f99aedff           call 0x4e3eb0
// 0060a3b7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0060a3bb  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060a3bf  8b542424             mov edx, dword ptr [esp + 0x24]
// 0060a3c3  52                   push edx
// 0060a3c4  8d4b0c               lea ecx, [ebx + 0xc]
// 0060a3c7  e8b4210400           call 0x64c580
// 0060a3cc  84c0                 test al, al
// 0060a3ce  7412                 je 0x60a3e2
// 0060a3d0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060a3d4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060a3d8  50                   push eax
// 0060a3d9  57                   push edi
// 0060a3da  51                   push ecx
// 0060a3db  8d542420             lea edx, [esp + 0x20]
// 0060a3df  52                   push edx
// 0060a3e0  eba7                 jmp 0x60a389
// 0060a3e2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060a3e6  5f                   pop edi
// 0060a3e7  8930                 mov dword ptr [eax], esi
// 0060a3e9  5e                   pop esi
// 0060a3ea  5d                   pop ebp
// 0060a3eb  895804               mov dword ptr [eax + 4], ebx
// 0060a3ee  c6400800             mov byte ptr [eax + 8], 0
// 0060a3f2  5b                   pop ebx
// 0060a3f3  83c40c               add esp, 0xc
// 0060a3f6  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
