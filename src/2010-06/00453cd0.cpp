// roc 2010-06 00453cd0  unit: CRobloxControlColorSelector  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00453cd0
//
// 00453cd0  55                   push ebp
// 00453cd1  8bec                 mov ebp, esp
// 00453cd3  6aff                 push -1
// 00453cd5  68c11f9800           push 0x981fc1
// 00453cda  64a100000000         mov eax, dword ptr fs:[0]
// 00453ce0  50                   push eax
// 00453ce1  64892500000000       mov dword ptr fs:[0], esp
// 00453ce8  83ec0c               sub esp, 0xc
// 00453ceb  53                   push ebx
// 00453cec  56                   push esi
// 00453ced  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00453cf0  57                   push edi
// 00453cf1  8b7d08               mov edi, dword ptr [ebp + 8]
// 00453cf4  33db                 xor ebx, ebx
// 00453cf6  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453cf9  8975ec               mov dword ptr [ebp - 0x14], esi
// 00453cfc  895dfc               mov dword ptr [ebp - 4], ebx
// 00453cff  90                   nop 
// 00453d00  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 00453d03  7456                 je 0x453d5b
// 00453d05  897508               mov dword ptr [ebp + 8], esi
// 00453d08  8975e8               mov dword ptr [ebp - 0x18], esi
// 00453d0b  c645fc01             mov byte ptr [ebp - 4], 1
// 00453d0f  3bf3                 cmp esi, ebx
// 00453d11  7417                 je 0x453d2a
// 00453d13  8b07                 mov eax, dword ptr [edi]
// 00453d15  8906                 mov dword ptr [esi], eax
// 00453d17  8b4f04               mov ecx, dword ptr [edi + 4]
// 00453d1a  8d5708               lea edx, [edi + 8]
// 00453d1d  894e04               mov dword ptr [esi + 4], ecx
// 00453d20  52                   push edx
// 00453d21  8d4e08               lea ecx, [esi + 8]
// 00453d24  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00453d2a  83c60c               add esi, 0xc
// 00453d2d  885dfc               mov byte ptr [ebp - 4], bl
// 00453d30  897510               mov dword ptr [ebp + 0x10], esi
// 00453d33  83c70c               add edi, 0xc
// 00453d36  ebc8                 jmp 0x453d00
// 00453d38  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00453d3b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00453d3e  3bf7                 cmp esi, edi
// 00453d40  7410                 je 0x453d52
// 00453d42  8d4e08               lea ecx, [esi + 8]
// 00453d45  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00453d4b  83c60c               add esi, 0xc
// 00453d4e  3bf7                 cmp esi, edi
// 00453d50  75f0                 jne 0x453d42
// 00453d52  33db                 xor ebx, ebx
// 00453d54  53                   push ebx
// 00453d55  53                   push ebx
// 00453d56  e8574c3500           call 0x7a89b2
// 00453d5b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00453d5e  5f                   pop edi
// 00453d5f  8bc6                 mov eax, esi
// 00453d61  5e                   pop esi
// 00453d62  64890d00000000       mov dword ptr fs:[0], ecx
// 00453d69  5b                   pop ebx
// 00453d6a  8be5                 mov esp, ebp
// 00453d6c  5d                   pop ebp
// 00453d6d  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_copy@PBUColorEntry@@PAU1@V?$allocator@UColorEntry@@@std@@@std@@YAPAUColorEntry@@PBU1@0PAU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp