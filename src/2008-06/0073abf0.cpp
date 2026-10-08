// from server: 100% by auto
// roc 2008-06 0073abf0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073abf0
//
// 0073abf0  83ec30               sub esp, 0x30
// 0073abf3  53                   push ebx
// 0073abf4  55                   push ebp
// 0073abf5  57                   push edi
// 0073abf6  8bf9                 mov edi, ecx
// 0073abf8  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 0073abfe  83c006               add eax, 6
// 0073ac01  83f819               cmp eax, 0x19
// 0073ac04  7d05                 jge 0x73ac0b
// 0073ac06  b819000000           mov eax, 0x19
// 0073ac0b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0073ac0f  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0073ac13  c7450008000000       mov dword ptr [ebp], 8
// 0073ac1a  894504               mov dword ptr [ebp + 4], eax
// 0073ac1d  85db                 test ebx, ebx
// 0073ac1f  0f8434010000         je 0x73ad59
// 0073ac25  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0073ac2a  0f8429010000         je 0x73ad59
// 0073ac30  56                   push esi
// 0073ac31  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0073ac35  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0073ac38  8d442410             lea eax, [esp + 0x10]
// 0073ac3c  50                   push eax
// 0073ac3d  51                   push ecx
// 0073ac3e  ff15842d8000         call dword ptr [0x802d84]
// 0073ac44  6afd                 push -3
// 0073ac46  6afd                 push -3
// 0073ac48  8d542418             lea edx, [esp + 0x18]
// 0073ac4c  52                   push edx
// 0073ac4d  ff15282d8000         call dword ptr [0x802d28]
// 0073ac53  8b4504               mov eax, dword ptr [ebp + 4]
// 0073ac56  03442414             add eax, dword ptr [esp + 0x14]
// 0073ac5a  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 0073ac61  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073ac65  7429                 je 0x73ac90
// 0073ac67  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 0073ac6e  7408                 je 0x73ac78
// 0073ac70  8d8f50050000         lea ecx, [edi + 0x550]
// 0073ac76  eb1e                 jmp 0x73ac96
// 0073ac78  6a24                 push 0x24
// 0073ac7a  8bcf                 mov ecx, edi
// 0073ac7c  e8ef33f7ff           call 0x6ae070
// 0073ac81  50                   push eax
// 0073ac82  8d442414             lea eax, [esp + 0x14]
// 0073ac86  50                   push eax
// 0073ac87  8bcb                 mov ecx, ebx
// 0073ac89  e8d066f6ff           call 0x6a135e
// 0073ac8e  eb1d                 jmp 0x73acad
// 0073ac90  8d8f7c040000         lea ecx, [edi + 0x47c]
// 0073ac96  6a00                 push 0
// 0073ac98  6a00                 push 0
// 0073ac9a  51                   push ecx
// 0073ac9b  8d54241c             lea edx, [esp + 0x1c]
// 0073ac9f  52                   push edx
// 0073aca0  53                   push ebx
// 0073aca1  e82aeffbff           call 0x6f9bd0
// 0073aca6  8bc8                 mov ecx, eax
// 0073aca8  e843f2fbff           call 0x6f9ef0
// 0073acad  8b742414             mov esi, dword ptr [esp + 0x14]
// 0073acb1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073acb5  83c604               add esi, 4
// 0073acb8  83c0fb               add eax, -5
// 0073acbb  3bf0                 cmp esi, eax
// 0073acbd  0f8d8a000000         jge 0x73ad4d
// 0073acc3  bd07000000           mov ebp, 7
// 0073acc8  eb06                 jmp 0x73acd0
// 0073acca  8d9b00000000         lea ebx, [ebx]
// 0073acd0  8d4e01               lea ecx, [esi + 1]
// 0073acd3  894c2424             mov dword ptr [esp + 0x24], ecx
// 0073acd7  8d5603               lea edx, [esi + 3]
// 0073acda  6a05                 push 5
// 0073acdc  8bcf                 mov ecx, edi
// 0073acde  c744242406000000     mov dword ptr [esp + 0x24], 6
// 0073ace6  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0073acee  89542430             mov dword ptr [esp + 0x30], edx
// 0073acf2  e87933f7ff           call 0x6ae070
// 0073acf7  50                   push eax
// 0073acf8  8d442424             lea eax, [esp + 0x24]
// 0073acfc  50                   push eax
// 0073acfd  8bcb                 mov ecx, ebx
// 0073acff  e85a66f6ff           call 0x6a135e
// 0073ad04  8d4e02               lea ecx, [esi + 2]
// 0073ad07  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0073ad0b  6a26                 push 0x26
// 0073ad0d  8bcf                 mov ecx, edi
// 0073ad0f  c744243405000000     mov dword ptr [esp + 0x34], 5
// 0073ad17  89742438             mov dword ptr [esp + 0x38], esi
// 0073ad1b  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0073ad1f  e84c33f7ff           call 0x6ae070
// 0073ad24  50                   push eax
// 0073ad25  8d542434             lea edx, [esp + 0x34]
// 0073ad29  52                   push edx
// 0073ad2a  8bcb                 mov ecx, ebx
// 0073ad2c  e82d66f6ff           call 0x6a135e
// 0073ad31  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073ad35  83c604               add esi, 4
// 0073ad38  83c0fb               add eax, -5
// 0073ad3b  3bf0                 cmp esi, eax
// 0073ad3d  7c91                 jl 0x73acd0
// 0073ad3f  8b442444             mov eax, dword ptr [esp + 0x44]
// 0073ad43  5e                   pop esi
// 0073ad44  5f                   pop edi
// 0073ad45  5d                   pop ebp
// 0073ad46  5b                   pop ebx
// 0073ad47  83c430               add esp, 0x30
// 0073ad4a  c21000               ret 0x10
// 0073ad4d  5e                   pop esi
// 0073ad4e  5f                   pop edi
// 0073ad4f  8bc5                 mov eax, ebp
// 0073ad51  5d                   pop ebp
// 0073ad52  5b                   pop ebx
// 0073ad53  83c430               add esp, 0x30
// 0073ad56  c21000               ret 0x10
// 0073ad59  5f                   pop edi
// 0073ad5a  8bc5                 mov eax, ebp
// 0073ad5c  5d                   pop ebp
// 0073ad5d  5b                   pop ebx
// 0073ad5e  83c430               add esp, 0x30
// 0073ad61  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawDialogBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
