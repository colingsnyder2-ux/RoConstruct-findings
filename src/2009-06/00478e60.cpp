// from server: 100% by auto
// roc 2009-06 00478e60  unit: Ogre::RbxMeshLoader  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00478e60
//
// 00478e60  55                   push ebp
// 00478e61  8bec                 mov ebp, esp
// 00478e63  6aff                 push -1
// 00478e65  6858468500           push 0x854658
// 00478e6a  64a100000000         mov eax, dword ptr fs:[0]
// 00478e70  50                   push eax
// 00478e71  64892500000000       mov dword ptr fs:[0], esp
// 00478e78  83ec08               sub esp, 8
// 00478e7b  53                   push ebx
// 00478e7c  56                   push esi
// 00478e7d  57                   push edi
// 00478e7e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00478e81  8bf1                 mov esi, ecx
// 00478e83  6a04                 push 4
// 00478e85  8975ec               mov dword ptr [ebp - 0x14], esi
// 00478e88  e8abfb2900           call 0x718a38
// 00478e8d  83c404               add esp, 4
// 00478e90  85c0                 test eax, eax
// 00478e92  7404                 je 0x478e98
// 00478e94  8930                 mov dword ptr [eax], esi
// 00478e96  eb02                 jmp 0x478e9a
// 00478e98  33c0                 xor eax, eax
// 00478e9a  8906                 mov dword ptr [esi], eax
// 00478e9c  8bce                 mov ecx, esi
// 00478e9e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00478ea5  e836fc0900           call 0x518ae0
// 00478eaa  894618               mov dword ptr [esi + 0x18], eax
// 00478ead  b101                 mov cl, 1
// 00478eaf  884829               mov byte ptr [eax + 0x29], cl
// 00478eb2  8b4618               mov eax, dword ptr [esi + 0x18]
// 00478eb5  894004               mov dword ptr [eax + 4], eax
// 00478eb8  8b4618               mov eax, dword ptr [esi + 0x18]
// 00478ebb  8900                 mov dword ptr [eax], eax
// 00478ebd  8b4618               mov eax, dword ptr [esi + 0x18]
// 00478ec0  894008               mov dword ptr [eax + 8], eax
// 00478ec3  8b4508               mov eax, dword ptr [ebp + 8]
// 00478ec6  884dfc               mov byte ptr [ebp - 4], cl
// 00478ec9  50                   push eax
// 00478eca  8bce                 mov ecx, esi
// 00478ecc  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00478ed3  e878f3ffff           call 0x478250
// 00478ed8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00478edb  5f                   pop edi
// 00478edc  8bc6                 mov eax, esi
// 00478ede  5e                   pop esi
// 00478edf  64890d00000000       mov dword ptr fs:[0], ecx
// 00478ee6  5b                   pop ebx
// 00478ee7  8be5                 mov esp, ebp
// 00478ee9  5d                   pop ebp
// 00478eea  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ??0?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
