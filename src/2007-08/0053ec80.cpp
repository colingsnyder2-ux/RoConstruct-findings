// roc 2007-08 0053ec80  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ec80
//
// 0053ec80  6aff                 push -1
// 0053ec82  68880a7500           push 0x750a88
// 0053ec87  64a100000000         mov eax, dword ptr fs:[0]
// 0053ec8d  50                   push eax
// 0053ec8e  64892500000000       mov dword ptr fs:[0], esp
// 0053ec95  51                   push ecx
// 0053ec96  53                   push ebx
// 0053ec97  56                   push esi
// 0053ec98  57                   push edi
// 0053ec99  8bf1                 mov esi, ecx
// 0053ec9b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0053ec9f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053eca3  33db                 xor ebx, ebx
// 0053eca5  83ec08               sub esp, 8
// 0053eca8  3bfb                 cmp edi, ebx
// 0053ecaa  891e                 mov dword ptr [esi], ebx
// 0053ecac  8bc4                 mov eax, esp
// 0053ecae  895e04               mov dword ptr [esi + 4], ebx
// 0053ecb1  895e08               mov dword ptr [esi + 8], ebx
// 0053ecb4  8908                 mov dword ptr [eax], ecx
// 0053ecb6  895c2420             mov dword ptr [esp + 0x20], ebx
// 0053ecba  89642414             mov dword ptr [esp + 0x14], esp
// 0053ecbe  897804               mov dword ptr [eax + 4], edi
// 0053ecc1  740c                 je 0x53eccf
// 0053ecc3  8d5704               lea edx, [edi + 4]
// 0053ecc6  b801000000           mov eax, 1
// 0053eccb  f00fc102             lock xadd dword ptr [edx], eax
// 0053eccf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053ecd3  51                   push ecx
// 0053ecd4  8d4e0c               lea ecx, [esi + 0xc]
// 0053ecd7  e8d4f8ffff           call 0x53e5b0
// 0053ecdc  3bfb                 cmp edi, ebx
// 0053ecde  895e18               mov dword ptr [esi + 0x18], ebx
// 0053ece1  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0053ece4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0053ecec  742a                 je 0x53ed18
// 0053ecee  8d5704               lea edx, [edi + 4]
// 0053ecf1  83c8ff               or eax, 0xffffffff
// 0053ecf4  f00fc102             lock xadd dword ptr [edx], eax
// 0053ecf8  751e                 jne 0x53ed18
// 0053ecfa  8b17                 mov edx, dword ptr [edi]
// 0053ecfc  8b4204               mov eax, dword ptr [edx + 4]
// 0053ecff  8bcf                 mov ecx, edi
// 0053ed01  ffd0                 call eax
// 0053ed03  8d4f08               lea ecx, [edi + 8]
// 0053ed06  83caff               or edx, 0xffffffff
// 0053ed09  f00fc111             lock xadd dword ptr [ecx], edx
// 0053ed0d  7509                 jne 0x53ed18
// 0053ed0f  8b07                 mov eax, dword ptr [edi]
// 0053ed11  8b5008               mov edx, dword ptr [eax + 8]
// 0053ed14  8bcf                 mov ecx, edi
// 0053ed16  ffd2                 call edx
// 0053ed18  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053ed1c  5f                   pop edi
// 0053ed1d  8bc6                 mov eax, esi
// 0053ed1f  5e                   pop esi
// 0053ed20  64890d00000000       mov dword ptr fs:[0], ecx
// 0053ed27  5b                   pop ebx
// 0053ed28  83c410               add esp, 0x10
// 0053ed2b  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??$?0VInstanceHandle@RBX@@@XmlElement@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
