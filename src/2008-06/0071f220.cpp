// from server: 100% by auto
// roc 2008-06 0071f220  unit: CXTPShortcutManager  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f220
//
// 0071f220  56                   push esi
// 0071f221  8bf1                 mov esi, ecx
// 0071f223  803e00               cmp byte ptr [esi], 0
// 0071f226  740e                 je 0x71f236
// 0071f228  e8f916f8ff           call 0x6a0926
// 0071f22d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0071f230  89480c               mov dword ptr [eax + 0xc], ecx
// 0071f233  c60600               mov byte ptr [esi], 0
// 0071f236  5e                   pop esi
// 0071f237  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?Undo@CManageState@CXTPResourceManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
