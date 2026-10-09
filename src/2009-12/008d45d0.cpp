// roc 2009-12 008d45d0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d45d0
//
// 008d45d0  83ec10               sub esp, 0x10
// 008d45d3  53                   push ebx
// 008d45d4  56                   push esi
// 008d45d5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008d45d9  57                   push edi
// 008d45da  8bf9                 mov edi, ecx
// 008d45dc  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d45df  33c9                 xor ecx, ecx
// 008d45e1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d45e9  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d45ed  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 008d45f0  035864               add ebx, dword ptr [eax + 0x64]
// 008d45f3  85f6                 test esi, esi
// 008d45f5  7415                 je 0x8d460c
// 008d45f7  8b06                 mov eax, dword ptr [esi]
// 008d45f9  8b5028               mov edx, dword ptr [eax + 0x28]
// 008d45fc  51                   push ecx
// 008d45fd  8d4c2418             lea ecx, [esp + 0x18]
// 008d4601  51                   push ecx
// 008d4602  6a00                 push 0
// 008d4604  8bce                 mov ecx, esi
// 008d4606  ffd2                 call edx
// 008d4608  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d460c  8b4718               mov eax, dword ptr [edi + 0x18]
// 008d460f  03c3                 add eax, ebx
// 008d4611  3bc1                 cmp eax, ecx
// 008d4613  89442420             mov dword ptr [esp + 0x20], eax
// 008d4617  7f04                 jg 0x8d461d
// 008d4619  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d461d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d4620  83782400             cmp dword ptr [eax + 0x24], 0
// 008d4624  750d                 jne 0x8d4633
// 008d4626  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d462a  5f                   pop edi
// 008d462b  5e                   pop esi
// 008d462c  5b                   pop ebx
// 008d462d  83c410               add esp, 0x10
// 008d4630  c20400               ret 4
// 008d4633  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 008d4639  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d463d  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008d4643  89442410             mov dword ptr [esp + 0x10], eax
// 008d4647  85f6                 test esi, esi
// 008d4649  742e                 je 0x8d4679
// 008d464b  8d4c240c             lea ecx, [esp + 0xc]
// 008d464f  51                   push ecx
// 008d4650  6a00                 push 0
// 008d4652  6a00                 push 0
// 008d4654  83ec08               sub esp, 8
// 008d4657  8bc4                 mov eax, esp
// 008d4659  c70000000000         mov dword ptr [eax], 0
// 008d465f  c7400400000000       mov dword ptr [eax + 4], 0
// 008d4666  8b16                 mov edx, dword ptr [esi]
// 008d4668  8b4244               mov eax, dword ptr [edx + 0x44]
// 008d466b  6a00                 push 0
// 008d466d  8bce                 mov ecx, esi
// 008d466f  ffd0                 call eax
// 008d4671  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d4675  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d4679  3bc8                 cmp ecx, eax
// 008d467b  8bd1                 mov edx, ecx
// 008d467d  7f02                 jg 0x8d4681
// 008d467f  8bd0                 mov edx, eax
// 008d4681  8d741a04             lea esi, [edx + ebx + 4]
// 008d4685  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d4689  3bf2                 cmp esi, edx
// 008d468b  7e13                 jle 0x8d46a0
// 008d468d  3bc8                 cmp ecx, eax
// 008d468f  7e02                 jle 0x8d4693
// 008d4691  8bc1                 mov eax, ecx
// 008d4693  8d441804             lea eax, [eax + ebx + 4]
// 008d4697  5f                   pop edi
// 008d4698  5e                   pop esi
// 008d4699  5b                   pop ebx
// 008d469a  83c410               add esp, 0x10
// 008d469d  c20400               ret 4
// 008d46a0  5f                   pop edi
// 008d46a1  5e                   pop esi
// 008d46a2  8bc2                 mov eax, edx
// 008d46a4  5b                   pop ebx
// 008d46a5  83c410               add esp, 0x10
// 008d46a8  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
