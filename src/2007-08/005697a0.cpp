// roc 2007-08 005697a0  unit: RBX::ModelInstance  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005697a0
//
// 005697a0  51                   push ecx
// 005697a1  53                   push ebx
// 005697a2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005697a6  55                   push ebp
// 005697a7  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005697ab  56                   push esi
// 005697ac  8b742418             mov esi, dword ptr [esp + 0x18]
// 005697b0  57                   push edi
// 005697b1  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005697b5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005697bd  8d4900               lea ecx, [ecx]
// 005697c0  3bf5                 cmp esi, ebp
// 005697c2  7427                 je 0x5697eb
// 005697c4  8b4e08               mov ecx, dword ptr [esi + 8]
// 005697c7  8b560c               mov edx, dword ptr [esi + 0xc]
// 005697ca  83ec0c               sub esp, 0xc
// 005697cd  8bc4                 mov eax, esp
// 005697cf  8908                 mov dword ptr [eax], ecx
// 005697d1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005697d4  895004               mov dword ptr [eax + 4], edx
// 005697d7  894808               mov dword ptr [eax + 8], ecx
// 005697da  8bcf                 mov ecx, edi
// 005697dc  ffd3                 call ebx
// 005697de  84c0                 test al, al
// 005697e0  7405                 je 0x5697e7
// 005697e2  8344241001           add dword ptr [esp + 0x10], 1
// 005697e7  8b36                 mov esi, dword ptr [esi]
// 005697e9  ebd5                 jmp 0x5697c0
// 005697eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 005697ef  5f                   pop edi
// 005697f0  5e                   pop esi
// 005697f1  5d                   pop ebp
// 005697f2  5b                   pop ebx
// 005697f3  59                   pop ecx
// 005697f4  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Count_if@V?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@std@@V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YAHV?$_Iterator@$0A@@?$list@UIDREFBinding@ArchiveBinder@@V?$allocator@UIDREFBinding@ArchiveBinder@@@std@@@0@0V?$bind_t@_NV?$mf1@_NVArchiveBinder@@UIDREFBinding@1@@_mfi@boost@@V?$list2@V?$value@PAVArchiveBinder@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
