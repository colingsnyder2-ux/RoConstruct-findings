// roc 2009-12 00488310  unit: Ogre::GfxClustererPart  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00488310
//
// 00488310  55                   push ebp
// 00488311  8bec                 mov ebp, esp
// 00488313  6aff                 push -1
// 00488315  68c8f69200           push 0x92f6c8
// 0048831a  64a100000000         mov eax, dword ptr fs:[0]
// 00488320  50                   push eax
// 00488321  64892500000000       mov dword ptr fs:[0], esp
// 00488328  83ec08               sub esp, 8
// 0048832b  53                   push ebx
// 0048832c  56                   push esi
// 0048832d  57                   push edi
// 0048832e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00488331  8bf1                 mov esi, ecx
// 00488333  6a04                 push 4
// 00488335  8975ec               mov dword ptr [ebp - 0x14], esi
// 00488338  e823b53600           call 0x7f3860
// 0048833d  83c404               add esp, 4
// 00488340  85c0                 test eax, eax
// 00488342  7404                 je 0x488348
// 00488344  8930                 mov dword ptr [eax], esi
// 00488346  eb02                 jmp 0x48834a
// 00488348  33c0                 xor eax, eax
// 0048834a  8906                 mov dword ptr [esi], eax
// 0048834c  8bce                 mov ecx, esi
// 0048834e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00488355  e856621400           call 0x5ce5b0
// 0048835a  894618               mov dword ptr [esi + 0x18], eax
// 0048835d  b101                 mov cl, 1
// 0048835f  884829               mov byte ptr [eax + 0x29], cl
// 00488362  8b4618               mov eax, dword ptr [esi + 0x18]
// 00488365  894004               mov dword ptr [eax + 4], eax
// 00488368  8b4618               mov eax, dword ptr [esi + 0x18]
// 0048836b  8900                 mov dword ptr [eax], eax
// 0048836d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00488370  894008               mov dword ptr [eax + 8], eax
// 00488373  8b4508               mov eax, dword ptr [ebp + 8]
// 00488376  884dfc               mov byte ptr [ebp - 4], cl
// 00488379  50                   push eax
// 0048837a  8bce                 mov ecx, esi
// 0048837c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00488383  e828feffff           call 0x4881b0
// 00488388  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048838b  5f                   pop edi
// 0048838c  8bc6                 mov eax, esi
// 0048838e  5e                   pop esi
// 0048838f  64890d00000000       mov dword ptr fs:[0], ecx
// 00488396  5b                   pop ebx
// 00488397  8be5                 mov esp, ebp
// 00488399  5d                   pop ebp
// 0048839a  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ??0?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
