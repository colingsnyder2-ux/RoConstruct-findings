// roc 2012-06 009ea060  unit: CInstanceRecord::CNameItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ea060
//
// 009ea060  8b442404             mov eax, dword ptr [esp + 4]
// 009ea064  56                   push esi
// 009ea065  57                   push edi
// 009ea066  33ff                 xor edi, edi
// 009ea068  8bf1                 mov esi, ecx
// 009ea06a  3bc7                 cmp eax, edi
// 009ea06c  740b                 je 0x9ea079
// 009ea06e  50                   push eax
// 009ea06f  e81cf9ffff           call 0x9e9990
// 009ea074  5f                   pop edi
// 009ea075  5e                   pop esi
// 009ea076  c20400               ret 4
// 009ea079  ff150448b200         call dword ptr [0xb24804]
// 009ea07f  8d460c               lea eax, [esi + 0xc]
// 009ea082  897e08               mov dword ptr [esi + 8], edi
// 009ea085  897e20               mov dword ptr [esi + 0x20], edi
// 009ea088  897e1c               mov dword ptr [esi + 0x1c], edi
// 009ea08b  8b3d903ab200         mov edi, dword ptr [0xb23a90]
// 009ea091  50                   push eax
// 009ea092  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 009ea099  ffd7                 call edi
// 009ea09b  83c628               add esi, 0x28
// 009ea09e  56                   push esi
// 009ea09f  ffd7                 call edi
// 009ea0a1  5f                   pop edi
// 009ea0a2  5e                   pop esi
// 009ea0a3  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?Assign@TOOLITEM@CXTPToolTipContextToolTip@@QAEXPAU12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPToolTipContext.cpp
