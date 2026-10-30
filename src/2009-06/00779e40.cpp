// roc 2009-06 00779e40  unit: CXTPTabClientWnd::CSingleWorkspace  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779e40
//
// 00779e40  53                   push ebx
// 00779e41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00779e45  55                   push ebp
// 00779e46  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00779e4a  56                   push esi
// 00779e4b  8bf1                 mov esi, ecx
// 00779e4d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00779e53  57                   push edi
// 00779e54  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00779e58  85c0                 test eax, eax
// 00779e5a  740f                 je 0x779e6b
// 00779e5c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00779e62  57                   push edi
// 00779e63  53                   push ebx
// 00779e64  55                   push ebp
// 00779e65  56                   push esi
// 00779e66  e805e60000           call 0x788470
// 00779e6b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00779e6f  50                   push eax
// 00779e70  57                   push edi
// 00779e71  53                   push ebx
// 00779e72  55                   push ebp
// 00779e73  8bce                 mov ecx, esi
// 00779e75  e838edf9ff           call 0x718bb2
// 00779e7a  5f                   pop edi
// 00779e7b  5e                   pop esi
// 00779e7c  5d                   pop ebp
// 00779e7d  5b                   pop ebx
// 00779e7e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnWndMsg@CSingleWorkspace@CXTPTabClientWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
