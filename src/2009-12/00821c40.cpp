// roc 2009-12 00821c40  unit: CXTPReportControl  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821c40
//
// 00821c40  6aff                 push -1
// 00821c42  6848b19500           push 0x95b148
// 00821c47  64a100000000         mov eax, dword ptr fs:[0]
// 00821c4d  50                   push eax
// 00821c4e  83ec14               sub esp, 0x14
// 00821c51  53                   push ebx
// 00821c52  55                   push ebp
// 00821c53  56                   push esi
// 00821c54  57                   push edi
// 00821c55  a10052b600           mov eax, dword ptr [0xb65200]
// 00821c5a  33c4                 xor eax, esp
// 00821c5c  50                   push eax
// 00821c5d  8d442428             lea eax, [esp + 0x28]
// 00821c61  64a300000000         mov dword ptr fs:[0], eax
// 00821c67  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00821c6b  33ed                 xor ebp, ebp
// 00821c6d  3bdd                 cmp ebx, ebp
// 00821c6f  7507                 jne 0x821c78
// 00821c71  33c0                 xor eax, eax
// 00821c73  e9fb000000           jmp 0x821d73
// 00821c78  8b742438             mov esi, dword ptr [esp + 0x38]
// 00821c7c  8d442414             lea eax, [esp + 0x14]
// 00821c80  50                   push eax
// 00821c81  686cf49900           push 0x99f46c
// 00821c86  56                   push esi
// 00821c87  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00821c8f  e83ced0200           call 0x8509d0
// 00821c94  83c40c               add esp, 0xc
// 00821c97  8bce                 mov ecx, esi
// 00821c99  e8e2fd0200           call 0x851a80
// 00821c9e  8b16                 mov edx, dword ptr [esi]
// 00821ca0  8b4270               mov eax, dword ptr [edx + 0x70]
// 00821ca3  6860509f00           push 0x9f5060
// 00821ca8  8bce                 mov ecx, esi
// 00821caa  ffd0                 call eax
// 00821cac  8bf8                 mov edi, eax
// 00821cae  897c241c             mov dword ptr [esp + 0x1c], edi
// 00821cb2  8bcb                 mov ecx, ebx
// 00821cb4  896c2430             mov dword ptr [esp + 0x30], ebp
// 00821cb8  e863af0000           call 0x82cc20
// 00821cbd  8b17                 mov edx, dword ptr [edi]
// 00821cbf  8bd8                 mov ebx, eax
// 00821cc1  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00821cc7  6858509f00           push 0x9f5058
// 00821ccc  8bcf                 mov ecx, edi
// 00821cce  ffd0                 call eax
// 00821cd0  8bf0                 mov esi, eax
// 00821cd2  89742420             mov dword ptr [esp + 0x20], esi
// 00821cd6  8b16                 mov edx, dword ptr [esi]
// 00821cd8  8b4204               mov eax, dword ptr [edx + 4]
// 00821cdb  6a01                 push 1
// 00821cdd  53                   push ebx
// 00821cde  8bce                 mov ecx, esi
// 00821ce0  c644243801           mov byte ptr [esp + 0x38], 1
// 00821ce5  ffd0                 call eax
// 00821ce7  3bdd                 cmp ebx, ebp
// 00821ce9  89442418             mov dword ptr [esp + 0x18], eax
// 00821ced  7e61                 jle 0x821d50
// 00821cef  90                   nop 
// 00821cf0  8b16                 mov edx, dword ptr [esi]
// 00821cf2  8b5208               mov edx, dword ptr [edx + 8]
// 00821cf5  8d442418             lea eax, [esp + 0x18]
// 00821cf9  50                   push eax
// 00821cfa  8bce                 mov ecx, esi
// 00821cfc  ffd2                 call edx
// 00821cfe  8bf8                 mov edi, eax
// 00821d00  897c2424             mov dword ptr [esp + 0x24], edi
// 00821d04  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00821d08  55                   push ebp
// 00821d09  c644243402           mov byte ptr [esp + 0x34], 2
// 00821d0e  e81daf0000           call 0x82cc30
// 00821d13  89442438             mov dword ptr [esp + 0x38], eax
// 00821d17  e8f48f0000           call 0x82ad10
// 00821d1c  8b17                 mov edx, dword ptr [edi]
// 00821d1e  8b5264               mov edx, dword ptr [edx + 0x64]
// 00821d21  50                   push eax
// 00821d22  8d44243c             lea eax, [esp + 0x3c]
// 00821d26  50                   push eax
// 00821d27  8bcf                 mov ecx, edi
// 00821d29  ffd2                 call edx
// 00821d2b  85c0                 test eax, eax
// 00821d2d  740c                 je 0x821d3b
// 00821d2f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00821d33  8b01                 mov eax, dword ptr [ecx]
// 00821d35  8b5060               mov edx, dword ptr [eax + 0x60]
// 00821d38  57                   push edi
// 00821d39  ffd2                 call edx
// 00821d3b  8bcf                 mov ecx, edi
// 00821d3d  c644243001           mov byte ptr [esp + 0x30], 1
// 00821d42  e89520fdff           call 0x7f3ddc
// 00821d47  45                   inc ebp
// 00821d48  3beb                 cmp ebp, ebx
// 00821d4a  7ca4                 jl 0x821cf0
// 00821d4c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00821d50  8b06                 mov eax, dword ptr [esi]
// 00821d52  8b10                 mov edx, dword ptr [eax]
// 00821d54  6a01                 push 1
// 00821d56  8bce                 mov ecx, esi
// 00821d58  c644243400           mov byte ptr [esp + 0x34], 0
// 00821d5d  ffd2                 call edx
// 00821d5f  8bcf                 mov ecx, edi
// 00821d61  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00821d69  e86e20fdff           call 0x7f3ddc
// 00821d6e  b801000000           mov eax, 1
// 00821d73  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00821d77  64890d00000000       mov dword ptr fs:[0], ecx
// 00821d7e  59                   pop ecx
// 00821d7f  5f                   pop edi
// 00821d80  5e                   pop esi
// 00821d81  5d                   pop ebp
// 00821d82  5b                   pop ebx
// 00821d83  83c420               add esp, 0x20
// 00821d86  c20800               ret 8
// copied from an identical function in another client (function ?_WriteRecordsData@CXTPReportControl@@IAEHPAVCXTPPropExchange@@PAVCXTPReportRecords@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp