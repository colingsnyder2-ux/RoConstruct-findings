// roc 2007-08 004536a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004536a0
//
// 004536a0  8b442404             mov eax, dword ptr [esp + 4]
// 004536a4  56                   push esi
// 004536a5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004536a9  85f6                 test esi, esi
// 004536ab  57                   push edi
// 004536ac  8bf9                 mov edi, ecx
// 004536ae  8907                 mov dword ptr [edi], eax
// 004536b0  897704               mov dword ptr [edi + 4], esi
// 004536b3  7435                 je 0x4536ea
// 004536b5  8d4604               lea eax, [esi + 4]
// 004536b8  8bc8                 mov ecx, eax
// 004536ba  ba01000000           mov edx, 1
// 004536bf  f00fc111             lock xadd dword ptr [ecx], edx
// 004536c3  83c9ff               or ecx, 0xffffffff
// 004536c6  f00fc108             lock xadd dword ptr [eax], ecx
// 004536ca  751e                 jne 0x4536ea
// 004536cc  8b16                 mov edx, dword ptr [esi]
// 004536ce  8b4204               mov eax, dword ptr [edx + 4]
// 004536d1  8bce                 mov ecx, esi
// 004536d3  ffd0                 call eax
// 004536d5  8d4e08               lea ecx, [esi + 8]
// 004536d8  83caff               or edx, 0xffffffff
// 004536db  f00fc111             lock xadd dword ptr [ecx], edx
// 004536df  7509                 jne 0x4536ea
// 004536e1  8b06                 mov eax, dword ptr [esi]
// 004536e3  8b5008               mov edx, dword ptr [eax + 8]
// 004536e6  8bce                 mov ecx, esi
// 004536e8  ffd2                 call edx
// 004536ea  8bc7                 mov eax, edi
// 004536ec  5f                   pop edi
// 004536ed  5e                   pop esi
// 004536ee  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage1@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
