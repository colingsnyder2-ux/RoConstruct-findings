// roc 2007-03 004aa320  unit: seg_004a0000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa320
//
// 004aa320  6aff                 push -1
// 004aa322  68f3c67400           push 0x74c6f3
// 004aa327  64a100000000         mov eax, dword ptr fs:[0]
// 004aa32d  50                   push eax
// 004aa32e  64892500000000       mov dword ptr fs:[0], esp
// 004aa335  83ec0c               sub esp, 0xc
// 004aa338  53                   push ebx
// 004aa339  33db                 xor ebx, ebx
// 004aa33b  56                   push esi
// 004aa33c  8bf1                 mov esi, ecx
// 004aa33e  89742410             mov dword ptr [esp + 0x10], esi
// 004aa342  895e08               mov dword ptr [esi + 8], ebx
// 004aa345  891e                 mov dword ptr [esi], ebx
// 004aa347  895e04               mov dword ptr [esi + 4], ebx
// 004aa34a  885e14               mov byte ptr [esi + 0x14], bl
// 004aa34d  6804080000           push 0x804
// 004aa352  895c2420             mov dword ptr [esp + 0x20], ebx
// 004aa356  e8ad3d1700           call 0x61e108
// 004aa35b  83c404               add esp, 4
// 004aa35e  8944240c             mov dword ptr [esp + 0xc], eax
// 004aa362  3bc3                 cmp eax, ebx
// 004aa364  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004aa369  7409                 je 0x4aa374
// 004aa36b  8bc8                 mov ecx, eax
// 004aa36d  e8eee40000           call 0x4b8860
// 004aa372  eb02                 jmp 0x4aa376
// 004aa374  33c0                 xor eax, eax
// 004aa376  68b80d8900           push 0x890db8
// 004aa37b  8bc8                 mov ecx, eax
// 004aa37d  885c2420             mov byte ptr [esp + 0x20], bl
// 004aa381  8944240c             mov dword ptr [esp + 0xc], eax
// 004aa385  e806eb0000           call 0x4b8e90
// 004aa38a  8d442408             lea eax, [esp + 8]
// 004aa38e  50                   push eax
// 004aa38f  8d4c2410             lea ecx, [esp + 0x10]
// 004aa393  51                   push ecx
// 004aa394  8bce                 mov ecx, esi
// 004aa396  895c2414             mov dword ptr [esp + 0x14], ebx
// 004aa39a  e8e1feffff           call 0x4aa280
// 004aa39f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004aa3a3  8bc6                 mov eax, esi
// 004aa3a5  5e                   pop esi
// 004aa3a6  5b                   pop ebx
// 004aa3a7  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa3ae  83c418               add esp, 0x18
// 004aa3b1  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ??0StringCompressor@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
