// roc 2007-08 004ab940  unit: RBX::Network::Peer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ab940
//
// 004ab940  55                   push ebp
// 004ab941  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004ab945  56                   push esi
// 004ab946  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ab94a  3bf5                 cmp esi, ebp
// 004ab94c  742b                 je 0x4ab979
// 004ab94e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ab952  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ab956  53                   push ebx
// 004ab957  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004ab95b  57                   push edi
// 004ab95c  8d3c01               lea edi, [ecx + eax]
// 004ab95f  90                   nop 
// 004ab960  8b06                 mov eax, dword ptr [esi]
// 004ab962  50                   push eax
// 004ab963  8bcf                 mov ecx, edi
// 004ab965  ffd3                 call ebx
// 004ab967  84c0                 test al, al
// 004ab969  7507                 jne 0x4ab972
// 004ab96b  83c604               add esi, 4
// 004ab96e  3bf5                 cmp esi, ebp
// 004ab970  75ee                 jne 0x4ab960
// 004ab972  5f                   pop edi
// 004ab973  5b                   pop ebx
// 004ab974  8bc6                 mov eax, esi
// 004ab976  5e                   pop esi
// 004ab977  5d                   pop ebp
// 004ab978  c3                   ret 
// 004ab979  8bc6                 mov eax, esi
// 004ab97b  5e                   pop esi
// 004ab97c  5d                   pop ebp
// 004ab97d  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??$_Find_if@PBQAVInstance@RBX@@V?$bind_t@_NV?$cmf1@_NVInstance@RBX@@PBV12@@_mfi@boost@@V?$list2@V?$value@PBVInstance@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAPBQAVInstance@RBX@@PBQAV12@0V?$bind_t@_NV?$cmf1@_NVInstance@RBX@@PBV12@@_mfi@boost@@V?$list2@V?$value@PBVInstance@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
