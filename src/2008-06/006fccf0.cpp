// roc 2008-06 006fccf0  unit: CXTPPropExchange  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fccf0
//
// 006fccf0  837c240800           cmp dword ptr [esp + 8], 0
// 006fccf5  56                   push esi
// 006fccf6  8b742408             mov esi, dword ptr [esp + 8]
// 006fccfa  8bce                 mov ecx, esi
// 006fccfc  746f                 je 0x6fcd6d
// 006fccfe  6a00                 push 0
// 006fcd00  6a5c                 push 0x5c
// 006fcd02  ff15903e8000         call dword ptr [0x803e90]
// 006fcd08  83f8ff               cmp eax, -1
// 006fcd0b  0f84a2000000         je 0x6fcdb3
// 006fcd11  682caf8500           push 0x85af2c
// 006fcd16  68e8878200           push 0x8287e8
// 006fcd1b  8bce                 mov ecx, esi
// 006fcd1d  ff15803a8000         call dword ptr [0x803a80]
// 006fcd23  6844878100           push 0x818744
// 006fcd28  68f0878200           push 0x8287f0
// 006fcd2d  8bce                 mov ecx, esi
// 006fcd2f  ff15803a8000         call dword ptr [0x803a80]
// 006fcd35  6828af8500           push 0x85af28
// 006fcd3a  68f4878200           push 0x8287f4
// 006fcd3f  8bce                 mov ecx, esi
// 006fcd41  ff15803a8000         call dword ptr [0x803a80]
// 006fcd47  68a4448300           push 0x8344a4
// 006fcd4c  68ec878200           push 0x8287ec
// 006fcd51  8bce                 mov ecx, esi
// 006fcd53  ff15803a8000         call dword ptr [0x803a80]
// 006fcd59  68ec048100           push 0x8104ec
// 006fcd5e  682caf8500           push 0x85af2c
// 006fcd63  8bce                 mov ecx, esi
// 006fcd65  ff15803a8000         call dword ptr [0x803a80]
// 006fcd6b  5e                   pop esi
// 006fcd6c  c3                   ret 
// 006fcd6d  68e8878200           push 0x8287e8
// 006fcd72  68ec048100           push 0x8104ec
// 006fcd77  ff15803a8000         call dword ptr [0x803a80]
// 006fcd7d  68f0878200           push 0x8287f0
// 006fcd82  6844878100           push 0x818744
// 006fcd87  8bce                 mov ecx, esi
// 006fcd89  ff15803a8000         call dword ptr [0x803a80]
// 006fcd8f  68f4878200           push 0x8287f4
// 006fcd94  6828af8500           push 0x85af28
// 006fcd99  8bce                 mov ecx, esi
// 006fcd9b  ff15803a8000         call dword ptr [0x803a80]
// 006fcda1  68ec878200           push 0x8287ec
// 006fcda6  68a4448300           push 0x8344a4
// 006fcdab  8bce                 mov ecx, esi
// 006fcdad  ff15803a8000         call dword ptr [0x803a80]
// 006fcdb3  5e                   pop esi
// 006fcdb4  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PreformatString@CXTPPropExchange@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
