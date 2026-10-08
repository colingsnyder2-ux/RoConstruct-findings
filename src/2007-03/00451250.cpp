// roc 2007-03 00451250  unit: seg_00450000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00451250
//
// 00451250  8b442404             mov eax, dword ptr [esp + 4]
// 00451254  56                   push esi
// 00451255  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00451259  85f6                 test esi, esi
// 0045125b  57                   push edi
// 0045125c  8bf9                 mov edi, ecx
// 0045125e  8907                 mov dword ptr [edi], eax
// 00451260  897704               mov dword ptr [edi + 4], esi
// 00451263  7435                 je 0x45129a
// 00451265  8d4604               lea eax, [esi + 4]
// 00451268  8bc8                 mov ecx, eax
// 0045126a  ba01000000           mov edx, 1
// 0045126f  f00fc111             lock xadd dword ptr [ecx], edx
// 00451273  83c9ff               or ecx, 0xffffffff
// 00451276  f00fc108             lock xadd dword ptr [eax], ecx
// 0045127a  751e                 jne 0x45129a
// 0045127c  8b16                 mov edx, dword ptr [esi]
// 0045127e  8b4204               mov eax, dword ptr [edx + 4]
// 00451281  8bce                 mov ecx, esi
// 00451283  ffd0                 call eax
// 00451285  8d4e08               lea ecx, [esi + 8]
// 00451288  83caff               or edx, 0xffffffff
// 0045128b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045128f  7509                 jne 0x45129a
// 00451291  8b06                 mov eax, dword ptr [esi]
// 00451293  8b5008               mov edx, dword ptr [eax + 8]
// 00451296  8bce                 mov ecx, esi
// 00451298  ffd2                 call edx
// 0045129a  8bc7                 mov eax, edi
// 0045129c  5f                   pop edi
// 0045129d  5e                   pop esi
// 0045129e  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage1@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
