// roc 2009-12 00857610  unit: CXTPTabClientWnd  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857610
//
// 00857610  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 00857617  7412                 je 0x85762b
// 00857619  8b442404             mov eax, dword ptr [esp + 4]
// 0085761d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00857620  50                   push eax
// 00857621  51                   push ecx
// 00857622  ff1534cc9800         call dword ptr [0x98cc34]
// 00857628  c20400               ret 4
// 0085762b  e820f0ffff           call 0x856650
// 00857630  85c0                 test eax, eax
// 00857632  7422                 je 0x857656
// 00857634  6a00                 push 0
// 00857636  e805ffffff           call 0x857540
// 0085763b  8b10                 mov edx, dword ptr [eax]
// 0085763d  8bc8                 mov ecx, eax
// 0085763f  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00857645  ffd0                 call eax
// 00857647  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085764b  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085764e  51                   push ecx
// 0085764f  52                   push edx
// 00857650  ff1534cc9800         call dword ptr [0x98cc34]
// 00857656  c20400               ret 4
// copied from an identical function in another client (function ?WorkspaceToScreen@CXTPTabClientWnd@@QBEXPAUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp