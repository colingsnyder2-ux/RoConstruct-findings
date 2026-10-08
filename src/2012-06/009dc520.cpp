// roc 2012-06 009dc520  unit: CXTPTabClientWnd::CSingleWorkspace  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc520
//
// 009dc520  53                   push ebx
// 009dc521  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009dc525  55                   push ebp
// 009dc526  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009dc52a  56                   push esi
// 009dc52b  8bf1                 mov esi, ecx
// 009dc52d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 009dc533  57                   push edi
// 009dc534  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009dc538  85c0                 test eax, eax
// 009dc53a  740f                 je 0x9dc54b
// 009dc53c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 009dc542  57                   push edi
// 009dc543  53                   push ebx
// 009dc544  55                   push ebp
// 009dc545  56                   push esi
// 009dc546  e8950c0100           call 0x9ed1e0
// 009dc54b  8b442420             mov eax, dword ptr [esp + 0x20]
// 009dc54f  50                   push eax
// 009dc550  57                   push edi
// 009dc551  53                   push ebx
// 009dc552  55                   push ebp
// 009dc553  8bce                 mov ecx, esi
// 009dc555  e83a5dfaff           call 0x982294
// 009dc55a  5f                   pop edi
// 009dc55b  5e                   pop esi
// 009dc55c  5d                   pop ebp
// 009dc55d  5b                   pop ebx
// 009dc55e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnWndMsg@CSingleWorkspace@CXTPTabClientWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
