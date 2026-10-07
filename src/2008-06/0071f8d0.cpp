// roc 2008-06 0071f8d0  unit: CXTPResourceManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f8d0
//
// 0071f8d0  0fb7442404           movzx eax, word ptr [esp + 4]
// 0071f8d5  56                   push esi
// 0071f8d6  50                   push eax
// 0071f8d7  8bf1                 mov esi, ecx
// 0071f8d9  e862fcffff           call 0x71f540
// 0071f8de  83c404               add esp, 4
// 0071f8e1  89460c               mov dword ptr [esi + 0xc], eax
// 0071f8e4  85c0                 test eax, eax
// 0071f8e6  7510                 jne 0x71f8f8
// 0071f8e8  6809040000           push 0x409
// 0071f8ed  e84efcffff           call 0x71f540
// 0071f8f2  83c404               add esp, 4
// 0071f8f5  89460c               mov dword ptr [esi + 0xc], eax
// 0071f8f8  5e                   pop esi
// 0071f8f9  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?SetResourceLanguage@CXTPResourceManager@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
