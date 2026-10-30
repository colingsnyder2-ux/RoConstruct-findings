// roc 2010-06 0080f160  unit: CXTPStatusBarPane  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f160
//
// 0080f160  6aff                 push -1
// 0080f162  688a429b00           push 0x9b428a
// 0080f167  64a100000000         mov eax, dword ptr fs:[0]
// 0080f16d  50                   push eax
// 0080f16e  81ec60010000         sub esp, 0x160
// 0080f174  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0080f179  33c4                 xor eax, esp
// 0080f17b  8984245c010000       mov dword ptr [esp + 0x15c], eax
// 0080f182  53                   push ebx
// 0080f183  55                   push ebp
// 0080f184  56                   push esi
// 0080f185  57                   push edi
// 0080f186  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0080f18b  33c4                 xor eax, esp
// 0080f18d  50                   push eax
// 0080f18e  8d842474010000       lea eax, [esp + 0x174]
// 0080f195  64a300000000         mov dword ptr fs:[0], eax
// 0080f19b  8bf1                 mov esi, ecx
// 0080f19d  89742418             mov dword ptr [esp + 0x18], esi
// 0080f1a1  e8bce21600           call 0x97d462
// 0080f1a6  33ed                 xor ebp, ebp
// 0080f1a8  8d8e98000000         lea ecx, [esi + 0x98]
// 0080f1ae  89ac247c010000       mov dword ptr [esp + 0x17c], ebp
// 0080f1b5  c706d415a600         mov dword ptr [esi], 0xa615d4
// 0080f1bb  e8c0feffff           call 0x80f080
// 0080f1c0  8dbeb0000000         lea edi, [esi + 0xb0]
// 0080f1c6  896f04               mov dword ptr [edi + 4], ebp
// 0080f1c9  c707080ea100         mov dword ptr [edi], 0xa10e08
// 0080f1cf  bb02000000           mov ebx, 2
// 0080f1d4  8bce                 mov ecx, esi
// 0080f1d6  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 0080f1dd  895e64               mov dword ptr [esi + 0x64], ebx
// 0080f1e0  e8bbd30100           call 0x82c5a0
// 0080f1e5  85c0                 test eax, eax
// 0080f1e7  8d4501               lea eax, [ebp + 1]
// 0080f1ea  740b                 je 0x80f1f7
// 0080f1ec  896e5c               mov dword ptr [esi + 0x5c], ebp
// 0080f1ef  896e60               mov dword ptr [esi + 0x60], ebp
// 0080f1f2  896e68               mov dword ptr [esi + 0x68], ebp
// 0080f1f5  eb09                 jmp 0x80f200
// 0080f1f7  895e5c               mov dword ptr [esi + 0x5c], ebx
// 0080f1fa  895e60               mov dword ptr [esi + 0x60], ebx
// 0080f1fd  894668               mov dword ptr [esi + 0x68], eax
// 0080f200  68a8000000           push 0xa8
// 0080f205  89aeac000000         mov dword ptr [esi + 0xac], ebp
// 0080f20b  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 0080f211  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0080f217  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 0080f21d  e87e87f9ff           call 0x7a79a0
// 0080f222  83c404               add esp, 4
// 0080f225  89442414             mov dword ptr [esp + 0x14], eax
// 0080f229  c684247c01000003     mov byte ptr [esp + 0x17c], 3
// 0080f231  3bc5                 cmp eax, ebp
// 0080f233  7409                 je 0x80f23e
// 0080f235  8bc8                 mov ecx, eax
// 0080f237  e894670000           call 0x8159d0
// 0080f23c  eb02                 jmp 0x80f240
// 0080f23e  33c0                 xor eax, eax
// 0080f240  8d4c241c             lea ecx, [esp + 0x1c]
// 0080f244  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 0080f24b  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0080f251  e89a840000           call 0x8176f0
// 0080f256  8d8424f8000000       lea eax, [esp + 0xf8]
// 0080f25d  50                   push eax
// 0080f25e  ff1570a19e00         call dword ptr [0x9ea170]
// 0080f264  50                   push eax
// 0080f265  8bcf                 mov ecx, edi
// 0080f267  e8fe8cf9ff           call 0x7a7f6a
// 0080f26c  89aebc000000         mov dword ptr [esi + 0xbc], ebp
// 0080f272  c786c400000001000000 mov dword ptr [esi + 0xc4], 1
// 0080f27c  89aec0000000         mov dword ptr [esi + 0xc0], ebp
// 0080f282  8bc6                 mov eax, esi
// 0080f284  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 0080f28b  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f292  59                   pop ecx
// 0080f293  5f                   pop edi
// 0080f294  5e                   pop esi
// 0080f295  5d                   pop ebp
// 0080f296  5b                   pop ebx
// 0080f297  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 0080f29e  33cc                 xor ecx, esp
// 0080f2a0  e82fa2f9ff           call 0x7a94d4
// 0080f2a5  81c46c010000         add esp, 0x16c
// 0080f2ab  c3                   ret 
// copied from an identical function in another client (function ??0CXTPStatusBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp