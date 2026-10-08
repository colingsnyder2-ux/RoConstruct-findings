// roc 2008-06 00594100  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594100
//
// 00594100  6aff                 push -1
// 00594102  64a100000000         mov eax, dword ptr fs:[0]
// 00594108  68d8dd7c00           push 0x7cddd8
// 0059410d  50                   push eax
// 0059410e  64892500000000       mov dword ptr fs:[0], esp
// 00594115  83ec08               sub esp, 8
// 00594118  53                   push ebx
// 00594119  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059411d  55                   push ebp
// 0059411e  56                   push esi
// 0059411f  8bf1                 mov esi, ecx
// 00594121  8b4618               mov eax, dword ptr [esi + 0x18]
// 00594124  33ed                 xor ebp, ebp
// 00594126  57                   push edi
// 00594127  3b4318               cmp eax, dword ptr [ebx + 0x18]
// 0059412a  7452                 je 0x59417e
// 0059412c  8b7e04               mov edi, dword ptr [esi + 4]
// 0059412f  8bcf                 mov ecx, edi
// 00594131  897c2410             mov dword ptr [esp + 0x10], edi
// 00594135  e8a60b0000           call 0x594ce0
// 0059413a  c644241401           mov byte ptr [esp + 0x14], 1
// 0059413f  8b16                 mov edx, dword ptr [esi]
// 00594141  8b02                 mov eax, dword ptr [edx]
// 00594143  8bce                 mov ecx, esi
// 00594145  896c2420             mov dword ptr [esp + 0x20], ebp
// 00594149  ffd0                 call eax
// 0059414b  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0059414e  894618               mov dword ptr [esi + 0x18], eax
// 00594151  3bc5                 cmp eax, ebp
// 00594153  741a                 je 0x59416f
// 00594155  50                   push eax
// 00594156  e8d5e20700           call 0x612430
// 0059415b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059415e  68f0d8ffff           push 0xffffd8f0
// 00594163  51                   push ecx
// 00594164  e857cf0700           call 0x6110c0
// 00594169  83c40c               add esp, 0xc
// 0059416c  89461c               mov dword ptr [esi + 0x1c], eax
// 0059416f  8bcf                 mov ecx, edi
// 00594171  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00594179  e8820b0000           call 0x594d00
// 0059417e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00594181  3b530c               cmp edx, dword ptr [ebx + 0xc]
// 00594184  7468                 je 0x5941ee
// 00594186  8b7e04               mov edi, dword ptr [esi + 4]
// 00594189  8bcf                 mov ecx, edi
// 0059418b  e8500b0000           call 0x594ce0
// 00594190  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00594193  742f                 je 0x5941c4
// 00594195  8b4614               mov eax, dword ptr [esi + 0x14]
// 00594198  3bc5                 cmp eax, ebp
// 0059419a  7406                 je 0x5941a2
// 0059419c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059419f  894810               mov dword ptr [eax + 0x10], ecx
// 005941a2  8b4610               mov eax, dword ptr [esi + 0x10]
// 005941a5  3bc5                 cmp eax, ebp
// 005941a7  7406                 je 0x5941af
// 005941a9  8b5614               mov edx, dword ptr [esi + 0x14]
// 005941ac  895014               mov dword ptr [eax + 0x14], edx
// 005941af  8b460c               mov eax, dword ptr [esi + 0xc]
// 005941b2  3930                 cmp dword ptr [eax], esi
// 005941b4  7505                 jne 0x5941bb
// 005941b6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005941b9  8908                 mov dword ptr [eax], ecx
// 005941bb  896e14               mov dword ptr [esi + 0x14], ebp
// 005941be  896e10               mov dword ptr [esi + 0x10], ebp
// 005941c1  896e0c               mov dword ptr [esi + 0xc], ebp
// 005941c4  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005941c7  89460c               mov dword ptr [esi + 0xc], eax
// 005941ca  3bc5                 cmp eax, ebp
// 005941cc  7419                 je 0x5941e7
// 005941ce  8b00                 mov eax, dword ptr [eax]
// 005941d0  3bc5                 cmp eax, ebp
// 005941d2  7408                 je 0x5941dc
// 005941d4  894614               mov dword ptr [esi + 0x14], eax
// 005941d7  897010               mov dword ptr [eax + 0x10], esi
// 005941da  eb03                 jmp 0x5941df
// 005941dc  896e14               mov dword ptr [esi + 0x14], ebp
// 005941df  8b560c               mov edx, dword ptr [esi + 0xc]
// 005941e2  896e10               mov dword ptr [esi + 0x10], ebp
// 005941e5  8932                 mov dword ptr [edx], esi
// 005941e7  8bcf                 mov ecx, edi
// 005941e9  e8120b0000           call 0x594d00
// 005941ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005941f2  5f                   pop edi
// 005941f3  8bc6                 mov eax, esi
// 005941f5  5e                   pop esi
// 005941f6  5d                   pop ebp
// 005941f7  5b                   pop ebx
// 005941f8  64890d00000000       mov dword ptr fs:[0], ecx
// 005941ff  83c414               add esp, 0x14
// 00594202  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??4ThreadRef@Lua@RBX@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
