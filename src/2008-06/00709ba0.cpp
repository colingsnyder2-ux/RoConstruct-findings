// roc 2008-06 00709ba0  unit: CXTPToolTipContextToolTip  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709ba0
//
// 00709ba0  8b442408             mov eax, dword ptr [esp + 8]
// 00709ba4  56                   push esi
// 00709ba5  85c0                 test eax, eax
// 00709ba7  7443                 je 0x709bec
// 00709ba9  8b4804               mov ecx, dword ptr [eax + 4]
// 00709bac  8b10                 mov edx, dword ptr [eax]
// 00709bae  51                   push ecx
// 00709baf  52                   push edx
// 00709bb0  ff15a42b8000         call dword ptr [0x802ba4]
// 00709bb6  8bf0                 mov esi, eax
// 00709bb8  85f6                 test esi, esi
// 00709bba  7432                 je 0x709bee
// 00709bbc  6af0                 push -0x10
// 00709bbe  56                   push esi
// 00709bbf  ff15bc2d8000         call dword ptr [0x802dbc]
// 00709bc5  a900000040           test eax, 0x40000000
// 00709bca  7422                 je 0x709bee
// 00709bcc  6a00                 push 0
// 00709bce  6a00                 push 0
// 00709bd0  68482a0000           push 0x2a48
// 00709bd5  56                   push esi
// 00709bd6  ff15142e8000         call dword ptr [0x802e14]
// 00709bdc  83f801               cmp eax, 1
// 00709bdf  750d                 jne 0x709bee
// 00709be1  56                   push esi
// 00709be2  ff15f82d8000         call dword ptr [0x802df8]
// 00709be8  5e                   pop esi
// 00709be9  c20800               ret 8
// 00709bec  33f6                 xor esi, esi
// 00709bee  8bc6                 mov eax, esi
// 00709bf0  5e                   pop esi
// 00709bf1  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
