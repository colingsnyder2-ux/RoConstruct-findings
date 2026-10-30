// roc 2009-12 00868960  unit: CXTPPropertyGridView  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868960
//
// 00868960  8b442404             mov eax, dword ptr [esp + 4]
// 00868964  53                   push ebx
// 00868965  8bd9                 mov ebx, ecx
// 00868967  85c0                 test eax, eax
// 00868969  0f8480000000         je 0x8689ef
// 0086896f  55                   push ebp
// 00868970  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 00868976  56                   push esi
// 00868977  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 0086897d  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00868980  6a00                 push 0
// 00868982  6a00                 push 0
// 00868984  688b010000           push 0x18b
// 00868989  50                   push eax
// 0086898a  46                   inc esi
// 0086898b  ffd5                 call ebp
// 0086898d  3bf0                 cmp esi, eax
// 0086898f  7d55                 jge 0x8689e6
// 00868991  57                   push edi
// 00868992  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00868995  6a00                 push 0
// 00868997  56                   push esi
// 00868998  6899010000           push 0x199
// 0086899d  51                   push ecx
// 0086899e  ffd5                 call ebp
// 008689a0  8bf8                 mov edi, eax
// 008689a2  85ff                 test edi, edi
// 008689a4  743f                 je 0x8689e5
// 008689a6  8b542414             mov edx, dword ptr [esp + 0x14]
// 008689aa  52                   push edx
// 008689ab  8bcf                 mov ecx, edi
// 008689ad  e89ebcffff           call 0x864650
// 008689b2  85c0                 test eax, eax
// 008689b4  742f                 je 0x8689e5
// 008689b6  8b07                 mov eax, dword ptr [edi]
// 008689b8  8b90a4000000         mov edx, dword ptr [eax + 0xa4]
// 008689be  6a00                 push 0
// 008689c0  8bcf                 mov ecx, edi
// 008689c2  ffd2                 call edx
// 008689c4  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008689c7  6a00                 push 0
// 008689c9  56                   push esi
// 008689ca  6882010000           push 0x182
// 008689cf  50                   push eax
// 008689d0  ffd5                 call ebp
// 008689d2  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008689d5  6a00                 push 0
// 008689d7  6a00                 push 0
// 008689d9  688b010000           push 0x18b
// 008689de  51                   push ecx
// 008689df  ffd5                 call ebp
// 008689e1  3bf0                 cmp esi, eax
// 008689e3  7cad                 jl 0x868992
// 008689e5  5f                   pop edi
// 008689e6  8bcb                 mov ecx, ebx
// 008689e8  e803ffffff           call 0x8688f0
// 008689ed  5e                   pop esi
// 008689ee  5d                   pop ebp
// 008689ef  5b                   pop ebx
// 008689f0  c20400               ret 4
// copied from an identical function in another client (function ?_DoCollapse@CXTPPropertyGridView@@AAEXPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp