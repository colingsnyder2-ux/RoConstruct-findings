// from server: 100% by auto
// roc 2009-06 0049d8d0  unit: G3D::VARArea  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049d8d0
//
// 0049d8d0  6aff                 push -1
// 0049d8d2  68146f8500           push 0x856f14
// 0049d8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0049d8dd  50                   push eax
// 0049d8de  64892500000000       mov dword ptr fs:[0], esp
// 0049d8e5  83ec08               sub esp, 8
// 0049d8e8  56                   push esi
// 0049d8e9  8bf1                 mov esi, ecx
// 0049d8eb  8b4604               mov eax, dword ptr [esi + 4]
// 0049d8ee  3b4608               cmp eax, dword ptr [esi + 8]
// 0049d8f1  8b0e                 mov ecx, dword ptr [esi]
// 0049d8f3  89742404             mov dword ptr [esp + 4], esi
// 0049d8f7  7d3a                 jge 0x49d933
// 0049d8f9  8d0c81               lea ecx, [ecx + eax*4]
// 0049d8fc  894c2408             mov dword ptr [esp + 8], ecx
// 0049d900  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0049d908  85c9                 test ecx, ecx
// 0049d90a  7412                 je 0x49d91e
// 0049d90c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049d910  c70100000000         mov dword ptr [ecx], 0
// 0049d916  8b02                 mov eax, dword ptr [edx]
// 0049d918  50                   push eax
// 0049d919  e8421f0000           call 0x49f860
// 0049d91e  ff4604               inc dword ptr [esi + 4]
// 0049d921  5e                   pop esi
// 0049d922  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049d926  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d92d  83c414               add esp, 0x14
// 0049d930  c20400               ret 4
// 0049d933  57                   push edi
// 0049d934  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0049d938  3bf9                 cmp edi, ecx
// 0049d93a  0f8281000000         jb 0x49d9c1
// 0049d940  8d0c81               lea ecx, [ecx + eax*4]
// 0049d943  3bf9                 cmp edi, ecx
// 0049d945  737a                 jae 0x49d9c1
// 0049d947  8b3f                 mov edi, dword ptr [edi]
// 0049d949  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0049d951  85ff                 test edi, edi
// 0049d953  740e                 je 0x49d963
// 0049d955  8d4704               lea eax, [edi + 4]
// 0049d958  50                   push eax
// 0049d959  897c2424             mov dword ptr [esp + 0x24], edi
// 0049d95d  ff15d0e18900         call dword ptr [0x89e1d0]
// 0049d963  8d542420             lea edx, [esp + 0x20]
// 0049d967  52                   push edx
// 0049d968  8bce                 mov ecx, esi
// 0049d96a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0049d972  e859ffffff           call 0x49d8d0
// 0049d977  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049d97b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0049d983  85c0                 test eax, eax
// 0049d985  7456                 je 0x49d9dd
// 0049d987  83c004               add eax, 4
// 0049d98a  50                   push eax
// 0049d98b  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049d991  85c0                 test eax, eax
// 0049d993  7548                 jne 0x49d9dd
// 0049d995  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049d999  e8e273faff           call 0x444d80
// 0049d99e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049d9a2  85c9                 test ecx, ecx
// 0049d9a4  7437                 je 0x49d9dd
// 0049d9a6  8b01                 mov eax, dword ptr [ecx]
// 0049d9a8  8b10                 mov edx, dword ptr [eax]
// 0049d9aa  6a01                 push 1
// 0049d9ac  ffd2                 call edx
// 0049d9ae  5f                   pop edi
// 0049d9af  5e                   pop esi
// 0049d9b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049d9b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d9bb  83c414               add esp, 0x14
// 0049d9be  c20400               ret 4
// 0049d9c1  6a00                 push 0
// 0049d9c3  40                   inc eax
// 0049d9c4  50                   push eax
// 0049d9c5  8bce                 mov ecx, esi
// 0049d9c7  e864fdffff           call 0x49d730
// 0049d9cc  8b07                 mov eax, dword ptr [edi]
// 0049d9ce  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049d9d1  8b16                 mov edx, dword ptr [esi]
// 0049d9d3  50                   push eax
// 0049d9d4  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 0049d9d8  e8831e0000           call 0x49f860
// 0049d9dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049d9e1  5f                   pop edi
// 0049d9e2  5e                   pop esi
// 0049d9e3  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d9ea  83c414               add esp, 0x14
// 0049d9ed  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
