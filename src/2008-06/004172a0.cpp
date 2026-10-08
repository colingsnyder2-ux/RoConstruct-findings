// roc 2008-06 004172a0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004172a0
//
// 004172a0  64a100000000         mov eax, dword ptr fs:[0]
// 004172a6  6aff                 push -1
// 004172a8  6818047c00           push 0x7c0418
// 004172ad  50                   push eax
// 004172ae  64892500000000       mov dword ptr fs:[0], esp
// 004172b5  56                   push esi
// 004172b6  57                   push edi
// 004172b7  8bf1                 mov esi, ecx
// 004172b9  8b442418             mov eax, dword ptr [esp + 0x18]
// 004172bd  6a08                 push 8
// 004172bf  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004172c7  8906                 mov dword ptr [esi], eax
// 004172c9  c7460408000000       mov dword ptr [esi + 4], 8
// 004172d0  e84b962800           call 0x6a0920
// 004172d5  83c404               add esp, 4
// 004172d8  85c0                 test eax, eax
// 004172da  7423                 je 0x4172ff
// 004172dc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004172e0  8908                 mov dword ptr [eax], ecx
// 004172e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 004172e6  895004               mov dword ptr [eax + 4], edx
// 004172e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004172ed  85c9                 test ecx, ecx
// 004172ef  7414                 je 0x417305
// 004172f1  83c104               add ecx, 4
// 004172f4  ba01000000           mov edx, 1
// 004172f9  f00fc111             lock xadd dword ptr [ecx], edx
// 004172fd  eb02                 jmp 0x417301
// 004172ff  33c0                 xor eax, eax
// 00417301  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00417305  894608               mov dword ptr [esi + 8], eax
// 00417308  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00417310  85c9                 test ecx, ecx
// 00417312  742c                 je 0x417340
// 00417314  8bf9                 mov edi, ecx
// 00417316  83c104               add ecx, 4
// 00417319  83c8ff               or eax, 0xffffffff
// 0041731c  f00fc101             lock xadd dword ptr [ecx], eax
// 00417320  751e                 jne 0x417340
// 00417322  8b17                 mov edx, dword ptr [edi]
// 00417324  8b4204               mov eax, dword ptr [edx + 4]
// 00417327  8bcf                 mov ecx, edi
// 00417329  ffd0                 call eax
// 0041732b  8d4f08               lea ecx, [edi + 8]
// 0041732e  83caff               or edx, 0xffffffff
// 00417331  f00fc111             lock xadd dword ptr [ecx], edx
// 00417335  7509                 jne 0x417340
// 00417337  8b07                 mov eax, dword ptr [edi]
// 00417339  8b5008               mov edx, dword ptr [eax + 8]
// 0041733c  8bcf                 mov ecx, edi
// 0041733e  ffd2                 call edx
// 00417340  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417344  5f                   pop edi
// 00417345  8bc6                 mov eax, esi
// 00417347  64890d00000000       mov dword ptr fs:[0], ecx
// 0041734e  5e                   pop esi
// 0041734f  83c40c               add esp, 0xc
// 00417352  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
