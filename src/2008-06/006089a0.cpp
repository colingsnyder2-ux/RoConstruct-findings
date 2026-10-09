// roc 2008-06 006089a0  unit: RBX::VModelInstance::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006089a0
//
// 006089a0  56                   push esi
// 006089a1  8b742408             mov esi, dword ptr [esp + 8]
// 006089a5  57                   push edi
// 006089a6  8bf9                 mov edi, ecx
// 006089a8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006089ab  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006089ae  6a07                 push 7
// 006089b0  83c104               add ecx, 4
// 006089b3  6898058300           push 0x830598
// 006089b8  50                   push eax
// 006089b9  6a00                 push 0
// 006089bb  ff15f4248000         call dword ptr [0x8024f4]
// 006089c1  85c0                 test eax, eax
// 006089c3  0f8583000000         jne 0x608a4c
// 006089c9  8b0d38539700         mov ecx, dword ptr [0x975338]
// 006089cf  51                   push ecx
// 006089d0  8bce                 mov ecx, esi
// 006089d2  89442410             mov dword ptr [esp + 0x10], eax
// 006089d6  e8d538f7ff           call 0x57c2b0
// 006089db  85c0                 test eax, eax
// 006089dd  740d                 je 0x6089ec
// 006089df  8d54240c             lea edx, [esp + 0xc]
// 006089e3  52                   push edx
// 006089e4  8d4808               lea ecx, [eax + 8]
// 006089e7  e87439f7ff           call 0x57c360
// 006089ec  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006089f0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006089f3  6a04                 push 4
// 006089f5  83c104               add ecx, 4
// 006089f8  68ec298300           push 0x8329ec
// 006089fd  50                   push eax
// 006089fe  6a00                 push 0
// 00608a00  ff15f4248000         call dword ptr [0x8024f4]
// 00608a06  85c0                 test eax, eax
// 00608a08  7512                 jne 0x608a1c
// 00608a0a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00608a0e  51                   push ecx
// 00608a0f  56                   push esi
// 00608a10  8bcf                 mov ecx, edi
// 00608a12  e809eff4ff           call 0x557920
// 00608a17  5f                   pop edi
// 00608a18  5e                   pop esi
// 00608a19  c20800               ret 8
// 00608a1c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00608a20  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00608a23  6a04                 push 4
// 00608a25  83c104               add ecx, 4
// 00608a28  6884058300           push 0x830584
// 00608a2d  52                   push edx
// 00608a2e  6a00                 push 0
// 00608a30  ff15f4248000         call dword ptr [0x8024f4]
// 00608a36  85c0                 test eax, eax
// 00608a38  7512                 jne 0x608a4c
// 00608a3a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00608a3e  50                   push eax
// 00608a3f  56                   push esi
// 00608a40  8bcf                 mov ecx, edi
// 00608a42  e8d9eef4ff           call 0x557920
// 00608a47  5f                   pop edi
// 00608a48  5e                   pop esi
// 00608a49  c20800               ret 8
// 00608a4c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00608a50  51                   push ecx
// 00608a51  56                   push esi
// 00608a52  8bcf                 mov ecx, edi
// 00608a54  e81707f5ff           call 0x559170
// 00608a59  5f                   pop edi
// 00608a5a  5e                   pop esi
// 00608a5b  c20800               ret 8
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?readProperty@PVInstance@RBX@@MAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
