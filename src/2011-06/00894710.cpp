// roc 2011-06 00894710  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00894710
//
// 00894710  83ec30               sub esp, 0x30
// 00894713  53                   push ebx
// 00894714  55                   push ebp
// 00894715  57                   push edi
// 00894716  8bf9                 mov edi, ecx
// 00894718  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 0089471e  83c006               add eax, 6
// 00894721  83f819               cmp eax, 0x19
// 00894724  7d05                 jge 0x89472b
// 00894726  b819000000           mov eax, 0x19
// 0089472b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0089472f  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00894733  c7450008000000       mov dword ptr [ebp], 8
// 0089473a  894504               mov dword ptr [ebp + 4], eax
// 0089473d  85db                 test ebx, ebx
// 0089473f  0f8434010000         je 0x894879
// 00894745  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0089474a  0f8429010000         je 0x894879
// 00894750  56                   push esi
// 00894751  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00894755  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00894758  8d442410             lea eax, [esp + 0x10]
// 0089475c  50                   push eax
// 0089475d  51                   push ecx
// 0089475e  ff157c1ca400         call dword ptr [0xa41c7c]
// 00894764  6afd                 push -3
// 00894766  6afd                 push -3
// 00894768  8d542418             lea edx, [esp + 0x18]
// 0089476c  52                   push edx
// 0089476d  ff15e41ba400         call dword ptr [0xa41be4]
// 00894773  8b4504               mov eax, dword ptr [ebp + 4]
// 00894776  03442414             add eax, dword ptr [esp + 0x14]
// 0089477a  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 00894781  8944241c             mov dword ptr [esp + 0x1c], eax
// 00894785  7429                 je 0x8947b0
// 00894787  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 0089478e  7408                 je 0x894798
// 00894790  8d8f50050000         lea ecx, [edi + 0x550]
// 00894796  eb1e                 jmp 0x8947b6
// 00894798  6a24                 push 0x24
// 0089479a  8bcf                 mov ecx, edi
// 0089479c  e80faef7ff           call 0x80f5b0
// 008947a1  50                   push eax
// 008947a2  8d442414             lea eax, [esp + 0x14]
// 008947a6  50                   push eax
// 008947a7  8bcb                 mov ecx, ebx
// 008947a9  e87266f7ff           call 0x80ae20
// 008947ae  eb1d                 jmp 0x8947cd
// 008947b0  8d8f7c040000         lea ecx, [edi + 0x47c]
// 008947b6  6a00                 push 0
// 008947b8  6a00                 push 0
// 008947ba  51                   push ecx
// 008947bb  8d54241c             lea edx, [esp + 0x1c]
// 008947bf  52                   push edx
// 008947c0  53                   push ebx
// 008947c1  e8baa5fcff           call 0x85ed80
// 008947c6  8bc8                 mov ecx, eax
// 008947c8  e8d3a8fcff           call 0x85f0a0
// 008947cd  8b742414             mov esi, dword ptr [esp + 0x14]
// 008947d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008947d5  83c604               add esi, 4
// 008947d8  83c0fb               add eax, -5
// 008947db  3bf0                 cmp esi, eax
// 008947dd  0f8d8a000000         jge 0x89486d
// 008947e3  bd07000000           mov ebp, 7
// 008947e8  eb06                 jmp 0x8947f0
// 008947ea  8d9b00000000         lea ebx, [ebx]
// 008947f0  8d4e01               lea ecx, [esi + 1]
// 008947f3  894c2424             mov dword ptr [esp + 0x24], ecx
// 008947f7  8d5603               lea edx, [esi + 3]
// 008947fa  6a05                 push 5
// 008947fc  8bcf                 mov ecx, edi
// 008947fe  c744242406000000     mov dword ptr [esp + 0x24], 6
// 00894806  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0089480e  89542430             mov dword ptr [esp + 0x30], edx
// 00894812  e899adf7ff           call 0x80f5b0
// 00894817  50                   push eax
// 00894818  8d442424             lea eax, [esp + 0x24]
// 0089481c  50                   push eax
// 0089481d  8bcb                 mov ecx, ebx
// 0089481f  e8fc65f7ff           call 0x80ae20
// 00894824  8d4e02               lea ecx, [esi + 2]
// 00894827  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0089482b  6a26                 push 0x26
// 0089482d  8bcf                 mov ecx, edi
// 0089482f  c744243405000000     mov dword ptr [esp + 0x34], 5
// 00894837  89742438             mov dword ptr [esp + 0x38], esi
// 0089483b  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0089483f  e86cadf7ff           call 0x80f5b0
// 00894844  50                   push eax
// 00894845  8d542434             lea edx, [esp + 0x34]
// 00894849  52                   push edx
// 0089484a  8bcb                 mov ecx, ebx
// 0089484c  e8cf65f7ff           call 0x80ae20
// 00894851  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00894855  83c604               add esi, 4
// 00894858  83c0fb               add eax, -5
// 0089485b  3bf0                 cmp esi, eax
// 0089485d  7c91                 jl 0x8947f0
// 0089485f  8b442444             mov eax, dword ptr [esp + 0x44]
// 00894863  5e                   pop esi
// 00894864  5f                   pop edi
// 00894865  5d                   pop ebp
// 00894866  5b                   pop ebx
// 00894867  83c430               add esp, 0x30
// 0089486a  c21000               ret 0x10
// 0089486d  5e                   pop esi
// 0089486e  5f                   pop edi
// 0089486f  8bc5                 mov eax, ebp
// 00894871  5d                   pop ebp
// 00894872  5b                   pop ebx
// 00894873  83c430               add esp, 0x30
// 00894876  c21000               ret 0x10
// 00894879  5f                   pop edi
// 0089487a  8bc5                 mov eax, ebp
// 0089487c  5d                   pop ebp
// 0089487d  5b                   pop ebx
// 0089487e  83c430               add esp, 0x30
// 00894881  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawDialogBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
