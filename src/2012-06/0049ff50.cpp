// roc 2012-06 0049ff50  unit: Scintilla::CScintillaView  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ff50
//
// 0049ff50  51                   push ecx
// 0049ff51  53                   push ebx
// 0049ff52  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0049ff56  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0049ff59  55                   push ebp
// 0049ff5a  56                   push esi
// 0049ff5b  8bf1                 mov esi, ecx
// 0049ff5d  8944240c             mov dword ptr [esp + 0xc], eax
// 0049ff61  83c0ff               add eax, -1
// 0049ff64  8daeb4000000         lea ebp, [esi + 0xb4]
// 0049ff6a  0f889b000000         js 0x4a000b
// 0049ff70  3b4508               cmp eax, dword ptr [ebp + 8]
// 0049ff73  0f8d92000000         jge 0x4a000b
// 0049ff79  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0049ff7c  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0049ff7f  8b03                 mov eax, dword ptr [ebx]
// 0049ff81  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0049ff84  f6411401             test byte ptr [ecx + 0x14], 1
// 0049ff88  57                   push edi
// 0049ff89  8954241c             mov dword ptr [esp + 0x1c], edx
// 0049ff8d  6a01                 push 1
// 0049ff8f  8d4e58               lea ecx, [esi + 0x58]
// 0049ff92  7407                 je 0x49ff9b
// 0049ff94  e877d3ffff           call 0x49d310
// 0049ff99  eb05                 jmp 0x49ffa0
// 0049ff9b  e890d8ffff           call 0x49d830
// 0049ffa0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049ffa4  8b16                 mov edx, dword ptr [esi]
// 0049ffa6  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0049ffac  8bf8                 mov edi, eax
// 0049ffae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049ffb2  57                   push edi
// 0049ffb3  50                   push eax
// 0049ffb4  53                   push ebx
// 0049ffb5  51                   push ecx
// 0049ffb6  8bce                 mov ecx, esi
// 0049ffb8  ffd2                 call edx
// 0049ffba  3bc7                 cmp eax, edi
// 0049ffbc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0049ffc0  7c0e                 jl 0x49ffd0
// 0049ffc2  8b0b                 mov ecx, dword ptr [ebx]
// 0049ffc4  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0049ffc7  668b4c2410           mov cx, word ptr [esp + 0x10]
// 0049ffcc  66894a1e             mov word ptr [edx + 0x1e], cx
// 0049ffd0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049ffd4  3b96bc000000         cmp edx, dword ptr [esi + 0xbc]
// 0049ffda  7527                 jne 0x4a0003
// 0049ffdc  3bc7                 cmp eax, edi
// 0049ffde  7d23                 jge 0x4a0003
// 0049ffe0  8b7508               mov esi, dword ptr [ebp + 8]
// 0049ffe3  85f6                 test esi, esi
// 0049ffe5  7d05                 jge 0x49ffec
// 0049ffe7  e8d4234e00           call 0x9823c0
// 0049ffec  6aff                 push -1
// 0049ffee  8d4601               lea eax, [esi + 1]
// 0049fff1  50                   push eax
// 0049fff2  8bcd                 mov ecx, ebp
// 0049fff4  e867824f00           call 0x998260
// 0049fff9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0049fffc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004a0000  8914b1               mov dword ptr [ecx + esi*4], edx
// 004a0003  5f                   pop edi
// 004a0004  5e                   pop esi
// 004a0005  5d                   pop ebp
// 004a0006  5b                   pop ebx
// 004a0007  59                   pop ecx
// 004a0008  c20800               ret 8
// 004a000b  e8b0234e00           call 0x9823c0
// copied from an identical function in another client (function ?OnPrint@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp