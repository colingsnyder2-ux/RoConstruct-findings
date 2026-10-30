// roc 2009-12 00858ff0  unit: CXTPTabClientWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858ff0
//
// 00858ff0  83ec10               sub esp, 0x10
// 00858ff3  56                   push esi
// 00858ff4  8bf1                 mov esi, ecx
// 00858ff6  68b0647f00           push 0x7f64b0
// 00858ffb  b9d0bab900           mov ecx, 0xb9bad0
// 00859000  e837d40c00           call 0x92643c
// 00859005  85c0                 test eax, eax
// 00859007  7505                 jne 0x85900e
// 00859009  e8feaaf9ff           call 0x7f3b0c
// 0085900e  6a00                 push 0
// 00859010  8bc8                 mov ecx, eax
// 00859012  e8895f0100           call 0x86efa0
// 00859017  85c0                 test eax, eax
// 00859019  740a                 je 0x859025
// 0085901b  83c8ff               or eax, 0xffffffff
// 0085901e  5e                   pop esi
// 0085901f  83c410               add esp, 0x10
// 00859022  c20c00               ret 0xc
// 00859025  83bec000000000       cmp dword ptr [esi + 0xc0], 0
// 0085902c  74ed                 je 0x85901b
// 0085902e  53                   push ebx
// 0085902f  55                   push ebp
// 00859030  57                   push edi
// 00859031  8bce                 mov ecx, esi
// 00859033  33ff                 xor edi, edi
// 00859035  e816d6ffff           call 0x856650
// 0085903a  85c0                 test eax, eax
// 0085903c  7e4b                 jle 0x859089
// 0085903e  8bff                 mov edi, edi
// 00859040  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00859044  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00859048  57                   push edi
// 00859049  8bce                 mov ecx, esi
// 0085904b  e8f0e4ffff           call 0x857540
// 00859050  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00859053  894c2410             mov dword ptr [esp + 0x10], ecx
// 00859057  8b5038               mov edx, dword ptr [eax + 0x38]
// 0085905a  89542414             mov dword ptr [esp + 0x14], edx
// 0085905e  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00859061  55                   push ebp
// 00859062  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00859066  8b5040               mov edx, dword ptr [eax + 0x40]
// 00859069  53                   push ebx
// 0085906a  8d442418             lea eax, [esp + 0x18]
// 0085906e  50                   push eax
// 0085906f  89542428             mov dword ptr [esp + 0x28], edx
// 00859073  ff155cca9800         call dword ptr [0x98ca5c]
// 00859079  8bce                 mov ecx, esi
// 0085907b  85c0                 test eax, eax
// 0085907d  7517                 jne 0x859096
// 0085907f  47                   inc edi
// 00859080  e8cbd5ffff           call 0x856650
// 00859085  3bf8                 cmp edi, eax
// 00859087  7cb7                 jl 0x859040
// 00859089  5f                   pop edi
// 0085908a  5d                   pop ebp
// 0085908b  5b                   pop ebx
// 0085908c  83c8ff               or eax, 0xffffffff
// 0085908f  5e                   pop esi
// 00859090  83c410               add esp, 0x10
// 00859093  c20c00               ret 0xc
// 00859096  57                   push edi
// 00859097  e8a4e4ffff           call 0x857540
// 0085909c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008590a0  8b10                 mov edx, dword ptr [eax]
// 008590a2  8b5250               mov edx, dword ptr [edx + 0x50]
// 008590a5  51                   push ecx
// 008590a6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008590aa  51                   push ecx
// 008590ab  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008590af  51                   push ecx
// 008590b0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008590b3  51                   push ecx
// 008590b4  8bc8                 mov ecx, eax
// 008590b6  ffd2                 call edx
// 008590b8  5f                   pop edi
// 008590b9  5d                   pop ebp
// 008590ba  5b                   pop ebx
// 008590bb  5e                   pop esi
// 008590bc  83c410               add esp, 0x10
// 008590bf  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp