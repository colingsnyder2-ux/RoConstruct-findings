// roc 2009-12 008465d0  unit: CXTPControls  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008465d0
//
// 008465d0  83ec14               sub esp, 0x14
// 008465d3  53                   push ebx
// 008465d4  55                   push ebp
// 008465d5  56                   push esi
// 008465d6  57                   push edi
// 008465d7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008465db  3b7c242c             cmp edi, dword ptr [esp + 0x2c]
// 008465df  8bd9                 mov ebx, ecx
// 008465e1  895c2410             mov dword ptr [esp + 0x10], ebx
// 008465e5  897c2428             mov dword ptr [esp + 0x28], edi
// 008465e9  0f8d80000000         jge 0x84666f
// 008465ef  90                   nop 
// 008465f0  85ff                 test edi, edi
// 008465f2  7c70                 jl 0x846664
// 008465f4  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 008465f7  7d6b                 jge 0x846664
// 008465f9  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008465fc  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008465ff  85f6                 test esi, esi
// 00846601  7461                 je 0x846664
// 00846603  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00846609  3b4b20               cmp ecx, dword ptr [ebx + 0x20]
// 0084660c  7556                 jne 0x846664
// 0084660e  8b16                 mov edx, dword ptr [esi]
// 00846610  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00846616  6a00                 push 0
// 00846618  8bce                 mov ecx, esi
// 0084661a  ffd0                 call eax
// 0084661c  85c0                 test eax, eax
// 0084661e  7444                 je 0x846664
// 00846620  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00846626  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0084662c  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00846632  8b2e                 mov ebp, dword ptr [esi]
// 00846634  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 0084663a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084663e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00846642  8d1c01               lea ebx, [ecx + eax]
// 00846645  83ec10               sub esp, 0x10
// 00846648  8bc4                 mov eax, esp
// 0084664a  8908                 mov dword ptr [eax], ecx
// 0084664c  895004               mov dword ptr [eax + 4], edx
// 0084664f  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 00846652  895808               mov dword ptr [eax + 8], ebx
// 00846655  8bce                 mov ecx, esi
// 00846657  89780c               mov dword ptr [eax + 0xc], edi
// 0084665a  ffd2                 call edx
// 0084665c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00846660  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00846664  47                   inc edi
// 00846665  3b7c242c             cmp edi, dword ptr [esp + 0x2c]
// 00846669  897c2428             mov dword ptr [esp + 0x28], edi
// 0084666d  7c81                 jl 0x8465f0
// 0084666f  5f                   pop edi
// 00846670  5e                   pop esi
// 00846671  5d                   pop ebp
// 00846672  5b                   pop ebx
// 00846673  83c414               add esp, 0x14
// 00846676  c20c00               ret 0xc
// copied from an identical function in another client (function ?_MakeSameWidth@CXTPControls@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp