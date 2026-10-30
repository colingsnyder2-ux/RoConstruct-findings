// roc 2011-06 008db8c0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008db8c0
//
// 008db8c0  83ec20               sub esp, 0x20
// 008db8c3  53                   push ebx
// 008db8c4  55                   push ebp
// 008db8c5  56                   push esi
// 008db8c6  57                   push edi
// 008db8c7  68a005ad00           push 0xad05a0
// 008db8cc  e87f2d0100           call 0x8ee650
// 008db8d1  8bc8                 mov ecx, eax
// 008db8d3  e8982c0100           call 0x8ee570
// 008db8d8  8b742438             mov esi, dword ptr [esp + 0x38]
// 008db8dc  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008db8df  33ff                 xor edi, edi
// 008db8e1  8bd8                 mov ebx, eax
// 008db8e3  8d6f05               lea ebp, [edi + 5]
// 008db8e6  397104               cmp dword ptr [ecx + 4], esi
// 008db8e9  750f                 jne 0x8db8fa
// 008db8eb  8b01                 mov eax, dword ptr [ecx]
// 008db8ed  8b5078               mov edx, dword ptr [eax + 0x78]
// 008db8f0  ffd2                 call edx
// 008db8f2  85c0                 test eax, eax
// 008db8f4  7404                 je 0x8db8fa
// 008db8f6  8bfd                 mov edi, ebp
// 008db8f8  eb37                 jmp 0x8db931
// 008db8fa  8b4660               mov eax, dword ptr [esi + 0x60]
// 008db8fd  8b4804               mov ecx, dword ptr [eax + 4]
// 008db900  3bce                 cmp ecx, esi
// 008db902  7517                 jne 0x8db91b
// 008db904  397008               cmp dword ptr [eax + 8], esi
// 008db907  7507                 jne 0x8db910
// 008db909  bf04000000           mov edi, 4
// 008db90e  eb21                 jmp 0x8db931
// 008db910  3bce                 cmp ecx, esi
// 008db912  7507                 jne 0x8db91b
// 008db914  bf03000000           mov edi, 3
// 008db919  eb16                 jmp 0x8db931
// 008db91b  39700c               cmp dword ptr [eax + 0xc], esi
// 008db91e  7507                 jne 0x8db927
// 008db920  bf02000000           mov edi, 2
// 008db925  eb0a                 jmp 0x8db931
// 008db927  397008               cmp dword ptr [eax + 8], esi
// 008db92a  7505                 jne 0x8db931
// 008db92c  bf01000000           mov edi, 1
// 008db931  85db                 test ebx, ebx
// 008db933  7455                 je 0x8db98a
// 008db935  6a06                 push 6
// 008db937  57                   push edi
// 008db938  8d442428             lea eax, [esp + 0x28]
// 008db93c  50                   push eax
// 008db93d  8bcb                 mov ecx, ebx
// 008db93f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008db943  896c2420             mov dword ptr [esp + 0x20], ebp
// 008db947  896c2424             mov dword ptr [esp + 0x24], ebp
// 008db94b  896c2428             mov dword ptr [esp + 0x28], ebp
// 008db94f  e8bc1d0100           call 0x8ed710
// 008db954  8b10                 mov edx, dword ptr [eax]
// 008db956  68ff00ff00           push 0xff00ff
// 008db95b  8d4c2414             lea ecx, [esp + 0x14]
// 008db95f  51                   push ecx
// 008db960  83ec10               sub esp, 0x10
// 008db963  8bcc                 mov ecx, esp
// 008db965  8911                 mov dword ptr [ecx], edx
// 008db967  8b5004               mov edx, dword ptr [eax + 4]
// 008db96a  895104               mov dword ptr [ecx + 4], edx
// 008db96d  8b5008               mov edx, dword ptr [eax + 8]
// 008db970  8b400c               mov eax, dword ptr [eax + 0xc]
// 008db973  895108               mov dword ptr [ecx + 8], edx
// 008db976  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008db97a  89410c               mov dword ptr [ecx + 0xc], eax
// 008db97d  8d4c2454             lea ecx, [esp + 0x54]
// 008db981  51                   push ecx
// 008db982  52                   push edx
// 008db983  8bcb                 mov ecx, ebx
// 008db985  e8c6220100           call 0x8edc50
// 008db98a  5f                   pop edi
// 008db98b  5e                   pop esi
// 008db98c  5d                   pop ebp
// 008db98d  5b                   pop ebx
// 008db98e  83c420               add esp, 0x20
// 008db991  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawButtonBackground@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@AAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
