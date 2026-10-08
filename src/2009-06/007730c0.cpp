// roc 2009-06 007730c0  unit: CXTPPropertyGridToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007730c0
//
// 007730c0  53                   push ebx
// 007730c1  55                   push ebp
// 007730c2  56                   push esi
// 007730c3  8bf1                 mov esi, ecx
// 007730c5  8b4620               mov eax, dword ptr [esi + 0x20]
// 007730c8  57                   push edi
// 007730c9  50                   push eax
// 007730ca  ff1598ee8900         call dword ptr [0x89ee98]
// 007730d0  50                   push eax
// 007730d1  e82c5cfaff           call 0x718d02
// 007730d6  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 007730dc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007730e0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007730e4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007730e8  85c9                 test ecx, ecx
// 007730ea  7409                 je 0x7730f5
// 007730ec  57                   push edi
// 007730ed  53                   push ebx
// 007730ee  55                   push ebp
// 007730ef  56                   push esi
// 007730f0  e87b530100           call 0x788470
// 007730f5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007730f9  51                   push ecx
// 007730fa  57                   push edi
// 007730fb  53                   push ebx
// 007730fc  55                   push ebp
// 007730fd  8bce                 mov ecx, esi
// 007730ff  e8ae5afaff           call 0x718bb2
// 00773104  5f                   pop edi
// 00773105  5e                   pop esi
// 00773106  5d                   pop ebp
// 00773107  5b                   pop ebx
// 00773108  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnWndMsg@CXTPPropertyGridToolBar@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
