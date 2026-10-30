// roc 2010-06 008376e0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008376e0
//
// 008376e0  83ec30               sub esp, 0x30
// 008376e3  53                   push ebx
// 008376e4  55                   push ebp
// 008376e5  57                   push edi
// 008376e6  8bf9                 mov edi, ecx
// 008376e8  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 008376ee  83c006               add eax, 6
// 008376f1  83f819               cmp eax, 0x19
// 008376f4  7d05                 jge 0x8376fb
// 008376f6  b819000000           mov eax, 0x19
// 008376fb  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008376ff  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00837703  c7450008000000       mov dword ptr [ebp], 8
// 0083770a  894504               mov dword ptr [ebp + 4], eax
// 0083770d  85db                 test ebx, ebx
// 0083770f  0f8434010000         je 0x837849
// 00837715  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0083771a  0f8429010000         je 0x837849
// 00837720  56                   push esi
// 00837721  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00837725  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00837728  8d442410             lea eax, [esp + 0x10]
// 0083772c  50                   push eax
// 0083772d  51                   push ecx
// 0083772e  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 00837734  6afd                 push -3
// 00837736  6afd                 push -3
// 00837738  8d542418             lea edx, [esp + 0x18]
// 0083773c  52                   push edx
// 0083773d  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00837743  8b4504               mov eax, dword ptr [ebp + 4]
// 00837746  03442414             add eax, dword ptr [esp + 0x14]
// 0083774a  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 00837751  8944241c             mov dword ptr [esp + 0x1c], eax
// 00837755  7429                 je 0x837780
// 00837757  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 0083775e  7408                 je 0x837768
// 00837760  8d8f50050000         lea ecx, [edi + 0x550]
// 00837766  eb1e                 jmp 0x837786
// 00837768  6a24                 push 0x24
// 0083776a  8bcf                 mov ecx, edi
// 0083776c  e89f59f7ff           call 0x7ad110
// 00837771  50                   push eax
// 00837772  8d442414             lea eax, [esp + 0x14]
// 00837776  50                   push eax
// 00837777  8bcb                 mov ecx, ebx
// 00837779  e8c00ff7ff           call 0x7a873e
// 0083777e  eb1d                 jmp 0x83779d
// 00837780  8d8f7c040000         lea ecx, [edi + 0x47c]
// 00837786  6a00                 push 0
// 00837788  6a00                 push 0
// 0083778a  51                   push ecx
// 0083778b  8d54241c             lea edx, [esp + 0x1c]
// 0083778f  52                   push edx
// 00837790  53                   push ebx
// 00837791  e86a9bfcff           call 0x801300
// 00837796  8bc8                 mov ecx, eax
// 00837798  e8839efcff           call 0x801620
// 0083779d  8b742414             mov esi, dword ptr [esp + 0x14]
// 008377a1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008377a5  83c604               add esi, 4
// 008377a8  83c0fb               add eax, -5
// 008377ab  3bf0                 cmp esi, eax
// 008377ad  0f8d8a000000         jge 0x83783d
// 008377b3  bd07000000           mov ebp, 7
// 008377b8  eb06                 jmp 0x8377c0
// 008377ba  8d9b00000000         lea ebx, [ebx]
// 008377c0  8d4e01               lea ecx, [esi + 1]
// 008377c3  894c2424             mov dword ptr [esp + 0x24], ecx
// 008377c7  8d5603               lea edx, [esi + 3]
// 008377ca  6a05                 push 5
// 008377cc  8bcf                 mov ecx, edi
// 008377ce  c744242406000000     mov dword ptr [esp + 0x24], 6
// 008377d6  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 008377de  89542430             mov dword ptr [esp + 0x30], edx
// 008377e2  e82959f7ff           call 0x7ad110
// 008377e7  50                   push eax
// 008377e8  8d442424             lea eax, [esp + 0x24]
// 008377ec  50                   push eax
// 008377ed  8bcb                 mov ecx, ebx
// 008377ef  e84a0ff7ff           call 0x7a873e
// 008377f4  8d4e02               lea ecx, [esi + 2]
// 008377f7  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008377fb  6a26                 push 0x26
// 008377fd  8bcf                 mov ecx, edi
// 008377ff  c744243405000000     mov dword ptr [esp + 0x34], 5
// 00837807  89742438             mov dword ptr [esp + 0x38], esi
// 0083780b  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0083780f  e8fc58f7ff           call 0x7ad110
// 00837814  50                   push eax
// 00837815  8d542434             lea edx, [esp + 0x34]
// 00837819  52                   push edx
// 0083781a  8bcb                 mov ecx, ebx
// 0083781c  e81d0ff7ff           call 0x7a873e
// 00837821  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00837825  83c604               add esi, 4
// 00837828  83c0fb               add eax, -5
// 0083782b  3bf0                 cmp esi, eax
// 0083782d  7c91                 jl 0x8377c0
// 0083782f  8b442444             mov eax, dword ptr [esp + 0x44]
// 00837833  5e                   pop esi
// 00837834  5f                   pop edi
// 00837835  5d                   pop ebp
// 00837836  5b                   pop ebx
// 00837837  83c430               add esp, 0x30
// 0083783a  c21000               ret 0x10
// 0083783d  5e                   pop esi
// 0083783e  5f                   pop edi
// 0083783f  8bc5                 mov eax, ebp
// 00837841  5d                   pop ebp
// 00837842  5b                   pop ebx
// 00837843  83c430               add esp, 0x30
// 00837846  c21000               ret 0x10
// 00837849  5f                   pop edi
// 0083784a  8bc5                 mov eax, ebp
// 0083784c  5d                   pop ebp
// 0083784d  5b                   pop ebx
// 0083784e  83c430               add esp, 0x30
// 00837851  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawDialogBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
