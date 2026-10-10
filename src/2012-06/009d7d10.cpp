// roc 2012-06 009d7d10  unit: CXTPPropExchange  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7d10
//
// 009d7d10  837c240800           cmp dword ptr [esp + 8], 0
// 009d7d15  56                   push esi
// 009d7d16  8b742408             mov esi, dword ptr [esp + 8]
// 009d7d1a  8bce                 mov ecx, esi
// 009d7d1c  746f                 je 0x9d7d8d
// 009d7d1e  6a00                 push 0
// 009d7d20  6a5c                 push 0x5c
// 009d7d22  ff15f447b200         call dword ptr [0xb247f4]
// 009d7d28  83f8ff               cmp eax, -1
// 009d7d2b  0f84a2000000         je 0x9d7dd3
// 009d7d31  688060c100           push 0xc16080
// 009d7d36  682c3eb800           push 0xb83e2c
// 009d7d3b  8bce                 mov ecx, esi
// 009d7d3d  ff15983fb200         call dword ptr [0xb23f98]
// 009d7d43  6848d8b500           push 0xb5d848
// 009d7d48  68343eb800           push 0xb83e34
// 009d7d4d  8bce                 mov ecx, esi
// 009d7d4f  ff15983fb200         call dword ptr [0xb23f98]
// 009d7d55  687c60c100           push 0xc1607c
// 009d7d5a  68383eb800           push 0xb83e38
// 009d7d5f  8bce                 mov ecx, esi
// 009d7d61  ff15983fb200         call dword ptr [0xb23f98]
// 009d7d67  6880abb500           push 0xb5ab80
// 009d7d6c  68303eb800           push 0xb83e30
// 009d7d71  8bce                 mov ecx, esi
// 009d7d73  ff15983fb200         call dword ptr [0xb23f98]
// 009d7d79  68c4f6b400           push 0xb4f6c4
// 009d7d7e  688060c100           push 0xc16080
// 009d7d83  8bce                 mov ecx, esi
// 009d7d85  ff15983fb200         call dword ptr [0xb23f98]
// 009d7d8b  5e                   pop esi
// 009d7d8c  c3                   ret 
// 009d7d8d  682c3eb800           push 0xb83e2c
// 009d7d92  68c4f6b400           push 0xb4f6c4
// 009d7d97  ff15983fb200         call dword ptr [0xb23f98]
// 009d7d9d  68343eb800           push 0xb83e34
// 009d7da2  6848d8b500           push 0xb5d848
// 009d7da7  8bce                 mov ecx, esi
// 009d7da9  ff15983fb200         call dword ptr [0xb23f98]
// 009d7daf  68383eb800           push 0xb83e38
// 009d7db4  687c60c100           push 0xc1607c
// 009d7db9  8bce                 mov ecx, esi
// 009d7dbb  ff15983fb200         call dword ptr [0xb23f98]
// 009d7dc1  68303eb800           push 0xb83e30
// 009d7dc6  6880abb500           push 0xb5ab80
// 009d7dcb  8bce                 mov ecx, esi
// 009d7dcd  ff15983fb200         call dword ptr [0xb23f98]
// 009d7dd3  5e                   pop esi
// 009d7dd4  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
