// from server: 100% by auto
// roc 2012-06 009ebdb0  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ebdb0
//
// 009ebdb0  8b442404             mov eax, dword ptr [esp + 4]
// 009ebdb4  56                   push esi
// 009ebdb5  8bf1                 mov esi, ecx
// 009ebdb7  894668               mov dword ptr [esi + 0x68], eax
// 009ebdba  85c0                 test eax, eax
// 009ebdbc  7549                 jne 0x9ebe07
// 009ebdbe  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009ebdc1  85c9                 test ecx, ecx
// 009ebdc3  7427                 je 0x9ebdec
// 009ebdc5  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 009ebdcb  85c0                 test eax, eax
// 009ebdcd  741d                 je 0x9ebdec
// 009ebdcf  50                   push eax
// 009ebdd0  51                   push ecx
// 009ebdd1  ff15083cb200         call dword ptr [0xb23c08]
// 009ebdd7  8d8ee0000000         lea ecx, [esi + 0xe0]
// 009ebddd  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 009ebde7  e834e2ffff           call 0x9ea020
// 009ebdec  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ebdef  85c0                 test eax, eax
// 009ebdf1  7414                 je 0x9ebe07
// 009ebdf3  50                   push eax
// 009ebdf4  ff153c3bb200         call dword ptr [0xb23b3c]
// 009ebdfa  85c0                 test eax, eax
// 009ebdfc  7409                 je 0x9ebe07
// 009ebdfe  6a00                 push 0
// 009ebe00  8bce                 mov ecx, esi
// 009ebe02  e8f9e6ffff           call 0x9ea500
// 009ebe07  5e                   pop esi
// 009ebe08  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?Activate@CXTPToolTipContextToolTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
