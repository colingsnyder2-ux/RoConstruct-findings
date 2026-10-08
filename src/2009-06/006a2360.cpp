// from server: 100% by auto
// roc 2009-06 006a2360  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a2360
//
// 006a2360  56                   push esi
// 006a2361  8bf1                 mov esi, ecx
// 006a2363  8b4604               mov eax, dword ptr [esi + 4]
// 006a2366  3b4608               cmp eax, dword ptr [esi + 8]
// 006a2369  8b0e                 mov ecx, dword ptr [esi]
// 006a236b  7d13                 jge 0x6a2380
// 006a236d  03c8                 add ecx, eax
// 006a236f  7408                 je 0x6a2379
// 006a2371  8b442408             mov eax, dword ptr [esp + 8]
// 006a2375  8a10                 mov dl, byte ptr [eax]
// 006a2377  8811                 mov byte ptr [ecx], dl
// 006a2379  ff4604               inc dword ptr [esi + 4]
// 006a237c  5e                   pop esi
// 006a237d  c20400               ret 4
// 006a2380  57                   push edi
// 006a2381  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a2385  3bf9                 cmp edi, ecx
// 006a2387  721d                 jb 0x6a23a6
// 006a2389  03c8                 add ecx, eax
// 006a238b  3bf9                 cmp edi, ecx
// 006a238d  7317                 jae 0x6a23a6
// 006a238f  8a07                 mov al, byte ptr [edi]
// 006a2391  8d4c240c             lea ecx, [esp + 0xc]
// 006a2395  51                   push ecx
// 006a2396  8bce                 mov ecx, esi
// 006a2398  88442410             mov byte ptr [esp + 0x10], al
// 006a239c  e8bfffffff           call 0x6a2360
// 006a23a1  5f                   pop edi
// 006a23a2  5e                   pop esi
// 006a23a3  c20400               ret 4
// 006a23a6  6a00                 push 0
// 006a23a8  40                   inc eax
// 006a23a9  50                   push eax
// 006a23aa  8bce                 mov ecx, esi
// 006a23ac  e80f7ce0ff           call 0x4a9fc0
// 006a23b1  8a0f                 mov cl, byte ptr [edi]
// 006a23b3  8b5604               mov edx, dword ptr [esi + 4]
// 006a23b6  8b06                 mov eax, dword ptr [esi]
// 006a23b8  5f                   pop edi
// 006a23b9  884c02ff             mov byte ptr [edx + eax - 1], cl
// 006a23bd  5e                   pop esi
// 006a23be  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
