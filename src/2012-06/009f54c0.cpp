// roc 2012-06 009f54c0  unit: CXTPPropertyGridItemEnum  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f54c0
//
// 009f54c0  57                   push edi
// 009f54c1  8bf9                 mov edi, ecx
// 009f54c3  837f0800             cmp dword ptr [edi + 8], 0
// 009f54c7  7434                 je 0x9f54fd
// 009f54c9  56                   push esi
// 009f54ca  68e4a3c100           push 0xc1a3e4
// 009f54cf  ff15ac21b200         call dword ptr [0xb221ac]
// 009f54d5  8bcf                 mov ecx, edi
// 009f54d7  8bf0                 mov esi, eax
// 009f54d9  e822ffffff           call 0x9f5400
// 009f54de  3bb0d0000000         cmp esi, dword ptr [eax + 0xd0]
// 009f54e4  7416                 je 0x9f54fc
// 009f54e6  68d0000000           push 0xd0
// 009f54eb  6a00                 push 0
// 009f54ed  50                   push eax
// 009f54ee  89b0d0000000         mov dword ptr [eax + 0xd0], esi
// 009f54f4  e87bdef8ff           call 0x983374
// 009f54f9  83c40c               add esp, 0xc
// 009f54fc  5e                   pop esi
// 009f54fd  5f                   pop edi
// 009f54fe  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ?ReloadLibrary@CXTPWinThemeWrapper@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp
