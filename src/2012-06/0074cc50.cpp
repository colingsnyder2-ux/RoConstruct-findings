// roc 2012-06 0074cc50  unit: std::D::DU?$char_traits::V?$basic_string::?$SizeEnforcedLRUCache  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0074cc50
//
// 0074cc50  64a100000000         mov eax, dword ptr fs:[0]
// 0074cc56  6aff                 push -1
// 0074cc58  681895ae00           push 0xae9518
// 0074cc5d  50                   push eax
// 0074cc5e  64892500000000       mov dword ptr fs:[0], esp
// 0074cc65  56                   push esi
// 0074cc66  57                   push edi
// 0074cc67  8bf9                 mov edi, ecx
// 0074cc69  8b442418             mov eax, dword ptr [esp + 0x18]
// 0074cc6d  8907                 mov dword ptr [edi], eax
// 0074cc6f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074cc73  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0074cc7b  894704               mov dword ptr [edi + 4], eax
// 0074cc7e  85c0                 test eax, eax
// 0074cc80  7410                 je 0x74cc92
// 0074cc82  83c004               add eax, 4
// 0074cc85  b901000000           mov ecx, 1
// 0074cc8a  f00fc108             lock xadd dword ptr [eax], ecx
// 0074cc8e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074cc92  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0074cc96  8b542420             mov edx, dword ptr [esp + 0x20]
// 0074cc9a  895708               mov dword ptr [edi + 8], edx
// 0074cc9d  894f0c               mov dword ptr [edi + 0xc], ecx
// 0074cca0  85c9                 test ecx, ecx
// 0074cca2  7414                 je 0x74ccb8
// 0074cca4  83c104               add ecx, 4
// 0074cca7  b801000000           mov eax, 1
// 0074ccac  f00fc101             lock xadd dword ptr [ecx], eax
// 0074ccb0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0074ccb4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074ccb8  85c0                 test eax, eax
// 0074ccba  7430                 je 0x74ccec
// 0074ccbc  8bf0                 mov esi, eax
// 0074ccbe  83c004               add eax, 4
// 0074ccc1  83c9ff               or ecx, 0xffffffff
// 0074ccc4  f00fc108             lock xadd dword ptr [eax], ecx
// 0074ccc8  751e                 jne 0x74cce8
// 0074ccca  8b16                 mov edx, dword ptr [esi]
// 0074cccc  8b4204               mov eax, dword ptr [edx + 4]
// 0074cccf  8bce                 mov ecx, esi
// 0074ccd1  ffd0                 call eax
// 0074ccd3  8d4e08               lea ecx, [esi + 8]
// 0074ccd6  83caff               or edx, 0xffffffff
// 0074ccd9  f00fc111             lock xadd dword ptr [ecx], edx
// 0074ccdd  7509                 jne 0x74cce8
// 0074ccdf  8b06                 mov eax, dword ptr [esi]
// 0074cce1  8b5008               mov edx, dword ptr [eax + 8]
// 0074cce4  8bce                 mov ecx, esi
// 0074cce6  ffd2                 call edx
// 0074cce8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0074ccec  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0074ccf4  85c9                 test ecx, ecx
// 0074ccf6  742c                 je 0x74cd24
// 0074ccf8  8bf1                 mov esi, ecx
// 0074ccfa  83c104               add ecx, 4
// 0074ccfd  83c8ff               or eax, 0xffffffff
// 0074cd00  f00fc101             lock xadd dword ptr [ecx], eax
// 0074cd04  751e                 jne 0x74cd24
// 0074cd06  8b16                 mov edx, dword ptr [esi]
// 0074cd08  8b4204               mov eax, dword ptr [edx + 4]
// 0074cd0b  8bce                 mov ecx, esi
// 0074cd0d  ffd0                 call eax
// 0074cd0f  8d4e08               lea ecx, [esi + 8]
// 0074cd12  83caff               or edx, 0xffffffff
// 0074cd15  f00fc111             lock xadd dword ptr [ecx], edx
// 0074cd19  7509                 jne 0x74cd24
// 0074cd1b  8b06                 mov eax, dword ptr [esi]
// 0074cd1d  8b5008               mov edx, dword ptr [eax + 8]
// 0074cd20  8bce                 mov ecx, esi
// 0074cd22  ffd2                 call edx
// 0074cd24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0074cd28  8bc7                 mov eax, edi
// 0074cd2a  5f                   pop edi
// 0074cd2b  64890d00000000       mov dword ptr fs:[0], ecx
// 0074cd32  5e                   pop esi
// 0074cd33  83c40c               add esp, 0xc
// 0074cd36  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
