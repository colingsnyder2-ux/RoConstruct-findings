// roc 2011-06 0048d230  unit: Scintilla::CScintillaView  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d230
//
// 0048d230  51                   push ecx
// 0048d231  53                   push ebx
// 0048d232  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0048d236  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0048d239  55                   push ebp
// 0048d23a  56                   push esi
// 0048d23b  8bf1                 mov esi, ecx
// 0048d23d  8944240c             mov dword ptr [esp + 0xc], eax
// 0048d241  83c0ff               add eax, -1
// 0048d244  8daeb4000000         lea ebp, [esi + 0xb4]
// 0048d24a  0f889b000000         js 0x48d2eb
// 0048d250  3b4508               cmp eax, dword ptr [ebp + 8]
// 0048d253  0f8d92000000         jge 0x48d2eb
// 0048d259  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0048d25c  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0048d25f  8b03                 mov eax, dword ptr [ebx]
// 0048d261  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0048d264  f6411401             test byte ptr [ecx + 0x14], 1
// 0048d268  57                   push edi
// 0048d269  8954241c             mov dword ptr [esp + 0x1c], edx
// 0048d26d  6a01                 push 1
// 0048d26f  8d4e58               lea ecx, [esi + 0x58]
// 0048d272  7407                 je 0x48d27b
// 0048d274  e867d3ffff           call 0x48a5e0
// 0048d279  eb05                 jmp 0x48d280
// 0048d27b  e880d8ffff           call 0x48ab00
// 0048d280  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048d284  8b16                 mov edx, dword ptr [esi]
// 0048d286  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0048d28c  8bf8                 mov edi, eax
// 0048d28e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0048d292  57                   push edi
// 0048d293  50                   push eax
// 0048d294  53                   push ebx
// 0048d295  51                   push ecx
// 0048d296  8bce                 mov ecx, esi
// 0048d298  ffd2                 call edx
// 0048d29a  3bc7                 cmp eax, edi
// 0048d29c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0048d2a0  7c0e                 jl 0x48d2b0
// 0048d2a2  8b0b                 mov ecx, dword ptr [ebx]
// 0048d2a4  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0048d2a7  668b4c2410           mov cx, word ptr [esp + 0x10]
// 0048d2ac  66894a1e             mov word ptr [edx + 0x1e], cx
// 0048d2b0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048d2b4  3b96bc000000         cmp edx, dword ptr [esi + 0xbc]
// 0048d2ba  7527                 jne 0x48d2e3
// 0048d2bc  3bc7                 cmp eax, edi
// 0048d2be  7d23                 jge 0x48d2e3
// 0048d2c0  8b7508               mov esi, dword ptr [ebp + 8]
// 0048d2c3  85f6                 test esi, esi
// 0048d2c5  7d05                 jge 0x48d2cc
// 0048d2c7  e83ed03700           call 0x80a30a
// 0048d2cc  6aff                 push -1
// 0048d2ce  8d4601               lea eax, [esi + 1]
// 0048d2d1  50                   push eax
// 0048d2d2  8bcd                 mov ecx, ebp
// 0048d2d4  e867183b00           call 0x83eb40
// 0048d2d9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0048d2dc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0048d2e0  8914b1               mov dword ptr [ecx + esi*4], edx
// 0048d2e3  5f                   pop edi
// 0048d2e4  5e                   pop esi
// 0048d2e5  5d                   pop ebp
// 0048d2e6  5b                   pop ebx
// 0048d2e7  59                   pop ecx
// 0048d2e8  c20800               ret 8
// 0048d2eb  e81ad03700           call 0x80a30a
// copied from an identical function in another client (function ?OnPrint@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp