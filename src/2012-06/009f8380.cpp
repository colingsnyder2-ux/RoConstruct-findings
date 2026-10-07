// roc 2012-06 009f8380  unit: CXTPResourceManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8380
//
// 009f8380  0fb7442404           movzx eax, word ptr [esp + 4]
// 009f8385  56                   push esi
// 009f8386  50                   push eax
// 009f8387  8bf1                 mov esi, ecx
// 009f8389  e862fcffff           call 0x9f7ff0
// 009f838e  83c404               add esp, 4
// 009f8391  89460c               mov dword ptr [esi + 0xc], eax
// 009f8394  85c0                 test eax, eax
// 009f8396  7510                 jne 0x9f83a8
// 009f8398  6809040000           push 0x409
// 009f839d  e84efcffff           call 0x9f7ff0
// 009f83a2  83c404               add esp, 4
// 009f83a5  89460c               mov dword ptr [esi + 0xc], eax
// 009f83a8  5e                   pop esi
// 009f83a9  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?SetResourceLanguage@CXTPResourceManager@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
