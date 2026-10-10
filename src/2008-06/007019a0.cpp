// roc 2008-06 007019a0  unit: CXTPTabClientWnd  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007019a0
//
// 007019a0  83ec10               sub esp, 0x10
// 007019a3  56                   push esi
// 007019a4  8bf1                 mov esi, ecx
// 007019a6  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 007019ad  57                   push edi
// 007019ae  7516                 jne 0x7019c6
// 007019b0  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 007019b7  750d                 jne 0x7019c6
// 007019b9  e8aaf2f9ff           call 0x6a0c68
// 007019be  5f                   pop edi
// 007019bf  5e                   pop esi
// 007019c0  83c410               add esp, 0x10
// 007019c3  c20800               ret 8
// 007019c6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007019ca  50                   push eax
// 007019cb  e858a60b00           call 0x7bc028
// 007019d0  8bf8                 mov edi, eax
// 007019d2  85ff                 test edi, edi
// 007019d4  7437                 je 0x701a0d
// 007019d6  56                   push esi
// 007019d7  8d4c240c             lea ecx, [esp + 0xc]
// 007019db  e85061ffff           call 0x6f7b30
// 007019e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007019e4  8b16                 mov edx, dword ptr [esi]
// 007019e6  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007019ec  83ec10               sub esp, 0x10
// 007019ef  8bc4                 mov eax, esp
// 007019f1  8908                 mov dword ptr [eax], ecx
// 007019f3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007019f7  894804               mov dword ptr [eax + 4], ecx
// 007019fa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007019fe  894808               mov dword ptr [eax + 8], ecx
// 00701a01  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00701a05  89480c               mov dword ptr [eax + 0xc], ecx
// 00701a08  57                   push edi
// 00701a09  8bce                 mov ecx, esi
// 00701a0b  ffd2                 call edx
// 00701a0d  5f                   pop edi
// 00701a0e  b801000000           mov eax, 1
// 00701a13  5e                   pop esi
// 00701a14  83c410               add esp, 0x10
// 00701a17  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnPrintClient@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
