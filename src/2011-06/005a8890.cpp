// roc 2011-06 005a8890  unit: RBX::VFriendService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a8890
//
// 005a8890  55                   push ebp
// 005a8891  8bec                 mov ebp, esp
// 005a8893  6aff                 push -1
// 005a8895  68c0169e00           push 0x9e16c0
// 005a889a  64a100000000         mov eax, dword ptr fs:[0]
// 005a88a0  50                   push eax
// 005a88a1  64892500000000       mov dword ptr fs:[0], esp
// 005a88a8  83ec08               sub esp, 8
// 005a88ab  53                   push ebx
// 005a88ac  56                   push esi
// 005a88ad  57                   push edi
// 005a88ae  8bf1                 mov esi, ecx
// 005a88b0  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a88b3  8975ec               mov dword ptr [ebp - 0x14], esi
// 005a88b6  e8c54f0800           call 0x62d880
// 005a88bb  894604               mov dword ptr [esi + 4], eax
// 005a88be  c6401501             mov byte ptr [eax + 0x15], 1
// 005a88c2  8b4604               mov eax, dword ptr [esi + 4]
// 005a88c5  894004               mov dword ptr [eax + 4], eax
// 005a88c8  8b4604               mov eax, dword ptr [esi + 4]
// 005a88cb  8900                 mov dword ptr [eax], eax
// 005a88cd  8b4604               mov eax, dword ptr [esi + 4]
// 005a88d0  894008               mov dword ptr [eax + 8], eax
// 005a88d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005a88d6  50                   push eax
// 005a88d7  8bce                 mov ecx, esi
// 005a88d9  c7460800000000       mov dword ptr [esi + 8], 0
// 005a88e0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a88e7  e8b4f8ffff           call 0x5a81a0
// 005a88ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a88ef  5f                   pop edi
// 005a88f0  8bc6                 mov eax, esi
// 005a88f2  5e                   pop esi
// 005a88f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005a88fa  5b                   pop ebx
// 005a88fb  8be5                 mov esp, ebp
// 005a88fd  5d                   pop ebp
// 005a88fe  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
