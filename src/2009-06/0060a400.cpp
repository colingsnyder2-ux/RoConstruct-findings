// roc 2009-06 0060a400  unit: RBX::GlobalSettings  size: 536 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060a400
//
// 0060a400  83ec14               sub esp, 0x14
// 0060a403  56                   push esi
// 0060a404  8bf1                 mov esi, ecx
// 0060a406  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0060a40a  57                   push edi
// 0060a40b  7521                 jne 0x60a42e
// 0060a40d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060a411  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0060a414  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060a418  50                   push eax
// 0060a419  51                   push ecx
// 0060a41a  6a01                 push 1
// 0060a41c  57                   push edi
// 0060a41d  8bce                 mov ecx, esi
// 0060a41f  e8ecfcffff           call 0x60a110
// 0060a424  8bc7                 mov eax, edi
// 0060a426  5f                   pop edi
// 0060a427  5e                   pop esi
// 0060a428  83c414               add esp, 0x14
// 0060a42b  c21000               ret 0x10
// 0060a42e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060a432  8b5618               mov edx, dword ptr [esi + 0x18]
// 0060a435  8b3a                 mov edi, dword ptr [edx]
// 0060a437  8b0e                 mov ecx, dword ptr [esi]
// 0060a439  53                   push ebx
// 0060a43a  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 0060a440  85c0                 test eax, eax
// 0060a442  7404                 je 0x60a448
// 0060a444  3bc1                 cmp eax, ecx
// 0060a446  7406                 je 0x60a44e
// 0060a448  ffd3                 call ebx
// 0060a44a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060a44e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0060a452  3bd7                 cmp edx, edi
// 0060a454  7536                 jne 0x60a48c
// 0060a456  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0060a45a  83c20c               add edx, 0xc
// 0060a45d  52                   push edx
// 0060a45e  8bcf                 mov ecx, edi
// 0060a460  e81b210400           call 0x64c580
// 0060a465  84c0                 test al, al
// 0060a467  0f8485010000         je 0x60a5f2
// 0060a46d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060a471  57                   push edi
// 0060a472  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060a476  50                   push eax
// 0060a477  6a01                 push 1
// 0060a479  57                   push edi
// 0060a47a  8bce                 mov ecx, esi
// 0060a47c  e88ffcffff           call 0x60a110
// 0060a481  5b                   pop ebx
// 0060a482  8bc7                 mov eax, edi
// 0060a484  5f                   pop edi
// 0060a485  5e                   pop esi
// 0060a486  83c414               add esp, 0x14
// 0060a489  c21000               ret 0x10
// 0060a48c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0060a48f  8b0e                 mov ecx, dword ptr [esi]
// 0060a491  85c0                 test eax, eax
// 0060a493  7404                 je 0x60a499
// 0060a495  3bc1                 cmp eax, ecx
// 0060a497  7406                 je 0x60a49f
// 0060a499  ffd3                 call ebx
// 0060a49b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0060a49f  3bd7                 cmp edx, edi
// 0060a4a1  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0060a4a5  7538                 jne 0x60a4df
// 0060a4a7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0060a4aa  8b4908               mov ecx, dword ptr [ecx + 8]
// 0060a4ad  83c10c               add ecx, 0xc
// 0060a4b0  57                   push edi
// 0060a4b1  e8ca200400           call 0x64c580
// 0060a4b6  84c0                 test al, al
// 0060a4b8  0f8434010000         je 0x60a5f2
// 0060a4be  8b5618               mov edx, dword ptr [esi + 0x18]
// 0060a4c1  8b4208               mov eax, dword ptr [edx + 8]
// 0060a4c4  57                   push edi
// 0060a4c5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060a4c9  50                   push eax
// 0060a4ca  6a00                 push 0
// 0060a4cc  57                   push edi
// 0060a4cd  8bce                 mov ecx, esi
// 0060a4cf  e83cfcffff           call 0x60a110
// 0060a4d4  5b                   pop ebx
// 0060a4d5  8bc7                 mov eax, edi
// 0060a4d7  5f                   pop edi
// 0060a4d8  5e                   pop esi
// 0060a4d9  83c414               add esp, 0x14
// 0060a4dc  c21000               ret 0x10
// 0060a4df  83c20c               add edx, 0xc
// 0060a4e2  52                   push edx
// 0060a4e3  8bcf                 mov ecx, edi
// 0060a4e5  e896200400           call 0x64c580
// 0060a4ea  84c0                 test al, al
// 0060a4ec  7468                 je 0x60a556
// 0060a4ee  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060a4f2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0060a4f6  894c240c             mov dword ptr [esp + 0xc], ecx
// 0060a4fa  8d4c240c             lea ecx, [esp + 0xc]
// 0060a4fe  89542410             mov dword ptr [esp + 0x10], edx
// 0060a502  e8a999edff           call 0x4e3eb0
// 0060a507  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0060a50b  57                   push edi
// 0060a50c  8d4b0c               lea ecx, [ebx + 0xc]
// 0060a50f  e86c200400           call 0x64c580
// 0060a514  84c0                 test al, al
// 0060a516  743e                 je 0x60a556
// 0060a518  8b4308               mov eax, dword ptr [ebx + 8]
// 0060a51b  80781900             cmp byte ptr [eax + 0x19], 0
// 0060a51f  57                   push edi
// 0060a520  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060a524  7416                 je 0x60a53c
// 0060a526  53                   push ebx
// 0060a527  6a00                 push 0
// 0060a529  57                   push edi
// 0060a52a  8bce                 mov ecx, esi
// 0060a52c  e8dffbffff           call 0x60a110
// 0060a531  5b                   pop ebx
// 0060a532  8bc7                 mov eax, edi
// 0060a534  5f                   pop edi
// 0060a535  5e                   pop esi
// 0060a536  83c414               add esp, 0x14
// 0060a539  c21000               ret 0x10
// 0060a53c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060a540  51                   push ecx
// 0060a541  6a01                 push 1
// 0060a543  57                   push edi
// 0060a544  8bce                 mov ecx, esi
// 0060a546  e8c5fbffff           call 0x60a110
// 0060a54b  5b                   pop ebx
// 0060a54c  8bc7                 mov eax, edi
// 0060a54e  5f                   pop edi
// 0060a54f  5e                   pop esi
// 0060a550  83c414               add esp, 0x14
// 0060a553  c21000               ret 0x10
// 0060a556  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0060a55a  57                   push edi
// 0060a55b  83c10c               add ecx, 0xc
// 0060a55e  e81d200400           call 0x64c580
// 0060a563  84c0                 test al, al
// 0060a565  0f8487000000         je 0x60a5f2
// 0060a56b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060a56f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0060a572  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060a576  8954240c             mov dword ptr [esp + 0xc], edx
// 0060a57a  8b16                 mov edx, dword ptr [esi]
// 0060a57c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0060a580  8d4c240c             lea ecx, [esp + 0xc]
// 0060a584  89442410             mov dword ptr [esp + 0x10], eax
// 0060a588  89542414             mov dword ptr [esp + 0x14], edx
// 0060a58c  e82f7d0100           call 0x6222c0
// 0060a591  8d442414             lea eax, [esp + 0x14]
// 0060a595  50                   push eax
// 0060a596  8d4c2410             lea ecx, [esp + 0x10]
// 0060a59a  e8018f0300           call 0x6434a0
// 0060a59f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0060a5a3  84c0                 test al, al
// 0060a5a5  750f                 jne 0x60a5b6
// 0060a5a7  8d4b0c               lea ecx, [ebx + 0xc]
// 0060a5aa  51                   push ecx
// 0060a5ab  8bcf                 mov ecx, edi
// 0060a5ad  e8ce1f0400           call 0x64c580
// 0060a5b2  84c0                 test al, al
// 0060a5b4  743c                 je 0x60a5f2
// 0060a5b6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060a5ba  8b5008               mov edx, dword ptr [eax + 8]
// 0060a5bd  807a1900             cmp byte ptr [edx + 0x19], 0
// 0060a5c1  57                   push edi
// 0060a5c2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060a5c6  8bce                 mov ecx, esi
// 0060a5c8  7414                 je 0x60a5de
// 0060a5ca  50                   push eax
// 0060a5cb  6a00                 push 0
// 0060a5cd  57                   push edi
// 0060a5ce  e83dfbffff           call 0x60a110
// 0060a5d3  5b                   pop ebx
// 0060a5d4  8bc7                 mov eax, edi
// 0060a5d6  5f                   pop edi
// 0060a5d7  5e                   pop esi
// 0060a5d8  83c414               add esp, 0x14
// 0060a5db  c21000               ret 0x10
// 0060a5de  53                   push ebx
// 0060a5df  6a01                 push 1
// 0060a5e1  57                   push edi
// 0060a5e2  e829fbffff           call 0x60a110
// 0060a5e7  5b                   pop ebx
// 0060a5e8  8bc7                 mov eax, edi
// 0060a5ea  5f                   pop edi
// 0060a5eb  5e                   pop esi
// 0060a5ec  83c414               add esp, 0x14
// 0060a5ef  c21000               ret 0x10
// 0060a5f2  57                   push edi
// 0060a5f3  8d442418             lea eax, [esp + 0x18]
// 0060a5f7  50                   push eax
// 0060a5f8  8bce                 mov ecx, esi
// 0060a5fa  e811fdffff           call 0x60a310
// 0060a5ff  8b10                 mov edx, dword ptr [eax]
// 0060a601  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060a605  5b                   pop ebx
// 0060a606  8911                 mov dword ptr [ecx], edx
// 0060a608  8b4004               mov eax, dword ptr [eax + 4]
// 0060a60b  5f                   pop edi
// 0060a60c  894104               mov dword ptr [ecx + 4], eax
// 0060a60f  8bc1                 mov eax, ecx
// 0060a611  5e                   pop esi
// 0060a612  83c414               add esp, 0x14
// 0060a615  c21000               ret 0x10
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
