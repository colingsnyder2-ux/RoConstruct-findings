// roc 2008-06 005cab00  unit: RBX::VControllerService::?$FactoryProduct  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cab00
//
// 005cab00  55                   push ebp
// 005cab01  8bec                 mov ebp, esp
// 005cab03  6aff                 push -1
// 005cab05  6870527d00           push 0x7d5270
// 005cab0a  64a100000000         mov eax, dword ptr fs:[0]
// 005cab10  50                   push eax
// 005cab11  64892500000000       mov dword ptr fs:[0], esp
// 005cab18  83ec08               sub esp, 8
// 005cab1b  53                   push ebx
// 005cab1c  56                   push esi
// 005cab1d  57                   push edi
// 005cab1e  8bf9                 mov edi, ecx
// 005cab20  8b4704               mov eax, dword ptr [edi + 4]
// 005cab23  8d4f04               lea ecx, [edi + 4]
// 005cab26  33d2                 xor edx, edx
// 005cab28  8965f0               mov dword ptr [ebp - 0x10], esp
// 005cab2b  8955ec               mov dword ptr [ebp - 0x14], edx
// 005cab2e  3bc2                 cmp eax, edx
// 005cab30  7405                 je 0x5cab37
// 005cab32  395004               cmp dword ptr [eax + 4], edx
// 005cab35  751b                 jne 0x5cab52
// 005cab37  8b4508               mov eax, dword ptr [ebp + 8]
// 005cab3a  8910                 mov dword ptr [eax], edx
// 005cab3c  895004               mov dword ptr [eax + 4], edx
// 005cab3f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005cab42  64890d00000000       mov dword ptr fs:[0], ecx
// 005cab49  5f                   pop edi
// 005cab4a  5e                   pop esi
// 005cab4b  5b                   pop ebx
// 005cab4c  8be5                 mov esp, ebp
// 005cab4e  5d                   pop ebp
// 005cab4f  c20400               ret 4
// 005cab52  8b7508               mov esi, dword ptr [ebp + 8]
// 005cab55  51                   push ecx
// 005cab56  8d4e04               lea ecx, [esi + 4]
// 005cab59  8955fc               mov dword ptr [ebp - 4], edx
// 005cab5c  e86f6fe4ff           call 0x411ad0
// 005cab61  8b07                 mov eax, dword ptr [edi]
// 005cab63  8906                 mov dword ptr [esi], eax
// 005cab65  8bc6                 mov eax, esi
// 005cab67  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005cab6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005cab71  5f                   pop edi
// 005cab72  5e                   pop esi
// 005cab73  5b                   pop ebx
// 005cab74  8be5                 mov esp, ebp
// 005cab76  5d                   pop ebp
// 005cab77  c20400               ret 4
// library rbxgs/tool\MegaDragger.cpp (function ?lock@?$weak_ptr@VPartInstance@RBX@@@boost@@QBE?AV?$shared_ptr@VPartInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
