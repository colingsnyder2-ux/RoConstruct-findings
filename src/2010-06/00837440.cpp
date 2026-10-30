// roc 2010-06 00837440  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 669 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00837440
//
// 00837440  6aff                 push -1
// 00837442  6868679b00           push 0x9b6768
// 00837447  64a100000000         mov eax, dword ptr fs:[0]
// 0083744d  50                   push eax
// 0083744e  83ec48               sub esp, 0x48
// 00837451  53                   push ebx
// 00837452  55                   push ebp
// 00837453  56                   push esi
// 00837454  57                   push edi
// 00837455  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0083745a  33c4                 xor eax, esp
// 0083745c  50                   push eax
// 0083745d  8d44245c             lea eax, [esp + 0x5c]
// 00837461  64a300000000         mov dword ptr fs:[0], eax
// 00837467  8bf1                 mov esi, ecx
// 00837469  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0083746d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00837473  83f804               cmp eax, 4
// 00837476  7511                 jne 0x837489
// 00837478  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 0083747f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00837487  7508                 jne 0x837491
// 00837489  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00837491  33ed                 xor ebp, ebp
// 00837493  396c247c             cmp dword ptr [esp + 0x7c], ebp
// 00837497  7537                 jne 0x8374d0
// 00837499  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0083749d  7412                 je 0x8374b1
// 0083749f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008374a3  c70006000000         mov dword ptr [eax], 6
// 008374a9  896804               mov dword ptr [eax + 4], ebp
// 008374ac  e916020000           jmp 0x8376c7
// 008374b1  8b442478             mov eax, dword ptr [esp + 0x78]
// 008374b5  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008374b9  55                   push ebp
// 008374ba  50                   push eax
// 008374bb  51                   push ecx
// 008374bc  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008374c0  51                   push ecx
// 008374c1  57                   push edi
// 008374c2  8bce                 mov ecx, esi
// 008374c4  e8175d0000           call 0x83d1e0
// 008374c9  8bc7                 mov eax, edi
// 008374cb  e9f7010000           jmp 0x8376c7
// 008374d0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008374d3  8d542438             lea edx, [esp + 0x38]
// 008374d7  52                   push edx
// 008374d8  50                   push eax
// 008374d9  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 008374df  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 008374e3  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 008374e9  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 008374ed  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 008374f3  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 008374f9  894c2428             mov dword ptr [esp + 0x28], ecx
// 008374fd  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00837503  8954242c             mov dword ptr [esp + 0x2c], edx
// 00837507  89442430             mov dword ptr [esp + 0x30], eax
// 0083750b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0083750f  3bdd                 cmp ebx, ebp
// 00837511  7403                 je 0x837516
// 00837513  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00837516  6a27                 push 0x27
// 00837518  8bce                 mov ecx, esi
// 0083751a  e8f15bf7ff           call 0x7ad110
// 0083751f  50                   push eax
// 00837520  55                   push ebp
// 00837521  8d4c2450             lea ecx, [esp + 0x50]
// 00837525  e81682fcff           call 0x7ff740
// 0083752a  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 00837530  8b442474             mov eax, dword ptr [esp + 0x74]
// 00837534  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0083753a  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 00837540  8bafb4000000         mov ebp, dword ptr [edi + 0xb4]
// 00837546  89542418             mov dword ptr [esp + 0x18], edx
// 0083754a  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 00837550  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00837558  894c2420             mov dword ptr [esp + 0x20], ecx
// 0083755c  89542424             mov dword ptr [esp + 0x24], edx
// 00837560  83f803               cmp eax, 3
// 00837563  0f84c2000000         je 0x83762b
// 00837569  83f802               cmp eax, 2
// 0083756c  0f84b9000000         je 0x83762b
// 00837572  85c0                 test eax, eax
// 00837574  743c                 je 0x8375b2
// 00837576  83f801               cmp eax, 1
// 00837579  7437                 je 0x8375b2
// 0083757b  837c241400           cmp dword ptr [esp + 0x14], 0
// 00837580  7530                 jne 0x8375b2
// 00837582  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00837586  8b542474             mov edx, dword ptr [esp + 0x74]
// 0083758a  51                   push ecx
// 0083758b  57                   push edi
// 0083758c  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00837590  52                   push edx
// 00837591  53                   push ebx
// 00837592  57                   push edi
// 00837593  8bce                 mov ecx, esi
// 00837595  e8465c0000           call 0x83d1e0
// 0083759a  8d4c2448             lea ecx, [esp + 0x48]
// 0083759e  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008375a6  e82582fcff           call 0x7ff7d0
// 008375ab  8bc7                 mov eax, edi
// 008375ad  e915010000           jmp 0x8376c7
// 008375b2  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 008375b9  7537                 jne 0x8375f2
// 008375bb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008375bf  6a27                 push 0x27
// 008375c1  83c2fc               add edx, -4
// 008375c4  52                   push edx
// 008375c5  8d47fc               lea eax, [edi - 4]
// 008375c8  50                   push eax
// 008375c9  8d4d04               lea ecx, [ebp + 4]
// 008375cc  51                   push ecx
// 008375cd  50                   push eax
// 008375ce  53                   push ebx
// 008375cf  8bce                 mov ecx, esi
// 008375d1  e8da70f7ff           call 0x7ae6b0
// 008375d6  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 008375dd  0f85c0000000         jne 0x8376a3
// 008375e3  8b542424             mov edx, dword ptr [esp + 0x24]
// 008375e7  8d47fd               lea eax, [edi - 3]
// 008375ea  83c2fd               add edx, -3
// 008375ed  e9a0000000           jmp 0x837692
// 008375f2  837c241400           cmp dword ptr [esp + 0x14], 0
// 008375f7  0f85a6000000         jne 0x8376a3
// 008375fd  6a27                 push 0x27
// 008375ff  8d45fc               lea eax, [ebp - 4]
// 00837602  50                   push eax
// 00837603  51                   push ecx
// 00837604  50                   push eax
// 00837605  8b442428             mov eax, dword ptr [esp + 0x28]
// 00837609  83c004               add eax, 4
// 0083760c  50                   push eax
// 0083760d  53                   push ebx
// 0083760e  8bce                 mov ecx, esi
// 00837610  e89b70f7ff           call 0x7ae6b0
// 00837615  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00837619  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083761d  6a14                 push 0x14
// 0083761f  83c5fd               add ebp, -3
// 00837622  55                   push ebp
// 00837623  51                   push ecx
// 00837624  55                   push ebp
// 00837625  83c205               add edx, 5
// 00837628  52                   push edx
// 00837629  eb70                 jmp 0x83769b
// 0083762b  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 00837632  6a27                 push 0x27
// 00837634  753f                 jne 0x837675
// 00837636  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0083763a  8d47fc               lea eax, [edi - 4]
// 0083763d  50                   push eax
// 0083763e  83c1fc               add ecx, -4
// 00837641  51                   push ecx
// 00837642  50                   push eax
// 00837643  8b442428             mov eax, dword ptr [esp + 0x28]
// 00837647  83c004               add eax, 4
// 0083764a  50                   push eax
// 0083764b  53                   push ebx
// 0083764c  8bce                 mov ecx, esi
// 0083764e  e85d70f7ff           call 0x7ae6b0
// 00837653  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 0083765a  7547                 jne 0x8376a3
// 0083765c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00837660  8b542418             mov edx, dword ptr [esp + 0x18]
// 00837664  6a14                 push 0x14
// 00837666  8d47fd               lea eax, [edi - 3]
// 00837669  50                   push eax
// 0083766a  83c1fd               add ecx, -3
// 0083766d  51                   push ecx
// 0083766e  50                   push eax
// 0083766f  83c205               add edx, 5
// 00837672  52                   push edx
// 00837673  eb26                 jmp 0x83769b
// 00837675  8d4102               lea eax, [ecx + 2]
// 00837678  52                   push edx
// 00837679  50                   push eax
// 0083767a  8d4d04               lea ecx, [ebp + 4]
// 0083767d  51                   push ecx
// 0083767e  50                   push eax
// 0083767f  53                   push ebx
// 00837680  8bce                 mov ecx, esi
// 00837682  e82970f7ff           call 0x7ae6b0
// 00837687  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083768b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083768f  83c003               add eax, 3
// 00837692  6a14                 push 0x14
// 00837694  52                   push edx
// 00837695  50                   push eax
// 00837696  83c505               add ebp, 5
// 00837699  55                   push ebp
// 0083769a  50                   push eax
// 0083769b  53                   push ebx
// 0083769c  8bce                 mov ecx, esi
// 0083769e  e80d70f7ff           call 0x7ae6b0
// 008376a3  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008376a7  8d4c2448             lea ecx, [esp + 0x48]
// 008376ab  c70600000000         mov dword ptr [esi], 0
// 008376b1  c7460400000000       mov dword ptr [esi + 4], 0
// 008376b8  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008376c0  e80b81fcff           call 0x7ff7d0
// 008376c5  8bc6                 mov eax, esi
// 008376c7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008376cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008376d2  59                   pop ecx
// 008376d3  5f                   pop edi
// 008376d4  5e                   pop esi
// 008376d5  5d                   pop ebp
// 008376d6  5b                   pop ebx
// 008376d7  83c454               add esp, 0x54
// 008376da  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp