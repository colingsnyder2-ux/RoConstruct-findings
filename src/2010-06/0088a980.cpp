// roc 2010-06 0088a980  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088a980
//
// 0088a980  83ec20               sub esp, 0x20
// 0088a983  53                   push ebx
// 0088a984  55                   push ebp
// 0088a985  56                   push esi
// 0088a986  57                   push edi
// 0088a987  68805ba600           push 0xa65b80
// 0088a98c  e8dfb00000           call 0x895a70
// 0088a991  8bc8                 mov ecx, eax
// 0088a993  e8f8af0000           call 0x895990
// 0088a998  8b742438             mov esi, dword ptr [esp + 0x38]
// 0088a99c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088a99f  33ff                 xor edi, edi
// 0088a9a1  8bd8                 mov ebx, eax
// 0088a9a3  8d6f05               lea ebp, [edi + 5]
// 0088a9a6  397104               cmp dword ptr [ecx + 4], esi
// 0088a9a9  750f                 jne 0x88a9ba
// 0088a9ab  8b01                 mov eax, dword ptr [ecx]
// 0088a9ad  8b5078               mov edx, dword ptr [eax + 0x78]
// 0088a9b0  ffd2                 call edx
// 0088a9b2  85c0                 test eax, eax
// 0088a9b4  7404                 je 0x88a9ba
// 0088a9b6  8bfd                 mov edi, ebp
// 0088a9b8  eb37                 jmp 0x88a9f1
// 0088a9ba  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088a9bd  8b4804               mov ecx, dword ptr [eax + 4]
// 0088a9c0  3bce                 cmp ecx, esi
// 0088a9c2  7517                 jne 0x88a9db
// 0088a9c4  397008               cmp dword ptr [eax + 8], esi
// 0088a9c7  7507                 jne 0x88a9d0
// 0088a9c9  bf04000000           mov edi, 4
// 0088a9ce  eb21                 jmp 0x88a9f1
// 0088a9d0  3bce                 cmp ecx, esi
// 0088a9d2  7507                 jne 0x88a9db
// 0088a9d4  bf03000000           mov edi, 3
// 0088a9d9  eb16                 jmp 0x88a9f1
// 0088a9db  39700c               cmp dword ptr [eax + 0xc], esi
// 0088a9de  7507                 jne 0x88a9e7
// 0088a9e0  bf02000000           mov edi, 2
// 0088a9e5  eb0a                 jmp 0x88a9f1
// 0088a9e7  397008               cmp dword ptr [eax + 8], esi
// 0088a9ea  7505                 jne 0x88a9f1
// 0088a9ec  bf01000000           mov edi, 1
// 0088a9f1  85db                 test ebx, ebx
// 0088a9f3  7455                 je 0x88aa4a
// 0088a9f5  6a06                 push 6
// 0088a9f7  57                   push edi
// 0088a9f8  8d442428             lea eax, [esp + 0x28]
// 0088a9fc  50                   push eax
// 0088a9fd  8bcb                 mov ecx, ebx
// 0088a9ff  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0088aa03  896c2420             mov dword ptr [esp + 0x20], ebp
// 0088aa07  896c2424             mov dword ptr [esp + 0x24], ebp
// 0088aa0b  896c2428             mov dword ptr [esp + 0x28], ebp
// 0088aa0f  e81ca10000           call 0x894b30
// 0088aa14  8b10                 mov edx, dword ptr [eax]
// 0088aa16  68ff00ff00           push 0xff00ff
// 0088aa1b  8d4c2414             lea ecx, [esp + 0x14]
// 0088aa1f  51                   push ecx
// 0088aa20  83ec10               sub esp, 0x10
// 0088aa23  8bcc                 mov ecx, esp
// 0088aa25  8911                 mov dword ptr [ecx], edx
// 0088aa27  8b5004               mov edx, dword ptr [eax + 4]
// 0088aa2a  895104               mov dword ptr [ecx + 4], edx
// 0088aa2d  8b5008               mov edx, dword ptr [eax + 8]
// 0088aa30  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088aa33  895108               mov dword ptr [ecx + 8], edx
// 0088aa36  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088aa3a  89410c               mov dword ptr [ecx + 0xc], eax
// 0088aa3d  8d4c2454             lea ecx, [esp + 0x54]
// 0088aa41  51                   push ecx
// 0088aa42  52                   push edx
// 0088aa43  8bcb                 mov ecx, ebx
// 0088aa45  e826a60000           call 0x895070
// 0088aa4a  5f                   pop edi
// 0088aa4b  5e                   pop esi
// 0088aa4c  5d                   pop ebp
// 0088aa4d  5b                   pop ebx
// 0088aa4e  83c420               add esp, 0x20
// 0088aa51  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawButtonBackground@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@AAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
