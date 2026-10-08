// roc 2007-08 0056ca20  unit: RBX::Lua::FunctionRef  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ca20
//
// 0056ca20  6aff                 push -1
// 0056ca22  68e3487500           push 0x7548e3
// 0056ca27  64a100000000         mov eax, dword ptr fs:[0]
// 0056ca2d  50                   push eax
// 0056ca2e  64892500000000       mov dword ptr fs:[0], esp
// 0056ca35  83ec0c               sub esp, 0xc
// 0056ca38  56                   push esi
// 0056ca39  8bf1                 mov esi, ecx
// 0056ca3b  c70600727800         mov dword ptr [esi], 0x787200
// 0056ca41  a1f8238c00           mov eax, dword ptr [0x8c23f8]
// 0056ca46  894604               mov dword ptr [esi + 4], eax
// 0056ca49  8b0dfc238c00         mov ecx, dword ptr [0x8c23fc]
// 0056ca4f  8bc1                 mov eax, ecx
// 0056ca51  85c0                 test eax, eax
// 0056ca53  57                   push edi
// 0056ca54  89742408             mov dword ptr [esp + 8], esi
// 0056ca58  894e08               mov dword ptr [esi + 8], ecx
// 0056ca5b  740c                 je 0x56ca69
// 0056ca5d  83c004               add eax, 4
// 0056ca60  ba01000000           mov edx, 1
// 0056ca65  f00fc110             lock xadd dword ptr [eax], edx
// 0056ca69  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056ca6d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0056ca70  8b7e04               mov edi, dword ptr [esi + 4]
// 0056ca73  894e0c               mov dword ptr [esi + 0xc], ecx
// 0056ca76  8b5018               mov edx, dword ptr [eax + 0x18]
// 0056ca79  8bcf                 mov ecx, edi
// 0056ca7b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056ca83  895618               mov dword ptr [esi + 0x18], edx
// 0056ca86  897c240c             mov dword ptr [esp + 0xc], edi
// 0056ca8a  e8c18c1b00           call 0x725750
// 0056ca8f  c644241001           mov byte ptr [esp + 0x10], 1
// 0056ca94  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056ca97  85c0                 test eax, eax
// 0056ca99  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0056ca9e  741a                 je 0x56caba
// 0056caa0  50                   push eax
// 0056caa1  e8fa120500           call 0x5bdda0
// 0056caa6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056caa9  68f0d8ffff           push 0xffffd8f0
// 0056caae  50                   push eax
// 0056caaf  e8ac220500           call 0x5bed60
// 0056cab4  83c40c               add esp, 0xc
// 0056cab7  89461c               mov dword ptr [esi + 0x1c], eax
// 0056caba  8b460c               mov eax, dword ptr [esi + 0xc]
// 0056cabd  85c0                 test eax, eax
// 0056cabf  7421                 je 0x56cae2
// 0056cac1  8b00                 mov eax, dword ptr [eax]
// 0056cac3  85c0                 test eax, eax
// 0056cac5  7408                 je 0x56cacf
// 0056cac7  894614               mov dword ptr [esi + 0x14], eax
// 0056caca  897010               mov dword ptr [eax + 0x10], esi
// 0056cacd  eb07                 jmp 0x56cad6
// 0056cacf  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0056cad6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056cad9  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0056cae0  8931                 mov dword ptr [ecx], esi
// 0056cae2  8bcf                 mov ecx, edi
// 0056cae4  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0056cae9  e8828c1b00           call 0x725770
// 0056caee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056caf2  5f                   pop edi
// 0056caf3  8bc6                 mov eax, esi
// 0056caf5  5e                   pop esi
// 0056caf6  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cafd  83c418               add esp, 0x18
// 0056cb00  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??0ThreadRef@Lua@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
