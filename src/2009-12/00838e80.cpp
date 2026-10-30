// roc 2009-12 00838e80  unit: CXTPDockingPaneManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838e80
//
// 00838e80  56                   push esi
// 00838e81  e8faf7ffff           call 0x838680
// 00838e86  8b4004               mov eax, dword ptr [eax + 4]
// 00838e89  85c0                 test eax, eax
// 00838e8b  741e                 je 0x838eab
// 00838e8d  8b742408             mov esi, dword ptr [esp + 8]
// 00838e91  8bd0                 mov edx, eax
// 00838e93  8b4a08               mov ecx, dword ptr [edx + 8]
// 00838e96  8b00                 mov eax, dword ptr [eax]
// 00838e98  85c9                 test ecx, ecx
// 00838e9a  7405                 je 0x838ea1
// 00838e9c  83c120               add ecx, 0x20
// 00838e9f  eb02                 jmp 0x838ea3
// 00838ea1  33c9                 xor ecx, ecx
// 00838ea3  3bce                 cmp ecx, esi
// 00838ea5  740a                 je 0x838eb1
// 00838ea7  85c0                 test eax, eax
// 00838ea9  75e6                 jne 0x838e91
// 00838eab  33c0                 xor eax, eax
// 00838ead  5e                   pop esi
// 00838eae  c20800               ret 8
// 00838eb1  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00838eb6  7407                 je 0x838ebf
// 00838eb8  8b420c               mov eax, dword ptr [edx + 0xc]
// 00838ebb  5e                   pop esi
// 00838ebc  c20800               ret 8
// 00838ebf  8b4210               mov eax, dword ptr [edx + 0x10]
// 00838ec2  5e                   pop esi
// 00838ec3  c20800               ret 8
// copied from an identical function in another client (function ?_GetHolder@CXTPDockingPaneManager@@AAEPAVCXTPDockingPaneBase@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp