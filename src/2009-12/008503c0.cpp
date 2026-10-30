// roc 2009-12 008503c0  unit: CXTPPropExchange  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008503c0
//
// 008503c0  837c240800           cmp dword ptr [esp + 8], 0
// 008503c5  56                   push esi
// 008503c6  8b742408             mov esi, dword ptr [esp + 8]
// 008503ca  8bce                 mov ecx, esi
// 008503cc  746f                 je 0x85043d
// 008503ce  6a00                 push 0
// 008503d0  6a5c                 push 0x5c
// 008503d2  ff1580d69800         call dword ptr [0x98d680]
// 008503d8  83f8ff               cmp eax, -1
// 008503db  0f84a2000000         je 0x850483
// 008503e1  6828c49f00           push 0x9fc428
// 008503e6  68e0289c00           push 0x9c28e0
// 008503eb  8bce                 mov ecx, esi
// 008503ed  ff1518d89800         call dword ptr [0x98d818]
// 008503f3  681cd89a00           push 0x9ad81c
// 008503f8  68e8289c00           push 0x9c28e8
// 008503fd  8bce                 mov ecx, esi
// 008503ff  ff1518d89800         call dword ptr [0x98d818]
// 00850405  6824c49f00           push 0x9fc424
// 0085040a  68ec289c00           push 0x9c28ec
// 0085040f  8bce                 mov ecx, esi
// 00850411  ff1518d89800         call dword ptr [0x98d818]
// 00850417  68ccb79a00           push 0x9ab7cc
// 0085041c  68e4289c00           push 0x9c28e4
// 00850421  8bce                 mov ecx, esi
// 00850423  ff1518d89800         call dword ptr [0x98d818]
// 00850429  682c399a00           push 0x9a392c
// 0085042e  6828c49f00           push 0x9fc428
// 00850433  8bce                 mov ecx, esi
// 00850435  ff1518d89800         call dword ptr [0x98d818]
// 0085043b  5e                   pop esi
// 0085043c  c3                   ret 
// 0085043d  68e0289c00           push 0x9c28e0
// 00850442  682c399a00           push 0x9a392c
// 00850447  ff1518d89800         call dword ptr [0x98d818]
// 0085044d  68e8289c00           push 0x9c28e8
// 00850452  681cd89a00           push 0x9ad81c
// 00850457  8bce                 mov ecx, esi
// 00850459  ff1518d89800         call dword ptr [0x98d818]
// 0085045f  68ec289c00           push 0x9c28ec
// 00850464  6824c49f00           push 0x9fc424
// 00850469  8bce                 mov ecx, esi
// 0085046b  ff1518d89800         call dword ptr [0x98d818]
// 00850471  68e4289c00           push 0x9c28e4
// 00850476  68ccb79a00           push 0x9ab7cc
// 0085047b  8bce                 mov ecx, esi
// 0085047d  ff1518d89800         call dword ptr [0x98d818]
// 00850483  5e                   pop esi
// 00850484  c3                   ret 
// copied from an identical function in another client (function ?PreformatString@CXTPPropExchange@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp