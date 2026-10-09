// roc 2009-12 0084de20  unit: CXTPPropertyGridToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084de20
//
// 0084de20  53                   push ebx
// 0084de21  55                   push ebp
// 0084de22  56                   push esi
// 0084de23  8bf1                 mov esi, ecx
// 0084de25  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084de28  57                   push edi
// 0084de29  50                   push eax
// 0084de2a  ff15bccb9800         call dword ptr [0x98cbbc]
// 0084de30  50                   push eax
// 0084de31  e8f45cfaff           call 0x7f3b2a
// 0084de36  8b886c010000         mov ecx, dword ptr [eax + 0x16c]
// 0084de3c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0084de40  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0084de44  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0084de48  85c9                 test ecx, ecx
// 0084de4a  7409                 je 0x84de55
// 0084de4c  57                   push edi
// 0084de4d  53                   push ebx
// 0084de4e  55                   push ebp
// 0084de4f  56                   push esi
// 0084de50  e84b560100           call 0x8634a0
// 0084de55  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084de59  51                   push ecx
// 0084de5a  57                   push edi
// 0084de5b  53                   push ebx
// 0084de5c  55                   push ebp
// 0084de5d  8bce                 mov ecx, esi
// 0084de5f  e8765bfaff           call 0x7f39da
// 0084de64  5f                   pop edi
// 0084de65  5e                   pop esi
// 0084de66  5d                   pop ebp
// 0084de67  5b                   pop ebx
// 0084de68  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnWndMsg@CXTPPropertyGridToolBar@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
