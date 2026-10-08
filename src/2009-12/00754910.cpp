// roc 2009-12 00754910  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00754910
//
// 00754910  56                   push esi
// 00754911  8bf1                 mov esi, ecx
// 00754913  8b4604               mov eax, dword ptr [esi + 4]
// 00754916  3b4608               cmp eax, dword ptr [esi + 8]
// 00754919  8b0e                 mov ecx, dword ptr [esi]
// 0075491b  7d13                 jge 0x754930
// 0075491d  03c8                 add ecx, eax
// 0075491f  7408                 je 0x754929
// 00754921  8b442408             mov eax, dword ptr [esp + 8]
// 00754925  8a10                 mov dl, byte ptr [eax]
// 00754927  8811                 mov byte ptr [ecx], dl
// 00754929  ff4604               inc dword ptr [esi + 4]
// 0075492c  5e                   pop esi
// 0075492d  c20400               ret 4
// 00754930  57                   push edi
// 00754931  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00754935  3bf9                 cmp edi, ecx
// 00754937  721d                 jb 0x754956
// 00754939  03c8                 add ecx, eax
// 0075493b  3bf9                 cmp edi, ecx
// 0075493d  7317                 jae 0x754956
// 0075493f  8a07                 mov al, byte ptr [edi]
// 00754941  8d4c240c             lea ecx, [esp + 0xc]
// 00754945  51                   push ecx
// 00754946  8bce                 mov ecx, esi
// 00754948  88442410             mov byte ptr [esp + 0x10], al
// 0075494c  e8bfffffff           call 0x754910
// 00754951  5f                   pop edi
// 00754952  5e                   pop esi
// 00754953  c20400               ret 4
// 00754956  6a00                 push 0
// 00754958  40                   inc eax
// 00754959  50                   push eax
// 0075495a  8bce                 mov ecx, esi
// 0075495c  e88f21d8ff           call 0x4d6af0
// 00754961  8a0f                 mov cl, byte ptr [edi]
// 00754963  8b5604               mov edx, dword ptr [esi + 4]
// 00754966  8b06                 mov eax, dword ptr [esi]
// 00754968  5f                   pop edi
// 00754969  884c02ff             mov byte ptr [edx + eax - 1], cl
// 0075496d  5e                   pop esi
// 0075496e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
