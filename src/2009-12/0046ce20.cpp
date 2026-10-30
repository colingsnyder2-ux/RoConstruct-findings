// roc 2009-12 0046ce20  unit: Scintilla::CScintillaView  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ce20
//
// 0046ce20  51                   push ecx
// 0046ce21  53                   push ebx
// 0046ce22  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0046ce26  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0046ce29  55                   push ebp
// 0046ce2a  56                   push esi
// 0046ce2b  8bf1                 mov esi, ecx
// 0046ce2d  8944240c             mov dword ptr [esp + 0xc], eax
// 0046ce31  83c0ff               add eax, -1
// 0046ce34  8daeb4000000         lea ebp, [esi + 0xb4]
// 0046ce3a  0f889b000000         js 0x46cedb
// 0046ce40  3b4508               cmp eax, dword ptr [ebp + 8]
// 0046ce43  0f8d92000000         jge 0x46cedb
// 0046ce49  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0046ce4c  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0046ce4f  8b03                 mov eax, dword ptr [ebx]
// 0046ce51  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0046ce54  f6411401             test byte ptr [ecx + 0x14], 1
// 0046ce58  57                   push edi
// 0046ce59  8954241c             mov dword ptr [esp + 0x1c], edx
// 0046ce5d  6a01                 push 1
// 0046ce5f  8d4e58               lea ecx, [esi + 0x58]
// 0046ce62  7407                 je 0x46ce6b
// 0046ce64  e867d3ffff           call 0x46a1d0
// 0046ce69  eb05                 jmp 0x46ce70
// 0046ce6b  e880d8ffff           call 0x46a6f0
// 0046ce70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046ce74  8b16                 mov edx, dword ptr [esi]
// 0046ce76  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0046ce7c  8bf8                 mov edi, eax
// 0046ce7e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046ce82  57                   push edi
// 0046ce83  50                   push eax
// 0046ce84  53                   push ebx
// 0046ce85  51                   push ecx
// 0046ce86  8bce                 mov ecx, esi
// 0046ce88  ffd2                 call edx
// 0046ce8a  3bc7                 cmp eax, edi
// 0046ce8c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0046ce90  7c0e                 jl 0x46cea0
// 0046ce92  8b0b                 mov ecx, dword ptr [ebx]
// 0046ce94  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0046ce97  668b4c2410           mov cx, word ptr [esp + 0x10]
// 0046ce9c  66894a1e             mov word ptr [edx + 0x1e], cx
// 0046cea0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046cea4  3b96bc000000         cmp edx, dword ptr [esi + 0xbc]
// 0046ceaa  7527                 jne 0x46ced3
// 0046ceac  3bc7                 cmp eax, edi
// 0046ceae  7d23                 jge 0x46ced3
// 0046ceb0  8b7508               mov esi, dword ptr [ebp + 8]
// 0046ceb3  85f6                 test esi, esi
// 0046ceb5  7d05                 jge 0x46cebc
// 0046ceb7  e8506c3800           call 0x7f3b0c
// 0046cebc  6aff                 push -1
// 0046cebe  8d4601               lea eax, [esi + 1]
// 0046cec1  50                   push eax
// 0046cec2  8bcd                 mov ecx, ebp
// 0046cec4  e8d7843e00           call 0x8553a0
// 0046cec9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0046cecc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0046ced0  8914b1               mov dword ptr [ecx + esi*4], edx
// 0046ced3  5f                   pop edi
// 0046ced4  5e                   pop esi
// 0046ced5  5d                   pop ebp
// 0046ced6  5b                   pop ebx
// 0046ced7  59                   pop ecx
// 0046ced8  c20800               ret 8
// 0046cedb  e82c6c3800           call 0x7f3b0c
// copied from an identical function in another client (function ?OnPrint@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp