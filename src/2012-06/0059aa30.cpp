// roc 2012-06 0059aa30  unit: VAuthoringSettings::?$FactoryProduct  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059aa30
//
// 0059aa30  64a100000000         mov eax, dword ptr fs:[0]
// 0059aa36  6aff                 push -1
// 0059aa38  684b16ab00           push 0xab164b
// 0059aa3d  50                   push eax
// 0059aa3e  64892500000000       mov dword ptr fs:[0], esp
// 0059aa45  56                   push esi
// 0059aa46  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059aa4a  57                   push edi
// 0059aa4b  85f6                 test esi, esi
// 0059aa4d  7462                 je 0x59aab1
// 0059aa4f  33c9                 xor ecx, ecx
// 0059aa51  8bc6                 mov eax, esi
// 0059aa53  ba08000000           mov edx, 8
// 0059aa58  f7e2                 mul edx
// 0059aa5a  0f90c1               seto cl
// 0059aa5d  f7d9                 neg ecx
// 0059aa5f  0bc8                 or ecx, eax
// 0059aa61  33c0                 xor eax, eax
// 0059aa63  83c104               add ecx, 4
// 0059aa66  0f92c0               setb al
// 0059aa69  f7d8                 neg eax
// 0059aa6b  0bc1                 or eax, ecx
// 0059aa6d  50                   push eax
// 0059aa6e  e87d793e00           call 0x9823f0
// 0059aa73  83c404               add esp, 4
// 0059aa76  89442418             mov dword ptr [esp + 0x18], eax
// 0059aa7a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059aa82  85c0                 test eax, eax
// 0059aa84  742b                 je 0x59aab1
// 0059aa86  6890a75900           push 0x59a790
// 0059aa8b  68005d9f00           push 0x9f5d00
// 0059aa90  56                   push esi
// 0059aa91  8d7804               lea edi, [eax + 4]
// 0059aa94  6a08                 push 8
// 0059aa96  57                   push edi
// 0059aa97  8930                 mov dword ptr [eax], esi
// 0059aa99  e8dc883e00           call 0x98337a
// 0059aa9e  8bc7                 mov eax, edi
// 0059aaa0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059aaa4  64890d00000000       mov dword ptr fs:[0], ecx
// 0059aaab  5f                   pop edi
// 0059aaac  5e                   pop esi
// 0059aaad  83c40c               add esp, 0xc
// 0059aab0  c3                   ret 
// 0059aab1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059aab5  5f                   pop edi
// 0059aab6  33c0                 xor eax, eax
// 0059aab8  64890d00000000       mov dword ptr fs:[0], ecx
// 0059aabf  5e                   pop esi
// 0059aac0  83c40c               add esp, 0xc
// 0059aac3  c3                   ret 
// library rbx2016-raknet/CloudCommon.cpp (function ??$OP_NEW_ARRAY@UCloudKey@RakNet@@@RakNet@@YAPAUCloudKey@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
