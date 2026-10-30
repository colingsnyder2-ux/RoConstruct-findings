// roc 2009-12 0085aa40  unit: CXTPStatusBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085aa40
//
// 0085aa40  53                   push ebx
// 0085aa41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0085aa45  55                   push ebp
// 0085aa46  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0085aa4a  56                   push esi
// 0085aa4b  8bf1                 mov esi, ecx
// 0085aa4d  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0085aa53  57                   push edi
// 0085aa54  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085aa58  85c9                 test ecx, ecx
// 0085aa5a  7409                 je 0x85aa65
// 0085aa5c  57                   push edi
// 0085aa5d  53                   push ebx
// 0085aa5e  55                   push ebp
// 0085aa5f  56                   push esi
// 0085aa60  e83b8a0000           call 0x8634a0
// 0085aa65  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085aa69  50                   push eax
// 0085aa6a  57                   push edi
// 0085aa6b  53                   push ebx
// 0085aa6c  55                   push ebp
// 0085aa6d  8bce                 mov ecx, esi
// 0085aa6f  e8668ff9ff           call 0x7f39da
// 0085aa74  5f                   pop edi
// 0085aa75  5e                   pop esi
// 0085aa76  5d                   pop ebp
// 0085aa77  5b                   pop ebx
// 0085aa78  c21000               ret 0x10
// copied from an identical function in another client (function ?OnWndMsg@CXTPStatusBar@@MAEHIIJPAJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp