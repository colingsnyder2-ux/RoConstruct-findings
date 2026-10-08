// roc 2012-06 00680110  unit: RBX::P8Instance::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00680110
//
// 00680110  64a100000000         mov eax, dword ptr fs:[0]
// 00680116  6aff                 push -1
// 00680118  68e852ad00           push 0xad52e8
// 0068011d  50                   push eax
// 0068011e  64892500000000       mov dword ptr fs:[0], esp
// 00680125  56                   push esi
// 00680126  57                   push edi
// 00680127  8bf1                 mov esi, ecx
// 00680129  8b442418             mov eax, dword ptr [esp + 0x18]
// 0068012d  6a08                 push 8
// 0068012f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00680137  8906                 mov dword ptr [esi], eax
// 00680139  c7460408000000       mov dword ptr [esi + 4], 8
// 00680140  e8d51f3000           call 0x98211a
// 00680145  83c404               add esp, 4
// 00680148  85c0                 test eax, eax
// 0068014a  7423                 je 0x68016f
// 0068014c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00680150  8908                 mov dword ptr [eax], ecx
// 00680152  8b542420             mov edx, dword ptr [esp + 0x20]
// 00680156  895004               mov dword ptr [eax + 4], edx
// 00680159  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0068015d  85c9                 test ecx, ecx
// 0068015f  7414                 je 0x680175
// 00680161  83c104               add ecx, 4
// 00680164  ba01000000           mov edx, 1
// 00680169  f00fc111             lock xadd dword ptr [ecx], edx
// 0068016d  eb02                 jmp 0x680171
// 0068016f  33c0                 xor eax, eax
// 00680171  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00680175  894608               mov dword ptr [esi + 8], eax
// 00680178  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00680180  85c9                 test ecx, ecx
// 00680182  742c                 je 0x6801b0
// 00680184  8bf9                 mov edi, ecx
// 00680186  83c104               add ecx, 4
// 00680189  83c8ff               or eax, 0xffffffff
// 0068018c  f00fc101             lock xadd dword ptr [ecx], eax
// 00680190  751e                 jne 0x6801b0
// 00680192  8b17                 mov edx, dword ptr [edi]
// 00680194  8b4204               mov eax, dword ptr [edx + 4]
// 00680197  8bcf                 mov ecx, edi
// 00680199  ffd0                 call eax
// 0068019b  8d4f08               lea ecx, [edi + 8]
// 0068019e  83caff               or edx, 0xffffffff
// 006801a1  f00fc111             lock xadd dword ptr [ecx], edx
// 006801a5  7509                 jne 0x6801b0
// 006801a7  8b07                 mov eax, dword ptr [edi]
// 006801a9  8b5008               mov edx, dword ptr [eax + 8]
// 006801ac  8bcf                 mov ecx, edi
// 006801ae  ffd2                 call edx
// 006801b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006801b4  5f                   pop edi
// 006801b5  8bc6                 mov eax, esi
// 006801b7  64890d00000000       mov dword ptr fs:[0], ecx
// 006801be  5e                   pop esi
// 006801bf  83c40c               add esp, 0xc
// 006801c2  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
