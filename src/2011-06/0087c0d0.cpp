// roc 2011-06 0087c0d0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c0d0
//
// 0087c0d0  8b442404             mov eax, dword ptr [esp + 4]
// 0087c0d4  83ec20               sub esp, 0x20
// 0087c0d7  56                   push esi
// 0087c0d8  50                   push eax
// 0087c0d9  8bf1                 mov esi, ecx
// 0087c0db  e810350700           call 0x8ef5f0
// 0087c0e0  83f8ff               cmp eax, -1
// 0087c0e3  7509                 jne 0x87c0ee
// 0087c0e5  0bc0                 or eax, eax
// 0087c0e7  5e                   pop esi
// 0087c0e8  83c420               add esp, 0x20
// 0087c0eb  c20400               ret 4
// 0087c0ee  8bce                 mov ecx, esi
// 0087c0f0  e81b610700           call 0x8f2210
// 0087c0f5  33c9                 xor ecx, ecx
// 0087c0f7  394808               cmp dword ptr [eax + 8], ecx
// 0087c0fa  6a20                 push 0x20
// 0087c0fc  0f95c1               setne cl
// 0087c0ff  8bc1                 mov eax, ecx
// 0087c101  8bce                 mov ecx, esi
// 0087c103  85c0                 test eax, eax
// 0087c105  0f84a1000000         je 0x87c1ac
// 0087c10b  6a00                 push 0
// 0087c10d  680000c400           push 0xc40000
// 0087c112  e8c1e6f8ff           call 0x80a7d8
// 0087c117  6a20                 push 0x20
// 0087c119  6a00                 push 0
// 0087c11b  6801010200           push 0x20101
// 0087c120  8bce                 mov ecx, esi
// 0087c122  e8dde4f8ff           call 0x80a604
// 0087c127  e8c49bffff           call 0x875cf0
// 0087c12c  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 0087c133  7420                 je 0x87c155
// 0087c135  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 0087c13c  7417                 je 0x87c155
// 0087c13e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087c141  8d966c010000         lea edx, [esi + 0x16c]
// 0087c147  52                   push edx
// 0087c148  50                   push eax
// 0087c149  e8f2450700           call 0x8f0740
// 0087c14e  8bc8                 mov ecx, eax
// 0087c150  e82b510700           call 0x8f1280
// 0087c155  53                   push ebx
// 0087c156  55                   push ebp
// 0087c157  57                   push edi
// 0087c158  56                   push esi
// 0087c159  8d4c2414             lea ecx, [esp + 0x14]
// 0087c15d  e8ce0bfeff           call 0x85cd30
// 0087c162  8d4c2410             lea ecx, [esp + 0x10]
// 0087c166  51                   push ecx
// 0087c167  8d542424             lea edx, [esp + 0x24]
// 0087c16b  52                   push edx
// 0087c16c  e89f5ffdff           call 0x852110
// 0087c171  8bc8                 mov ecx, eax
// 0087c173  e8f85afdff           call 0x851c70
// 0087c178  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087c17c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0087c180  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087c184  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0087c188  8bc2                 mov eax, edx
// 0087c18a  8bfd                 mov edi, ebp
// 0087c18c  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0087c190  2bc1                 sub eax, ecx
// 0087c192  3bcb                 cmp ecx, ebx
// 0087c194  c644243400           mov byte ptr [esp + 0x34], 0
// 0087c199  7d1f                 jge 0x87c1ba
// 0087c19b  8bcb                 mov ecx, ebx
// 0087c19d  8d1418               lea edx, [eax + ebx]
// 0087c1a0  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087c1a4  89542418             mov dword ptr [esp + 0x18], edx
// 0087c1a8  b301                 mov bl, 1
// 0087c1aa  eb2c                 jmp 0x87c1d8
// 0087c1ac  6800004000           push 0x400000
// 0087c1b1  6a00                 push 0
// 0087c1b3  e820e6f8ff           call 0x80a7d8
// 0087c1b8  eb9b                 jmp 0x87c155
// 0087c1ba  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0087c1be  3bd3                 cmp edx, ebx
// 0087c1c0  7e12                 jle 0x87c1d4
// 0087c1c2  8bd3                 mov edx, ebx
// 0087c1c4  2bd8                 sub ebx, eax
// 0087c1c6  8bcb                 mov ecx, ebx
// 0087c1c8  89542418             mov dword ptr [esp + 0x18], edx
// 0087c1cc  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087c1d0  b301                 mov bl, 1
// 0087c1d2  eb04                 jmp 0x87c1d8
// 0087c1d4  8a5c2434             mov bl, byte ptr [esp + 0x34]
// 0087c1d8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087c1dc  3be8                 cmp ebp, eax
// 0087c1de  7e0e                 jle 0x87c1ee
// 0087c1e0  8be8                 mov ebp, eax
// 0087c1e2  2bc7                 sub eax, edi
// 0087c1e4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0087c1e8  89442414             mov dword ptr [esp + 0x14], eax
// 0087c1ec  eb08                 jmp 0x87c1f6
// 0087c1ee  84db                 test bl, bl
// 0087c1f0  7415                 je 0x87c207
// 0087c1f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087c1f6  6a01                 push 1
// 0087c1f8  2be8                 sub ebp, eax
// 0087c1fa  55                   push ebp
// 0087c1fb  2bd1                 sub edx, ecx
// 0087c1fd  52                   push edx
// 0087c1fe  50                   push eax
// 0087c1ff  51                   push ecx
// 0087c200  8bce                 mov ecx, esi
// 0087c202  e829e2f8ff           call 0x80a430
// 0087c207  56                   push esi
// 0087c208  e87330feff           call 0x85f280
// 0087c20d  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0087c213  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0087c219  8b5678               mov edx, dword ptr [esi + 0x78]
// 0087c21c  83c404               add esp, 4
// 0087c21f  50                   push eax
// 0087c220  8b4220               mov eax, dword ptr [edx + 0x20]
// 0087c223  51                   push ecx
// 0087c224  682a270000           push 0x272a
// 0087c229  50                   push eax
// 0087c22a  ff15c019a400         call dword ptr [0xa419c0]
// 0087c230  5f                   pop edi
// 0087c231  5d                   pop ebp
// 0087c232  5b                   pop ebx
// 0087c233  33c0                 xor eax, eax
// 0087c235  5e                   pop esi
// 0087c236  83c420               add esp, 0x20
// 0087c239  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnCreate@CXTColorPopup@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
