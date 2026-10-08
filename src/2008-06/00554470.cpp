// from server: 100% by auto
// roc 2008-06 00554470  unit: RBX::RunService  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554470
//
// 00554470  55                   push ebp
// 00554471  8bec                 mov ebp, esp
// 00554473  6aff                 push -1
// 00554475  6860dc7c00           push 0x7cdc60
// 0055447a  64a100000000         mov eax, dword ptr fs:[0]
// 00554480  50                   push eax
// 00554481  64892500000000       mov dword ptr fs:[0], esp
// 00554488  83ec08               sub esp, 8
// 0055448b  53                   push ebx
// 0055448c  56                   push esi
// 0055448d  57                   push edi
// 0055448e  8b7d08               mov edi, dword ptr [ebp + 8]
// 00554491  8bf1                 mov esi, ecx
// 00554493  8965f0               mov dword ptr [ebp - 0x10], esp
// 00554496  8975ec               mov dword ptr [ebp - 0x14], esi
// 00554499  3bfe                 cmp edi, esi
// 0055449b  7440                 je 0x5544dd
// 0055449d  8b06                 mov eax, dword ptr [esi]
// 0055449f  85c0                 test eax, eax
// 005544a1  7418                 je 0x5544bb
// 005544a3  8b00                 mov eax, dword ptr [eax]
// 005544a5  8d4e08               lea ecx, [esi + 8]
// 005544a8  85c0                 test eax, eax
// 005544aa  7409                 je 0x5544b5
// 005544ac  6a01                 push 1
// 005544ae  51                   push ecx
// 005544af  51                   push ecx
// 005544b0  ffd0                 call eax
// 005544b2  83c40c               add esp, 0xc
// 005544b5  c70600000000         mov dword ptr [esi], 0
// 005544bb  8b07                 mov eax, dword ptr [edi]
// 005544bd  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005544c4  85c0                 test eax, eax
// 005544c6  7415                 je 0x5544dd
// 005544c8  8906                 mov dword ptr [esi], eax
// 005544ca  8b07                 mov eax, dword ptr [edi]
// 005544cc  8b10                 mov edx, dword ptr [eax]
// 005544ce  6a00                 push 0
// 005544d0  8d4e08               lea ecx, [esi + 8]
// 005544d3  51                   push ecx
// 005544d4  83c708               add edi, 8
// 005544d7  57                   push edi
// 005544d8  ffd2                 call edx
// 005544da  83c40c               add esp, 0xc
// 005544dd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005544e0  5f                   pop edi
// 005544e1  8bc6                 mov eax, esi
// 005544e3  5e                   pop esi
// 005544e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005544eb  5b                   pop ebx
// 005544ec  8be5                 mov esp, ebp
// 005544ee  5d                   pop ebp
// 005544ef  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??4?$function1@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
