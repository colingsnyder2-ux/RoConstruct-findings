// roc 2009-06 00635130  unit: RBX::VScriptContext::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635130
//
// 00635130  8b442404             mov eax, dword ptr [esp + 4]
// 00635134  57                   push edi
// 00635135  8bf9                 mov edi, ecx
// 00635137  8907                 mov dword ptr [edi], eax
// 00635139  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063513d  894704               mov dword ptr [edi + 4], eax
// 00635140  85c0                 test eax, eax
// 00635142  7446                 je 0x63518a
// 00635144  56                   push esi
// 00635145  83c004               add eax, 4
// 00635148  b901000000           mov ecx, 1
// 0063514d  f00fc108             lock xadd dword ptr [eax], ecx
// 00635151  8b742410             mov esi, dword ptr [esp + 0x10]
// 00635155  85f6                 test esi, esi
// 00635157  742a                 je 0x635183
// 00635159  8d5604               lea edx, [esi + 4]
// 0063515c  83c8ff               or eax, 0xffffffff
// 0063515f  f00fc102             lock xadd dword ptr [edx], eax
// 00635163  751e                 jne 0x635183
// 00635165  8b16                 mov edx, dword ptr [esi]
// 00635167  8b4204               mov eax, dword ptr [edx + 4]
// 0063516a  8bce                 mov ecx, esi
// 0063516c  ffd0                 call eax
// 0063516e  8d4e08               lea ecx, [esi + 8]
// 00635171  83caff               or edx, 0xffffffff
// 00635174  f00fc111             lock xadd dword ptr [ecx], edx
// 00635178  7509                 jne 0x635183
// 0063517a  8b06                 mov eax, dword ptr [esi]
// 0063517c  8b5008               mov edx, dword ptr [eax + 8]
// 0063517f  8bce                 mov ecx, esi
// 00635181  ffd2                 call edx
// 00635183  5e                   pop esi
// 00635184  8bc7                 mov eax, edi
// 00635186  5f                   pop edi
// 00635187  c20800               ret 8
// 0063518a  8bc7                 mov eax, edi
// 0063518c  5f                   pop edi
// 0063518d  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage1@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
