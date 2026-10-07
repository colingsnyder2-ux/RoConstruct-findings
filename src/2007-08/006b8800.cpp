// roc 2007-08 006b8800  unit: XTPPaintThemes::CXTPDefaultTheme  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b8800
//
// 006b8800  8344240801           add dword ptr [esp + 8], 1
// 006b8805  53                   push ebx
// 006b8806  b802000000           mov eax, 2
// 006b880b  01442410             add dword ptr [esp + 0x10], eax
// 006b880f  29442414             sub dword ptr [esp + 0x14], eax
// 006b8813  29442418             sub dword ptr [esp + 0x18], eax
// 006b8817  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006b881c  56                   push esi
// 006b881d  57                   push edi
// 006b881e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006b8822  8bf1                 mov esi, ecx
// 006b8824  0f84f9000000         je 0x6b8923
// 006b882a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b882e  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b8832  6a0f                 push 0xf
// 006b8834  6a0f                 push 0xf
// 006b8836  83ec10               sub esp, 0x10
// 006b8839  8bc4                 mov eax, esp
// 006b883b  8908                 mov dword ptr [eax], ecx
// 006b883d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006b8841  895004               mov dword ptr [eax + 4], edx
// 006b8844  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b8848  894808               mov dword ptr [eax + 8], ecx
// 006b884b  57                   push edi
// 006b884c  8bce                 mov ecx, esi
// 006b884e  89500c               mov dword ptr [eax + 0xc], edx
// 006b8851  e88a54f8ff           call 0x63dce0
// 006b8856  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006b885b  7466                 je 0x6b88c3
// 006b885d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006b8861  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 006b8865  6a0f                 push 0xf
// 006b8867  8bce                 mov ecx, esi
// 006b8869  e80245f8ff           call 0x63cd70
// 006b886e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b8872  50                   push eax
// 006b8873  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006b8877  53                   push ebx
// 006b8878  6a01                 push 1
// 006b887a  83c1ff               add ecx, -1
// 006b887d  50                   push eax
// 006b887e  51                   push ecx
// 006b887f  8bcf                 mov ecx, edi
// 006b8881  e844fb0700           call 0x7383ca
// 006b8886  8b542414             mov edx, dword ptr [esp + 0x14]
// 006b888a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b888e  6a14                 push 0x14
// 006b8890  6a10                 push 0x10
// 006b8892  83ec10               sub esp, 0x10
// 006b8895  8bc4                 mov eax, esp
// 006b8897  8910                 mov dword ptr [eax], edx
// 006b8899  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b889d  894804               mov dword ptr [eax + 4], ecx
// 006b88a0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006b88a4  895008               mov dword ptr [eax + 8], edx
// 006b88a7  89480c               mov dword ptr [eax + 0xc], ecx
// 006b88aa  57                   push edi
// 006b88ab  8bce                 mov ecx, esi
// 006b88ad  e8be46f8ff           call 0x63cf70
// 006b88b2  6a01                 push 1
// 006b88b4  6a01                 push 1
// 006b88b6  8d54241c             lea edx, [esp + 0x1c]
// 006b88ba  52                   push edx
// 006b88bb  ff15d8ed7700         call dword ptr [0x77edd8]
// 006b88c1  eb60                 jmp 0x6b8923
// 006b88c3  837c242800           cmp dword ptr [esp + 0x28], 0
// 006b88c8  742d                 je 0x6b88f7
// 006b88ca  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006b88ce  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 006b88d2  6a0f                 push 0xf
// 006b88d4  8bce                 mov ecx, esi
// 006b88d6  e89544f8ff           call 0x63cd70
// 006b88db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b88df  50                   push eax
// 006b88e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006b88e4  53                   push ebx
// 006b88e5  6a01                 push 1
// 006b88e7  83c1ff               add ecx, -1
// 006b88ea  50                   push eax
// 006b88eb  51                   push ecx
// 006b88ec  8bcf                 mov ecx, edi
// 006b88ee  e8d7fa0700           call 0x7383ca
// 006b88f3  6a10                 push 0x10
// 006b88f5  eb02                 jmp 0x6b88f9
// 006b88f7  6a14                 push 0x14
// 006b88f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b88fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006b8901  6a14                 push 0x14
// 006b8903  83ec10               sub esp, 0x10
// 006b8906  8bc4                 mov eax, esp
// 006b8908  8910                 mov dword ptr [eax], edx
// 006b890a  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b890e  894804               mov dword ptr [eax + 4], ecx
// 006b8911  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006b8915  895008               mov dword ptr [eax + 8], edx
// 006b8918  89480c               mov dword ptr [eax + 0xc], ecx
// 006b891b  57                   push edi
// 006b891c  8bce                 mov ecx, esi
// 006b891e  e84d46f8ff           call 0x63cf70
// 006b8923  8b1e                 mov ebx, dword ptr [esi]
// 006b8925  6a12                 push 0x12
// 006b8927  8bce                 mov ecx, esi
// 006b8929  e84244f8ff           call 0x63cd70
// 006b892e  8b542414             mov edx, dword ptr [esp + 0x14]
// 006b8932  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b8936  50                   push eax
// 006b8937  83ec10               sub esp, 0x10
// 006b893a  8bc4                 mov eax, esp
// 006b893c  8910                 mov dword ptr [eax], edx
// 006b893e  8b542430             mov edx, dword ptr [esp + 0x30]
// 006b8942  894804               mov dword ptr [eax + 4], ecx
// 006b8945  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006b8949  895008               mov dword ptr [eax + 8], edx
// 006b894c  8b93e8000000         mov edx, dword ptr [ebx + 0xe8]
// 006b8952  89480c               mov dword ptr [eax + 0xc], ecx
// 006b8955  57                   push edi
// 006b8956  8bce                 mov ecx, esi
// 006b8958  ffd2                 call edx
// 006b895a  5f                   pop edi
// 006b895b  5e                   pop esi
// 006b895c  5b                   pop ebx
// 006b895d  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawControlComboBoxButton@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
