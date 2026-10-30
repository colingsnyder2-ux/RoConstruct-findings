// roc 2011-06 00894470  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 669 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00894470
//
// 00894470  6aff                 push -1
// 00894472  686898a000           push 0xa09868
// 00894477  64a100000000         mov eax, dword ptr fs:[0]
// 0089447d  50                   push eax
// 0089447e  83ec48               sub esp, 0x48
// 00894481  53                   push ebx
// 00894482  55                   push ebp
// 00894483  56                   push esi
// 00894484  57                   push edi
// 00894485  a12058c900           mov eax, dword ptr [0xc95820]
// 0089448a  33c4                 xor eax, esp
// 0089448c  50                   push eax
// 0089448d  8d44245c             lea eax, [esp + 0x5c]
// 00894491  64a300000000         mov dword ptr fs:[0], eax
// 00894497  8bf1                 mov esi, ecx
// 00894499  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0089449d  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 008944a3  83f804               cmp eax, 4
// 008944a6  7511                 jne 0x8944b9
// 008944a8  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 008944af  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008944b7  7508                 jne 0x8944c1
// 008944b9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008944c1  33ed                 xor ebp, ebp
// 008944c3  396c247c             cmp dword ptr [esp + 0x7c], ebp
// 008944c7  7537                 jne 0x894500
// 008944c9  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008944cd  7412                 je 0x8944e1
// 008944cf  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008944d3  c70006000000         mov dword ptr [eax], 6
// 008944d9  896804               mov dword ptr [eax + 4], ebp
// 008944dc  e916020000           jmp 0x8946f7
// 008944e1  8b442478             mov eax, dword ptr [esp + 0x78]
// 008944e5  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008944e9  55                   push ebp
// 008944ea  50                   push eax
// 008944eb  51                   push ecx
// 008944ec  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008944f0  51                   push ecx
// 008944f1  57                   push edi
// 008944f2  8bce                 mov ecx, esi
// 008944f4  e8f75c0000           call 0x89a1f0
// 008944f9  8bc7                 mov eax, edi
// 008944fb  e9f7010000           jmp 0x8946f7
// 00894500  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00894503  8d542438             lea edx, [esp + 0x38]
// 00894507  52                   push edx
// 00894508  50                   push eax
// 00894509  ff157c1ca400         call dword ptr [0xa41c7c]
// 0089450f  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00894513  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00894519  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 0089451d  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00894523  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 00894529  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089452d  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00894533  8954242c             mov dword ptr [esp + 0x2c], edx
// 00894537  89442430             mov dword ptr [esp + 0x30], eax
// 0089453b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0089453f  3bdd                 cmp ebx, ebp
// 00894541  7403                 je 0x894546
// 00894543  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00894546  6a27                 push 0x27
// 00894548  8bce                 mov ecx, esi
// 0089454a  e861b0f7ff           call 0x80f5b0
// 0089454f  50                   push eax
// 00894550  55                   push ebp
// 00894551  8d4c2450             lea ecx, [esp + 0x50]
// 00894555  e8668cfcff           call 0x85d1c0
// 0089455a  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 00894560  8b442474             mov eax, dword ptr [esp + 0x74]
// 00894564  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0089456a  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 00894570  8bafb4000000         mov ebp, dword ptr [edi + 0xb4]
// 00894576  89542418             mov dword ptr [esp + 0x18], edx
// 0089457a  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 00894580  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00894588  894c2420             mov dword ptr [esp + 0x20], ecx
// 0089458c  89542424             mov dword ptr [esp + 0x24], edx
// 00894590  83f803               cmp eax, 3
// 00894593  0f84c2000000         je 0x89465b
// 00894599  83f802               cmp eax, 2
// 0089459c  0f84b9000000         je 0x89465b
// 008945a2  85c0                 test eax, eax
// 008945a4  743c                 je 0x8945e2
// 008945a6  83f801               cmp eax, 1
// 008945a9  7437                 je 0x8945e2
// 008945ab  837c241400           cmp dword ptr [esp + 0x14], 0
// 008945b0  7530                 jne 0x8945e2
// 008945b2  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008945b6  8b542474             mov edx, dword ptr [esp + 0x74]
// 008945ba  51                   push ecx
// 008945bb  57                   push edi
// 008945bc  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 008945c0  52                   push edx
// 008945c1  53                   push ebx
// 008945c2  57                   push edi
// 008945c3  8bce                 mov ecx, esi
// 008945c5  e8265c0000           call 0x89a1f0
// 008945ca  8d4c2448             lea ecx, [esp + 0x48]
// 008945ce  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008945d6  e8758cfcff           call 0x85d250
// 008945db  8bc7                 mov eax, edi
// 008945dd  e915010000           jmp 0x8946f7
// 008945e2  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 008945e9  7537                 jne 0x894622
// 008945eb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008945ef  6a27                 push 0x27
// 008945f1  83c2fc               add edx, -4
// 008945f4  52                   push edx
// 008945f5  8d47fc               lea eax, [edi - 4]
// 008945f8  50                   push eax
// 008945f9  8d4d04               lea ecx, [ebp + 4]
// 008945fc  51                   push ecx
// 008945fd  50                   push eax
// 008945fe  53                   push ebx
// 008945ff  8bce                 mov ecx, esi
// 00894601  e8bac4f7ff           call 0x810ac0
// 00894606  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 0089460d  0f85c0000000         jne 0x8946d3
// 00894613  8b542424             mov edx, dword ptr [esp + 0x24]
// 00894617  8d47fd               lea eax, [edi - 3]
// 0089461a  83c2fd               add edx, -3
// 0089461d  e9a0000000           jmp 0x8946c2
// 00894622  837c241400           cmp dword ptr [esp + 0x14], 0
// 00894627  0f85a6000000         jne 0x8946d3
// 0089462d  6a27                 push 0x27
// 0089462f  8d45fc               lea eax, [ebp - 4]
// 00894632  50                   push eax
// 00894633  51                   push ecx
// 00894634  50                   push eax
// 00894635  8b442428             mov eax, dword ptr [esp + 0x28]
// 00894639  83c004               add eax, 4
// 0089463c  50                   push eax
// 0089463d  53                   push ebx
// 0089463e  8bce                 mov ecx, esi
// 00894640  e87bc4f7ff           call 0x810ac0
// 00894645  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00894649  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089464d  6a14                 push 0x14
// 0089464f  83c5fd               add ebp, -3
// 00894652  55                   push ebp
// 00894653  51                   push ecx
// 00894654  55                   push ebp
// 00894655  83c205               add edx, 5
// 00894658  52                   push edx
// 00894659  eb70                 jmp 0x8946cb
// 0089465b  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 00894662  6a27                 push 0x27
// 00894664  753f                 jne 0x8946a5
// 00894666  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0089466a  8d47fc               lea eax, [edi - 4]
// 0089466d  50                   push eax
// 0089466e  83c1fc               add ecx, -4
// 00894671  51                   push ecx
// 00894672  50                   push eax
// 00894673  8b442428             mov eax, dword ptr [esp + 0x28]
// 00894677  83c004               add eax, 4
// 0089467a  50                   push eax
// 0089467b  53                   push ebx
// 0089467c  8bce                 mov ecx, esi
// 0089467e  e83dc4f7ff           call 0x810ac0
// 00894683  83be4405000000       cmp dword ptr [esi + 0x544], 0
// 0089468a  7547                 jne 0x8946d3
// 0089468c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00894690  8b542418             mov edx, dword ptr [esp + 0x18]
// 00894694  6a14                 push 0x14
// 00894696  8d47fd               lea eax, [edi - 3]
// 00894699  50                   push eax
// 0089469a  83c1fd               add ecx, -3
// 0089469d  51                   push ecx
// 0089469e  50                   push eax
// 0089469f  83c205               add edx, 5
// 008946a2  52                   push edx
// 008946a3  eb26                 jmp 0x8946cb
// 008946a5  8d4102               lea eax, [ecx + 2]
// 008946a8  52                   push edx
// 008946a9  50                   push eax
// 008946aa  8d4d04               lea ecx, [ebp + 4]
// 008946ad  51                   push ecx
// 008946ae  50                   push eax
// 008946af  53                   push ebx
// 008946b0  8bce                 mov ecx, esi
// 008946b2  e809c4f7ff           call 0x810ac0
// 008946b7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008946bb  8b542424             mov edx, dword ptr [esp + 0x24]
// 008946bf  83c003               add eax, 3
// 008946c2  6a14                 push 0x14
// 008946c4  52                   push edx
// 008946c5  50                   push eax
// 008946c6  83c505               add ebp, 5
// 008946c9  55                   push ebp
// 008946ca  50                   push eax
// 008946cb  53                   push ebx
// 008946cc  8bce                 mov ecx, esi
// 008946ce  e8edc3f7ff           call 0x810ac0
// 008946d3  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008946d7  8d4c2448             lea ecx, [esp + 0x48]
// 008946db  c70600000000         mov dword ptr [esi], 0
// 008946e1  c7460400000000       mov dword ptr [esi + 4], 0
// 008946e8  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008946f0  e85b8bfcff           call 0x85d250
// 008946f5  8bc6                 mov eax, esi
// 008946f7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008946fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00894702  59                   pop ecx
// 00894703  5f                   pop edi
// 00894704  5e                   pop esi
// 00894705  5d                   pop ebp
// 00894706  5b                   pop ebx
// 00894707  83c454               add esp, 0x54
// 0089470a  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp