// roc 2009-06 007a92c0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a92c0
//
// 007a92c0  83ec30               sub esp, 0x30
// 007a92c3  53                   push ebx
// 007a92c4  55                   push ebp
// 007a92c5  57                   push edi
// 007a92c6  8bf9                 mov edi, ecx
// 007a92c8  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 007a92ce  83c006               add eax, 6
// 007a92d1  83f819               cmp eax, 0x19
// 007a92d4  7d05                 jge 0x7a92db
// 007a92d6  b819000000           mov eax, 0x19
// 007a92db  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 007a92df  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 007a92e3  c7450008000000       mov dword ptr [ebp], 8
// 007a92ea  894504               mov dword ptr [ebp + 4], eax
// 007a92ed  85db                 test ebx, ebx
// 007a92ef  0f8434010000         je 0x7a9429
// 007a92f5  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 007a92fa  0f8429010000         je 0x7a9429
// 007a9300  56                   push esi
// 007a9301  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 007a9305  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007a9308  8d442410             lea eax, [esp + 0x10]
// 007a930c  50                   push eax
// 007a930d  51                   push ecx
// 007a930e  ff1514ee8900         call dword ptr [0x89ee14]
// 007a9314  6afd                 push -3
// 007a9316  6afd                 push -3
// 007a9318  8d542418             lea edx, [esp + 0x18]
// 007a931c  52                   push edx
// 007a931d  ff15bced8900         call dword ptr [0x89edbc]
// 007a9323  8b4504               mov eax, dword ptr [ebp + 4]
// 007a9326  03442414             add eax, dword ptr [esp + 0x14]
// 007a932a  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 007a9331  8944241c             mov dword ptr [esp + 0x1c], eax
// 007a9335  7429                 je 0x7a9360
// 007a9337  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 007a933e  7408                 je 0x7a9348
// 007a9340  8d8f50050000         lea ecx, [edi + 0x550]
// 007a9346  eb1e                 jmp 0x7a9366
// 007a9348  6a24                 push 0x24
// 007a934a  8bcf                 mov ecx, edi
// 007a934c  e82f94f7ff           call 0x722780
// 007a9351  50                   push eax
// 007a9352  8d442414             lea eax, [esp + 0x14]
// 007a9356  50                   push eax
// 007a9357  8bcb                 mov ecx, ebx
// 007a9359  e87204f7ff           call 0x7197d0
// 007a935e  eb1d                 jmp 0x7a937d
// 007a9360  8d8f7c040000         lea ecx, [edi + 0x47c]
// 007a9366  6a00                 push 0
// 007a9368  6a00                 push 0
// 007a936a  51                   push ecx
// 007a936b  8d54241c             lea edx, [esp + 0x1c]
// 007a936f  52                   push edx
// 007a9370  53                   push ebx
// 007a9371  e8fa91fcff           call 0x772570
// 007a9376  8bc8                 mov ecx, eax
// 007a9378  e81395fcff           call 0x772890
// 007a937d  8b742414             mov esi, dword ptr [esp + 0x14]
// 007a9381  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a9385  83c604               add esi, 4
// 007a9388  83c0fb               add eax, -5
// 007a938b  3bf0                 cmp esi, eax
// 007a938d  0f8d8a000000         jge 0x7a941d
// 007a9393  bd07000000           mov ebp, 7
// 007a9398  eb06                 jmp 0x7a93a0
// 007a939a  8d9b00000000         lea ebx, [ebx]
// 007a93a0  8d4e01               lea ecx, [esi + 1]
// 007a93a3  894c2424             mov dword ptr [esp + 0x24], ecx
// 007a93a7  8d5603               lea edx, [esi + 3]
// 007a93aa  6a05                 push 5
// 007a93ac  8bcf                 mov ecx, edi
// 007a93ae  c744242406000000     mov dword ptr [esp + 0x24], 6
// 007a93b6  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 007a93be  89542430             mov dword ptr [esp + 0x30], edx
// 007a93c2  e8b993f7ff           call 0x722780
// 007a93c7  50                   push eax
// 007a93c8  8d442424             lea eax, [esp + 0x24]
// 007a93cc  50                   push eax
// 007a93cd  8bcb                 mov ecx, ebx
// 007a93cf  e8fc03f7ff           call 0x7197d0
// 007a93d4  8d4e02               lea ecx, [esi + 2]
// 007a93d7  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007a93db  6a26                 push 0x26
// 007a93dd  8bcf                 mov ecx, edi
// 007a93df  c744243405000000     mov dword ptr [esp + 0x34], 5
// 007a93e7  89742438             mov dword ptr [esp + 0x38], esi
// 007a93eb  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007a93ef  e88c93f7ff           call 0x722780
// 007a93f4  50                   push eax
// 007a93f5  8d542434             lea edx, [esp + 0x34]
// 007a93f9  52                   push edx
// 007a93fa  8bcb                 mov ecx, ebx
// 007a93fc  e8cf03f7ff           call 0x7197d0
// 007a9401  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a9405  83c604               add esi, 4
// 007a9408  83c0fb               add eax, -5
// 007a940b  3bf0                 cmp esi, eax
// 007a940d  7c91                 jl 0x7a93a0
// 007a940f  8b442444             mov eax, dword ptr [esp + 0x44]
// 007a9413  5e                   pop esi
// 007a9414  5f                   pop edi
// 007a9415  5d                   pop ebp
// 007a9416  5b                   pop ebx
// 007a9417  83c430               add esp, 0x30
// 007a941a  c21000               ret 0x10
// 007a941d  5e                   pop esi
// 007a941e  5f                   pop edi
// 007a941f  8bc5                 mov eax, ebp
// 007a9421  5d                   pop ebp
// 007a9422  5b                   pop ebx
// 007a9423  83c430               add esp, 0x30
// 007a9426  c21000               ret 0x10
// 007a9429  5f                   pop edi
// 007a942a  8bc5                 mov eax, ebp
// 007a942c  5d                   pop ebp
// 007a942d  5b                   pop ebx
// 007a942e  83c430               add esp, 0x30
// 007a9431  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawDialogBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
