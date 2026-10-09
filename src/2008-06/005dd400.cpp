// roc 2008-06 005dd400  unit: RBX::Message  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd400
//
// 005dd400  56                   push esi
// 005dd401  8b742408             mov esi, dword ptr [esp + 8]
// 005dd405  8b06                 mov eax, dword ptr [esi]
// 005dd407  8b10                 mov edx, dword ptr [eax]
// 005dd409  57                   push edi
// 005dd40a  8bf9                 mov edi, ecx
// 005dd40c  8bce                 mov ecx, esi
// 005dd40e  ffd2                 call edx
// 005dd410  84c0                 test al, al
// 005dd412  741e                 je 0x5dd432
// 005dd414  837e0400             cmp dword ptr [esi + 4], 0
// 005dd418  7d43                 jge 0x5dd45d
// 005dd41a  8b4704               mov eax, dword ptr [edi + 4]
// 005dd41d  8d4c240c             lea ecx, [esp + 0xc]
// 005dd421  51                   push ecx
// 005dd422  8bcf                 mov ecx, edi
// 005dd424  89742410             mov dword ptr [esp + 0x10], esi
// 005dd428  894604               mov dword ptr [esi + 4], eax
// 005dd42b  e860ffffff           call 0x5dd390
// 005dd430  eb2b                 jmp 0x5dd45d
// 005dd432  8b5604               mov edx, dword ptr [esi + 4]
// 005dd435  85d2                 test edx, edx
// 005dd437  7c24                 jl 0x5dd45d
// 005dd439  8b07                 mov eax, dword ptr [edi]
// 005dd43b  8b4f04               mov ecx, dword ptr [edi + 4]
// 005dd43e  8b4c88fc             mov ecx, dword ptr [eax + ecx*4 - 4]
// 005dd442  890c90               mov dword ptr [eax + edx*4], ecx
// 005dd445  895104               mov dword ptr [ecx + 4], edx
// 005dd448  8b5704               mov edx, dword ptr [edi + 4]
// 005dd44b  6a00                 push 0
// 005dd44d  4a                   dec edx
// 005dd44e  52                   push edx
// 005dd44f  8bcf                 mov ecx, edi
// 005dd451  e8eae9ecff           call 0x4abe40
// 005dd456  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005dd45d  8b06                 mov eax, dword ptr [esi]
// 005dd45f  8b5004               mov edx, dword ptr [eax + 4]
// 005dd462  8bce                 mov ecx, esi
// 005dd464  ffd2                 call edx
// 005dd466  84c0                 test al, al
// 005dd468  7422                 je 0x5dd48c
// 005dd46a  837e0800             cmp dword ptr [esi + 8], 0
// 005dd46e  7d4b                 jge 0x5dd4bb
// 005dd470  8b4710               mov eax, dword ptr [edi + 0x10]
// 005dd473  8d4f0c               lea ecx, [edi + 0xc]
// 005dd476  8d54240c             lea edx, [esp + 0xc]
// 005dd47a  52                   push edx
// 005dd47b  89742410             mov dword ptr [esp + 0x10], esi
// 005dd47f  894608               mov dword ptr [esi + 8], eax
// 005dd482  e809ffffff           call 0x5dd390
// 005dd487  5f                   pop edi
// 005dd488  5e                   pop esi
// 005dd489  c20400               ret 4
// 005dd48c  53                   push ebx
// 005dd48d  8b5e08               mov ebx, dword ptr [esi + 8]
// 005dd490  85db                 test ebx, ebx
// 005dd492  7c26                 jl 0x5dd4ba
// 005dd494  8b470c               mov eax, dword ptr [edi + 0xc]
// 005dd497  8b5710               mov edx, dword ptr [edi + 0x10]
// 005dd49a  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 005dd49e  8d4f0c               lea ecx, [edi + 0xc]
// 005dd4a1  891498               mov dword ptr [eax + ebx*4], edx
// 005dd4a4  895a08               mov dword ptr [edx + 8], ebx
// 005dd4a7  8b4104               mov eax, dword ptr [ecx + 4]
// 005dd4aa  6a00                 push 0
// 005dd4ac  48                   dec eax
// 005dd4ad  50                   push eax
// 005dd4ae  e88de9ecff           call 0x4abe40
// 005dd4b3  c74608ffffffff       mov dword ptr [esi + 8], 0xffffffff
// 005dd4ba  5b                   pop ebx
// 005dd4bb  5f                   pop edi
// 005dd4bc  5e                   pop esi
// 005dd4bd  c20400               ret 4
// library openrbx-client/App\util\IRenderable.cpp (function ?recomputeShouldRender@IRenderableBucket@RBX@@IAEXPAVIRenderable@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/IRenderable.cpp
