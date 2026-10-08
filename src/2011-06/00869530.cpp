// roc 2011-06 00869530  unit: CXTPPropertyGridToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869530
//
// 00869530  53                   push ebx
// 00869531  55                   push ebp
// 00869532  56                   push esi
// 00869533  8bf1                 mov esi, ecx
// 00869535  8b4620               mov eax, dword ptr [esi + 0x20]
// 00869538  57                   push edi
// 00869539  50                   push eax
// 0086953a  ff15b819a400         call dword ptr [0xa419b8]
// 00869540  50                   push eax
// 00869541  e8e20dfaff           call 0x80a328
// 00869546  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 0086954c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00869550  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00869554  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00869558  85c9                 test ecx, ecx
// 0086955a  7409                 je 0x869565
// 0086955c  57                   push edi
// 0086955d  53                   push ebx
// 0086955e  55                   push ebp
// 0086955f  56                   push esi
// 00869560  e84bb70000           call 0x874cb0
// 00869565  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00869569  51                   push ecx
// 0086956a  57                   push edi
// 0086956b  53                   push ebx
// 0086956c  55                   push ebp
// 0086956d  8bce                 mov ecx, esi
// 0086956f  e8640cfaff           call 0x80a1d8
// 00869574  5f                   pop edi
// 00869575  5e                   pop esi
// 00869576  5d                   pop ebp
// 00869577  5b                   pop ebx
// 00869578  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnWndMsg@CXTPPropertyGridToolBar@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
