// roc 2010-06 00808c40  unit: CXTPTabClientWnd::CSingleWorkspace  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808c40
//
// 00808c40  53                   push ebx
// 00808c41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00808c45  55                   push ebp
// 00808c46  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00808c4a  56                   push esi
// 00808c4b  8bf1                 mov esi, ecx
// 00808c4d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00808c53  57                   push edi
// 00808c54  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00808c58  85c0                 test eax, eax
// 00808c5a  740f                 je 0x808c6b
// 00808c5c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00808c62  57                   push edi
// 00808c63  53                   push ebx
// 00808c64  55                   push ebp
// 00808c65  56                   push esi
// 00808c66  e8e5e70000           call 0x817450
// 00808c6b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00808c6f  50                   push eax
// 00808c70  57                   push edi
// 00808c71  53                   push ebx
// 00808c72  55                   push ebp
// 00808c73  8bce                 mov ecx, esi
// 00808c75  e8a0eef9ff           call 0x7a7b1a
// 00808c7a  5f                   pop edi
// 00808c7b  5e                   pop esi
// 00808c7c  5d                   pop ebp
// 00808c7d  5b                   pop ebx
// 00808c7e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnWndMsg@CSingleWorkspace@CXTPTabClientWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
