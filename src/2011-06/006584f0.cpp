// roc 2011-06 006584f0  unit: RBX::ContentProvider  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006584f0
//
// 006584f0  64a100000000         mov eax, dword ptr fs:[0]
// 006584f6  6aff                 push -1
// 006584f8  6848809d00           push 0x9d8048
// 006584fd  50                   push eax
// 006584fe  64892500000000       mov dword ptr fs:[0], esp
// 00658505  56                   push esi
// 00658506  57                   push edi
// 00658507  8bf9                 mov edi, ecx
// 00658509  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065850d  8907                 mov dword ptr [edi], eax
// 0065850f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00658513  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065851b  894704               mov dword ptr [edi + 4], eax
// 0065851e  85c0                 test eax, eax
// 00658520  7410                 je 0x658532
// 00658522  83c004               add eax, 4
// 00658525  b901000000           mov ecx, 1
// 0065852a  f00fc108             lock xadd dword ptr [eax], ecx
// 0065852e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00658532  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00658536  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065853a  895708               mov dword ptr [edi + 8], edx
// 0065853d  894f0c               mov dword ptr [edi + 0xc], ecx
// 00658540  85c9                 test ecx, ecx
// 00658542  7414                 je 0x658558
// 00658544  83c104               add ecx, 4
// 00658547  b801000000           mov eax, 1
// 0065854c  f00fc101             lock xadd dword ptr [ecx], eax
// 00658550  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00658554  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00658558  85c0                 test eax, eax
// 0065855a  7430                 je 0x65858c
// 0065855c  8bf0                 mov esi, eax
// 0065855e  83c004               add eax, 4
// 00658561  83c9ff               or ecx, 0xffffffff
// 00658564  f00fc108             lock xadd dword ptr [eax], ecx
// 00658568  751e                 jne 0x658588
// 0065856a  8b16                 mov edx, dword ptr [esi]
// 0065856c  8b4204               mov eax, dword ptr [edx + 4]
// 0065856f  8bce                 mov ecx, esi
// 00658571  ffd0                 call eax
// 00658573  8d4e08               lea ecx, [esi + 8]
// 00658576  83caff               or edx, 0xffffffff
// 00658579  f00fc111             lock xadd dword ptr [ecx], edx
// 0065857d  7509                 jne 0x658588
// 0065857f  8b06                 mov eax, dword ptr [esi]
// 00658581  8b5008               mov edx, dword ptr [eax + 8]
// 00658584  8bce                 mov ecx, esi
// 00658586  ffd2                 call edx
// 00658588  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065858c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00658594  85c9                 test ecx, ecx
// 00658596  742c                 je 0x6585c4
// 00658598  8bf1                 mov esi, ecx
// 0065859a  83c104               add ecx, 4
// 0065859d  83c8ff               or eax, 0xffffffff
// 006585a0  f00fc101             lock xadd dword ptr [ecx], eax
// 006585a4  751e                 jne 0x6585c4
// 006585a6  8b16                 mov edx, dword ptr [esi]
// 006585a8  8b4204               mov eax, dword ptr [edx + 4]
// 006585ab  8bce                 mov ecx, esi
// 006585ad  ffd0                 call eax
// 006585af  8d4e08               lea ecx, [esi + 8]
// 006585b2  83caff               or edx, 0xffffffff
// 006585b5  f00fc111             lock xadd dword ptr [ecx], edx
// 006585b9  7509                 jne 0x6585c4
// 006585bb  8b06                 mov eax, dword ptr [esi]
// 006585bd  8b5008               mov edx, dword ptr [eax + 8]
// 006585c0  8bce                 mov ecx, esi
// 006585c2  ffd2                 call edx
// 006585c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006585c8  8bc7                 mov eax, edi
// 006585ca  5f                   pop edi
// 006585cb  64890d00000000       mov dword ptr fs:[0], ecx
// 006585d2  5e                   pop esi
// 006585d3  83c40c               add esp, 0xc
// 006585d6  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
