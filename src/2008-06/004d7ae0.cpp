// from server: 100% by auto
// roc 2008-06 004d7ae0  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7ae0
//
// 004d7ae0  6aff                 push -1
// 004d7ae2  68e4487c00           push 0x7c48e4
// 004d7ae7  64a100000000         mov eax, dword ptr fs:[0]
// 004d7aed  50                   push eax
// 004d7aee  64892500000000       mov dword ptr fs:[0], esp
// 004d7af5  83ec08               sub esp, 8
// 004d7af8  56                   push esi
// 004d7af9  8bf1                 mov esi, ecx
// 004d7afb  8b4604               mov eax, dword ptr [esi + 4]
// 004d7afe  3b4608               cmp eax, dword ptr [esi + 8]
// 004d7b01  8b0e                 mov ecx, dword ptr [esi]
// 004d7b03  89742404             mov dword ptr [esp + 4], esi
// 004d7b07  7d3a                 jge 0x4d7b43
// 004d7b09  8d0c81               lea ecx, [ecx + eax*4]
// 004d7b0c  894c2408             mov dword ptr [esp + 8], ecx
// 004d7b10  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004d7b18  85c9                 test ecx, ecx
// 004d7b1a  7412                 je 0x4d7b2e
// 004d7b1c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d7b20  c70100000000         mov dword ptr [ecx], 0
// 004d7b26  8b02                 mov eax, dword ptr [edx]
// 004d7b28  50                   push eax
// 004d7b29  e872140c00           call 0x598fa0
// 004d7b2e  ff4604               inc dword ptr [esi + 4]
// 004d7b31  5e                   pop esi
// 004d7b32  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d7b36  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7b3d  83c414               add esp, 0x14
// 004d7b40  c20400               ret 4
// 004d7b43  57                   push edi
// 004d7b44  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004d7b48  3bf9                 cmp edi, ecx
// 004d7b4a  0f8281000000         jb 0x4d7bd1
// 004d7b50  8d0c81               lea ecx, [ecx + eax*4]
// 004d7b53  3bf9                 cmp edi, ecx
// 004d7b55  737a                 jae 0x4d7bd1
// 004d7b57  8b3f                 mov edi, dword ptr [edi]
// 004d7b59  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d7b61  85ff                 test edi, edi
// 004d7b63  740e                 je 0x4d7b73
// 004d7b65  8d4704               lea eax, [edi + 4]
// 004d7b68  50                   push eax
// 004d7b69  897c2424             mov dword ptr [esp + 0x24], edi
// 004d7b6d  ff15b0218000         call dword ptr [0x8021b0]
// 004d7b73  8d542420             lea edx, [esp + 0x20]
// 004d7b77  52                   push edx
// 004d7b78  8bce                 mov ecx, esi
// 004d7b7a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004d7b82  e859ffffff           call 0x4d7ae0
// 004d7b87  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d7b8b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004d7b93  85c0                 test eax, eax
// 004d7b95  7456                 je 0x4d7bed
// 004d7b97  83c004               add eax, 4
// 004d7b9a  50                   push eax
// 004d7b9b  ff15ac218000         call dword ptr [0x8021ac]
// 004d7ba1  85c0                 test eax, eax
// 004d7ba3  7548                 jne 0x4d7bed
// 004d7ba5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d7ba9  e8e231f8ff           call 0x45ad90
// 004d7bae  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d7bb2  85c9                 test ecx, ecx
// 004d7bb4  7437                 je 0x4d7bed
// 004d7bb6  8b01                 mov eax, dword ptr [ecx]
// 004d7bb8  8b10                 mov edx, dword ptr [eax]
// 004d7bba  6a01                 push 1
// 004d7bbc  ffd2                 call edx
// 004d7bbe  5f                   pop edi
// 004d7bbf  5e                   pop esi
// 004d7bc0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d7bc4  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7bcb  83c414               add esp, 0x14
// 004d7bce  c20400               ret 4
// 004d7bd1  6a00                 push 0
// 004d7bd3  40                   inc eax
// 004d7bd4  50                   push eax
// 004d7bd5  8bce                 mov ecx, esi
// 004d7bd7  e8b4fcffff           call 0x4d7890
// 004d7bdc  8b07                 mov eax, dword ptr [edi]
// 004d7bde  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d7be1  8b16                 mov edx, dword ptr [esi]
// 004d7be3  50                   push eax
// 004d7be4  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004d7be8  e8b3130c00           call 0x598fa0
// 004d7bed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d7bf1  5f                   pop edi
// 004d7bf2  5e                   pop esi
// 004d7bf3  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7bfa  83c414               add esp, 0x14
// 004d7bfd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
