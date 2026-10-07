// roc 2010-06 004c7320  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c7320
//
// 004c7320  55                   push ebp
// 004c7321  8bec                 mov ebp, esp
// 004c7323  6aff                 push -1
// 004c7325  6878a39800           push 0x98a378
// 004c732a  64a100000000         mov eax, dword ptr fs:[0]
// 004c7330  50                   push eax
// 004c7331  64892500000000       mov dword ptr fs:[0], esp
// 004c7338  83ec08               sub esp, 8
// 004c733b  53                   push ebx
// 004c733c  56                   push esi
// 004c733d  57                   push edi
// 004c733e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004c7341  8bf1                 mov esi, ecx
// 004c7343  6a04                 push 4
// 004c7345  8975ec               mov dword ptr [ebp - 0x14], esi
// 004c7348  e853062e00           call 0x7a79a0
// 004c734d  83c404               add esp, 4
// 004c7350  85c0                 test eax, eax
// 004c7352  7404                 je 0x4c7358
// 004c7354  8930                 mov dword ptr [eax], esi
// 004c7356  eb02                 jmp 0x4c735a
// 004c7358  33c0                 xor eax, eax
// 004c735a  8906                 mov dword ptr [esi], eax
// 004c735c  8bce                 mov ecx, esi
// 004c735e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004c7365  e8d6260400           call 0x509a40
// 004c736a  894618               mov dword ptr [esi + 0x18], eax
// 004c736d  b101                 mov cl, 1
// 004c736f  884829               mov byte ptr [eax + 0x29], cl
// 004c7372  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c7375  894004               mov dword ptr [eax + 4], eax
// 004c7378  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c737b  8900                 mov dword ptr [eax], eax
// 004c737d  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c7380  894008               mov dword ptr [eax + 8], eax
// 004c7383  8b4508               mov eax, dword ptr [ebp + 8]
// 004c7386  884dfc               mov byte ptr [ebp - 4], cl
// 004c7389  50                   push eax
// 004c738a  8bce                 mov ecx, esi
// 004c738c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 004c7393  e838e9ffff           call 0x4c5cd0
// 004c7398  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c739b  5f                   pop edi
// 004c739c  8bc6                 mov eax, esi
// 004c739e  5e                   pop esi
// 004c739f  64890d00000000       mov dword ptr fs:[0], ecx
// 004c73a6  5b                   pop ebx
// 004c73a7  8be5                 mov esp, ebp
// 004c73a9  5d                   pop ebp
// 004c73aa  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ??0?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
