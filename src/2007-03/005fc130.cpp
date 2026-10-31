// roc 2007-03 005fc130  unit: seg_005f0000  size: 474 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005fc130
//
// 005fc130  83ec24               sub esp, 0x24
// 005fc133  53                   push ebx
// 005fc134  55                   push ebp
// 005fc135  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005fc139  56                   push esi
// 005fc13a  8bf0                 mov esi, eax
// 005fc13c  0fb64607             movzx eax, byte ptr [esi + 7]
// 005fc140  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005fc143  3beb                 cmp ebp, ebx
// 005fc145  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fc148  57                   push edi
// 005fc149  89442420             mov dword ptr [esp + 0x20], eax
// 005fc14d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005fc151  7e0b                 jle 0x5fc15e
// 005fc153  8b442438             mov eax, dword ptr [esp + 0x38]
// 005fc157  8bfd                 mov edi, ebp
// 005fc159  e8b2faffff           call 0x5fbc10
// 005fc15e  8b542438             mov edx, dword ptr [esp + 0x38]
// 005fc162  8b442440             mov eax, dword ptr [esp + 0x40]
// 005fc166  52                   push edx
// 005fc167  8bfe                 mov edi, esi
// 005fc169  e802fbffff           call 0x5fbc70
// 005fc16e  83c404               add esp, 4
// 005fc171  3beb                 cmp ebp, ebx
// 005fc173  0f8dcf000000         jge 0x5fc248
// 005fc179  8d4501               lea eax, [ebp + 1]
// 005fc17c  8944241c             mov dword ptr [esp + 0x1c], eax
// 005fc180  8944243c             mov dword ptr [esp + 0x3c], eax
// 005fc184  8bc5                 mov eax, ebp
// 005fc186  c1e004               shl eax, 4
// 005fc189  8bfb                 mov edi, ebx
// 005fc18b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 005fc18e  89442418             mov dword ptr [esp + 0x18], eax
// 005fc192  89442410             mov dword ptr [esp + 0x10], eax
// 005fc196  2bfd                 sub edi, ebp
// 005fc198  eb06                 jmp 0x5fc1a0
// 005fc19a  8d9b00000000         lea ebx, [ebx]
// 005fc1a0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005fc1a3  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fc1a7  837c0a0800           cmp dword ptr [edx + ecx + 8], 0
// 005fc1ac  8d2c0a               lea ebp, [edx + ecx]
// 005fc1af  744d                 je 0x5fc1fe
// 005fc1b1  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005fc1b5  50                   push eax
// 005fc1b6  56                   push esi
// 005fc1b7  e834fcffff           call 0x5fbdf0
// 005fc1bc  83c408               add esp, 8
// 005fc1bf  3da0007c00           cmp eax, 0x7c00a0
// 005fc1c4  7523                 jne 0x5fc1e9
// 005fc1c6  db44243c             fild dword ptr [esp + 0x3c]
// 005fc1ca  8b542438             mov edx, dword ptr [esp + 0x38]
// 005fc1ce  8d4c2424             lea ecx, [esp + 0x24]
// 005fc1d2  51                   push ecx
// 005fc1d3  56                   push esi
// 005fc1d4  dd5c242c             fstp qword ptr [esp + 0x2c]
// 005fc1d8  52                   push edx
// 005fc1d9  c744243803000000     mov dword ptr [esp + 0x38], 3
// 005fc1e1  e89a020000           call 0x5fc480
// 005fc1e6  83c40c               add esp, 0xc
// 005fc1e9  8b4d00               mov ecx, dword ptr [ebp]
// 005fc1ec  8908                 mov dword ptr [eax], ecx
// 005fc1ee  8b5504               mov edx, dword ptr [ebp + 4]
// 005fc1f1  895004               mov dword ptr [eax + 4], edx
// 005fc1f4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005fc1f7  894808               mov dword ptr [eax + 8], ecx
// 005fc1fa  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fc1fe  8344241010           add dword ptr [esp + 0x10], 0x10
// 005fc203  8344243c01           add dword ptr [esp + 0x3c], 1
// 005fc208  83ef01               sub edi, 1
// 005fc20b  7593                 jne 0x5fc1a0
// 005fc20d  817c241cffffff0f     cmp dword ptr [esp + 0x1c], 0xfffffff
// 005fc215  771b                 ja 0x5fc232
// 005fc217  8b560c               mov edx, dword ptr [esi + 0xc]
// 005fc21a  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005fc21e  50                   push eax
// 005fc21f  c1e304               shl ebx, 4
// 005fc222  53                   push ebx
// 005fc223  52                   push edx
// 005fc224  55                   push ebp
// 005fc225  e876110000           call 0x5fd3a0
// 005fc22a  83c410               add esp, 0x10
// 005fc22d  89460c               mov dword ptr [esi + 0xc], eax
// 005fc230  eb1a                 jmp 0x5fc24c
// 005fc232  8b442438             mov eax, dword ptr [esp + 0x38]
// 005fc236  50                   push eax
// 005fc237  e844110000           call 0x5fd380
// 005fc23c  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 005fc240  83c404               add esp, 4
// 005fc243  89460c               mov dword ptr [esi + 0xc], eax
// 005fc246  eb04                 jmp 0x5fc24c
// 005fc248  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005fc24c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005fc250  b801000000           mov eax, 1
// 005fc255  d3e0                 shl eax, cl
// 005fc257  8d58ff               lea ebx, [eax - 1]
// 005fc25a  85db                 test ebx, ebx
// 005fc25c  8944243c             mov dword ptr [esp + 0x3c], eax
// 005fc260  0f8c80000000         jl 0x5fc2e6
// 005fc266  8b542414             mov edx, dword ptr [esp + 0x14]
// 005fc26a  8bcb                 mov ecx, ebx
// 005fc26c  c1e105               shl ecx, 5
// 005fc26f  8d7c1110             lea edi, [ecx + edx + 0x10]
// 005fc273  837ff800             cmp dword ptr [edi - 8], 0
// 005fc277  7463                 je 0x5fc2dc
// 005fc279  57                   push edi
// 005fc27a  56                   push esi
// 005fc27b  e840fcffff           call 0x5fbec0
// 005fc280  83c408               add esp, 8
// 005fc283  3da0007c00           cmp eax, 0x7c00a0
// 005fc288  c6460600             mov byte ptr [esi + 6], 0
// 005fc28c  7539                 jne 0x5fc2c7
// 005fc28e  8b4708               mov eax, dword ptr [edi + 8]
// 005fc291  85c0                 test eax, eax
// 005fc293  7507                 jne 0x5fc29c
// 005fc295  68cc037c00           push 0x7c03cc
// 005fc29a  eb17                 jmp 0x5fc2b3
// 005fc29c  83f803               cmp eax, 3
// 005fc29f  751b                 jne 0x5fc2bc
// 005fc2a1  dd07                 fld qword ptr [edi]
// 005fc2a3  d9c0                 fld st(0)
// 005fc2a5  dae9                 fucompp 
// 005fc2a7  dfe0                 fnstsw ax
// 005fc2a9  f6c444               test ah, 0x44
// 005fc2ac  7b0e                 jnp 0x5fc2bc
// 005fc2ae  68b8037c00           push 0x7c03b8
// 005fc2b3  55                   push ebp
// 005fc2b4  e8f76dfcff           call 0x5c30b0
// 005fc2b9  83c408               add esp, 8
// 005fc2bc  57                   push edi
// 005fc2bd  56                   push esi
// 005fc2be  55                   push ebp
// 005fc2bf  e8bc010000           call 0x5fc480
// 005fc2c4  83c40c               add esp, 0xc
// 005fc2c7  8b4ff0               mov ecx, dword ptr [edi - 0x10]
// 005fc2ca  8908                 mov dword ptr [eax], ecx
// 005fc2cc  8b57f4               mov edx, dword ptr [edi - 0xc]
// 005fc2cf  895004               mov dword ptr [eax + 4], edx
// 005fc2d2  8b4ff8               mov ecx, dword ptr [edi - 8]
// 005fc2d5  894808               mov dword ptr [eax + 8], ecx
// 005fc2d8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005fc2dc  83eb01               sub ebx, 1
// 005fc2df  83ef20               sub edi, 0x20
// 005fc2e2  85db                 test ebx, ebx
// 005fc2e4  7d8d                 jge 0x5fc273
// 005fc2e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fc2ea  81f970037c00         cmp ecx, 0x7c0370
// 005fc2f0  7410                 je 0x5fc302
// 005fc2f2  6a00                 push 0
// 005fc2f4  c1e005               shl eax, 5
// 005fc2f7  50                   push eax
// 005fc2f8  51                   push ecx
// 005fc2f9  55                   push ebp
// 005fc2fa  e8a1100000           call 0x5fd3a0
// 005fc2ff  83c410               add esp, 0x10
// 005fc302  5f                   pop edi
// 005fc303  5e                   pop esi
// 005fc304  5d                   pop ebp
// 005fc305  5b                   pop ebx
// 005fc306  83c424               add esp, 0x24
// 005fc309  c3                   ret 
// library lua-5.1/roc_ltable_cpp_e4929b9c47845379.cpp (function ?resize@@YAXPAUlua_State@@PAUTable@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1 roc_ltable_cpp_e4929b9c47845379.cpp
