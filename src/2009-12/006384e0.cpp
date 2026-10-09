// roc 2009-12 006384e0  unit: RBX::VSelection::?$FactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006384e0
//
// 006384e0  64a100000000         mov eax, dword ptr fs:[0]
// 006384e6  6aff                 push -1
// 006384e8  68788c9400           push 0x948c78
// 006384ed  50                   push eax
// 006384ee  64892500000000       mov dword ptr fs:[0], esp
// 006384f5  56                   push esi
// 006384f6  57                   push edi
// 006384f7  8bf9                 mov edi, ecx
// 006384f9  8b442418             mov eax, dword ptr [esp + 0x18]
// 006384fd  8907                 mov dword ptr [edi], eax
// 006384ff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00638503  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063850b  894704               mov dword ptr [edi + 4], eax
// 0063850e  85c0                 test eax, eax
// 00638510  7410                 je 0x638522
// 00638512  83c004               add eax, 4
// 00638515  b901000000           mov ecx, 1
// 0063851a  f00fc108             lock xadd dword ptr [eax], ecx
// 0063851e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00638522  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638526  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063852a  895708               mov dword ptr [edi + 8], edx
// 0063852d  894f0c               mov dword ptr [edi + 0xc], ecx
// 00638530  85c9                 test ecx, ecx
// 00638532  7414                 je 0x638548
// 00638534  83c104               add ecx, 4
// 00638537  b801000000           mov eax, 1
// 0063853c  f00fc101             lock xadd dword ptr [ecx], eax
// 00638540  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638544  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00638548  85c0                 test eax, eax
// 0063854a  7430                 je 0x63857c
// 0063854c  8bf0                 mov esi, eax
// 0063854e  83c004               add eax, 4
// 00638551  83c9ff               or ecx, 0xffffffff
// 00638554  f00fc108             lock xadd dword ptr [eax], ecx
// 00638558  751e                 jne 0x638578
// 0063855a  8b16                 mov edx, dword ptr [esi]
// 0063855c  8b4204               mov eax, dword ptr [edx + 4]
// 0063855f  8bce                 mov ecx, esi
// 00638561  ffd0                 call eax
// 00638563  8d4e08               lea ecx, [esi + 8]
// 00638566  83caff               or edx, 0xffffffff
// 00638569  f00fc111             lock xadd dword ptr [ecx], edx
// 0063856d  7509                 jne 0x638578
// 0063856f  8b06                 mov eax, dword ptr [esi]
// 00638571  8b5008               mov edx, dword ptr [eax + 8]
// 00638574  8bce                 mov ecx, esi
// 00638576  ffd2                 call edx
// 00638578  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063857c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00638584  85c9                 test ecx, ecx
// 00638586  742c                 je 0x6385b4
// 00638588  8bf1                 mov esi, ecx
// 0063858a  83c104               add ecx, 4
// 0063858d  83c8ff               or eax, 0xffffffff
// 00638590  f00fc101             lock xadd dword ptr [ecx], eax
// 00638594  751e                 jne 0x6385b4
// 00638596  8b16                 mov edx, dword ptr [esi]
// 00638598  8b4204               mov eax, dword ptr [edx + 4]
// 0063859b  8bce                 mov ecx, esi
// 0063859d  ffd0                 call eax
// 0063859f  8d4e08               lea ecx, [esi + 8]
// 006385a2  83caff               or edx, 0xffffffff
// 006385a5  f00fc111             lock xadd dword ptr [ecx], edx
// 006385a9  7509                 jne 0x6385b4
// 006385ab  8b06                 mov eax, dword ptr [esi]
// 006385ad  8b5008               mov edx, dword ptr [eax + 8]
// 006385b0  8bce                 mov ecx, esi
// 006385b2  ffd2                 call edx
// 006385b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006385b8  8bc7                 mov eax, edi
// 006385ba  5f                   pop edi
// 006385bb  64890d00000000       mov dword ptr fs:[0], ecx
// 006385c2  5e                   pop esi
// 006385c3  83c40c               add esp, 0xc
// 006385c6  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
