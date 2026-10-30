// roc 2011-06 008d9700  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d9700
//
// 008d9700  83ec10               sub esp, 0x10
// 008d9703  53                   push ebx
// 008d9704  56                   push esi
// 008d9705  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008d9709  57                   push edi
// 008d970a  8bf9                 mov edi, ecx
// 008d970c  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d970f  33c9                 xor ecx, ecx
// 008d9711  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d9719  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d971d  8b586c               mov ebx, dword ptr [eax + 0x6c]
// 008d9720  035864               add ebx, dword ptr [eax + 0x64]
// 008d9723  85f6                 test esi, esi
// 008d9725  7415                 je 0x8d973c
// 008d9727  8b06                 mov eax, dword ptr [esi]
// 008d9729  8b5028               mov edx, dword ptr [eax + 0x28]
// 008d972c  51                   push ecx
// 008d972d  8d4c2418             lea ecx, [esp + 0x18]
// 008d9731  51                   push ecx
// 008d9732  6a00                 push 0
// 008d9734  8bce                 mov ecx, esi
// 008d9736  ffd2                 call edx
// 008d9738  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d973c  8b4718               mov eax, dword ptr [edi + 0x18]
// 008d973f  03c3                 add eax, ebx
// 008d9741  3bc1                 cmp eax, ecx
// 008d9743  89442420             mov dword ptr [esp + 0x20], eax
// 008d9747  7f04                 jg 0x8d974d
// 008d9749  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d974d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d9750  83782400             cmp dword ptr [eax + 0x24], 0
// 008d9754  750d                 jne 0x8d9763
// 008d9756  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d975a  5f                   pop edi
// 008d975b  5e                   pop esi
// 008d975c  5b                   pop ebx
// 008d975d  83c410               add esp, 0x10
// 008d9760  c20400               ret 4
// 008d9763  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 008d9769  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d976d  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008d9773  89442410             mov dword ptr [esp + 0x10], eax
// 008d9777  85f6                 test esi, esi
// 008d9779  742e                 je 0x8d97a9
// 008d977b  8d4c240c             lea ecx, [esp + 0xc]
// 008d977f  51                   push ecx
// 008d9780  6a00                 push 0
// 008d9782  6a00                 push 0
// 008d9784  83ec08               sub esp, 8
// 008d9787  8bc4                 mov eax, esp
// 008d9789  c70000000000         mov dword ptr [eax], 0
// 008d978f  c7400400000000       mov dword ptr [eax + 4], 0
// 008d9796  8b16                 mov edx, dword ptr [esi]
// 008d9798  8b4244               mov eax, dword ptr [edx + 0x44]
// 008d979b  6a00                 push 0
// 008d979d  8bce                 mov ecx, esi
// 008d979f  ffd0                 call eax
// 008d97a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d97a5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d97a9  3bc8                 cmp ecx, eax
// 008d97ab  8bd1                 mov edx, ecx
// 008d97ad  7f02                 jg 0x8d97b1
// 008d97af  8bd0                 mov edx, eax
// 008d97b1  8d741a04             lea esi, [edx + ebx + 4]
// 008d97b5  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d97b9  3bf2                 cmp esi, edx
// 008d97bb  7e13                 jle 0x8d97d0
// 008d97bd  3bc8                 cmp ecx, eax
// 008d97bf  7e02                 jle 0x8d97c3
// 008d97c1  8bc1                 mov eax, ecx
// 008d97c3  8d441804             lea eax, [eax + ebx + 4]
// 008d97c7  5f                   pop edi
// 008d97c8  5e                   pop esi
// 008d97c9  5b                   pop ebx
// 008d97ca  83c410               add esp, 0x10
// 008d97cd  c20400               ret 4
// 008d97d0  5f                   pop edi
// 008d97d1  5e                   pop esi
// 008d97d2  8bc2                 mov eax, edx
// 008d97d4  5b                   pop ebx
// 008d97d5  83c410               add esp, 0x10
// 008d97d8  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonHeight@CAppearanceSet@CXTPTabPaintManager@@UAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
