// from server: 100% by auto
// roc 2008-06 00783570  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00783570
//
// 00783570  83ec20               sub esp, 0x20
// 00783573  53                   push ebx
// 00783574  55                   push ebp
// 00783575  56                   push esi
// 00783576  57                   push edi
// 00783577  68201b8600           push 0x861b20
// 0078357c  e8efb00000           call 0x78e670
// 00783581  8bc8                 mov ecx, eax
// 00783583  e808b00000           call 0x78e590
// 00783588  8b742438             mov esi, dword ptr [esp + 0x38]
// 0078358c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0078358f  33ff                 xor edi, edi
// 00783591  8bd8                 mov ebx, eax
// 00783593  8d6f05               lea ebp, [edi + 5]
// 00783596  397104               cmp dword ptr [ecx + 4], esi
// 00783599  750f                 jne 0x7835aa
// 0078359b  8b01                 mov eax, dword ptr [ecx]
// 0078359d  8b5078               mov edx, dword ptr [eax + 0x78]
// 007835a0  ffd2                 call edx
// 007835a2  85c0                 test eax, eax
// 007835a4  7404                 je 0x7835aa
// 007835a6  8bfd                 mov edi, ebp
// 007835a8  eb37                 jmp 0x7835e1
// 007835aa  8b4660               mov eax, dword ptr [esi + 0x60]
// 007835ad  8b4804               mov ecx, dword ptr [eax + 4]
// 007835b0  3bce                 cmp ecx, esi
// 007835b2  7517                 jne 0x7835cb
// 007835b4  397008               cmp dword ptr [eax + 8], esi
// 007835b7  7507                 jne 0x7835c0
// 007835b9  bf04000000           mov edi, 4
// 007835be  eb21                 jmp 0x7835e1
// 007835c0  3bce                 cmp ecx, esi
// 007835c2  7507                 jne 0x7835cb
// 007835c4  bf03000000           mov edi, 3
// 007835c9  eb16                 jmp 0x7835e1
// 007835cb  39700c               cmp dword ptr [eax + 0xc], esi
// 007835ce  7507                 jne 0x7835d7
// 007835d0  bf02000000           mov edi, 2
// 007835d5  eb0a                 jmp 0x7835e1
// 007835d7  397008               cmp dword ptr [eax + 8], esi
// 007835da  7505                 jne 0x7835e1
// 007835dc  bf01000000           mov edi, 1
// 007835e1  85db                 test ebx, ebx
// 007835e3  7455                 je 0x78363a
// 007835e5  6a06                 push 6
// 007835e7  57                   push edi
// 007835e8  8d442428             lea eax, [esp + 0x28]
// 007835ec  50                   push eax
// 007835ed  8bcb                 mov ecx, ebx
// 007835ef  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007835f3  896c2420             mov dword ptr [esp + 0x20], ebp
// 007835f7  896c2424             mov dword ptr [esp + 0x24], ebp
// 007835fb  896c2428             mov dword ptr [esp + 0x28], ebp
// 007835ff  e82ca10000           call 0x78d730
// 00783604  8b10                 mov edx, dword ptr [eax]
// 00783606  68ff00ff00           push 0xff00ff
// 0078360b  8d4c2414             lea ecx, [esp + 0x14]
// 0078360f  51                   push ecx
// 00783610  83ec10               sub esp, 0x10
// 00783613  8bcc                 mov ecx, esp
// 00783615  8911                 mov dword ptr [ecx], edx
// 00783617  8b5004               mov edx, dword ptr [eax + 4]
// 0078361a  895104               mov dword ptr [ecx + 4], edx
// 0078361d  8b5008               mov edx, dword ptr [eax + 8]
// 00783620  8b400c               mov eax, dword ptr [eax + 0xc]
// 00783623  895108               mov dword ptr [ecx + 8], edx
// 00783626  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0078362a  89410c               mov dword ptr [ecx + 0xc], eax
// 0078362d  8d4c2454             lea ecx, [esp + 0x54]
// 00783631  51                   push ecx
// 00783632  52                   push edx
// 00783633  8bcb                 mov ecx, ebx
// 00783635  e836a60000           call 0x78dc70
// 0078363a  5f                   pop edi
// 0078363b  5e                   pop esi
// 0078363c  5d                   pop ebp
// 0078363d  5b                   pop ebx
// 0078363e  83c420               add esp, 0x20
// 00783641  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawButtonBackground@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@AAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
