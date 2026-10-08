// roc 2012-06 00a53bd0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a53bd0
//
// 00a53bd0  83ec20               sub esp, 0x20
// 00a53bd3  53                   push ebx
// 00a53bd4  55                   push ebp
// 00a53bd5  56                   push esi
// 00a53bd6  57                   push edi
// 00a53bd7  6858bcc100           push 0xc1bc58
// 00a53bdc  e84f2e0100           call 0xa66a30
// 00a53be1  8bc8                 mov ecx, eax
// 00a53be3  e8682d0100           call 0xa66950
// 00a53be8  8b742438             mov esi, dword ptr [esp + 0x38]
// 00a53bec  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a53bef  33ff                 xor edi, edi
// 00a53bf1  8bd8                 mov ebx, eax
// 00a53bf3  8d6f05               lea ebp, [edi + 5]
// 00a53bf6  397104               cmp dword ptr [ecx + 4], esi
// 00a53bf9  750f                 jne 0xa53c0a
// 00a53bfb  8b01                 mov eax, dword ptr [ecx]
// 00a53bfd  8b5078               mov edx, dword ptr [eax + 0x78]
// 00a53c00  ffd2                 call edx
// 00a53c02  85c0                 test eax, eax
// 00a53c04  7404                 je 0xa53c0a
// 00a53c06  8bfd                 mov edi, ebp
// 00a53c08  eb37                 jmp 0xa53c41
// 00a53c0a  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a53c0d  8b4804               mov ecx, dword ptr [eax + 4]
// 00a53c10  3bce                 cmp ecx, esi
// 00a53c12  7517                 jne 0xa53c2b
// 00a53c14  397008               cmp dword ptr [eax + 8], esi
// 00a53c17  7507                 jne 0xa53c20
// 00a53c19  bf04000000           mov edi, 4
// 00a53c1e  eb21                 jmp 0xa53c41
// 00a53c20  3bce                 cmp ecx, esi
// 00a53c22  7507                 jne 0xa53c2b
// 00a53c24  bf03000000           mov edi, 3
// 00a53c29  eb16                 jmp 0xa53c41
// 00a53c2b  39700c               cmp dword ptr [eax + 0xc], esi
// 00a53c2e  7507                 jne 0xa53c37
// 00a53c30  bf02000000           mov edi, 2
// 00a53c35  eb0a                 jmp 0xa53c41
// 00a53c37  397008               cmp dword ptr [eax + 8], esi
// 00a53c3a  7505                 jne 0xa53c41
// 00a53c3c  bf01000000           mov edi, 1
// 00a53c41  85db                 test ebx, ebx
// 00a53c43  7455                 je 0xa53c9a
// 00a53c45  6a06                 push 6
// 00a53c47  57                   push edi
// 00a53c48  8d442428             lea eax, [esp + 0x28]
// 00a53c4c  50                   push eax
// 00a53c4d  8bcb                 mov ecx, ebx
// 00a53c4f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a53c53  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a53c57  896c2424             mov dword ptr [esp + 0x24], ebp
// 00a53c5b  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a53c5f  e88c1e0100           call 0xa65af0
// 00a53c64  8b10                 mov edx, dword ptr [eax]
// 00a53c66  68ff00ff00           push 0xff00ff
// 00a53c6b  8d4c2414             lea ecx, [esp + 0x14]
// 00a53c6f  51                   push ecx
// 00a53c70  83ec10               sub esp, 0x10
// 00a53c73  8bcc                 mov ecx, esp
// 00a53c75  8911                 mov dword ptr [ecx], edx
// 00a53c77  8b5004               mov edx, dword ptr [eax + 4]
// 00a53c7a  895104               mov dword ptr [ecx + 4], edx
// 00a53c7d  8b5008               mov edx, dword ptr [eax + 8]
// 00a53c80  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a53c83  895108               mov dword ptr [ecx + 8], edx
// 00a53c86  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a53c8a  89410c               mov dword ptr [ecx + 0xc], eax
// 00a53c8d  8d4c2454             lea ecx, [esp + 0x54]
// 00a53c91  51                   push ecx
// 00a53c92  52                   push edx
// 00a53c93  8bcb                 mov ecx, ebx
// 00a53c95  e896230100           call 0xa66030
// 00a53c9a  5f                   pop edi
// 00a53c9b  5e                   pop esi
// 00a53c9c  5d                   pop ebp
// 00a53c9d  5b                   pop ebx
// 00a53c9e  83c420               add esp, 0x20
// 00a53ca1  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawButtonBackground@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@AAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
