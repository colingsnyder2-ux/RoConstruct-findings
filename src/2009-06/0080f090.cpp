// roc 2009-06 0080f090  unit: CXTPRibbonGroup  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080f090
//
// 0080f090  83ec28               sub esp, 0x28
// 0080f093  53                   push ebx
// 0080f094  55                   push ebp
// 0080f095  56                   push esi
// 0080f096  8bf1                 mov esi, ecx
// 0080f098  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0080f09b  57                   push edi
// 0080f09c  e87f89faff           call 0x7b7a20
// 0080f0a1  8b10                 mov edx, dword ptr [eax]
// 0080f0a3  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0080f0a7  56                   push esi
// 0080f0a8  8bc8                 mov ecx, eax
// 0080f0aa  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0080f0b0  55                   push ebp
// 0080f0b1  ffd0                 call eax
// 0080f0b3  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080f0b6  33db                 xor ebx, ebx
// 0080f0b8  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 0080f0c0  85c0                 test eax, eax
// 0080f0c2  0f8eca000000         jle 0x80f192
// 0080f0c8  85db                 test ebx, ebx
// 0080f0ca  7c15                 jl 0x80f0e1
// 0080f0cc  3bd8                 cmp ebx, eax
// 0080f0ce  7d11                 jge 0x80f0e1
// 0080f0d0  3b5e4c               cmp ebx, dword ptr [esi + 0x4c]
// 0080f0d3  0f8d05010000         jge 0x80f1de
// 0080f0d9  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0080f0dc  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 0080f0df  eb02                 jmp 0x80f0e3
// 0080f0e1  33ff                 xor edi, edi
// 0080f0e3  8b17                 mov edx, dword ptr [edi]
// 0080f0e5  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0080f0eb  6a00                 push 0
// 0080f0ed  8bcf                 mov ecx, edi
// 0080f0ef  ffd0                 call eax
// 0080f0f1  85c0                 test eax, eax
// 0080f0f3  0f848d000000         je 0x80f186
// 0080f0f9  837e2400             cmp dword ptr [esi + 0x24], 0
// 0080f0fd  7531                 jne 0x80f130
// 0080f0ff  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 0080f106  7428                 je 0x80f130
// 0080f108  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0080f10d  7521                 jne 0x80f130
// 0080f10f  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0080f112  e839e3f1ff           call 0x72d450
// 0080f117  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0080f11a  8b10                 mov edx, dword ptr [eax]
// 0080f11c  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 0080f122  6a01                 push 1
// 0080f124  57                   push edi
// 0080f125  51                   push ecx
// 0080f126  55                   push ebp
// 0080f127  8d4c2420             lea ecx, [esp + 0x20]
// 0080f12b  51                   push ecx
// 0080f12c  8bc8                 mov ecx, eax
// 0080f12e  ffd2                 call edx
// 0080f130  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 0080f136  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 0080f13c  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 0080f142  89442418             mov dword ptr [esp + 0x18], eax
// 0080f146  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 0080f14c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0080f150  8d4c2418             lea ecx, [esp + 0x18]
// 0080f154  89542420             mov dword ptr [esp + 0x20], edx
// 0080f158  51                   push ecx
// 0080f159  8d542444             lea edx, [esp + 0x44]
// 0080f15d  89442428             mov dword ptr [esp + 0x28], eax
// 0080f161  52                   push edx
// 0080f162  8d442430             lea eax, [esp + 0x30]
// 0080f166  50                   push eax
// 0080f167  ff15f0ee8900         call dword ptr [0x89eef0]
// 0080f16d  85c0                 test eax, eax
// 0080f16f  740d                 je 0x80f17e
// 0080f171  8b17                 mov edx, dword ptr [edi]
// 0080f173  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0080f179  55                   push ebp
// 0080f17a  8bcf                 mov ecx, edi
// 0080f17c  ffd0                 call eax
// 0080f17e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0080f186  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080f189  43                   inc ebx
// 0080f18a  3bd8                 cmp ebx, eax
// 0080f18c  0f8c36ffffff         jl 0x80f0c8
// 0080f192  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0080f195  8b11                 mov edx, dword ptr [ecx]
// 0080f197  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0080f19d  6a00                 push 0
// 0080f19f  ffd0                 call eax
// 0080f1a1  85c0                 test eax, eax
// 0080f1a3  740e                 je 0x80f1b3
// 0080f1a5  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0080f1a8  8b11                 mov edx, dword ptr [ecx]
// 0080f1aa  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0080f1b0  55                   push ebp
// 0080f1b1  ffd0                 call eax
// 0080f1b3  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 0080f1b6  8b11                 mov edx, dword ptr [ecx]
// 0080f1b8  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0080f1be  6a00                 push 0
// 0080f1c0  ffd0                 call eax
// 0080f1c2  85c0                 test eax, eax
// 0080f1c4  740e                 je 0x80f1d4
// 0080f1c6  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 0080f1c9  8b11                 mov edx, dword ptr [ecx]
// 0080f1cb  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0080f1d1  55                   push ebp
// 0080f1d2  ffd0                 call eax
// 0080f1d4  5f                   pop edi
// 0080f1d5  5e                   pop esi
// 0080f1d6  5d                   pop ebp
// 0080f1d7  5b                   pop ebx
// 0080f1d8  83c428               add esp, 0x28
// 0080f1db  c21400               ret 0x14
// 0080f1de  e8019bf0ff           call 0x718ce4
// copied from an identical function in another client (function ?Draw@CXTPRibbonGroup@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp