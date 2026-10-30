// roc 2011-06 008500b0  unit: CXTPDockingPaneManager  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008500b0
//
// 008500b0  83ec14               sub esp, 0x14
// 008500b3  53                   push ebx
// 008500b4  55                   push ebp
// 008500b5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008500b9  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008500bc  8b5018               mov edx, dword ptr [eax + 0x18]
// 008500bf  56                   push esi
// 008500c0  57                   push edi
// 008500c1  8d7d20               lea edi, [ebp + 0x20]
// 008500c4  8bd9                 mov ebx, ecx
// 008500c6  8bcf                 mov ecx, edi
// 008500c8  ffd2                 call edx
// 008500ca  50                   push eax
// 008500cb  e810f90600           call 0x8bf9e0
// 008500d0  50                   push eax
// 008500d1  e866a3fbff           call 0x80a43c
// 008500d6  8bf0                 mov esi, eax
// 008500d8  8b07                 mov eax, dword ptr [edi]
// 008500da  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008500dd  83c408               add esp, 8
// 008500e0  f7de                 neg esi
// 008500e2  1bf6                 sbb esi, esi
// 008500e4  8bcf                 mov ecx, edi
// 008500e6  f7de                 neg esi
// 008500e8  ffd2                 call edx
// 008500ea  89442410             mov dword ptr [esp + 0x10], eax
// 008500ee  85f6                 test esi, esi
// 008500f0  7523                 jne 0x850115
// 008500f2  85c0                 test eax, eax
// 008500f4  751f                 jne 0x850115
// 008500f6  8bcd                 mov ecx, ebp
// 008500f8  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00850100  e85be20100           call 0x86e360
// 00850105  a804                 test al, 4
// 00850107  743e                 je 0x850147
// 00850109  33c0                 xor eax, eax
// 0085010b  5f                   pop edi
// 0085010c  5e                   pop esi
// 0085010d  5d                   pop ebp
// 0085010e  5b                   pop ebx
// 0085010f  83c414               add esp, 0x14
// 00850112  c20800               ret 8
// 00850115  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0085011d  85f6                 test esi, esi
// 0085011f  741b                 je 0x85013c
// 00850121  8bcd                 mov ecx, ebp
// 00850123  e838e20100           call 0x86e360
// 00850128  a820                 test al, 0x20
// 0085012a  740c                 je 0x850138
// 0085012c  33c0                 xor eax, eax
// 0085012e  5f                   pop edi
// 0085012f  5e                   pop esi
// 00850130  5d                   pop ebp
// 00850131  5b                   pop ebx
// 00850132  83c414               add esp, 0x14
// 00850135  c20800               ret 8
// 00850138  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085013c  85c0                 test eax, eax
// 0085013e  7407                 je 0x850147
// 00850140  b808000000           mov eax, 8
// 00850145  eb0e                 jmp 0x850155
// 00850147  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085014b  f7d8                 neg eax
// 0085014d  1bc0                 sbb eax, eax
// 0085014f  83e0fc               and eax, 0xfffffffc
// 00850152  83c004               add eax, 4
// 00850155  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00850159  6a00                 push 0
// 0085015b  56                   push esi
// 0085015c  55                   push ebp
// 0085015d  50                   push eax
// 0085015e  8bcb                 mov ecx, ebx
// 00850160  e8fbddffff           call 0x84df60
// 00850165  85c0                 test eax, eax
// 00850167  75c3                 jne 0x85012c
// 00850169  85f6                 test esi, esi
// 0085016b  741f                 je 0x85018c
// 0085016d  56                   push esi
// 0085016e  57                   push edi
// 0085016f  8bcb                 mov ecx, ebx
// 00850171  c7833c01000001000000 mov dword ptr [ebx + 0x13c], 1
// 0085017b  e810ffffff           call 0x850090
// 00850180  c7833c01000000000000 mov dword ptr [ebx + 0x13c], 0
// 0085018a  eb30                 jmp 0x8501bc
// 0085018c  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 0085018f  8d442414             lea eax, [esp + 0x14]
// 00850193  50                   push eax
// 00850194  e8271b0700           call 0x8c1cc0
// 00850199  8b10                 mov edx, dword ptr [eax]
// 0085019b  83ec10               sub esp, 0x10
// 0085019e  8bcc                 mov ecx, esp
// 008501a0  8911                 mov dword ptr [ecx], edx
// 008501a2  8b5004               mov edx, dword ptr [eax + 4]
// 008501a5  895104               mov dword ptr [ecx + 4], edx
// 008501a8  8b5008               mov edx, dword ptr [eax + 8]
// 008501ab  8b400c               mov eax, dword ptr [eax + 0xc]
// 008501ae  895108               mov dword ptr [ecx + 8], edx
// 008501b1  89410c               mov dword ptr [ecx + 0xc], eax
// 008501b4  57                   push edi
// 008501b5  8bcb                 mov ecx, ebx
// 008501b7  e8c4e2ffff           call 0x84e480
// 008501bc  837c241000           cmp dword ptr [esp + 0x10], 0
// 008501c1  7407                 je 0x8501ca
// 008501c3  b809000000           mov eax, 9
// 008501c8  eb10                 jmp 0x8501da
// 008501ca  33c0                 xor eax, eax
// 008501cc  39442428             cmp dword ptr [esp + 0x28], eax
// 008501d0  0f94c0               sete al
// 008501d3  8d048501000000       lea eax, [eax*4 + 1]
// 008501da  6a00                 push 0
// 008501dc  6a00                 push 0
// 008501de  55                   push ebp
// 008501df  50                   push eax
// 008501e0  8bcb                 mov ecx, ebx
// 008501e2  e879ddffff           call 0x84df60
// 008501e7  5f                   pop edi
// 008501e8  5e                   pop esi
// 008501e9  5d                   pop ebp
// 008501ea  b801000000           mov eax, 1
// 008501ef  5b                   pop ebx
// 008501f0  83c414               add esp, 0x14
// 008501f3  c20800               ret 8
// copied from an identical function in another client (function ?_ToggleDocking@CXTPDockingPaneManager@@AAEHPAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp