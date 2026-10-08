// roc 2012-06 009e1a90  unit: CXTPPropertyGridToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e1a90
//
// 009e1a90  53                   push ebx
// 009e1a91  55                   push ebp
// 009e1a92  56                   push esi
// 009e1a93  8bf1                 mov esi, ecx
// 009e1a95  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e1a98  57                   push edi
// 009e1a99  50                   push eax
// 009e1a9a  ff15503ab200         call dword ptr [0xb23a50]
// 009e1aa0  50                   push eax
// 009e1aa1  e8c00bfaff           call 0x982666
// 009e1aa6  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 009e1aac  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009e1ab0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009e1ab4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009e1ab8  85c9                 test ecx, ecx
// 009e1aba  7409                 je 0x9e1ac5
// 009e1abc  57                   push edi
// 009e1abd  53                   push ebx
// 009e1abe  55                   push ebp
// 009e1abf  56                   push esi
// 009e1ac0  e81bb70000           call 0x9ed1e0
// 009e1ac5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009e1ac9  51                   push ecx
// 009e1aca  57                   push edi
// 009e1acb  53                   push ebx
// 009e1acc  55                   push ebp
// 009e1acd  8bce                 mov ecx, esi
// 009e1acf  e8c007faff           call 0x982294
// 009e1ad4  5f                   pop edi
// 009e1ad5  5e                   pop esi
// 009e1ad6  5d                   pop ebp
// 009e1ad7  5b                   pop ebx
// 009e1ad8  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnWndMsg@CXTPPropertyGridToolBar@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
