// roc 2009-12 00854bc0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854bc0
//
// 00854bc0  53                   push ebx
// 00854bc1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00854bc5  55                   push ebp
// 00854bc6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00854bca  56                   push esi
// 00854bcb  8bf1                 mov esi, ecx
// 00854bcd  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00854bd3  57                   push edi
// 00854bd4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00854bd8  85c0                 test eax, eax
// 00854bda  740f                 je 0x854beb
// 00854bdc  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00854be2  57                   push edi
// 00854be3  53                   push ebx
// 00854be4  55                   push ebp
// 00854be5  56                   push esi
// 00854be6  e8b5e80000           call 0x8634a0
// 00854beb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00854bef  50                   push eax
// 00854bf0  57                   push edi
// 00854bf1  53                   push ebx
// 00854bf2  55                   push ebp
// 00854bf3  8bce                 mov ecx, esi
// 00854bf5  e8e0edf9ff           call 0x7f39da
// 00854bfa  5f                   pop edi
// 00854bfb  5e                   pop esi
// 00854bfc  5d                   pop ebp
// 00854bfd  5b                   pop ebx
// 00854bfe  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnWndMsg@CSingleWorkspace@CXTPTabClientWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
