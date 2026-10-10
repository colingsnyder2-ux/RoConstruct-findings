// roc 2012-06 009ea020  unit: CInstanceRecord::CNameItem  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ea020
//
// 009ea020  56                   push esi
// 009ea021  57                   push edi
// 009ea022  8bf1                 mov esi, ecx
// 009ea024  ff150448b200         call dword ptr [0xb24804]
// 009ea02a  8b3d903ab200         mov edi, dword ptr [0xb23a90]
// 009ea030  33c0                 xor eax, eax
// 009ea032  894608               mov dword ptr [esi + 8], eax
// 009ea035  894620               mov dword ptr [esi + 0x20], eax
// 009ea038  89461c               mov dword ptr [esi + 0x1c], eax
// 009ea03b  8d460c               lea eax, [esi + 0xc]
// 009ea03e  50                   push eax
// 009ea03f  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 009ea046  ffd7                 call edi
// 009ea048  83c628               add esi, 0x28
// 009ea04b  56                   push esi
// 009ea04c  ffd7                 call edi
// 009ea04e  5f                   pop edi
// 009ea04f  5e                   pop esi
// 009ea050  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?Reset@TOOLITEM@CXTPToolTipContextToolTip@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPToolTipContext.cpp
