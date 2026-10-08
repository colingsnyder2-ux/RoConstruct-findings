// roc 2007-03 005d0d00  unit: seg_005d0000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0d00
//
// 005d0d00  6aff                 push -1
// 005d0d02  6808ad7500           push 0x75ad08
// 005d0d07  64a100000000         mov eax, dword ptr fs:[0]
// 005d0d0d  50                   push eax
// 005d0d0e  64892500000000       mov dword ptr fs:[0], esp
// 005d0d15  51                   push ecx
// 005d0d16  56                   push esi
// 005d0d17  57                   push edi
// 005d0d18  8bf9                 mov edi, ecx
// 005d0d1a  897c2408             mov dword ptr [esp + 8], edi
// 005d0d1e  c707a4b57b00         mov dword ptr [edi], 0x7bb5a4
// 005d0d24  c747048cb57b00       mov dword ptr [edi + 4], 0x7bb58c
// 005d0d2b  8b772c               mov esi, dword ptr [edi + 0x2c]
// 005d0d2e  85f6                 test esi, esi
// 005d0d30  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d0d38  742a                 je 0x5d0d64
// 005d0d3a  8d4604               lea eax, [esi + 4]
// 005d0d3d  83c9ff               or ecx, 0xffffffff
// 005d0d40  f00fc108             lock xadd dword ptr [eax], ecx
// 005d0d44  751e                 jne 0x5d0d64
// 005d0d46  8b16                 mov edx, dword ptr [esi]
// 005d0d48  8b4204               mov eax, dword ptr [edx + 4]
// 005d0d4b  8bce                 mov ecx, esi
// 005d0d4d  ffd0                 call eax
// 005d0d4f  8d4e08               lea ecx, [esi + 8]
// 005d0d52  83caff               or edx, 0xffffffff
// 005d0d55  f00fc111             lock xadd dword ptr [ecx], edx
// 005d0d59  7509                 jne 0x5d0d64
// 005d0d5b  8b06                 mov eax, dword ptr [esi]
// 005d0d5d  8b5008               mov edx, dword ptr [eax + 8]
// 005d0d60  8bce                 mov ecx, esi
// 005d0d62  ffd2                 call edx
// 005d0d64  8bcf                 mov ecx, edi
// 005d0d66  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d0d6e  e8ed810100           call 0x5e8f60
// 005d0d73  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d0d77  5f                   pop edi
// 005d0d78  5e                   pop esi
// 005d0d79  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0d80  83c410               add esp, 0x10
// 005d0d83  c3                   ret 
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ??1ToolMouseCommand@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
