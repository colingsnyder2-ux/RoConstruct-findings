// roc 2009-12 008e8230  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8230
//
// 008e8230  8b442408             mov eax, dword ptr [esp + 8]
// 008e8234  83782000             cmp dword ptr [eax + 0x20], 0
// 008e8238  53                   push ebx
// 008e8239  55                   push ebp
// 008e823a  56                   push esi
// 008e823b  57                   push edi
// 008e823c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008e8240  8bf1                 mov esi, ecx
// 008e8242  bd12000000           mov ebp, 0x12
// 008e8247  0f84f3000000         je 0x8e8340
// 008e824d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008e8250  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008e8253  3bc8                 cmp ecx, eax
// 008e8255  7552                 jne 0x8e82a9
// 008e8257  83782400             cmp dword ptr [eax + 0x24], 0
// 008e825b  7452                 je 0x8e82af
// 008e825d  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 008e8264  7535                 jne 0x8e829b
// 008e8266  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e826a  8b11                 mov edx, dword ptr [ecx]
// 008e826c  6a21                 push 0x21
// 008e826e  6a32                 push 0x32
// 008e8270  83ec10               sub esp, 0x10
// 008e8273  8bc4                 mov eax, esp
// 008e8275  8910                 mov dword ptr [eax], edx
// 008e8277  8b5104               mov edx, dword ptr [ecx + 4]
// 008e827a  895004               mov dword ptr [eax + 4], edx
// 008e827d  8b5108               mov edx, dword ptr [ecx + 8]
// 008e8280  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008e8283  895008               mov dword ptr [eax + 8], edx
// 008e8286  89480c               mov dword ptr [eax + 0xc], ecx
// 008e8289  57                   push edi
// 008e828a  8bce                 mov ecx, esi
// 008e828c  e83fffffff           call 0x8e81d0
// 008e8291  bd2f000000           mov ebp, 0x2f
// 008e8296  e9a5000000           jmp 0x8e8340
// 008e829b  6a00                 push 0
// 008e829d  68ffcf8b00           push 0x8bcfff
// 008e82a2  68fe8e4b00           push 0x4b8efe
// 008e82a7  eb55                 jmp 0x8e82fe
// 008e82a9  83782400             cmp dword ptr [eax + 0x24], 0
// 008e82ad  7508                 jne 0x8e82b7
// 008e82af  3bc8                 cmp ecx, eax
// 008e82b1  0f8589000000         jne 0x8e8340
// 008e82b7  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 008e82be  7532                 jne 0x8e82f2
// 008e82c0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e82c4  8b11                 mov edx, dword ptr [ecx]
// 008e82c6  6a1f                 push 0x1f
// 008e82c8  6a20                 push 0x20
// 008e82ca  83ec10               sub esp, 0x10
// 008e82cd  8bc4                 mov eax, esp
// 008e82cf  8910                 mov dword ptr [eax], edx
// 008e82d1  8b5104               mov edx, dword ptr [ecx + 4]
// 008e82d4  895004               mov dword ptr [eax + 4], edx
// 008e82d7  8b5108               mov edx, dword ptr [ecx + 8]
// 008e82da  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008e82dd  895008               mov dword ptr [eax + 8], edx
// 008e82e0  89480c               mov dword ptr [eax + 0xc], ecx
// 008e82e3  57                   push edi
// 008e82e4  8bce                 mov ecx, esi
// 008e82e6  e8e5feffff           call 0x8e81d0
// 008e82eb  bd2d000000           mov ebp, 0x2d
// 008e82f0  eb4e                 jmp 0x8e8340
// 008e82f2  6a00                 push 0
// 008e82f4  68ffd49700           push 0x97d4ff
// 008e82f9  68fff2c800           push 0xc8f2ff
// 008e82fe  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008e8302  53                   push ebx
// 008e8303  57                   push edi
// 008e8304  e8974ff6ff           call 0x84d2a0
// 008e8309  8bc8                 mov ecx, eax
// 008e830b  e8c04ff6ff           call 0x84d2d0
// 008e8310  8b8610020000         mov eax, dword ptr [esi + 0x210]
// 008e8316  83f8ff               cmp eax, -1
// 008e8319  7506                 jne 0x8e8321
// 008e831b  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 008e8321  8b8e10020000         mov ecx, dword ptr [esi + 0x210]
// 008e8327  83f9ff               cmp ecx, -1
// 008e832a  7508                 jne 0x8e8334
// 008e832c  8bb60c020000         mov esi, dword ptr [esi + 0x20c]
// 008e8332  eb02                 jmp 0x8e8336
// 008e8334  8bf1                 mov esi, ecx
// 008e8336  50                   push eax
// 008e8337  56                   push esi
// 008e8338  53                   push ebx
// 008e8339  8bcf                 mov ecx, edi
// 008e833b  e8b8c2f0ff           call 0x7f45f8
// 008e8340  e88b76f4ff           call 0x82f9d0
// 008e8345  55                   push ebp
// 008e8346  8bc8                 mov ecx, eax
// 008e8348  e8b36df4ff           call 0x82f100
// 008e834d  8b17                 mov edx, dword ptr [edi]
// 008e834f  50                   push eax
// 008e8350  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e8353  8bcf                 mov ecx, edi
// 008e8355  ffd0                 call eax
// 008e8357  5f                   pop edi
// 008e8358  5e                   pop esi
// 008e8359  5d                   pop ebp
// 008e835a  5b                   pop ebx
// 008e835b  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillNavigateButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp