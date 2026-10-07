// roc 2012-06 00a3a090  unit: CXTPDockingPane  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a090
//
// 00a3a090  56                   push esi
// 00a3a091  8bf1                 mov esi, ecx
// 00a3a093  8b06                 mov eax, dword ptr [esi]
// 00a3a095  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a3a098  ffd2                 call edx
// 00a3a09a  85c0                 test eax, eax
// 00a3a09c  7414                 je 0xa3a0b2
// 00a3a09e  8b06                 mov eax, dword ptr [esi]
// 00a3a0a0  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a3a0a3  6a00                 push 0
// 00a3a0a5  6a00                 push 0
// 00a3a0a7  8bce                 mov ecx, esi
// 00a3a0a9  ffd2                 call edx
// 00a3a0ab  50                   push eax
// 00a3a0ac  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a3a0b2  5e                   pop esi
// 00a3a0b3  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?RedrawPane@CXTPDockingPaneBase@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
