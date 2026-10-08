// roc 2010-06 00723640  unit: RBX::UniversalTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723640
//
// 00723640  8b442404             mov eax, dword ptr [esp + 4]
// 00723644  57                   push edi
// 00723645  8bf9                 mov edi, ecx
// 00723647  8907                 mov dword ptr [edi], eax
// 00723649  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072364d  894704               mov dword ptr [edi + 4], eax
// 00723650  85c0                 test eax, eax
// 00723652  7446                 je 0x72369a
// 00723654  56                   push esi
// 00723655  83c004               add eax, 4
// 00723658  b901000000           mov ecx, 1
// 0072365d  f00fc108             lock xadd dword ptr [eax], ecx
// 00723661  8b742410             mov esi, dword ptr [esp + 0x10]
// 00723665  85f6                 test esi, esi
// 00723667  742a                 je 0x723693
// 00723669  8d5604               lea edx, [esi + 4]
// 0072366c  83c8ff               or eax, 0xffffffff
// 0072366f  f00fc102             lock xadd dword ptr [edx], eax
// 00723673  751e                 jne 0x723693
// 00723675  8b16                 mov edx, dword ptr [esi]
// 00723677  8b4204               mov eax, dword ptr [edx + 4]
// 0072367a  8bce                 mov ecx, esi
// 0072367c  ffd0                 call eax
// 0072367e  8d4e08               lea ecx, [esi + 8]
// 00723681  83caff               or edx, 0xffffffff
// 00723684  f00fc111             lock xadd dword ptr [ecx], edx
// 00723688  7509                 jne 0x723693
// 0072368a  8b06                 mov eax, dword ptr [esi]
// 0072368c  8b5008               mov edx, dword ptr [eax + 8]
// 0072368f  8bce                 mov ecx, esi
// 00723691  ffd2                 call edx
// 00723693  5e                   pop esi
// 00723694  8bc7                 mov eax, edi
// 00723696  5f                   pop edi
// 00723697  c20800               ret 8
// 0072369a  8bc7                 mov eax, edi
// 0072369c  5f                   pop edi
// 0072369d  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage1@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
