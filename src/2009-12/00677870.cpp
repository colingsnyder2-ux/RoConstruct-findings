// roc 2009-12 00677870  unit: RBX::GlobalSettings  size: 536 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677870
//
// 00677870  83ec14               sub esp, 0x14
// 00677873  56                   push esi
// 00677874  8bf1                 mov esi, ecx
// 00677876  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0067787a  57                   push edi
// 0067787b  7521                 jne 0x67789e
// 0067787d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00677881  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00677884  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00677888  50                   push eax
// 00677889  51                   push ecx
// 0067788a  6a01                 push 1
// 0067788c  57                   push edi
// 0067788d  8bce                 mov ecx, esi
// 0067788f  e8ecfcffff           call 0x677580
// 00677894  8bc7                 mov eax, edi
// 00677896  5f                   pop edi
// 00677897  5e                   pop esi
// 00677898  83c414               add esp, 0x14
// 0067789b  c21000               ret 0x10
// 0067789e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006778a2  8b5618               mov edx, dword ptr [esi + 0x18]
// 006778a5  8b3a                 mov edi, dword ptr [edx]
// 006778a7  8b0e                 mov ecx, dword ptr [esi]
// 006778a9  53                   push ebx
// 006778aa  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 006778b0  85c0                 test eax, eax
// 006778b2  7404                 je 0x6778b8
// 006778b4  3bc1                 cmp eax, ecx
// 006778b6  7406                 je 0x6778be
// 006778b8  ffd3                 call ebx
// 006778ba  8b442428             mov eax, dword ptr [esp + 0x28]
// 006778be  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006778c2  3bd7                 cmp edx, edi
// 006778c4  7536                 jne 0x6778fc
// 006778c6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006778ca  83c20c               add edx, 0xc
// 006778cd  52                   push edx
// 006778ce  8bcf                 mov ecx, edi
// 006778d0  e82be30400           call 0x6c5c00
// 006778d5  84c0                 test al, al
// 006778d7  0f8485010000         je 0x677a62
// 006778dd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006778e1  57                   push edi
// 006778e2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006778e6  50                   push eax
// 006778e7  6a01                 push 1
// 006778e9  57                   push edi
// 006778ea  8bce                 mov ecx, esi
// 006778ec  e88ffcffff           call 0x677580
// 006778f1  5b                   pop ebx
// 006778f2  8bc7                 mov eax, edi
// 006778f4  5f                   pop edi
// 006778f5  5e                   pop esi
// 006778f6  83c414               add esp, 0x14
// 006778f9  c21000               ret 0x10
// 006778fc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006778ff  8b0e                 mov ecx, dword ptr [esi]
// 00677901  85c0                 test eax, eax
// 00677903  7404                 je 0x677909
// 00677905  3bc1                 cmp eax, ecx
// 00677907  7406                 je 0x67790f
// 00677909  ffd3                 call ebx
// 0067790b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0067790f  3bd7                 cmp edx, edi
// 00677911  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00677915  7538                 jne 0x67794f
// 00677917  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0067791a  8b4908               mov ecx, dword ptr [ecx + 8]
// 0067791d  83c10c               add ecx, 0xc
// 00677920  57                   push edi
// 00677921  e8dae20400           call 0x6c5c00
// 00677926  84c0                 test al, al
// 00677928  0f8434010000         je 0x677a62
// 0067792e  8b5618               mov edx, dword ptr [esi + 0x18]
// 00677931  8b4208               mov eax, dword ptr [edx + 8]
// 00677934  57                   push edi
// 00677935  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00677939  50                   push eax
// 0067793a  6a00                 push 0
// 0067793c  57                   push edi
// 0067793d  8bce                 mov ecx, esi
// 0067793f  e83cfcffff           call 0x677580
// 00677944  5b                   pop ebx
// 00677945  8bc7                 mov eax, edi
// 00677947  5f                   pop edi
// 00677948  5e                   pop esi
// 00677949  83c414               add esp, 0x14
// 0067794c  c21000               ret 0x10
// 0067794f  83c20c               add edx, 0xc
// 00677952  52                   push edx
// 00677953  8bcf                 mov ecx, edi
// 00677955  e8a6e20400           call 0x6c5c00
// 0067795a  84c0                 test al, al
// 0067795c  7468                 je 0x6779c6
// 0067795e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00677962  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00677966  894c240c             mov dword ptr [esp + 0xc], ecx
// 0067796a  8d4c240c             lea ecx, [esp + 0xc]
// 0067796e  89542410             mov dword ptr [esp + 0x10], edx
// 00677972  e839f5ffff           call 0x676eb0
// 00677977  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067797b  57                   push edi
// 0067797c  8d4b0c               lea ecx, [ebx + 0xc]
// 0067797f  e87ce20400           call 0x6c5c00
// 00677984  84c0                 test al, al
// 00677986  743e                 je 0x6779c6
// 00677988  8b4308               mov eax, dword ptr [ebx + 8]
// 0067798b  80781900             cmp byte ptr [eax + 0x19], 0
// 0067798f  57                   push edi
// 00677990  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00677994  7416                 je 0x6779ac
// 00677996  53                   push ebx
// 00677997  6a00                 push 0
// 00677999  57                   push edi
// 0067799a  8bce                 mov ecx, esi
// 0067799c  e8dffbffff           call 0x677580
// 006779a1  5b                   pop ebx
// 006779a2  8bc7                 mov eax, edi
// 006779a4  5f                   pop edi
// 006779a5  5e                   pop esi
// 006779a6  83c414               add esp, 0x14
// 006779a9  c21000               ret 0x10
// 006779ac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006779b0  51                   push ecx
// 006779b1  6a01                 push 1
// 006779b3  57                   push edi
// 006779b4  8bce                 mov ecx, esi
// 006779b6  e8c5fbffff           call 0x677580
// 006779bb  5b                   pop ebx
// 006779bc  8bc7                 mov eax, edi
// 006779be  5f                   pop edi
// 006779bf  5e                   pop esi
// 006779c0  83c414               add esp, 0x14
// 006779c3  c21000               ret 0x10
// 006779c6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006779ca  57                   push edi
// 006779cb  83c10c               add ecx, 0xc
// 006779ce  e82de20400           call 0x6c5c00
// 006779d3  84c0                 test al, al
// 006779d5  0f8487000000         je 0x677a62
// 006779db  8b542428             mov edx, dword ptr [esp + 0x28]
// 006779df  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006779e2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006779e6  8954240c             mov dword ptr [esp + 0xc], edx
// 006779ea  8b16                 mov edx, dword ptr [esi]
// 006779ec  894c2418             mov dword ptr [esp + 0x18], ecx
// 006779f0  8d4c240c             lea ecx, [esp + 0xc]
// 006779f4  89442410             mov dword ptr [esp + 0x10], eax
// 006779f8  89542414             mov dword ptr [esp + 0x14], edx
// 006779fc  e87f0becff           call 0x538580
// 00677a01  8d442414             lea eax, [esp + 0x14]
// 00677a05  50                   push eax
// 00677a06  8d4c2410             lea ecx, [esp + 0x10]
// 00677a0a  e85149f5ff           call 0x5cc360
// 00677a0f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00677a13  84c0                 test al, al
// 00677a15  750f                 jne 0x677a26
// 00677a17  8d4b0c               lea ecx, [ebx + 0xc]
// 00677a1a  51                   push ecx
// 00677a1b  8bcf                 mov ecx, edi
// 00677a1d  e8dee10400           call 0x6c5c00
// 00677a22  84c0                 test al, al
// 00677a24  743c                 je 0x677a62
// 00677a26  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00677a2a  8b5008               mov edx, dword ptr [eax + 8]
// 00677a2d  807a1900             cmp byte ptr [edx + 0x19], 0
// 00677a31  57                   push edi
// 00677a32  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00677a36  8bce                 mov ecx, esi
// 00677a38  7414                 je 0x677a4e
// 00677a3a  50                   push eax
// 00677a3b  6a00                 push 0
// 00677a3d  57                   push edi
// 00677a3e  e83dfbffff           call 0x677580
// 00677a43  5b                   pop ebx
// 00677a44  8bc7                 mov eax, edi
// 00677a46  5f                   pop edi
// 00677a47  5e                   pop esi
// 00677a48  83c414               add esp, 0x14
// 00677a4b  c21000               ret 0x10
// 00677a4e  53                   push ebx
// 00677a4f  6a01                 push 1
// 00677a51  57                   push edi
// 00677a52  e829fbffff           call 0x677580
// 00677a57  5b                   pop ebx
// 00677a58  8bc7                 mov eax, edi
// 00677a5a  5f                   pop edi
// 00677a5b  5e                   pop esi
// 00677a5c  83c414               add esp, 0x14
// 00677a5f  c21000               ret 0x10
// 00677a62  57                   push edi
// 00677a63  8d442418             lea eax, [esp + 0x18]
// 00677a67  50                   push eax
// 00677a68  8bce                 mov ecx, esi
// 00677a6a  e811fdffff           call 0x677780
// 00677a6f  8b10                 mov edx, dword ptr [eax]
// 00677a71  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00677a75  5b                   pop ebx
// 00677a76  8911                 mov dword ptr [ecx], edx
// 00677a78  8b4004               mov eax, dword ptr [eax + 4]
// 00677a7b  5f                   pop edi
// 00677a7c  894104               mov dword ptr [ecx + 4], eax
// 00677a7f  8bc1                 mov eax, ecx
// 00677a81  5e                   pop esi
// 00677a82  83c414               add esp, 0x14
// 00677a85  c21000               ret 0x10
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
