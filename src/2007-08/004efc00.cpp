// roc 2007-08 004efc00  unit: RBX::Render::VChunk::?$WeakReferenceCountedPointer  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004efc00
//
// 004efc00  6aff                 push -1
// 004efc02  68f4d37400           push 0x74d3f4
// 004efc07  64a100000000         mov eax, dword ptr fs:[0]
// 004efc0d  50                   push eax
// 004efc0e  83ec08               sub esp, 8
// 004efc11  56                   push esi
// 004efc12  57                   push edi
// 004efc13  a188518b00           mov eax, dword ptr [0x8b5188]
// 004efc18  33c4                 xor eax, esp
// 004efc1a  50                   push eax
// 004efc1b  8d442414             lea eax, [esp + 0x14]
// 004efc1f  64a300000000         mov dword ptr fs:[0], eax
// 004efc25  8bf1                 mov esi, ecx
// 004efc27  8974240c             mov dword ptr [esp + 0xc], esi
// 004efc2b  8b4604               mov eax, dword ptr [esi + 4]
// 004efc2e  3b4608               cmp eax, dword ptr [esi + 8]
// 004efc31  8b0e                 mov ecx, dword ptr [esi]
// 004efc33  7d3d                 jge 0x4efc72
// 004efc35  8d0c81               lea ecx, [ecx + eax*4]
// 004efc38  894c2410             mov dword ptr [esp + 0x10], ecx
// 004efc3c  85c9                 test ecx, ecx
// 004efc3e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004efc46  7412                 je 0x4efc5a
// 004efc48  8b542424             mov edx, dword ptr [esp + 0x24]
// 004efc4c  c70100000000         mov dword ptr [ecx], 0
// 004efc52  8b02                 mov eax, dword ptr [edx]
// 004efc54  50                   push eax
// 004efc55  e81653f8ff           call 0x474f70
// 004efc5a  83460401             add dword ptr [esi + 4], 1
// 004efc5e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004efc62  64890d00000000       mov dword ptr fs:[0], ecx
// 004efc69  59                   pop ecx
// 004efc6a  5f                   pop edi
// 004efc6b  5e                   pop esi
// 004efc6c  83c414               add esp, 0x14
// 004efc6f  c20400               ret 4
// 004efc72  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004efc76  3bf9                 cmp edi, ecx
// 004efc78  0f8282000000         jb 0x4efd00
// 004efc7e  8d0c81               lea ecx, [ecx + eax*4]
// 004efc81  3bf9                 cmp edi, ecx
// 004efc83  737b                 jae 0x4efd00
// 004efc85  8b3f                 mov edi, dword ptr [edi]
// 004efc87  85ff                 test edi, edi
// 004efc89  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004efc91  740e                 je 0x4efca1
// 004efc93  8d4704               lea eax, [edi + 4]
// 004efc96  50                   push eax
// 004efc97  897c2428             mov dword ptr [esp + 0x28], edi
// 004efc9b  ff15ecd27700         call dword ptr [0x77d2ec]
// 004efca1  8d542424             lea edx, [esp + 0x24]
// 004efca5  52                   push edx
// 004efca6  8bce                 mov ecx, esi
// 004efca8  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004efcb0  e84bffffff           call 0x4efc00
// 004efcb5  8b442424             mov eax, dword ptr [esp + 0x24]
// 004efcb9  85c0                 test eax, eax
// 004efcbb  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004efcc3  7459                 je 0x4efd1e
// 004efcc5  83c004               add eax, 4
// 004efcc8  50                   push eax
// 004efcc9  ff15e8d27700         call dword ptr [0x77d2e8]
// 004efccf  85c0                 test eax, eax
// 004efcd1  754b                 jne 0x4efd1e
// 004efcd3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004efcd7  e8f480f6ff           call 0x457dd0
// 004efcdc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004efce0  85c9                 test ecx, ecx
// 004efce2  743a                 je 0x4efd1e
// 004efce4  8b01                 mov eax, dword ptr [ecx]
// 004efce6  8b10                 mov edx, dword ptr [eax]
// 004efce8  6a01                 push 1
// 004efcea  ffd2                 call edx
// 004efcec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004efcf0  64890d00000000       mov dword ptr fs:[0], ecx
// 004efcf7  59                   pop ecx
// 004efcf8  5f                   pop edi
// 004efcf9  5e                   pop esi
// 004efcfa  83c414               add esp, 0x14
// 004efcfd  c20400               ret 4
// 004efd00  6a00                 push 0
// 004efd02  83c001               add eax, 1
// 004efd05  50                   push eax
// 004efd06  8bce                 mov ecx, esi
// 004efd08  e853fbffff           call 0x4ef860
// 004efd0d  8b07                 mov eax, dword ptr [edi]
// 004efd0f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004efd12  8b16                 mov edx, dword ptr [esi]
// 004efd14  50                   push eax
// 004efd15  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004efd19  e85252f8ff           call 0x474f70
// 004efd1e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004efd22  64890d00000000       mov dword ptr fs:[0], ecx
// 004efd29  59                   pop ecx
// 004efd2a  5f                   pop edi
// 004efd2b  5e                   pop esi
// 004efd2c  83c414               add esp, 0x14
// 004efd2f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
