// roc 2007-03 00707b50  unit: seg_00700000  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00707b50
//
// 00707b50  83ec10               sub esp, 0x10
// 00707b53  53                   push ebx
// 00707b54  56                   push esi
// 00707b55  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00707b59  57                   push edi
// 00707b5a  8bf9                 mov edi, ecx
// 00707b5c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00707b5f  33c9                 xor ecx, ecx
// 00707b61  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00707b69  894c2418             mov dword ptr [esp + 0x18], ecx
// 00707b6d  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 00707b70  035864               add ebx, dword ptr [eax + 0x64]
// 00707b73  85f6                 test esi, esi
// 00707b75  7415                 je 0x707b8c
// 00707b77  8b06                 mov eax, dword ptr [esi]
// 00707b79  8b5028               mov edx, dword ptr [eax + 0x28]
// 00707b7c  51                   push ecx
// 00707b7d  8d4c2418             lea ecx, [esp + 0x18]
// 00707b81  51                   push ecx
// 00707b82  6a00                 push 0
// 00707b84  8bce                 mov ecx, esi
// 00707b86  ffd2                 call edx
// 00707b88  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00707b8c  8b4718               mov eax, dword ptr [edi + 0x18]
// 00707b8f  03c3                 add eax, ebx
// 00707b91  3bc1                 cmp eax, ecx
// 00707b93  89442420             mov dword ptr [esp + 0x20], eax
// 00707b97  7f04                 jg 0x707b9d
// 00707b99  894c2420             mov dword ptr [esp + 0x20], ecx
// 00707b9d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00707ba0  83782400             cmp dword ptr [eax + 0x24], 0
// 00707ba4  750d                 jne 0x707bb3
// 00707ba6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00707baa  5f                   pop edi
// 00707bab  5e                   pop esi
// 00707bac  5b                   pop ebx
// 00707bad  83c410               add esp, 0x10
// 00707bb0  c20400               ret 4
// 00707bb3  85f6                 test esi, esi
// 00707bb5  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 00707bbb  894c240c             mov dword ptr [esp + 0xc], ecx
// 00707bbf  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00707bc5  89442410             mov dword ptr [esp + 0x10], eax
// 00707bc9  742e                 je 0x707bf9
// 00707bcb  8d4c240c             lea ecx, [esp + 0xc]
// 00707bcf  51                   push ecx
// 00707bd0  6a00                 push 0
// 00707bd2  6a00                 push 0
// 00707bd4  83ec08               sub esp, 8
// 00707bd7  8bc4                 mov eax, esp
// 00707bd9  c70000000000         mov dword ptr [eax], 0
// 00707bdf  c7400400000000       mov dword ptr [eax + 4], 0
// 00707be6  8b16                 mov edx, dword ptr [esi]
// 00707be8  8b4244               mov eax, dword ptr [edx + 0x44]
// 00707beb  6a00                 push 0
// 00707bed  8bce                 mov ecx, esi
// 00707bef  ffd0                 call eax
// 00707bf1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00707bf5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00707bf9  3bc8                 cmp ecx, eax
// 00707bfb  8bd1                 mov edx, ecx
// 00707bfd  7f02                 jg 0x707c01
// 00707bff  8bd0                 mov edx, eax
// 00707c01  8d741a04             lea esi, [edx + ebx + 4]
// 00707c05  8b542420             mov edx, dword ptr [esp + 0x20]
// 00707c09  3bf2                 cmp esi, edx
// 00707c0b  7e13                 jle 0x707c20
// 00707c0d  3bc8                 cmp ecx, eax
// 00707c0f  7e02                 jle 0x707c13
// 00707c11  8bc1                 mov eax, ecx
// 00707c13  8d441804             lea eax, [eax + ebx + 4]
// 00707c17  5f                   pop edi
// 00707c18  5e                   pop esi
// 00707c19  5b                   pop ebx
// 00707c1a  83c410               add esp, 0x10
// 00707c1d  c20400               ret 4
// 00707c20  5f                   pop edi
// 00707c21  5e                   pop esi
// 00707c22  8bc2                 mov eax, edx
// 00707c24  5b                   pop ebx
// 00707c25  83c410               add esp, 0x10
// 00707c28  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
