// roc 2009-12 00819140  unit: CRobloxReportView  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819140
//
// 00819140  83ec0c               sub esp, 0xc
// 00819143  53                   push ebx
// 00819144  55                   push ebp
// 00819145  8be9                 mov ebp, ecx
// 00819147  8b4500               mov eax, dword ptr [ebp]
// 0081914a  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00819150  56                   push esi
// 00819151  8b742424             mov esi, dword ptr [esp + 0x24]
// 00819155  57                   push edi
// 00819156  89742410             mov dword ptr [esp + 0x10], esi
// 0081915a  ffd2                 call edx
// 0081915c  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 00819162  8bcf                 mov ecx, edi
// 00819164  897c2418             mov dword ptr [esp + 0x18], edi
// 00819168  e8b33a0100           call 0x82cc20
// 0081916d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00819171  3bd8                 cmp ebx, eax
// 00819173  0f8ded000000         jge 0x819266
// 00819179  8da42400000000       lea esp, [esp]
// 00819180  8b07                 mov eax, dword ptr [edi]
// 00819182  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00819185  53                   push ebx
// 00819186  8bcf                 mov ecx, edi
// 00819188  ffd2                 call edx
// 0081918a  83bd5c03000000       cmp dword ptr [ebp + 0x35c], 0
// 00819191  8bf0                 mov esi, eax
// 00819193  7411                 je 0x8191a6
// 00819195  8b06                 mov eax, dword ptr [esi]
// 00819197  8b5074               mov edx, dword ptr [eax + 0x74]
// 0081919a  8bce                 mov ecx, esi
// 0081919c  ffd2                 call edx
// 0081919e  85c0                 test eax, eax
// 008191a0  0f84a2000000         je 0x819248
// 008191a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008191aa  2b442424             sub eax, dword ptr [esp + 0x24]
// 008191ae  8b16                 mov edx, dword ptr [esi]
// 008191b0  8b5268               mov edx, dword ptr [edx + 0x68]
// 008191b3  50                   push eax
// 008191b4  8b442424             mov eax, dword ptr [esp + 0x24]
// 008191b8  50                   push eax
// 008191b9  8bce                 mov ecx, esi
// 008191bb  ffd2                 call edx
// 008191bd  8bf8                 mov edi, eax
// 008191bf  8b06                 mov eax, dword ptr [esi]
// 008191c1  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008191c7  8bce                 mov ecx, esi
// 008191c9  33db                 xor ebx, ebx
// 008191cb  ffd2                 call edx
// 008191cd  85c0                 test eax, eax
// 008191cf  742f                 je 0x819200
// 008191d1  8b06                 mov eax, dword ptr [esi]
// 008191d3  8b5060               mov edx, dword ptr [eax + 0x60]
// 008191d6  8bce                 mov ecx, esi
// 008191d8  ffd2                 call edx
// 008191da  8bc8                 mov ecx, eax
// 008191dc  e8af150400           call 0x85a790
// 008191e1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008191e5  2b542424             sub edx, dword ptr [esp + 0x24]
// 008191e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008191ed  8b18                 mov ebx, dword ptr [eax]
// 008191ef  52                   push edx
// 008191f0  8b9350010000         mov edx, dword ptr [ebx + 0x150]
// 008191f6  56                   push esi
// 008191f7  51                   push ecx
// 008191f8  8bc8                 mov ecx, eax
// 008191fa  ffd2                 call edx
// 008191fc  8bd8                 mov ebx, eax
// 008191fe  03fb                 add edi, ebx
// 00819200  8b442410             mov eax, dword ptr [esp + 0x10]
// 00819204  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00819208  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0081920c  03f8                 add edi, eax
// 0081920e  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 00819212  7f4a                 jg 0x81925e
// 00819214  53                   push ebx
// 00819215  83ec10               sub esp, 0x10
// 00819218  8bc4                 mov eax, esp
// 0081921a  8908                 mov dword ptr [eax], ecx
// 0081921c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00819220  894804               mov dword ptr [eax + 4], ecx
// 00819223  895008               mov dword ptr [eax + 8], edx
// 00819226  8b542434             mov edx, dword ptr [esp + 0x34]
// 0081922a  89780c               mov dword ptr [eax + 0xc], edi
// 0081922d  8b4500               mov eax, dword ptr [ebp]
// 00819230  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 00819236  56                   push esi
// 00819237  52                   push edx
// 00819238  8bcd                 mov ecx, ebp
// 0081923a  ffd0                 call eax
// 0081923c  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00819240  897c2410             mov dword ptr [esp + 0x10], edi
// 00819244  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00819248  43                   inc ebx
// 00819249  8bcf                 mov ecx, edi
// 0081924b  895c2434             mov dword ptr [esp + 0x34], ebx
// 0081924f  e8cc390100           call 0x82cc20
// 00819254  3bd8                 cmp ebx, eax
// 00819256  0f8c24ffffff         jl 0x819180
// 0081925c  eb04                 jmp 0x819262
// 0081925e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00819262  8b742410             mov esi, dword ptr [esp + 0x10]
// 00819266  8b442438             mov eax, dword ptr [esp + 0x38]
// 0081926a  85c0                 test eax, eax
// 0081926c  7406                 je 0x819274
// 0081926e  2b742428             sub esi, dword ptr [esp + 0x28]
// 00819272  8930                 mov dword ptr [eax], esi
// 00819274  5f                   pop edi
// 00819275  5e                   pop esi
// 00819276  5d                   pop ebp
// 00819277  8bc3                 mov eax, ebx
// 00819279  5b                   pop ebx
// 0081927a  83c40c               add esp, 0xc
// 0081927d  c21c00               ret 0x1c
// copied from an identical function in another client (function ?PrintRows@CXTPReportView@@MAEHPAVCDC@@VCRect@@JPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp