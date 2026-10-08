// roc 2007-03 004a0850  unit: seg_004a0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0850
//
// 004a0850  55                   push ebp
// 004a0851  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004a0855  56                   push esi
// 004a0856  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a085a  3bf5                 cmp esi, ebp
// 004a085c  742b                 je 0x4a0889
// 004a085e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a0862  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a0866  53                   push ebx
// 004a0867  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004a086b  57                   push edi
// 004a086c  8d3c01               lea edi, [ecx + eax]
// 004a086f  90                   nop 
// 004a0870  8b06                 mov eax, dword ptr [esi]
// 004a0872  50                   push eax
// 004a0873  8bcf                 mov ecx, edi
// 004a0875  ffd3                 call ebx
// 004a0877  84c0                 test al, al
// 004a0879  7507                 jne 0x4a0882
// 004a087b  83c604               add esi, 4
// 004a087e  3bf5                 cmp esi, ebp
// 004a0880  75ee                 jne 0x4a0870
// 004a0882  5f                   pop edi
// 004a0883  5b                   pop ebx
// 004a0884  8bc6                 mov eax, esi
// 004a0886  5e                   pop esi
// 004a0887  5d                   pop ebp
// 004a0888  c3                   ret 
// 004a0889  8bc6                 mov eax, esi
// 004a088b  5e                   pop esi
// 004a088c  5d                   pop ebp
// 004a088d  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??$_Find_if@PBQAVInstance@RBX@@V?$bind_t@_NV?$cmf1@_NVInstance@RBX@@PBV12@@_mfi@boost@@V?$list2@V?$value@PBVInstance@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAPBQAVInstance@RBX@@PBQAV12@0V?$bind_t@_NV?$cmf1@_NVInstance@RBX@@PBV12@@_mfi@boost@@V?$list2@V?$value@PBVInstance@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
