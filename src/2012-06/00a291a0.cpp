// roc 2012-06 00a291a0  unit: CXTPReportPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a291a0
//
// 00a291a0  6aff                 push -1
// 00a291a2  68524cae00           push 0xae4c52
// 00a291a7  64a100000000         mov eax, dword ptr fs:[0]
// 00a291ad  50                   push eax
// 00a291ae  83ec40               sub esp, 0x40
// 00a291b1  53                   push ebx
// 00a291b2  55                   push ebp
// 00a291b3  56                   push esi
// 00a291b4  57                   push edi
// 00a291b5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a291ba  33c4                 xor eax, esp
// 00a291bc  50                   push eax
// 00a291bd  8d442454             lea eax, [esp + 0x54]
// 00a291c1  64a300000000         mov dword ptr fs:[0], eax
// 00a291c7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a291cb  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00a291cf  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 00a291d2  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 00a291d5  8d4c2470             lea ecx, [esp + 0x70]
// 00a291d9  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00a291e1  8bf5                 mov esi, ebp
// 00a291e3  ff155846b200         call dword ptr [0xb24658]
// 00a291e9  8d0c33               lea ecx, [ebx + esi]
// 00a291ec  2bc8                 sub ecx, eax
// 00a291ee  85c9                 test ecx, ecx
// 00a291f0  7e0f                 jle 0xa29201
// 00a291f2  2bf1                 sub esi, ecx
// 00a291f4  b800000000           mov eax, 0
// 00a291f9  0f98c0               sets al
// 00a291fc  48                   dec eax
// 00a291fd  23c6                 and eax, esi
// 00a291ff  8be8                 mov ebp, eax
// 00a29201  85db                 test ebx, ebx
// 00a29203  0f8c72010000         jl 0xa2937b
// 00a29209  8b7730               mov esi, dword ptr [edi + 0x30]
// 00a2920c  8d4c2470             lea ecx, [esp + 0x70]
// 00a29210  89742418             mov dword ptr [esp + 0x18], esi
// 00a29214  ff155846b200         call dword ptr [0xb24658]
// 00a2921a  3bf0                 cmp esi, eax
// 00a2921c  0f8d59010000         jge 0xa2937b
// 00a29222  85ed                 test ebp, ebp
// 00a29224  0f8e51010000         jle 0xa2937b
// 00a2922a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a2922e  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00a29232  8b7324               mov esi, dword ptr [ebx + 0x24]
// 00a29235  55                   push ebp
// 00a29236  51                   push ecx
// 00a29237  8d542474             lea edx, [esp + 0x74]
// 00a2923b  52                   push edx
// 00a2923c  8d4c247c             lea ecx, [esp + 0x7c]
// 00a29240  ff158449b200         call dword ptr [0xb24984]
// 00a29246  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00a2924e  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00a29253  7414                 je 0xa29269
// 00a29255  8d4c246c             lea ecx, [esp + 0x6c]
// 00a29259  ff158c4ab200         call dword ptr [0xb24a8c]
// 00a2925f  8d4c246c             lea ecx, [esp + 0x6c]
// 00a29263  ff153c4db200         call dword ptr [0xb24d3c]
// 00a29269  6a20                 push 0x20
// 00a2926b  6a01                 push 1
// 00a2926d  8d4c2474             lea ecx, [esp + 0x74]
// 00a29271  ff15344db200         call dword ptr [0xb24d34]
// 00a29277  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00a2927a  8b01                 mov eax, dword ptr [ecx]
// 00a2927c  8b5074               mov edx, dword ptr [eax + 0x74]
// 00a2927f  ffd2                 call edx
// 00a29281  85c0                 test eax, eax
// 00a29283  7433                 je 0xa292b8
// 00a29285  8b4308               mov eax, dword ptr [ebx + 8]
// 00a29288  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00a2928b  e8b069f8ff           call 0x9afc40
// 00a29290  85c0                 test eax, eax
// 00a29292  7424                 je 0xa292b8
// 00a29294  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00a29297  85c9                 test ecx, ecx
// 00a29299  7414                 je 0xa292af
// 00a2929b  8b5308               mov edx, dword ptr [ebx + 8]
// 00a2929e  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a292a1  8b8018020000         mov eax, dword ptr [eax + 0x218]
// 00a292a7  85c0                 test eax, eax
// 00a292a9  7404                 je 0xa292af
// 00a292ab  3bc8                 cmp ecx, eax
// 00a292ad  7409                 je 0xa292b8
// 00a292af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a292b3  83c164               add ecx, 0x64
// 00a292b6  eb0a                 jmp 0xa292c2
// 00a292b8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a292bc  81c1f4000000         add ecx, 0xf4
// 00a292c2  8b4108               mov eax, dword ptr [ecx + 8]
// 00a292c5  83f8ff               cmp eax, -1
// 00a292c8  7503                 jne 0xa292cd
// 00a292ca  8b4104               mov eax, dword ptr [ecx + 4]
// 00a292cd  8b16                 mov edx, dword ptr [esi]
// 00a292cf  50                   push eax
// 00a292d0  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a292d3  8bce                 mov ecx, esi
// 00a292d5  ffd0                 call eax
// 00a292d7  8b5608               mov edx, dword ptr [esi + 8]
// 00a292da  8d4c241c             lea ecx, [esp + 0x1c]
// 00a292de  51                   push ecx
// 00a292df  52                   push edx
// 00a292e0  8be8                 mov ebp, eax
// 00a292e2  ff15a420b200         call dword ptr [0xb220a4]
// 00a292e8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00a292ec  8b03                 mov eax, dword ptr [ebx]
// 00a292ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a292f2  894720               mov dword ptr [edi + 0x20], eax
// 00a292f5  8b11                 mov edx, dword ptr [ecx]
// 00a292f7  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00a292fe  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a29302  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00a29308  50                   push eax
// 00a29309  83ec10               sub esp, 0x10
// 00a2930c  8bc4                 mov eax, esp
// 00a2930e  8908                 mov dword ptr [eax], ecx
// 00a29310  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a29317  894804               mov dword ptr [eax + 4], ecx
// 00a2931a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a29321  894808               mov dword ptr [eax + 8], ecx
// 00a29324  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a2932b  89480c               mov dword ptr [eax + 0xc], ecx
// 00a2932e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a29332  8d842480000000       lea eax, [esp + 0x80]
// 00a29339  50                   push eax
// 00a2933a  56                   push esi
// 00a2933b  53                   push ebx
// 00a2933c  ffd2                 call edx
// 00a2933e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a29342  89442468             mov dword ptr [esp + 0x68], eax
// 00a29346  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a2934a  894724               mov dword ptr [edi + 0x24], eax
// 00a2934d  8b0b                 mov ecx, dword ptr [ebx]
// 00a2934f  03d0                 add edx, eax
// 00a29351  894f28               mov dword ptr [edi + 0x28], ecx
// 00a29354  89572c               mov dword ptr [edi + 0x2c], edx
// 00a29357  8b06                 mov eax, dword ptr [esi]
// 00a29359  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a2935c  55                   push ebp
// 00a2935d  8bce                 mov ecx, esi
// 00a2935f  ffd2                 call edx
// 00a29361  8d4c246c             lea ecx, [esp + 0x6c]
// 00a29365  ff15d047b200         call dword ptr [0xb247d0]
// 00a2936b  8d4c2470             lea ecx, [esp + 0x70]
// 00a2936f  ff15d047b200         call dword ptr [0xb247d0]
// 00a29375  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a29379  eb0c                 jmp 0xa29387
// 00a2937b  8d4c2470             lea ecx, [esp + 0x70]
// 00a2937f  ff15d047b200         call dword ptr [0xb247d0]
// 00a29385  33c0                 xor eax, eax
// 00a29387  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a2938b  64890d00000000       mov dword ptr fs:[0], ecx
// 00a29392  59                   pop ecx
// 00a29393  5f                   pop edi
// 00a29394  5e                   pop esi
// 00a29395  5d                   pop ebp
// 00a29396  5b                   pop ebx
// 00a29397  83c44c               add esp, 0x4c
// 00a2939a  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawLink2@CXTPReportPaintManager@@MAEHPAHPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAVCXTPReportHyperlink@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp