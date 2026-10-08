// roc 2009-12 007c6ac0  unit: RBX::ScoreHud  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007c6ac0
//
// 007c6ac0  55                   push ebp
// 007c6ac1  8bec                 mov ebp, esp
// 007c6ac3  6aff                 push -1
// 007c6ac5  68c8689500           push 0x9568c8
// 007c6aca  64a100000000         mov eax, dword ptr fs:[0]
// 007c6ad0  50                   push eax
// 007c6ad1  64892500000000       mov dword ptr fs:[0], esp
// 007c6ad8  83ec08               sub esp, 8
// 007c6adb  53                   push ebx
// 007c6adc  56                   push esi
// 007c6add  57                   push edi
// 007c6ade  8965f0               mov dword ptr [ebp - 0x10], esp
// 007c6ae1  8bf1                 mov esi, ecx
// 007c6ae3  6a04                 push 4
// 007c6ae5  8975ec               mov dword ptr [ebp - 0x14], esi
// 007c6ae8  e873cd0200           call 0x7f3860
// 007c6aed  83c404               add esp, 4
// 007c6af0  85c0                 test eax, eax
// 007c6af2  7404                 je 0x7c6af8
// 007c6af4  8930                 mov dword ptr [eax], esi
// 007c6af6  eb02                 jmp 0x7c6afa
// 007c6af8  33c0                 xor eax, eax
// 007c6afa  8906                 mov dword ptr [esi], eax
// 007c6afc  8bce                 mov ecx, esi
// 007c6afe  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007c6b05  e8465dd2ff           call 0x4ec850
// 007c6b0a  894618               mov dword ptr [esi + 0x18], eax
// 007c6b0d  b101                 mov cl, 1
// 007c6b0f  88482d               mov byte ptr [eax + 0x2d], cl
// 007c6b12  8b4618               mov eax, dword ptr [esi + 0x18]
// 007c6b15  894004               mov dword ptr [eax + 4], eax
// 007c6b18  8b4618               mov eax, dword ptr [esi + 0x18]
// 007c6b1b  8900                 mov dword ptr [eax], eax
// 007c6b1d  8b4618               mov eax, dword ptr [esi + 0x18]
// 007c6b20  894008               mov dword ptr [eax + 8], eax
// 007c6b23  8b4508               mov eax, dword ptr [ebp + 8]
// 007c6b26  884dfc               mov byte ptr [ebp - 4], cl
// 007c6b29  50                   push eax
// 007c6b2a  8bce                 mov ecx, esi
// 007c6b2c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 007c6b33  e8b8feffff           call 0x7c69f0
// 007c6b38  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007c6b3b  5f                   pop edi
// 007c6b3c  8bc6                 mov eax, esi
// 007c6b3e  5e                   pop esi
// 007c6b3f  64890d00000000       mov dword ptr fs:[0], ecx
// 007c6b46  5b                   pop ebx
// 007c6b47  8be5                 mov esp, ebp
// 007c6b49  5d                   pop ebp
// 007c6b4a  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
