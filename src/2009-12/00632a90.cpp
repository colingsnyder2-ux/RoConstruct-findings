// roc 2009-12 00632a90  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00632a90
//
// 00632a90  64a100000000         mov eax, dword ptr fs:[0]
// 00632a96  6aff                 push -1
// 00632a98  6828799400           push 0x947928
// 00632a9d  50                   push eax
// 00632a9e  64892500000000       mov dword ptr fs:[0], esp
// 00632aa5  56                   push esi
// 00632aa6  57                   push edi
// 00632aa7  8bf1                 mov esi, ecx
// 00632aa9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00632aad  6a08                 push 8
// 00632aaf  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00632ab7  8906                 mov dword ptr [esi], eax
// 00632ab9  c7460408000000       mov dword ptr [esi + 4], 8
// 00632ac0  e89b0d1c00           call 0x7f3860
// 00632ac5  83c404               add esp, 4
// 00632ac8  85c0                 test eax, eax
// 00632aca  7423                 je 0x632aef
// 00632acc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00632ad0  8908                 mov dword ptr [eax], ecx
// 00632ad2  8b542420             mov edx, dword ptr [esp + 0x20]
// 00632ad6  895004               mov dword ptr [eax + 4], edx
// 00632ad9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00632add  85c9                 test ecx, ecx
// 00632adf  7414                 je 0x632af5
// 00632ae1  83c104               add ecx, 4
// 00632ae4  ba01000000           mov edx, 1
// 00632ae9  f00fc111             lock xadd dword ptr [ecx], edx
// 00632aed  eb02                 jmp 0x632af1
// 00632aef  33c0                 xor eax, eax
// 00632af1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00632af5  894608               mov dword ptr [esi + 8], eax
// 00632af8  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00632b00  85c9                 test ecx, ecx
// 00632b02  742c                 je 0x632b30
// 00632b04  8bf9                 mov edi, ecx
// 00632b06  83c104               add ecx, 4
// 00632b09  83c8ff               or eax, 0xffffffff
// 00632b0c  f00fc101             lock xadd dword ptr [ecx], eax
// 00632b10  751e                 jne 0x632b30
// 00632b12  8b17                 mov edx, dword ptr [edi]
// 00632b14  8b4204               mov eax, dword ptr [edx + 4]
// 00632b17  8bcf                 mov ecx, edi
// 00632b19  ffd0                 call eax
// 00632b1b  8d4f08               lea ecx, [edi + 8]
// 00632b1e  83caff               or edx, 0xffffffff
// 00632b21  f00fc111             lock xadd dword ptr [ecx], edx
// 00632b25  7509                 jne 0x632b30
// 00632b27  8b07                 mov eax, dword ptr [edi]
// 00632b29  8b5008               mov edx, dword ptr [eax + 8]
// 00632b2c  8bcf                 mov ecx, edi
// 00632b2e  ffd2                 call edx
// 00632b30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00632b34  5f                   pop edi
// 00632b35  8bc6                 mov eax, esi
// 00632b37  64890d00000000       mov dword ptr fs:[0], ecx
// 00632b3e  5e                   pop esi
// 00632b3f  83c40c               add esp, 0xc
// 00632b42  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
