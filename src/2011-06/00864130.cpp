// roc 2011-06 00864130  unit: CXTPTabClientWnd::CSingleWorkspace  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864130
//
// 00864130  53                   push ebx
// 00864131  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00864135  55                   push ebp
// 00864136  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0086413a  56                   push esi
// 0086413b  8bf1                 mov esi, ecx
// 0086413d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00864143  57                   push edi
// 00864144  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00864148  85c0                 test eax, eax
// 0086414a  740f                 je 0x86415b
// 0086414c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00864152  57                   push edi
// 00864153  53                   push ebx
// 00864154  55                   push ebp
// 00864155  56                   push esi
// 00864156  e8550b0100           call 0x874cb0
// 0086415b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086415f  50                   push eax
// 00864160  57                   push edi
// 00864161  53                   push ebx
// 00864162  55                   push ebp
// 00864163  8bce                 mov ecx, esi
// 00864165  e86e60faff           call 0x80a1d8
// 0086416a  5f                   pop edi
// 0086416b  5e                   pop esi
// 0086416c  5d                   pop ebp
// 0086416d  5b                   pop ebx
// 0086416e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnWndMsg@CSingleWorkspace@CXTPTabClientWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
