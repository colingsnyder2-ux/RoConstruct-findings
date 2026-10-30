// roc 2011-06 006e10d0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e10d0
//
// 006e10d0  6aff                 push -1
// 006e10d2  682a3d9f00           push 0x9f3d2a
// 006e10d7  64a100000000         mov eax, dword ptr fs:[0]
// 006e10dd  50                   push eax
// 006e10de  64892500000000       mov dword ptr fs:[0], esp
// 006e10e5  51                   push ecx
// 006e10e6  53                   push ebx
// 006e10e7  56                   push esi
// 006e10e8  c744240800000000     mov dword ptr [esp + 8], 0
// 006e10f0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006e10f4  bb01000000           mov ebx, 1
// 006e10f9  8d442420             lea eax, [esp + 0x20]
// 006e10fd  50                   push eax
// 006e10fe  8bce                 mov ecx, esi
// 006e1100  895c2418             mov dword ptr [esp + 0x18], ebx
// 006e1104  885c2438             mov byte ptr [esp + 0x38], bl
// 006e1108  885c2439             mov byte ptr [esp + 0x39], bl
// 006e110c  e82fffffff           call 0x6e1040
// 006e1111  895c2408             mov dword ptr [esp + 8], ebx
// 006e1115  8d4c2454             lea ecx, [esp + 0x54]
// 006e1119  c744241402000000     mov dword ptr [esp + 0x14], 2
// 006e1121  ff15d004a400         call dword ptr [0xa404d0]
// 006e1127  8d4c2438             lea ecx, [esp + 0x38]
// 006e112b  c644241400           mov byte ptr [esp + 0x14], 0
// 006e1130  ff15d004a400         call dword ptr [0xa404d0]
// 006e1136  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e113a  8bc6                 mov eax, esi
// 006e113c  5e                   pop esi
// 006e113d  5b                   pop ebx
// 006e113e  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1145  83c410               add esp, 0x10
// 006e1148  c3                   ret 
// copied from an identical function in another client (function ?normalize_params@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@U423@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp