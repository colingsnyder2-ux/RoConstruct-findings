// roc 2009-12 00855030  unit: CXTPTabClientWnd  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855030
//
// 00855030  83ec10               sub esp, 0x10
// 00855033  56                   push esi
// 00855034  8bf1                 mov esi, ecx
// 00855036  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0085503d  57                   push edi
// 0085503e  7516                 jne 0x855056
// 00855040  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00855047  750d                 jne 0x855056
// 00855049  e8e2edf9ff           call 0x7f3e30
// 0085504e  5f                   pop edi
// 0085504f  5e                   pop esi
// 00855050  83c410               add esp, 0x10
// 00855053  c20800               ret 8
// 00855056  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085505a  50                   push eax
// 0085505b  e8d0130d00           call 0x926430
// 00855060  8bf8                 mov edi, eax
// 00855062  85ff                 test edi, edi
// 00855064  7437                 je 0x85509d
// 00855066  56                   push esi
// 00855067  8d4c240c             lea ecx, [esp + 0xc]
// 0085506b  e86062ffff           call 0x84b2d0
// 00855070  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00855074  8b16                 mov edx, dword ptr [esi]
// 00855076  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0085507c  83ec10               sub esp, 0x10
// 0085507f  8bc4                 mov eax, esp
// 00855081  8908                 mov dword ptr [eax], ecx
// 00855083  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00855087  894804               mov dword ptr [eax + 4], ecx
// 0085508a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085508e  894808               mov dword ptr [eax + 8], ecx
// 00855091  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00855095  89480c               mov dword ptr [eax + 0xc], ecx
// 00855098  57                   push edi
// 00855099  8bce                 mov ecx, esi
// 0085509b  ffd2                 call edx
// 0085509d  5f                   pop edi
// 0085509e  b801000000           mov eax, 1
// 008550a3  5e                   pop esi
// 008550a4  83c410               add esp, 0x10
// 008550a7  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTPTabClientWnd@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp