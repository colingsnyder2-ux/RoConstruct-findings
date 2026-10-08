// roc 2010-06 00594930  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00594930
//
// 00594930  64a100000000         mov eax, dword ptr fs:[0]
// 00594936  6aff                 push -1
// 00594938  68e8679900           push 0x9967e8
// 0059493d  50                   push eax
// 0059493e  64892500000000       mov dword ptr fs:[0], esp
// 00594945  56                   push esi
// 00594946  57                   push edi
// 00594947  8bf1                 mov esi, ecx
// 00594949  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059494d  6a08                 push 8
// 0059494f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00594957  8906                 mov dword ptr [esi], eax
// 00594959  c7460408000000       mov dword ptr [esi + 4], 8
// 00594960  e83b302100           call 0x7a79a0
// 00594965  83c404               add esp, 4
// 00594968  85c0                 test eax, eax
// 0059496a  7423                 je 0x59498f
// 0059496c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00594970  8908                 mov dword ptr [eax], ecx
// 00594972  8b542420             mov edx, dword ptr [esp + 0x20]
// 00594976  895004               mov dword ptr [eax + 4], edx
// 00594979  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059497d  85c9                 test ecx, ecx
// 0059497f  7414                 je 0x594995
// 00594981  83c104               add ecx, 4
// 00594984  ba01000000           mov edx, 1
// 00594989  f00fc111             lock xadd dword ptr [ecx], edx
// 0059498d  eb02                 jmp 0x594991
// 0059498f  33c0                 xor eax, eax
// 00594991  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00594995  894608               mov dword ptr [esi + 8], eax
// 00594998  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005949a0  85c9                 test ecx, ecx
// 005949a2  742c                 je 0x5949d0
// 005949a4  8bf9                 mov edi, ecx
// 005949a6  83c104               add ecx, 4
// 005949a9  83c8ff               or eax, 0xffffffff
// 005949ac  f00fc101             lock xadd dword ptr [ecx], eax
// 005949b0  751e                 jne 0x5949d0
// 005949b2  8b17                 mov edx, dword ptr [edi]
// 005949b4  8b4204               mov eax, dword ptr [edx + 4]
// 005949b7  8bcf                 mov ecx, edi
// 005949b9  ffd0                 call eax
// 005949bb  8d4f08               lea ecx, [edi + 8]
// 005949be  83caff               or edx, 0xffffffff
// 005949c1  f00fc111             lock xadd dword ptr [ecx], edx
// 005949c5  7509                 jne 0x5949d0
// 005949c7  8b07                 mov eax, dword ptr [edi]
// 005949c9  8b5008               mov edx, dword ptr [eax + 8]
// 005949cc  8bcf                 mov ecx, edi
// 005949ce  ffd2                 call edx
// 005949d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005949d4  5f                   pop edi
// 005949d5  8bc6                 mov eax, esi
// 005949d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005949de  5e                   pop esi
// 005949df  83c40c               add esp, 0xc
// 005949e2  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
