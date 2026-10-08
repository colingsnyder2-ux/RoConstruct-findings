// roc 2007-03 006040e0  unit: seg_00600000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006040e0
//
// 006040e0  53                   push ebx
// 006040e1  56                   push esi
// 006040e2  8bf1                 mov esi, ecx
// 006040e4  85f6                 test esi, esi
// 006040e6  7408                 je 0x6040f0
// 006040e8  8d9ef0000000         lea ebx, [esi + 0xf0]
// 006040ee  eb02                 jmp 0x6040f2
// 006040f0  33db                 xor ebx, ebx
// 006040f2  57                   push edi
// 006040f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006040f7  85ff                 test edi, edi
// 006040f9  7417                 je 0x604112
// 006040fb  8bcf                 mov ecx, edi
// 006040fd  e8aeace4ff           call 0x44edb0
// 00604102  85c0                 test eax, eax
// 00604104  740c                 je 0x604112
// 00604106  53                   push ebx
// 00604107  8d8808010000         lea ecx, [eax + 0x108]
// 0060410d  e8feefe1ff           call 0x423110
// 00604112  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00604116  53                   push ebx
// 00604117  57                   push edi
// 00604118  8bce                 mov ecx, esi
// 0060411a  e801aef3ff           call 0x53ef20
// 0060411f  85f6                 test esi, esi
// 00604121  5f                   pop edi
// 00604122  7408                 je 0x60412c
// 00604124  81c6f0000000         add esi, 0xf0
// 0060412a  eb02                 jmp 0x60412e
// 0060412c  33f6                 xor esi, esi
// 0060412e  85db                 test ebx, ebx
// 00604130  7417                 je 0x604149
// 00604132  8bcb                 mov ecx, ebx
// 00604134  e877ace4ff           call 0x44edb0
// 00604139  85c0                 test eax, eax
// 0060413b  740c                 je 0x604149
// 0060413d  56                   push esi
// 0060413e  8d8808010000         lea ecx, [eax + 0x108]
// 00604144  e8b779faff           call 0x5abb00
// 00604149  5e                   pop esi
// 0060414a  5b                   pop ebx
// 0060414b  c20800               ret 8
// library rbxgs/v8datamodel\Explosion.cpp (function ?onServiceProvider@Explosion@RBX@@EAEXPBVServiceProvider@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Explosion.cpp
