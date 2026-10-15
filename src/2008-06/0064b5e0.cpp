// roc 2008-06 0064b5e0  unit: RBX::SleepStage  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064b5e0
//
// 0064b5e0  83ec0c               sub esp, 0xc
// 0064b5e3  56                   push esi
// 0064b5e4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064b5e8  837e0400             cmp dword ptr [esi + 4], 0
// 0064b5ec  57                   push edi
// 0064b5ed  8bf9                 mov edi, ecx
// 0064b5ef  0f84cd000000         je 0x64b6c2
// 0064b5f5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064b5f8  8b01                 mov eax, dword ptr [ecx]
// 0064b5fa  8b5004               mov edx, dword ptr [eax + 4]
// 0064b5fd  53                   push ebx
// 0064b5fe  ffd2                 call edx
// 0064b600  8bd8                 mov ebx, eax
// 0064b602  8b07                 mov eax, dword ptr [edi]
// 0064b604  8b5004               mov edx, dword ptr [eax + 4]
// 0064b607  8bcf                 mov ecx, edi
// 0064b609  ffd2                 call edx
// 0064b60b  3bd8                 cmp ebx, eax
// 0064b60d  0f8cae000000         jl 0x64b6c1
// 0064b613  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064b616  8b00                 mov eax, dword ptr [eax]
// 0064b618  85c0                 test eax, eax
// 0064b61a  0f84a1000000         je 0x64b6c1
// 0064b620  83f802               cmp eax, 2
// 0064b623  0f8498000000         je 0x64b6c1
// 0064b629  83f801               cmp eax, 1
// 0064b62c  0f848f000000         je 0x64b6c1
// 0064b632  837e0400             cmp dword ptr [esi + 4], 0
// 0064b636  8974241c             mov dword ptr [esp + 0x1c], esi
// 0064b63a  7420                 je 0x64b65c
// 0064b63c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064b63f  8b11                 mov edx, dword ptr [ecx]
// 0064b641  8b4204               mov eax, dword ptr [edx + 4]
// 0064b644  ffd0                 call eax
// 0064b646  8b17                 mov edx, dword ptr [edi]
// 0064b648  8bd8                 mov ebx, eax
// 0064b64a  8b4204               mov eax, dword ptr [edx + 4]
// 0064b64d  8bcf                 mov ecx, edi
// 0064b64f  ffd0                 call eax
// 0064b651  3bd8                 cmp ebx, eax
// 0064b653  7c07                 jl 0x64b65c
// 0064b655  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0064b658  8b19                 mov ebx, dword ptr [ecx]
// 0064b65a  eb02                 jmp 0x64b65e
// 0064b65c  33db                 xor ebx, ebx
// 0064b65e  53                   push ebx
// 0064b65f  8bcf                 mov ecx, edi
// 0064b661  e8eaeeffff           call 0x64a550
// 0064b666  8d54241c             lea edx, [esp + 0x1c]
// 0064b66a  52                   push edx
// 0064b66b  8bc8                 mov ecx, eax
// 0064b66d  81c700010000         add edi, 0x100
// 0064b673  e8e8e8f9ff           call 0x5e9f60
// 0064b678  8d44241c             lea eax, [esp + 0x1c]
// 0064b67c  50                   push eax
// 0064b67d  8d4c2410             lea ecx, [esp + 0x10]
// 0064b681  51                   push ecx
// 0064b682  8bcf                 mov ecx, edi
// 0064b684  e8b7d5f9ff           call 0x5e8c40
// 0064b689  83fb04               cmp ebx, 4
// 0064b68c  7405                 je 0x64b693
// 0064b68e  83fb05               cmp ebx, 5
// 0064b691  751b                 jne 0x64b6ae
// 0064b693  8b5624               mov edx, dword ptr [esi + 0x24]
// 0064b696  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0064b699  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 0064b69f  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0064b6a2  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0064b6a5  85c9                 test ecx, ecx
// 0064b6a7  7405                 je 0x64b6ae
// 0064b6a9  e8d287fcff           call 0x613e80
// 0064b6ae  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064b6b1  c7400400000000       mov dword ptr [eax + 4], 0
// 0064b6b8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0064b6bb  c70102000000         mov dword ptr [ecx], 2
// 0064b6c1  5b                   pop ebx
// 0064b6c2  5f                   pop edi
// 0064b6c3  5e                   pop esi
// 0064b6c4  83c40c               add esp, 0xc
// 0064b6c7  c20400               ret 4
// library rbxgs/roc_unit_32e3ce177c352edc.cpp (function ?wakeEvent@SleepStage@RBX@@AAEXPAVAssembly@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_32e3ce177c352edc.cpp
