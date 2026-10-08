// roc 2009-06 005cde80  unit: RBX::P8Instance::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cde80
//
// 005cde80  64a100000000         mov eax, dword ptr fs:[0]
// 005cde86  6aff                 push -1
// 005cde88  6808b08600           push 0x86b008
// 005cde8d  50                   push eax
// 005cde8e  64892500000000       mov dword ptr fs:[0], esp
// 005cde95  56                   push esi
// 005cde96  57                   push edi
// 005cde97  8bf1                 mov esi, ecx
// 005cde99  8b442418             mov eax, dword ptr [esp + 0x18]
// 005cde9d  6a08                 push 8
// 005cde9f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cdea7  8906                 mov dword ptr [esi], eax
// 005cdea9  c7460408000000       mov dword ptr [esi + 4], 8
// 005cdeb0  e883ab1400           call 0x718a38
// 005cdeb5  83c404               add esp, 4
// 005cdeb8  85c0                 test eax, eax
// 005cdeba  7423                 je 0x5cdedf
// 005cdebc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005cdec0  8908                 mov dword ptr [eax], ecx
// 005cdec2  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cdec6  895004               mov dword ptr [eax + 4], edx
// 005cdec9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cdecd  85c9                 test ecx, ecx
// 005cdecf  7414                 je 0x5cdee5
// 005cded1  83c104               add ecx, 4
// 005cded4  ba01000000           mov edx, 1
// 005cded9  f00fc111             lock xadd dword ptr [ecx], edx
// 005cdedd  eb02                 jmp 0x5cdee1
// 005cdedf  33c0                 xor eax, eax
// 005cdee1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cdee5  894608               mov dword ptr [esi + 8], eax
// 005cdee8  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005cdef0  85c9                 test ecx, ecx
// 005cdef2  742c                 je 0x5cdf20
// 005cdef4  8bf9                 mov edi, ecx
// 005cdef6  83c104               add ecx, 4
// 005cdef9  83c8ff               or eax, 0xffffffff
// 005cdefc  f00fc101             lock xadd dword ptr [ecx], eax
// 005cdf00  751e                 jne 0x5cdf20
// 005cdf02  8b17                 mov edx, dword ptr [edi]
// 005cdf04  8b4204               mov eax, dword ptr [edx + 4]
// 005cdf07  8bcf                 mov ecx, edi
// 005cdf09  ffd0                 call eax
// 005cdf0b  8d4f08               lea ecx, [edi + 8]
// 005cdf0e  83caff               or edx, 0xffffffff
// 005cdf11  f00fc111             lock xadd dword ptr [ecx], edx
// 005cdf15  7509                 jne 0x5cdf20
// 005cdf17  8b07                 mov eax, dword ptr [edi]
// 005cdf19  8b5008               mov edx, dword ptr [eax + 8]
// 005cdf1c  8bcf                 mov ecx, edi
// 005cdf1e  ffd2                 call edx
// 005cdf20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cdf24  5f                   pop edi
// 005cdf25  8bc6                 mov eax, esi
// 005cdf27  64890d00000000       mov dword ptr fs:[0], ecx
// 005cdf2e  5e                   pop esi
// 005cdf2f  83c40c               add esp, 0xc
// 005cdf32  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
