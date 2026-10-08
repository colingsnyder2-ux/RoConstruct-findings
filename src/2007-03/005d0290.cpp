// roc 2007-03 005d0290  unit: seg_005d0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0290
//
// 005d0290  8b442404             mov eax, dword ptr [esp + 4]
// 005d0294  83ec08               sub esp, 8
// 005d0297  56                   push esi
// 005d0298  57                   push edi
// 005d0299  50                   push eax
// 005d029a  8d54240c             lea edx, [esp + 0xc]
// 005d029e  52                   push edx
// 005d029f  e84c01faff           call 0x5703f0
// 005d02a4  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d02a8  85f6                 test esi, esi
// 005d02aa  8b38                 mov edi, dword ptr [eax]
// 005d02ac  742a                 je 0x5d02d8
// 005d02ae  8d4604               lea eax, [esi + 4]
// 005d02b1  83c9ff               or ecx, 0xffffffff
// 005d02b4  f00fc108             lock xadd dword ptr [eax], ecx
// 005d02b8  751e                 jne 0x5d02d8
// 005d02ba  8b16                 mov edx, dword ptr [esi]
// 005d02bc  8b4204               mov eax, dword ptr [edx + 4]
// 005d02bf  8bce                 mov ecx, esi
// 005d02c1  ffd0                 call eax
// 005d02c3  8d4e08               lea ecx, [esi + 8]
// 005d02c6  83caff               or edx, 0xffffffff
// 005d02c9  f00fc111             lock xadd dword ptr [ecx], edx
// 005d02cd  7509                 jne 0x5d02d8
// 005d02cf  8b06                 mov eax, dword ptr [esi]
// 005d02d1  8b5008               mov edx, dword ptr [eax + 8]
// 005d02d4  8bce                 mov ecx, esi
// 005d02d6  ffd2                 call edx
// 005d02d8  8bc7                 mov eax, edi
// 005d02da  5f                   pop edi
// 005d02db  5e                   pop esi
// 005d02dc  83c408               add esp, 8
// 005d02df  c20400               ret 4
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?sig@?$TSignalDesc@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@IBEAAVTSignalInstance@123@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
