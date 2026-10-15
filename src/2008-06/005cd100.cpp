// roc 2008-06 005cd100  unit: RBX::P8Camera::?$GetSetImpl  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd100
//
// 005cd100  81ec90000000         sub esp, 0x90
// 005cd106  56                   push esi
// 005cd107  57                   push edi
// 005cd108  8bf1                 mov esi, ecx
// 005cd10a  e8b1faffff           call 0x5ccbc0
// 005cd10f  8dbe74010000         lea edi, [esi + 0x174]
// 005cd115  57                   push edi
// 005cd116  8d4c240c             lea ecx, [esp + 0xc]
// 005cd11a  e80161f4ff           call 0x513220
// 005cd11f  d94724               fld dword ptr [edi + 0x24]
// 005cd122  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 005cd128  d95c242c             fstp dword ptr [esp + 0x2c]
// 005cd12c  d94728               fld dword ptr [edi + 0x28]
// 005cd12f  d95c2430             fstp dword ptr [esp + 0x30]
// 005cd133  d9472c               fld dword ptr [edi + 0x2c]
// 005cd136  d95c2434             fstp dword ptr [esp + 0x34]
// 005cd13a  85c0                 test eax, eax
// 005cd13c  7419                 je 0x5cd157
// 005cd13e  6a00                 push 0
// 005cd140  6804839400           push 0x948304
// 005cd145  687c909200           push 0x92907c
// 005cd14a  6a00                 push 0
// 005cd14c  50                   push eax
// 005cd14d  e874460d00           call 0x6a17c6
// 005cd152  83c414               add esp, 0x14
// 005cd155  eb02                 jmp 0x5cd159
// 005cd157  33c0                 xor eax, eax
// 005cd159  6a00                 push 0
// 005cd15b  68c8169500           push 0x9516c8
// 005cd160  6804839400           push 0x948304
// 005cd165  6a00                 push 0
// 005cd167  50                   push eax
// 005cd168  e859460d00           call 0x6a17c6
// 005cd16d  83c414               add esp, 0x14
// 005cd170  85c0                 test eax, eax
// 005cd172  740f                 je 0x5cd183
// 005cd174  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 005cd17a  51                   push ecx
// 005cd17b  57                   push edi
// 005cd17c  8bc8                 mov ecx, eax
// 005cd17e  e8bd4a0700           call 0x641c40
// 005cd183  8d542468             lea edx, [esp + 0x68]
// 005cd187  8dbe30010000         lea edi, [esi + 0x130]
// 005cd18d  52                   push edx
// 005cd18e  8bcf                 mov ecx, edi
// 005cd190  e81b36f4ff           call 0x5107b0
// 005cd195  d905c86f8200         fld dword ptr [0x826fc8]
// 005cd19b  51                   push ecx
// 005cd19c  d91c24               fstp dword ptr [esp]
// 005cd19f  8d44240c             lea eax, [esp + 0xc]
// 005cd1a3  50                   push eax
// 005cd1a4  8d4c2440             lea ecx, [esp + 0x40]
// 005cd1a8  51                   push ecx
// 005cd1a9  8d4c2474             lea ecx, [esp + 0x74]
// 005cd1ad  e89eb8f4ff           call 0x518a50
// 005cd1b2  8d542438             lea edx, [esp + 0x38]
// 005cd1b6  52                   push edx
// 005cd1b7  e8f4070100           call 0x5dd9b0
// 005cd1bc  83c404               add esp, 4
// 005cd1bf  84c0                 test al, al
// 005cd1c1  740c                 je 0x5cd1cf
// 005cd1c3  8d442438             lea eax, [esp + 0x38]
// 005cd1c7  50                   push eax
// 005cd1c8  8bcf                 mov ecx, edi
// 005cd1ca  e81136f4ff           call 0x5107e0
// 005cd1cf  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 005cd1d6  7426                 je 0x5cd1fe
// 005cd1d8  d9058c748200         fld dword ptr [0x82748c]
// 005cd1de  83ec08               sub esp, 8
// 005cd1e1  d9542404             fst dword ptr [esp + 4]
// 005cd1e5  8d4c2470             lea ecx, [esp + 0x70]
// 005cd1e9  d91c24               fstp dword ptr [esp]
// 005cd1ec  51                   push ecx
// 005cd1ed  8d542444             lea edx, [esp + 0x44]
// 005cd1f1  52                   push edx
// 005cd1f2  e8a9100100           call 0x5de2a0
// 005cd1f7  83c410               add esp, 0x10
// 005cd1fa  84c0                 test al, al
// 005cd1fc  7514                 jne 0x5cd212
// 005cd1fe  8bce                 mov ecx, esi
// 005cd200  e84bedffff           call 0x5cbf50
// 005cd205  85c0                 test eax, eax
// 005cd207  7409                 je 0x5cd212
// 005cd209  8b10                 mov edx, dword ptr [eax]
// 005cd20b  8bc8                 mov ecx, eax
// 005cd20d  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cd210  ffd0                 call eax
// 005cd212  5f                   pop edi
// 005cd213  5e                   pop esi
// 005cd214  81c490000000         add esp, 0x90
// 005cd21a  c3                   ret 
// library rbxgs/roc_unit_5cb02dbeca051387.cpp (function ?onHeartbeat@Camera@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5cb02dbeca051387.cpp
