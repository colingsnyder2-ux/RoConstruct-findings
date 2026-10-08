// roc 2007-08 005d2a10  unit: RBX::ScriptMouseCommand  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2a10
//
// 005d2a10  6aff                 push -1
// 005d2a12  68d89c7500           push 0x759cd8
// 005d2a17  64a100000000         mov eax, dword ptr fs:[0]
// 005d2a1d  50                   push eax
// 005d2a1e  64892500000000       mov dword ptr fs:[0], esp
// 005d2a25  51                   push ecx
// 005d2a26  56                   push esi
// 005d2a27  57                   push edi
// 005d2a28  8bf9                 mov edi, ecx
// 005d2a2a  897c2408             mov dword ptr [esp + 8], edi
// 005d2a2e  c707bcaf7b00         mov dword ptr [edi], 0x7bafbc
// 005d2a34  c74704a0af7b00       mov dword ptr [edi + 4], 0x7bafa0
// 005d2a3b  8b772c               mov esi, dword ptr [edi + 0x2c]
// 005d2a3e  85f6                 test esi, esi
// 005d2a40  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d2a48  742a                 je 0x5d2a74
// 005d2a4a  8d4604               lea eax, [esi + 4]
// 005d2a4d  83c9ff               or ecx, 0xffffffff
// 005d2a50  f00fc108             lock xadd dword ptr [eax], ecx
// 005d2a54  751e                 jne 0x5d2a74
// 005d2a56  8b16                 mov edx, dword ptr [esi]
// 005d2a58  8b4204               mov eax, dword ptr [edx + 4]
// 005d2a5b  8bce                 mov ecx, esi
// 005d2a5d  ffd0                 call eax
// 005d2a5f  8d4e08               lea ecx, [esi + 8]
// 005d2a62  83caff               or edx, 0xffffffff
// 005d2a65  f00fc111             lock xadd dword ptr [ecx], edx
// 005d2a69  7509                 jne 0x5d2a74
// 005d2a6b  8b06                 mov eax, dword ptr [esi]
// 005d2a6d  8b5008               mov edx, dword ptr [eax + 8]
// 005d2a70  8bce                 mov ecx, esi
// 005d2a72  ffd2                 call edx
// 005d2a74  8bcf                 mov ecx, edi
// 005d2a76  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d2a7e  e8bde90200           call 0x601440
// 005d2a83  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d2a87  5f                   pop edi
// 005d2a88  5e                   pop esi
// 005d2a89  64890d00000000       mov dword ptr fs:[0], ecx
// 005d2a90  83c410               add esp, 0x10
// 005d2a93  c3                   ret 
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ??1ToolMouseCommand@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
