// from server: 100% by auto
// roc 2007-08 0068b650  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b650
//
// 0068b650  56                   push esi
// 0068b651  57                   push edi
// 0068b652  6a01                 push 1
// 0068b654  8bf1                 mov esi, ecx
// 0068b656  e895e8ffff           call 0x689ef0
// 0068b65b  ff154cee7700         call dword ptr [0x77ee4c]
// 0068b661  50                   push eax
// 0068b662  e8594bfaff           call 0x6301c0
// 0068b667  6a00                 push 0
// 0068b669  8bf8                 mov edi, eax
// 0068b66b  ff1548ee7700         call dword ptr [0x77ee48]
// 0068b671  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0068b677  85c0                 test eax, eax
// 0068b679  7418                 je 0x68b693
// 0068b67b  8b4004               mov eax, dword ptr [eax + 4]
// 0068b67e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0068b681  50                   push eax
// 0068b682  51                   push ecx
// 0068b683  ff1524ed7700         call dword ptr [0x77ed24]
// 0068b689  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0068b693  5f                   pop edi
// 0068b694  5e                   pop esi
// 0068b695  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?CancelLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
