// from server: 100% by auto
// roc 2011-06 0087f7b0  unit: CXTCaption  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087f7b0
//
// 0087f7b0  56                   push esi
// 0087f7b1  8bf1                 mov esi, ecx
// 0087f7b3  803e00               cmp byte ptr [esi], 0
// 0087f7b6  740e                 je 0x87f7c6
// 0087f7b8  e85fabf8ff           call 0x80a31c
// 0087f7bd  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087f7c0  89480c               mov dword ptr [eax + 0xc], ecx
// 0087f7c3  c60600               mov byte ptr [esi], 0
// 0087f7c6  5e                   pop esi
// 0087f7c7  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?Undo@CManageState@CXTPResourceManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
