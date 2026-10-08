// from server: 100% by auto
// roc 2010-06 0076fb60  unit: RBX::ScoreHud  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076fb60
//
// 0076fb60  55                   push ebp
// 0076fb61  8bec                 mov ebp, esp
// 0076fb63  6aff                 push -1
// 0076fb65  68f8c29a00           push 0x9ac2f8
// 0076fb6a  64a100000000         mov eax, dword ptr fs:[0]
// 0076fb70  50                   push eax
// 0076fb71  64892500000000       mov dword ptr fs:[0], esp
// 0076fb78  83ec08               sub esp, 8
// 0076fb7b  53                   push ebx
// 0076fb7c  56                   push esi
// 0076fb7d  57                   push edi
// 0076fb7e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0076fb81  8bf1                 mov esi, ecx
// 0076fb83  6a04                 push 4
// 0076fb85  8975ec               mov dword ptr [ebp - 0x14], esi
// 0076fb88  e8137e0300           call 0x7a79a0
// 0076fb8d  83c404               add esp, 4
// 0076fb90  85c0                 test eax, eax
// 0076fb92  7404                 je 0x76fb98
// 0076fb94  8930                 mov dword ptr [eax], esi
// 0076fb96  eb02                 jmp 0x76fb9a
// 0076fb98  33c0                 xor eax, eax
// 0076fb9a  8906                 mov dword ptr [esi], eax
// 0076fb9c  8bce                 mov ecx, esi
// 0076fb9e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0076fba5  e8c604d3ff           call 0x4a0070
// 0076fbaa  894618               mov dword ptr [esi + 0x18], eax
// 0076fbad  b101                 mov cl, 1
// 0076fbaf  88482d               mov byte ptr [eax + 0x2d], cl
// 0076fbb2  8b4618               mov eax, dword ptr [esi + 0x18]
// 0076fbb5  894004               mov dword ptr [eax + 4], eax
// 0076fbb8  8b4618               mov eax, dword ptr [esi + 0x18]
// 0076fbbb  8900                 mov dword ptr [eax], eax
// 0076fbbd  8b4618               mov eax, dword ptr [esi + 0x18]
// 0076fbc0  894008               mov dword ptr [eax + 8], eax
// 0076fbc3  8b4508               mov eax, dword ptr [ebp + 8]
// 0076fbc6  884dfc               mov byte ptr [ebp - 4], cl
// 0076fbc9  50                   push eax
// 0076fbca  8bce                 mov ecx, esi
// 0076fbcc  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0076fbd3  e858feffff           call 0x76fa30
// 0076fbd8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0076fbdb  5f                   pop edi
// 0076fbdc  8bc6                 mov eax, esi
// 0076fbde  5e                   pop esi
// 0076fbdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0076fbe6  5b                   pop ebx
// 0076fbe7  8be5                 mov esp, ebp
// 0076fbe9  5d                   pop ebp
// 0076fbea  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
