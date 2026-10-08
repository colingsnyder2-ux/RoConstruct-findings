// roc 2007-08 0053a760  unit: RBX::VScriptContext::?$FactoryProduct  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053a760
//
// 0053a760  64a100000000         mov eax, dword ptr fs:[0]
// 0053a766  6aff                 push -1
// 0053a768  68c10c7500           push 0x750cc1
// 0053a76d  50                   push eax
// 0053a76e  64892500000000       mov dword ptr fs:[0], esp
// 0053a775  83ec50               sub esp, 0x50
// 0053a778  56                   push esi
// 0053a779  e84249f5ff           call 0x48f0c0
// 0053a77e  8b00                 mov eax, dword ptr [eax]
// 0053a780  6a01                 push 1
// 0053a782  50                   push eax
// 0053a783  e8b8210600           call 0x59c940
// 0053a788  83c408               add esp, 8
// 0053a78b  84c0                 test al, al
// 0053a78d  7533                 jne 0x53a7c2
// 0053a78f  8d4c2410             lea ecx, [esp + 0x10]
// 0053a793  68b0ac7900           push 0x79acb0
// 0053a798  51                   push ecx
// 0053a799  e82270fcff           call 0x5017c0
// 0053a79e  83c408               add esp, 8
// 0053a7a1  50                   push eax
// 0053a7a2  8d4c2430             lea ecx, [esp + 0x30]
// 0053a7a6  c744246001000000     mov dword ptr [esp + 0x60], 1
// 0053a7ae  e80d86edff           call 0x412dc0
// 0053a7b3  68c0108400           push 0x8410c0
// 0053a7b8  8d542430             lea edx, [esp + 0x30]
// 0053a7bc  52                   push edx
// 0053a7bd  e8dc630f00           call 0x630b9e
// 0053a7c2  8d442408             lea eax, [esp + 8]
// 0053a7c6  50                   push eax
// 0053a7c7  e884010100           call 0x54a950
// 0053a7cc  8b10                 mov edx, dword ptr [eax]
// 0053a7ce  85d2                 test edx, edx
// 0053a7d0  51                   push ecx
// 0053a7d1  c744246402000000     mov dword ptr [esp + 0x64], 2
// 0053a7d9  8964240c             mov dword ptr [esp + 0xc], esp
// 0053a7dd  8bcc                 mov ecx, esp
// 0053a7df  7405                 je 0x53a7e6
// 0053a7e1  83c204               add edx, 4
// 0053a7e4  eb02                 jmp 0x53a7e8
// 0053a7e6  33d2                 xor edx, edx
// 0053a7e8  8911                 mov dword ptr [ecx], edx
// 0053a7ea  8b4004               mov eax, dword ptr [eax + 4]
// 0053a7ed  85c0                 test eax, eax
// 0053a7ef  894104               mov dword ptr [ecx + 4], eax
// 0053a7f2  740c                 je 0x53a800
// 0053a7f4  83c004               add eax, 4
// 0053a7f7  b901000000           mov ecx, 1
// 0053a7fc  f00fc108             lock xadd dword ptr [eax], ecx
// 0053a800  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0053a804  52                   push edx
// 0053a805  e896beffff           call 0x5366a0
// 0053a80a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053a80e  83c40c               add esp, 0xc
// 0053a811  85f6                 test esi, esi
// 0053a813  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0053a81b  742a                 je 0x53a847
// 0053a81d  8d4604               lea eax, [esi + 4]
// 0053a820  83c9ff               or ecx, 0xffffffff
// 0053a823  f00fc108             lock xadd dword ptr [eax], ecx
// 0053a827  751e                 jne 0x53a847
// 0053a829  8b16                 mov edx, dword ptr [esi]
// 0053a82b  8b4204               mov eax, dword ptr [edx + 4]
// 0053a82e  8bce                 mov ecx, esi
// 0053a830  ffd0                 call eax
// 0053a832  8d4e08               lea ecx, [esi + 8]
// 0053a835  83caff               or edx, 0xffffffff
// 0053a838  f00fc111             lock xadd dword ptr [ecx], edx
// 0053a83c  7509                 jne 0x53a847
// 0053a83e  8b06                 mov eax, dword ptr [esi]
// 0053a840  8b5008               mov edx, dword ptr [eax + 8]
// 0053a843  8bce                 mov ecx, esi
// 0053a845  ffd2                 call edx
// 0053a847  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0053a84b  b801000000           mov eax, 1
// 0053a850  64890d00000000       mov dword ptr fs:[0], ecx
// 0053a857  5e                   pop esi
// 0053a858  83c45c               add esp, 0x5c
// 0053a85b  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?settings@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
