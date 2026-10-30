// roc 2012-06 009f9b10  unit: CXTPDockingPaneAutoHidePanel  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9b10
//
// 009f9b10  51                   push ecx
// 009f9b11  56                   push esi
// 009f9b12  8d442404             lea eax, [esp + 4]
// 009f9b16  50                   push eax
// 009f9b17  6a04                 push 4
// 009f9b19  6a00                 push 0
// 009f9b1b  68a09a9f00           push 0x9f9aa0
// 009f9b20  8bf1                 mov esi, ecx
// 009f9b22  6a00                 push 0
// 009f9b24  6a00                 push 0
// 009f9b26  c70600000000         mov dword ptr [esi], 0
// 009f9b2c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 009f9b33  ff15e022b200         call dword ptr [0xb222e0]
// 009f9b39  894608               mov dword ptr [esi + 8], eax
// 009f9b3c  85c0                 test eax, eax
// 009f9b3e  7413                 je 0x9f9b53
// 009f9b40  6aff                 push -1
// 009f9b42  50                   push eax
// 009f9b43  ff153023b200         call dword ptr [0xb22330]
// 009f9b49  8b4e08               mov ecx, dword ptr [esi + 8]
// 009f9b4c  51                   push ecx
// 009f9b4d  ff157823b200         call dword ptr [0xb22378]
// 009f9b53  5e                   pop esi
// 009f9b54  59                   pop ecx
// 009f9b55  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
