// roc 2008-06 0057cc20  unit: RBX::VInstance::?$SignalDesc  size: 536 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057cc20
//
// 0057cc20  83ec14               sub esp, 0x14
// 0057cc23  56                   push esi
// 0057cc24  8bf1                 mov esi, ecx
// 0057cc26  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0057cc2a  57                   push edi
// 0057cc2b  7521                 jne 0x57cc4e
// 0057cc2d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057cc31  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0057cc34  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057cc38  50                   push eax
// 0057cc39  51                   push ecx
// 0057cc3a  6a01                 push 1
// 0057cc3c  57                   push edi
// 0057cc3d  8bce                 mov ecx, esi
// 0057cc3f  e8ecfcffff           call 0x57c930
// 0057cc44  8bc7                 mov eax, edi
// 0057cc46  5f                   pop edi
// 0057cc47  5e                   pop esi
// 0057cc48  83c414               add esp, 0x14
// 0057cc4b  c21000               ret 0x10
// 0057cc4e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057cc52  8b5618               mov edx, dword ptr [esi + 0x18]
// 0057cc55  8b3a                 mov edi, dword ptr [edx]
// 0057cc57  8b0e                 mov ecx, dword ptr [esi]
// 0057cc59  53                   push ebx
// 0057cc5a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0057cc60  85c0                 test eax, eax
// 0057cc62  7404                 je 0x57cc68
// 0057cc64  3bc1                 cmp eax, ecx
// 0057cc66  7406                 je 0x57cc6e
// 0057cc68  ffd3                 call ebx
// 0057cc6a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057cc6e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057cc72  3bd7                 cmp edx, edi
// 0057cc74  7536                 jne 0x57ccac
// 0057cc76  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057cc7a  83c20c               add edx, 0xc
// 0057cc7d  52                   push edx
// 0057cc7e  8bcf                 mov ecx, edi
// 0057cc80  e85b810100           call 0x594de0
// 0057cc85  84c0                 test al, al
// 0057cc87  0f8485010000         je 0x57ce12
// 0057cc8d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057cc91  57                   push edi
// 0057cc92  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057cc96  50                   push eax
// 0057cc97  6a01                 push 1
// 0057cc99  57                   push edi
// 0057cc9a  8bce                 mov ecx, esi
// 0057cc9c  e88ffcffff           call 0x57c930
// 0057cca1  5b                   pop ebx
// 0057cca2  8bc7                 mov eax, edi
// 0057cca4  5f                   pop edi
// 0057cca5  5e                   pop esi
// 0057cca6  83c414               add esp, 0x14
// 0057cca9  c21000               ret 0x10
// 0057ccac  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057ccaf  8b0e                 mov ecx, dword ptr [esi]
// 0057ccb1  85c0                 test eax, eax
// 0057ccb3  7404                 je 0x57ccb9
// 0057ccb5  3bc1                 cmp eax, ecx
// 0057ccb7  7406                 je 0x57ccbf
// 0057ccb9  ffd3                 call ebx
// 0057ccbb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057ccbf  3bd7                 cmp edx, edi
// 0057ccc1  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057ccc5  7538                 jne 0x57ccff
// 0057ccc7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0057ccca  8b4908               mov ecx, dword ptr [ecx + 8]
// 0057cccd  83c10c               add ecx, 0xc
// 0057ccd0  57                   push edi
// 0057ccd1  e80a810100           call 0x594de0
// 0057ccd6  84c0                 test al, al
// 0057ccd8  0f8434010000         je 0x57ce12
// 0057ccde  8b5618               mov edx, dword ptr [esi + 0x18]
// 0057cce1  8b4208               mov eax, dword ptr [edx + 8]
// 0057cce4  57                   push edi
// 0057cce5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057cce9  50                   push eax
// 0057ccea  6a00                 push 0
// 0057ccec  57                   push edi
// 0057cced  8bce                 mov ecx, esi
// 0057ccef  e83cfcffff           call 0x57c930
// 0057ccf4  5b                   pop ebx
// 0057ccf5  8bc7                 mov eax, edi
// 0057ccf7  5f                   pop edi
// 0057ccf8  5e                   pop esi
// 0057ccf9  83c414               add esp, 0x14
// 0057ccfc  c21000               ret 0x10
// 0057ccff  83c20c               add edx, 0xc
// 0057cd02  52                   push edx
// 0057cd03  8bcf                 mov ecx, edi
// 0057cd05  e8d6800100           call 0x594de0
// 0057cd0a  84c0                 test al, al
// 0057cd0c  7468                 je 0x57cd76
// 0057cd0e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057cd12  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057cd16  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057cd1a  8d4c240c             lea ecx, [esp + 0xc]
// 0057cd1e  89542410             mov dword ptr [esp + 0x10], edx
// 0057cd22  e819f2f2ff           call 0x4abf40
// 0057cd27  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057cd2b  57                   push edi
// 0057cd2c  8d4b0c               lea ecx, [ebx + 0xc]
// 0057cd2f  e8ac800100           call 0x594de0
// 0057cd34  84c0                 test al, al
// 0057cd36  743e                 je 0x57cd76
// 0057cd38  8b4308               mov eax, dword ptr [ebx + 8]
// 0057cd3b  80781900             cmp byte ptr [eax + 0x19], 0
// 0057cd3f  57                   push edi
// 0057cd40  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057cd44  7416                 je 0x57cd5c
// 0057cd46  53                   push ebx
// 0057cd47  6a00                 push 0
// 0057cd49  57                   push edi
// 0057cd4a  8bce                 mov ecx, esi
// 0057cd4c  e8dffbffff           call 0x57c930
// 0057cd51  5b                   pop ebx
// 0057cd52  8bc7                 mov eax, edi
// 0057cd54  5f                   pop edi
// 0057cd55  5e                   pop esi
// 0057cd56  83c414               add esp, 0x14
// 0057cd59  c21000               ret 0x10
// 0057cd5c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057cd60  51                   push ecx
// 0057cd61  6a01                 push 1
// 0057cd63  57                   push edi
// 0057cd64  8bce                 mov ecx, esi
// 0057cd66  e8c5fbffff           call 0x57c930
// 0057cd6b  5b                   pop ebx
// 0057cd6c  8bc7                 mov eax, edi
// 0057cd6e  5f                   pop edi
// 0057cd6f  5e                   pop esi
// 0057cd70  83c414               add esp, 0x14
// 0057cd73  c21000               ret 0x10
// 0057cd76  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057cd7a  57                   push edi
// 0057cd7b  83c10c               add ecx, 0xc
// 0057cd7e  e85d800100           call 0x594de0
// 0057cd83  84c0                 test al, al
// 0057cd85  0f8487000000         je 0x57ce12
// 0057cd8b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057cd8f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0057cd92  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057cd96  8954240c             mov dword ptr [esp + 0xc], edx
// 0057cd9a  8b16                 mov edx, dword ptr [esi]
// 0057cd9c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057cda0  8d4c240c             lea ecx, [esp + 0xc]
// 0057cda4  89442410             mov dword ptr [esp + 0x10], eax
// 0057cda8  89542414             mov dword ptr [esp + 0x14], edx
// 0057cdac  e89fa40300           call 0x5b7250
// 0057cdb1  8d442414             lea eax, [esp + 0x14]
// 0057cdb5  50                   push eax
// 0057cdb6  8d4c2410             lea ecx, [esp + 0x10]
// 0057cdba  e8e1fe0600           call 0x5ecca0
// 0057cdbf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057cdc3  84c0                 test al, al
// 0057cdc5  750f                 jne 0x57cdd6
// 0057cdc7  8d4b0c               lea ecx, [ebx + 0xc]
// 0057cdca  51                   push ecx
// 0057cdcb  8bcf                 mov ecx, edi
// 0057cdcd  e80e800100           call 0x594de0
// 0057cdd2  84c0                 test al, al
// 0057cdd4  743c                 je 0x57ce12
// 0057cdd6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057cdda  8b5008               mov edx, dword ptr [eax + 8]
// 0057cddd  807a1900             cmp byte ptr [edx + 0x19], 0
// 0057cde1  57                   push edi
// 0057cde2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057cde6  8bce                 mov ecx, esi
// 0057cde8  7414                 je 0x57cdfe
// 0057cdea  50                   push eax
// 0057cdeb  6a00                 push 0
// 0057cded  57                   push edi
// 0057cdee  e83dfbffff           call 0x57c930
// 0057cdf3  5b                   pop ebx
// 0057cdf4  8bc7                 mov eax, edi
// 0057cdf6  5f                   pop edi
// 0057cdf7  5e                   pop esi
// 0057cdf8  83c414               add esp, 0x14
// 0057cdfb  c21000               ret 0x10
// 0057cdfe  53                   push ebx
// 0057cdff  6a01                 push 1
// 0057ce01  57                   push edi
// 0057ce02  e829fbffff           call 0x57c930
// 0057ce07  5b                   pop ebx
// 0057ce08  8bc7                 mov eax, edi
// 0057ce0a  5f                   pop edi
// 0057ce0b  5e                   pop esi
// 0057ce0c  83c414               add esp, 0x14
// 0057ce0f  c21000               ret 0x10
// 0057ce12  57                   push edi
// 0057ce13  8d442418             lea eax, [esp + 0x18]
// 0057ce17  50                   push eax
// 0057ce18  8bce                 mov ecx, esi
// 0057ce1a  e811fdffff           call 0x57cb30
// 0057ce1f  8b10                 mov edx, dword ptr [eax]
// 0057ce21  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057ce25  5b                   pop ebx
// 0057ce26  8911                 mov dword ptr [ecx], edx
// 0057ce28  8b4004               mov eax, dword ptr [eax + 4]
// 0057ce2b  5f                   pop edi
// 0057ce2c  894104               mov dword ptr [ecx + 4], eax
// 0057ce2f  8bc1                 mov eax, ecx
// 0057ce31  5e                   pop esi
// 0057ce32  83c414               add esp, 0x14
// 0057ce35  c21000               ret 0x10
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBVInstanceHandle@RBX@@H@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
