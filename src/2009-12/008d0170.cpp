// roc 2009-12 008d0170  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0170
//
// 008d0170  53                   push ebx
// 008d0171  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008d0175  57                   push edi
// 008d0176  8bf9                 mov edi, ecx
// 008d0178  85db                 test ebx, ebx
// 008d017a  7c69                 jl 0x8d01e5
// 008d017c  3b5f5c               cmp ebx, dword ptr [edi + 0x5c]
// 008d017f  7d64                 jge 0x8d01e5
// 008d0181  3b5f5c               cmp ebx, dword ptr [edi + 0x5c]
// 008d0184  8d4f54               lea ecx, [edi + 0x54]
// 008d0187  7d57                 jge 0x8d01e0
// 008d0189  8b4104               mov eax, dword ptr [ecx + 4]
// 008d018c  55                   push ebp
// 008d018d  33d2                 xor edx, edx
// 008d018f  56                   push esi
// 008d0190  8b3498               mov esi, dword ptr [eax + ebx*4]
// 008d0193  397704               cmp dword ptr [edi + 4], esi
// 008d0196  0f94c2               sete dl
// 008d0199  8bea                 mov ebp, edx
// 008d019b  397708               cmp dword ptr [edi + 8], esi
// 008d019e  7507                 jne 0x8d01a7
// 008d01a0  c7470800000000       mov dword ptr [edi + 8], 0
// 008d01a7  6a01                 push 1
// 008d01a9  53                   push ebx
// 008d01aa  e8d1d0f5ff           call 0x82d280
// 008d01af  8b06                 mov eax, dword ptr [esi]
// 008d01b1  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008d01b4  8bce                 mov ecx, esi
// 008d01b6  ffd2                 call edx
// 008d01b8  8bce                 mov ecx, esi
// 008d01ba  e81d3cf2ff           call 0x7f3ddc
// 008d01bf  5e                   pop esi
// 008d01c0  85ed                 test ebp, ebp
// 008d01c2  5d                   pop ebp
// 008d01c3  7408                 je 0x8d01cd
// 008d01c5  53                   push ebx
// 008d01c6  8bcf                 mov ecx, edi
// 008d01c8  e873f4ffff           call 0x8cf640
// 008d01cd  8b07                 mov eax, dword ptr [edi]
// 008d01cf  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008d01d2  8bcf                 mov ecx, edi
// 008d01d4  ffd2                 call edx
// 008d01d6  5f                   pop edi
// 008d01d7  b801000000           mov eax, 1
// 008d01dc  5b                   pop ebx
// 008d01dd  c20400               ret 4
// 008d01e0  e82739f2ff           call 0x7f3b0c
// 008d01e5  5f                   pop edi
// 008d01e6  33c0                 xor eax, eax
// 008d01e8  5b                   pop ebx
// 008d01e9  c20400               ret 4
// copied from an identical function in another client (function ?DeleteItem@CXTPTabManager@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp