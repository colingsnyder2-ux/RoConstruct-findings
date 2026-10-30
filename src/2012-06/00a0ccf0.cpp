// roc 2012-06 00a0ccf0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0ccf0
//
// 00a0ccf0  83ec30               sub esp, 0x30
// 00a0ccf3  53                   push ebx
// 00a0ccf4  55                   push ebp
// 00a0ccf5  57                   push edi
// 00a0ccf6  8bf9                 mov edi, ecx
// 00a0ccf8  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 00a0ccfe  83c006               add eax, 6
// 00a0cd01  83f819               cmp eax, 0x19
// 00a0cd04  7d05                 jge 0xa0cd0b
// 00a0cd06  b819000000           mov eax, 0x19
// 00a0cd0b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a0cd0f  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00a0cd13  c7450008000000       mov dword ptr [ebp], 8
// 00a0cd1a  894504               mov dword ptr [ebp + 4], eax
// 00a0cd1d  85db                 test ebx, ebx
// 00a0cd1f  0f8434010000         je 0xa0ce59
// 00a0cd25  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00a0cd2a  0f8429010000         je 0xa0ce59
// 00a0cd30  56                   push esi
// 00a0cd31  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00a0cd35  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a0cd38  8d442410             lea eax, [esp + 0x10]
// 00a0cd3c  50                   push eax
// 00a0cd3d  51                   push ecx
// 00a0cd3e  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a0cd44  6afd                 push -3
// 00a0cd46  6afd                 push -3
// 00a0cd48  8d542418             lea edx, [esp + 0x18]
// 00a0cd4c  52                   push edx
// 00a0cd4d  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a0cd53  8b4504               mov eax, dword ptr [ebp + 4]
// 00a0cd56  03442414             add eax, dword ptr [esp + 0x14]
// 00a0cd5a  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 00a0cd61  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a0cd65  7429                 je 0xa0cd90
// 00a0cd67  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 00a0cd6e  7408                 je 0xa0cd78
// 00a0cd70  8d8f50050000         lea ecx, [edi + 0x550]
// 00a0cd76  eb1e                 jmp 0xa0cd96
// 00a0cd78  6a24                 push 0x24
// 00a0cd7a  8bcf                 mov ecx, edi
// 00a0cd7c  e80fabf7ff           call 0x987890
// 00a0cd81  50                   push eax
// 00a0cd82  8d442414             lea eax, [esp + 0x14]
// 00a0cd86  50                   push eax
// 00a0cd87  8bcb                 mov ecx, ebx
// 00a0cd89  e81e61f7ff           call 0x982eac
// 00a0cd8e  eb1d                 jmp 0xa0cdad
// 00a0cd90  8d8f7c040000         lea ecx, [edi + 0x47c]
// 00a0cd96  6a00                 push 0
// 00a0cd98  6a00                 push 0
// 00a0cd9a  51                   push ecx
// 00a0cd9b  8d54241c             lea edx, [esp + 0x1c]
// 00a0cd9f  52                   push edx
// 00a0cda0  53                   push ebx
// 00a0cda1  e8eaa3fcff           call 0x9d7190
// 00a0cda6  8bc8                 mov ecx, eax
// 00a0cda8  e803a7fcff           call 0x9d74b0
// 00a0cdad  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a0cdb1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a0cdb5  83c604               add esi, 4
// 00a0cdb8  83c0fb               add eax, -5
// 00a0cdbb  3bf0                 cmp esi, eax
// 00a0cdbd  0f8d8a000000         jge 0xa0ce4d
// 00a0cdc3  bd07000000           mov ebp, 7
// 00a0cdc8  eb06                 jmp 0xa0cdd0
// 00a0cdca  8d9b00000000         lea ebx, [ebx]
// 00a0cdd0  8d4e01               lea ecx, [esi + 1]
// 00a0cdd3  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a0cdd7  8d5603               lea edx, [esi + 3]
// 00a0cdda  6a05                 push 5
// 00a0cddc  8bcf                 mov ecx, edi
// 00a0cdde  c744242406000000     mov dword ptr [esp + 0x24], 6
// 00a0cde6  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 00a0cdee  89542430             mov dword ptr [esp + 0x30], edx
// 00a0cdf2  e899aaf7ff           call 0x987890
// 00a0cdf7  50                   push eax
// 00a0cdf8  8d442424             lea eax, [esp + 0x24]
// 00a0cdfc  50                   push eax
// 00a0cdfd  8bcb                 mov ecx, ebx
// 00a0cdff  e8a860f7ff           call 0x982eac
// 00a0ce04  8d4e02               lea ecx, [esi + 2]
// 00a0ce07  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a0ce0b  6a26                 push 0x26
// 00a0ce0d  8bcf                 mov ecx, edi
// 00a0ce0f  c744243405000000     mov dword ptr [esp + 0x34], 5
// 00a0ce17  89742438             mov dword ptr [esp + 0x38], esi
// 00a0ce1b  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00a0ce1f  e86caaf7ff           call 0x987890
// 00a0ce24  50                   push eax
// 00a0ce25  8d542434             lea edx, [esp + 0x34]
// 00a0ce29  52                   push edx
// 00a0ce2a  8bcb                 mov ecx, ebx
// 00a0ce2c  e87b60f7ff           call 0x982eac
// 00a0ce31  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a0ce35  83c604               add esi, 4
// 00a0ce38  83c0fb               add eax, -5
// 00a0ce3b  3bf0                 cmp esi, eax
// 00a0ce3d  7c91                 jl 0xa0cdd0
// 00a0ce3f  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a0ce43  5e                   pop esi
// 00a0ce44  5f                   pop edi
// 00a0ce45  5d                   pop ebp
// 00a0ce46  5b                   pop ebx
// 00a0ce47  83c430               add esp, 0x30
// 00a0ce4a  c21000               ret 0x10
// 00a0ce4d  5e                   pop esi
// 00a0ce4e  5f                   pop edi
// 00a0ce4f  8bc5                 mov eax, ebp
// 00a0ce51  5d                   pop ebp
// 00a0ce52  5b                   pop ebx
// 00a0ce53  83c430               add esp, 0x30
// 00a0ce56  c21000               ret 0x10
// 00a0ce59  5f                   pop edi
// 00a0ce5a  8bc5                 mov eax, ebp
// 00a0ce5c  5d                   pop ebp
// 00a0ce5d  5b                   pop ebx
// 00a0ce5e  83c430               add esp, 0x30
// 00a0ce61  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawDialogBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
