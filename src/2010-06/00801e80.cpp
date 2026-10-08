// roc 2010-06 00801e80  unit: CXTPPropertyGridToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801e80
//
// 00801e80  53                   push ebx
// 00801e81  55                   push ebp
// 00801e82  56                   push esi
// 00801e83  8bf1                 mov esi, ecx
// 00801e85  8b4620               mov eax, dword ptr [esi + 0x20]
// 00801e88  57                   push edi
// 00801e89  50                   push eax
// 00801e8a  ff154cba9e00         call dword ptr [0x9eba4c]
// 00801e90  50                   push eax
// 00801e91  e8d45dfaff           call 0x7a7c6a
// 00801e96  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 00801e9c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00801ea0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00801ea4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00801ea8  85c9                 test ecx, ecx
// 00801eaa  7409                 je 0x801eb5
// 00801eac  57                   push edi
// 00801ead  53                   push ebx
// 00801eae  55                   push ebp
// 00801eaf  56                   push esi
// 00801eb0  e89b550100           call 0x817450
// 00801eb5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00801eb9  51                   push ecx
// 00801eba  57                   push edi
// 00801ebb  53                   push ebx
// 00801ebc  55                   push ebp
// 00801ebd  8bce                 mov ecx, esi
// 00801ebf  e8565cfaff           call 0x7a7b1a
// 00801ec4  5f                   pop edi
// 00801ec5  5e                   pop esi
// 00801ec6  5d                   pop ebp
// 00801ec7  5b                   pop ebx
// 00801ec8  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnWndMsg@CXTPPropertyGridToolBar@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
