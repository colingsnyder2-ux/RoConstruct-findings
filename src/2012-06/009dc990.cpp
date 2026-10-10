// roc 2012-06 009dc990  unit: CXTPTabClientWnd  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc990
//
// 009dc990  83ec10               sub esp, 0x10
// 009dc993  56                   push esi
// 009dc994  8bf1                 mov esi, ecx
// 009dc996  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 009dc99d  57                   push edi
// 009dc99e  7516                 jne 0x9dc9b6
// 009dc9a0  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 009dc9a7  750d                 jne 0x9dc9b6
// 009dc9a9  e8305dfaff           call 0x9826de
// 009dc9ae  5f                   pop edi
// 009dc9af  5e                   pop esi
// 009dc9b0  83c410               add esp, 0x10
// 009dc9b3  c20800               ret 8
// 009dc9b6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009dc9ba  50                   push eax
// 009dc9bb  e8b2cb0b00           call 0xa99572
// 009dc9c0  8bf8                 mov edi, eax
// 009dc9c2  85ff                 test edi, edi
// 009dc9c4  7437                 je 0x9dc9fd
// 009dc9c6  56                   push esi
// 009dc9c7  8d4c240c             lea ecx, [esp + 0xc]
// 009dc9cb  e8d087ffff           call 0x9d51a0
// 009dc9d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009dc9d4  8b16                 mov edx, dword ptr [esi]
// 009dc9d6  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 009dc9dc  83ec10               sub esp, 0x10
// 009dc9df  8bc4                 mov eax, esp
// 009dc9e1  8908                 mov dword ptr [eax], ecx
// 009dc9e3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009dc9e7  894804               mov dword ptr [eax + 4], ecx
// 009dc9ea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009dc9ee  894808               mov dword ptr [eax + 8], ecx
// 009dc9f1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009dc9f5  89480c               mov dword ptr [eax + 0xc], ecx
// 009dc9f8  57                   push edi
// 009dc9f9  8bce                 mov ecx, esi
// 009dc9fb  ffd2                 call edx
// 009dc9fd  5f                   pop edi
// 009dc9fe  b801000000           mov eax, 1
// 009dca03  5e                   pop esi
// 009dca04  83c410               add esp, 0x10
// 009dca07  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnPrintClient@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
