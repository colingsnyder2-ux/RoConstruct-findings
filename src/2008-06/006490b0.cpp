// roc 2008-06 006490b0  unit: RBX::Block  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006490b0
//
// 006490b0  83ec08               sub esp, 8
// 006490b3  53                   push ebx
// 006490b4  55                   push ebp
// 006490b5  56                   push esi
// 006490b6  57                   push edi
// 006490b7  8bf9                 mov edi, ecx
// 006490b9  8b4718               mov eax, dword ptr [edi + 0x18]
// 006490bc  8b28                 mov ebp, dword ptr [eax]
// 006490be  8b37                 mov esi, dword ptr [edi]
// 006490c0  896c2414             mov dword ptr [esp + 0x14], ebp
// 006490c4  89742410             mov dword ptr [esp + 0x10], esi
// 006490c8  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 006490cb  8b07                 mov eax, dword ptr [edi]
// 006490cd  85f6                 test esi, esi
// 006490cf  7404                 je 0x6490d5
// 006490d1  3bf0                 cmp esi, eax
// 006490d3  7406                 je 0x6490db
// 006490d5  ff1590288000         call dword ptr [0x802890]
// 006490db  3beb                 cmp ebp, ebx
// 006490dd  7438                 je 0x649117
// 006490df  85f6                 test esi, esi
// 006490e1  7530                 jne 0x649113
// 006490e3  ff1590288000         call dword ptr [0x802890]
// 006490e9  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 006490ec  7506                 jne 0x6490f4
// 006490ee  ff1590288000         call dword ptr [0x802890]
// 006490f4  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 006490f7  51                   push ecx
// 006490f8  e87d750500           call 0x6a067a
// 006490fd  83c404               add esp, 4
// 00649100  8d4c2410             lea ecx, [esp + 0x10]
// 00649104  e817f0ffff           call 0x648120
// 00649109  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0064910d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00649111  ebb5                 jmp 0x6490c8
// 00649113  8b36                 mov esi, dword ptr [esi]
// 00649115  ebd2                 jmp 0x6490e9
// 00649117  8bcf                 mov ecx, edi
// 00649119  5f                   pop edi
// 0064911a  5e                   pop esi
// 0064911b  5d                   pop ebp
// 0064911c  5b                   pop ebx
// 0064911d  83c408               add esp, 8
// 00649120  e99bfdffff           jmp 0x648ec0
// library openrbx-client/App\v8world\Block.cpp (function ??1BlockTemplates@BlockTemplate@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
