// roc 2008-06 0048c830  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c830
//
// 0048c830  56                   push esi
// 0048c831  57                   push edi
// 0048c832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0048c836  8bf1                 mov esi, ecx
// 0048c838  c70600000000         mov dword ptr [esi], 0
// 0048c83e  8b07                 mov eax, dword ptr [edi]
// 0048c840  85c0                 test eax, eax
// 0048c842  7415                 je 0x48c859
// 0048c844  8906                 mov dword ptr [esi], eax
// 0048c846  8b07                 mov eax, dword ptr [edi]
// 0048c848  8b00                 mov eax, dword ptr [eax]
// 0048c84a  6a00                 push 0
// 0048c84c  8d4e08               lea ecx, [esi + 8]
// 0048c84f  51                   push ecx
// 0048c850  8d5708               lea edx, [edi + 8]
// 0048c853  52                   push edx
// 0048c854  ffd0                 call eax
// 0048c856  83c40c               add esp, 0xc
// 0048c859  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0048c85c  894e20               mov dword ptr [esi + 0x20], ecx
// 0048c85f  8b5724               mov edx, dword ptr [edi + 0x24]
// 0048c862  895624               mov dword ptr [esi + 0x24], edx
// 0048c865  8b4728               mov eax, dword ptr [edi + 0x28]
// 0048c868  894628               mov dword ptr [esi + 0x28], eax
// 0048c86b  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0048c86e  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0048c871  8b5730               mov edx, dword ptr [edi + 0x30]
// 0048c874  895630               mov dword ptr [esi + 0x30], edx
// 0048c877  8b4734               mov eax, dword ptr [edi + 0x34]
// 0048c87a  894634               mov dword ptr [esi + 0x34], eax
// 0048c87d  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0048c880  894e38               mov dword ptr [esi + 0x38], ecx
// 0048c883  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0048c886  89563c               mov dword ptr [esi + 0x3c], edx
// 0048c889  8b4740               mov eax, dword ptr [edi + 0x40]
// 0048c88c  894640               mov dword ptr [esi + 0x40], eax
// 0048c88f  5f                   pop edi
// 0048c890  c6464400             mov byte ptr [esi + 0x44], 0
// 0048c894  8bc6                 mov eax, esi
// 0048c896  5e                   pop esi
// 0048c897  c20400               ret 4
// library rbxgs-net/Player.cpp (function ??0?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@algorithm@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
