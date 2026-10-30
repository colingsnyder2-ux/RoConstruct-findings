// roc 2010-06 00470940  unit: Scintilla::CScintillaView  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00470940
//
// 00470940  51                   push ecx
// 00470941  53                   push ebx
// 00470942  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00470946  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00470949  55                   push ebp
// 0047094a  56                   push esi
// 0047094b  8bf1                 mov esi, ecx
// 0047094d  8944240c             mov dword ptr [esp + 0xc], eax
// 00470951  83c0ff               add eax, -1
// 00470954  8daeb4000000         lea ebp, [esi + 0xb4]
// 0047095a  0f889b000000         js 0x4709fb
// 00470960  3b4508               cmp eax, dword ptr [ebp + 8]
// 00470963  0f8d92000000         jge 0x4709fb
// 00470969  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0047096c  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0047096f  8b03                 mov eax, dword ptr [ebx]
// 00470971  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00470974  f6411401             test byte ptr [ecx + 0x14], 1
// 00470978  57                   push edi
// 00470979  8954241c             mov dword ptr [esp + 0x1c], edx
// 0047097d  6a01                 push 1
// 0047097f  8d4e58               lea ecx, [esi + 0x58]
// 00470982  7407                 je 0x47098b
// 00470984  e847d3ffff           call 0x46dcd0
// 00470989  eb05                 jmp 0x470990
// 0047098b  e860d8ffff           call 0x46e1f0
// 00470990  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00470994  8b16                 mov edx, dword ptr [esi]
// 00470996  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0047099c  8bf8                 mov edi, eax
// 0047099e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004709a2  57                   push edi
// 004709a3  50                   push eax
// 004709a4  53                   push ebx
// 004709a5  51                   push ecx
// 004709a6  8bce                 mov ecx, esi
// 004709a8  ffd2                 call edx
// 004709aa  3bc7                 cmp eax, edi
// 004709ac  8944241c             mov dword ptr [esp + 0x1c], eax
// 004709b0  7c0e                 jl 0x4709c0
// 004709b2  8b0b                 mov ecx, dword ptr [ebx]
// 004709b4  8b5174               mov edx, dword ptr [ecx + 0x74]
// 004709b7  668b4c2410           mov cx, word ptr [esp + 0x10]
// 004709bc  66894a1e             mov word ptr [edx + 0x1e], cx
// 004709c0  8b542410             mov edx, dword ptr [esp + 0x10]
// 004709c4  3b96bc000000         cmp edx, dword ptr [esi + 0xbc]
// 004709ca  7527                 jne 0x4709f3
// 004709cc  3bc7                 cmp eax, edi
// 004709ce  7d23                 jge 0x4709f3
// 004709d0  8b7508               mov esi, dword ptr [ebp + 8]
// 004709d3  85f6                 test esi, esi
// 004709d5  7d05                 jge 0x4709dc
// 004709d7  e870723300           call 0x7a7c4c
// 004709dc  6aff                 push -1
// 004709de  8d4601               lea eax, [esi + 1]
// 004709e1  50                   push eax
// 004709e2  8bcd                 mov ecx, ebp
// 004709e4  e817093700           call 0x7e1300
// 004709e9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004709ec  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004709f0  8914b1               mov dword ptr [ecx + esi*4], edx
// 004709f3  5f                   pop edi
// 004709f4  5e                   pop esi
// 004709f5  5d                   pop ebp
// 004709f6  5b                   pop ebx
// 004709f7  59                   pop ecx
// 004709f8  c20800               ret 8
// 004709fb  e84c723300           call 0x7a7c4c
// copied from an identical function in another client (function ?OnPrint@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp