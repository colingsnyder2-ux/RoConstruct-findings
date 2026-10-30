// roc 2010-06 006a00c0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a00c0
//
// 006a00c0  6aff                 push -1
// 006a00c2  68aa269a00           push 0x9a26aa
// 006a00c7  64a100000000         mov eax, dword ptr fs:[0]
// 006a00cd  50                   push eax
// 006a00ce  64892500000000       mov dword ptr fs:[0], esp
// 006a00d5  51                   push ecx
// 006a00d6  53                   push ebx
// 006a00d7  56                   push esi
// 006a00d8  c744240800000000     mov dword ptr [esp + 8], 0
// 006a00e0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006a00e4  bb01000000           mov ebx, 1
// 006a00e9  8d442420             lea eax, [esp + 0x20]
// 006a00ed  50                   push eax
// 006a00ee  8bce                 mov ecx, esi
// 006a00f0  895c2418             mov dword ptr [esp + 0x18], ebx
// 006a00f4  885c2438             mov byte ptr [esp + 0x38], bl
// 006a00f8  885c2439             mov byte ptr [esp + 0x39], bl
// 006a00fc  e82fffffff           call 0x6a0030
// 006a0101  895c2408             mov dword ptr [esp + 8], ebx
// 006a0105  8d4c2454             lea ecx, [esp + 0x54]
// 006a0109  c744241402000000     mov dword ptr [esp + 0x14], 2
// 006a0111  ff1500a49e00         call dword ptr [0x9ea400]
// 006a0117  8d4c2438             lea ecx, [esp + 0x38]
// 006a011b  c644241400           mov byte ptr [esp + 0x14], 0
// 006a0120  ff1500a49e00         call dword ptr [0x9ea400]
// 006a0126  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a012a  8bc6                 mov eax, esi
// 006a012c  5e                   pop esi
// 006a012d  5b                   pop ebx
// 006a012e  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0135  83c410               add esp, 0x10
// 006a0138  c3                   ret 
// copied from an identical function in another client (function ?normalize_params@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@U423@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp