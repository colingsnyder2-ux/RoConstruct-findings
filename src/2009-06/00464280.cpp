// roc 2009-06 00464280  unit: Scintilla::CScintillaView  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464280
//
// 00464280  51                   push ecx
// 00464281  53                   push ebx
// 00464282  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00464286  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00464289  55                   push ebp
// 0046428a  56                   push esi
// 0046428b  8bf1                 mov esi, ecx
// 0046428d  8944240c             mov dword ptr [esp + 0xc], eax
// 00464291  83c0ff               add eax, -1
// 00464294  8daeb4000000         lea ebp, [esi + 0xb4]
// 0046429a  0f889b000000         js 0x46433b
// 004642a0  3b4508               cmp eax, dword ptr [ebp + 8]
// 004642a3  0f8d92000000         jge 0x46433b
// 004642a9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004642ac  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004642af  8b03                 mov eax, dword ptr [ebx]
// 004642b1  8b4874               mov ecx, dword ptr [eax + 0x74]
// 004642b4  f6411401             test byte ptr [ecx + 0x14], 1
// 004642b8  57                   push edi
// 004642b9  8954241c             mov dword ptr [esp + 0x1c], edx
// 004642bd  6a01                 push 1
// 004642bf  8d4e58               lea ecx, [esi + 0x58]
// 004642c2  7407                 je 0x4642cb
// 004642c4  e867d3ffff           call 0x461630
// 004642c9  eb05                 jmp 0x4642d0
// 004642cb  e880d8ffff           call 0x461b50
// 004642d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004642d4  8b16                 mov edx, dword ptr [esi]
// 004642d6  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 004642dc  8bf8                 mov edi, eax
// 004642de  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004642e2  57                   push edi
// 004642e3  50                   push eax
// 004642e4  53                   push ebx
// 004642e5  51                   push ecx
// 004642e6  8bce                 mov ecx, esi
// 004642e8  ffd2                 call edx
// 004642ea  3bc7                 cmp eax, edi
// 004642ec  8944241c             mov dword ptr [esp + 0x1c], eax
// 004642f0  7c0e                 jl 0x464300
// 004642f2  8b0b                 mov ecx, dword ptr [ebx]
// 004642f4  8b5174               mov edx, dword ptr [ecx + 0x74]
// 004642f7  668b4c2410           mov cx, word ptr [esp + 0x10]
// 004642fc  66894a1e             mov word ptr [edx + 0x1e], cx
// 00464300  8b542410             mov edx, dword ptr [esp + 0x10]
// 00464304  3b96bc000000         cmp edx, dword ptr [esi + 0xbc]
// 0046430a  7527                 jne 0x464333
// 0046430c  3bc7                 cmp eax, edi
// 0046430e  7d23                 jge 0x464333
// 00464310  8b7508               mov esi, dword ptr [ebp + 8]
// 00464313  85f6                 test esi, esi
// 00464315  7d05                 jge 0x46431c
// 00464317  e8c8492b00           call 0x718ce4
// 0046431c  6aff                 push -1
// 0046431e  8d4601               lea eax, [esi + 1]
// 00464321  50                   push eax
// 00464322  8bcd                 mov ecx, ebp
// 00464324  e8e7e12e00           call 0x752510
// 00464329  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0046432c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00464330  8914b1               mov dword ptr [ecx + esi*4], edx
// 00464333  5f                   pop edi
// 00464334  5e                   pop esi
// 00464335  5d                   pop ebp
// 00464336  5b                   pop ebx
// 00464337  59                   pop ecx
// 00464338  c20800               ret 8
// 0046433b  e8a4492b00           call 0x718ce4
// copied from an identical function in another client (function ?OnPrint@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp