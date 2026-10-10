// roc 2008-06 00733570  unit: XTPPaintThemes::CXTPDefaultTheme  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00733570
//
// 00733570  ff442408             inc dword ptr [esp + 8]
// 00733574  53                   push ebx
// 00733575  b802000000           mov eax, 2
// 0073357a  01442410             add dword ptr [esp + 0x10], eax
// 0073357e  29442414             sub dword ptr [esp + 0x14], eax
// 00733582  29442418             sub dword ptr [esp + 0x18], eax
// 00733586  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0073358b  56                   push esi
// 0073358c  57                   push edi
// 0073358d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00733591  8bf1                 mov esi, ecx
// 00733593  0f84f5000000         je 0x73368e
// 00733599  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073359d  8b542418             mov edx, dword ptr [esp + 0x18]
// 007335a1  6a0f                 push 0xf
// 007335a3  6a0f                 push 0xf
// 007335a5  83ec10               sub esp, 0x10
// 007335a8  8bc4                 mov eax, esp
// 007335aa  8908                 mov dword ptr [eax], ecx
// 007335ac  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007335b0  895004               mov dword ptr [eax + 4], edx
// 007335b3  8b542438             mov edx, dword ptr [esp + 0x38]
// 007335b7  894808               mov dword ptr [eax + 8], ecx
// 007335ba  57                   push edi
// 007335bb  8bce                 mov ecx, esi
// 007335bd  89500c               mov dword ptr [eax + 0xc], edx
// 007335c0  e80bbbf7ff           call 0x6af0d0
// 007335c5  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007335ca  7464                 je 0x733630
// 007335cc  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007335d0  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 007335d4  6a0f                 push 0xf
// 007335d6  8bce                 mov ecx, esi
// 007335d8  e893aaf7ff           call 0x6ae070
// 007335dd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007335e1  50                   push eax
// 007335e2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007335e6  53                   push ebx
// 007335e7  6a01                 push 1
// 007335e9  49                   dec ecx
// 007335ea  50                   push eax
// 007335eb  51                   push ecx
// 007335ec  8bcf                 mov ecx, edi
// 007335ee  e84d8a0800           call 0x7bc040
// 007335f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 007335f7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007335fb  6a14                 push 0x14
// 007335fd  6a10                 push 0x10
// 007335ff  83ec10               sub esp, 0x10
// 00733602  8bc4                 mov eax, esp
// 00733604  8910                 mov dword ptr [eax], edx
// 00733606  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073360a  894804               mov dword ptr [eax + 4], ecx
// 0073360d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00733611  895008               mov dword ptr [eax + 8], edx
// 00733614  89480c               mov dword ptr [eax + 0xc], ecx
// 00733617  57                   push edi
// 00733618  8bce                 mov ecx, esi
// 0073361a  e851acf7ff           call 0x6ae270
// 0073361f  6a01                 push 1
// 00733621  6a01                 push 1
// 00733623  8d54241c             lea edx, [esp + 0x1c]
// 00733627  52                   push edx
// 00733628  ff15682d8000         call dword ptr [0x802d68]
// 0073362e  eb5e                 jmp 0x73368e
// 00733630  837c242800           cmp dword ptr [esp + 0x28], 0
// 00733635  742b                 je 0x733662
// 00733637  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0073363b  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 0073363f  6a0f                 push 0xf
// 00733641  8bce                 mov ecx, esi
// 00733643  e828aaf7ff           call 0x6ae070
// 00733648  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073364c  50                   push eax
// 0073364d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00733651  53                   push ebx
// 00733652  6a01                 push 1
// 00733654  49                   dec ecx
// 00733655  50                   push eax
// 00733656  51                   push ecx
// 00733657  8bcf                 mov ecx, edi
// 00733659  e8e2890800           call 0x7bc040
// 0073365e  6a10                 push 0x10
// 00733660  eb02                 jmp 0x733664
// 00733662  6a14                 push 0x14
// 00733664  8b542418             mov edx, dword ptr [esp + 0x18]
// 00733668  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073366c  6a14                 push 0x14
// 0073366e  83ec10               sub esp, 0x10
// 00733671  8bc4                 mov eax, esp
// 00733673  8910                 mov dword ptr [eax], edx
// 00733675  8b542434             mov edx, dword ptr [esp + 0x34]
// 00733679  894804               mov dword ptr [eax + 4], ecx
// 0073367c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00733680  895008               mov dword ptr [eax + 8], edx
// 00733683  89480c               mov dword ptr [eax + 0xc], ecx
// 00733686  57                   push edi
// 00733687  8bce                 mov ecx, esi
// 00733689  e8e2abf7ff           call 0x6ae270
// 0073368e  8b1e                 mov ebx, dword ptr [esi]
// 00733690  6a12                 push 0x12
// 00733692  8bce                 mov ecx, esi
// 00733694  e8d7a9f7ff           call 0x6ae070
// 00733699  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073369d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007336a1  50                   push eax
// 007336a2  83ec10               sub esp, 0x10
// 007336a5  8bc4                 mov eax, esp
// 007336a7  8910                 mov dword ptr [eax], edx
// 007336a9  8b542430             mov edx, dword ptr [esp + 0x30]
// 007336ad  894804               mov dword ptr [eax + 4], ecx
// 007336b0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007336b4  895008               mov dword ptr [eax + 8], edx
// 007336b7  8b93f0000000         mov edx, dword ptr [ebx + 0xf0]
// 007336bd  89480c               mov dword ptr [eax + 0xc], ecx
// 007336c0  57                   push edi
// 007336c1  8bce                 mov ecx, esi
// 007336c3  ffd2                 call edx
// 007336c5  5f                   pop edi
// 007336c6  5e                   pop esi
// 007336c7  5b                   pop ebx
// 007336c8  c22000               ret 0x20
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawControlComboBoxButton@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
