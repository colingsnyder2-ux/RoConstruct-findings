// roc 2009-12 0087cb80  unit: XTPPaintThemes::CXTPDefaultTheme  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087cb80
//
// 0087cb80  ff442408             inc dword ptr [esp + 8]
// 0087cb84  53                   push ebx
// 0087cb85  b802000000           mov eax, 2
// 0087cb8a  01442410             add dword ptr [esp + 0x10], eax
// 0087cb8e  29442414             sub dword ptr [esp + 0x14], eax
// 0087cb92  29442418             sub dword ptr [esp + 0x18], eax
// 0087cb96  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0087cb9b  56                   push esi
// 0087cb9c  57                   push edi
// 0087cb9d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0087cba1  8bf1                 mov esi, ecx
// 0087cba3  0f84f5000000         je 0x87cc9e
// 0087cba9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087cbad  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087cbb1  6a0f                 push 0xf
// 0087cbb3  6a0f                 push 0xf
// 0087cbb5  83ec10               sub esp, 0x10
// 0087cbb8  8bc4                 mov eax, esp
// 0087cbba  8908                 mov dword ptr [eax], ecx
// 0087cbbc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087cbc0  895004               mov dword ptr [eax + 4], edx
// 0087cbc3  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087cbc7  894808               mov dword ptr [eax + 8], ecx
// 0087cbca  57                   push edi
// 0087cbcb  8bce                 mov ecx, esi
// 0087cbcd  89500c               mov dword ptr [eax + 0xc], edx
// 0087cbd0  e88b1bf8ff           call 0x7fe760
// 0087cbd5  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0087cbda  7464                 je 0x87cc40
// 0087cbdc  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0087cbe0  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 0087cbe4  6a0f                 push 0xf
// 0087cbe6  8bce                 mov ecx, esi
// 0087cbe8  e8530af8ff           call 0x7fd640
// 0087cbed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087cbf1  50                   push eax
// 0087cbf2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087cbf6  53                   push ebx
// 0087cbf7  6a01                 push 1
// 0087cbf9  49                   dec ecx
// 0087cbfa  50                   push eax
// 0087cbfb  51                   push ecx
// 0087cbfc  8bcf                 mov ecx, edi
// 0087cbfe  e893980a00           call 0x926496
// 0087cc03  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087cc07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087cc0b  6a14                 push 0x14
// 0087cc0d  6a10                 push 0x10
// 0087cc0f  83ec10               sub esp, 0x10
// 0087cc12  8bc4                 mov eax, esp
// 0087cc14  8910                 mov dword ptr [eax], edx
// 0087cc16  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087cc1a  894804               mov dword ptr [eax + 4], ecx
// 0087cc1d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087cc21  895008               mov dword ptr [eax + 8], edx
// 0087cc24  89480c               mov dword ptr [eax + 0xc], ecx
// 0087cc27  57                   push edi
// 0087cc28  8bce                 mov ecx, esi
// 0087cc2a  e8110cf8ff           call 0x7fd840
// 0087cc2f  6a01                 push 1
// 0087cc31  6a01                 push 1
// 0087cc33  8d54241c             lea edx, [esp + 0x1c]
// 0087cc37  52                   push edx
// 0087cc38  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087cc3e  eb5e                 jmp 0x87cc9e
// 0087cc40  837c242800           cmp dword ptr [esp + 0x28], 0
// 0087cc45  742b                 je 0x87cc72
// 0087cc47  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0087cc4b  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 0087cc4f  6a0f                 push 0xf
// 0087cc51  8bce                 mov ecx, esi
// 0087cc53  e8e809f8ff           call 0x7fd640
// 0087cc58  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087cc5c  50                   push eax
// 0087cc5d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087cc61  53                   push ebx
// 0087cc62  6a01                 push 1
// 0087cc64  49                   dec ecx
// 0087cc65  50                   push eax
// 0087cc66  51                   push ecx
// 0087cc67  8bcf                 mov ecx, edi
// 0087cc69  e828980a00           call 0x926496
// 0087cc6e  6a10                 push 0x10
// 0087cc70  eb02                 jmp 0x87cc74
// 0087cc72  6a14                 push 0x14
// 0087cc74  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087cc78  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087cc7c  6a14                 push 0x14
// 0087cc7e  83ec10               sub esp, 0x10
// 0087cc81  8bc4                 mov eax, esp
// 0087cc83  8910                 mov dword ptr [eax], edx
// 0087cc85  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087cc89  894804               mov dword ptr [eax + 4], ecx
// 0087cc8c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087cc90  895008               mov dword ptr [eax + 8], edx
// 0087cc93  89480c               mov dword ptr [eax + 0xc], ecx
// 0087cc96  57                   push edi
// 0087cc97  8bce                 mov ecx, esi
// 0087cc99  e8a20bf8ff           call 0x7fd840
// 0087cc9e  8b1e                 mov ebx, dword ptr [esi]
// 0087cca0  6a12                 push 0x12
// 0087cca2  8bce                 mov ecx, esi
// 0087cca4  e89709f8ff           call 0x7fd640
// 0087cca9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087ccad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087ccb1  50                   push eax
// 0087ccb2  83ec10               sub esp, 0x10
// 0087ccb5  8bc4                 mov eax, esp
// 0087ccb7  8910                 mov dword ptr [eax], edx
// 0087ccb9  8b542430             mov edx, dword ptr [esp + 0x30]
// 0087ccbd  894804               mov dword ptr [eax + 4], ecx
// 0087ccc0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087ccc4  895008               mov dword ptr [eax + 8], edx
// 0087ccc7  8b93f0000000         mov edx, dword ptr [ebx + 0xf0]
// 0087cccd  89480c               mov dword ptr [eax + 0xc], ecx
// 0087ccd0  57                   push edi
// 0087ccd1  8bce                 mov ecx, esi
// 0087ccd3  ffd2                 call edx
// 0087ccd5  5f                   pop edi
// 0087ccd6  5e                   pop esi
// 0087ccd7  5b                   pop ebx
// 0087ccd8  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawControlComboBoxButton@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp