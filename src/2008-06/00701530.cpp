// roc 2008-06 00701530  unit: CXTPTabClientWnd::CSingleWorkspace  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701530
//
// 00701530  53                   push ebx
// 00701531  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00701535  55                   push ebp
// 00701536  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0070153a  56                   push esi
// 0070153b  8bf1                 mov esi, ecx
// 0070153d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00701543  57                   push edi
// 00701544  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00701548  85c0                 test eax, eax
// 0070154a  740f                 je 0x70155b
// 0070154c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00701552  57                   push edi
// 00701553  53                   push ebx
// 00701554  55                   push ebp
// 00701555  56                   push esi
// 00701556  e825be0000           call 0x70d380
// 0070155b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0070155f  50                   push eax
// 00701560  57                   push edi
// 00701561  53                   push ebx
// 00701562  55                   push ebp
// 00701563  8bce                 mov ecx, esi
// 00701565  e896f2f9ff           call 0x6a0800
// 0070156a  5f                   pop edi
// 0070156b  5e                   pop esi
// 0070156c  5d                   pop ebp
// 0070156d  5b                   pop ebx
// 0070156e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnWndMsg@CSingleWorkspace@CXTPTabClientWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
