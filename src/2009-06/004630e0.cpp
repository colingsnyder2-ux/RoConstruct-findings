// roc 2009-06 004630e0  unit: Scintilla::CScintillaView  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004630e0
//
// 004630e0  83ec18               sub esp, 0x18
// 004630e3  53                   push ebx
// 004630e4  56                   push esi
// 004630e5  57                   push edi
// 004630e6  8bf9                 mov edi, ecx
// 004630e8  8d7758               lea esi, [edi + 0x58]
// 004630eb  6a01                 push 1
// 004630ed  8bce                 mov ecx, esi
// 004630ef  e80ce5ffff           call 0x461600
// 004630f4  8bd8                 mov ebx, eax
// 004630f6  6a01                 push 1
// 004630f8  53                   push ebx
// 004630f9  8bce                 mov ecx, esi
// 004630fb  e800e7ffff           call 0x461800
// 00463100  6a01                 push 1
// 00463102  53                   push ebx
// 00463103  8bce                 mov ecx, esi
// 00463105  89442414             mov dword ptr [esp + 0x14], eax
// 00463109  e832e7ffff           call 0x461840
// 0046310e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00463111  89442410             mov dword ptr [esp + 0x10], eax
// 00463115  8d44240c             lea eax, [esp + 0xc]
// 00463119  50                   push eax
// 0046311a  51                   push ecx
// 0046311b  ff1510ee8900         call dword ptr [0x89ee10]
// 00463121  a1a4689e00           mov eax, dword ptr [0x9e68a4]
// 00463126  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00463129  8d542414             lea edx, [esp + 0x14]
// 0046312d  52                   push edx
// 0046312e  51                   push ecx
// 0046312f  ff15f4ed8900         call dword ptr [0x89edf4]
// 00463135  8b542410             mov edx, dword ptr [esp + 0x10]
// 00463139  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046313d  52                   push edx
// 0046313e  50                   push eax
// 0046313f  8d4c241c             lea ecx, [esp + 0x1c]
// 00463143  51                   push ecx
// 00463144  ff15c0ed8900         call dword ptr [0x89edc0]
// 0046314a  85c0                 test eax, eax
// 0046314c  7477                 je 0x4631c5
// 0046314e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00463152  8b442410             mov eax, dword ptr [esp + 0x10]
// 00463156  8bd1                 mov edx, ecx
// 00463158  2b542418             sub edx, dword ptr [esp + 0x18]
// 0046315c  3bc2                 cmp eax, edx
// 0046315e  7e0f                 jle 0x46316f
// 00463160  2bc1                 sub eax, ecx
// 00463162  83e814               sub eax, 0x14
// 00463165  50                   push eax
// 00463166  6a00                 push 0
// 00463168  8d44241c             lea eax, [esp + 0x1c]
// 0046316c  50                   push eax
// 0046316d  eb2b                 jmp 0x46319a
// 0046316f  6a01                 push 1
// 00463171  ff15dced8900         call dword ptr [0x89eddc]
// 00463177  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046317b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046317f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00463183  8bf9                 mov edi, ecx
// 00463185  2bfe                 sub edi, esi
// 00463187  03fa                 add edi, edx
// 00463189  3bf8                 cmp edi, eax
// 0046318b  7d1b                 jge 0x4631a8
// 0046318d  2bd6                 sub edx, esi
// 0046318f  83c228               add edx, 0x28
// 00463192  52                   push edx
// 00463193  6a00                 push 0
// 00463195  8d4c241c             lea ecx, [esp + 0x1c]
// 00463199  51                   push ecx
// 0046319a  ff15f8ed8900         call dword ptr [0x89edf8]
// 004631a0  8b742418             mov esi, dword ptr [esp + 0x18]
// 004631a4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004631a8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004631ac  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004631b0  6a01                 push 1
// 004631b2  2bce                 sub ecx, esi
// 004631b4  51                   push ecx
// 004631b5  8b0da4689e00         mov ecx, dword ptr [0x9e68a4]
// 004631bb  2bd0                 sub edx, eax
// 004631bd  52                   push edx
// 004631be  56                   push esi
// 004631bf  50                   push eax
// 004631c0  e8455c2b00           call 0x718e0a
// 004631c5  5f                   pop edi
// 004631c6  5e                   pop esi
// 004631c7  5b                   pop ebx
// 004631c8  83c418               add esp, 0x18
// 004631cb  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
