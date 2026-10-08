// roc 2011-06 004a5520  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5520
//
// 004a5520  8b442404             mov eax, dword ptr [esp + 4]
// 004a5524  57                   push edi
// 004a5525  8bf9                 mov edi, ecx
// 004a5527  8907                 mov dword ptr [edi], eax
// 004a5529  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a552d  894704               mov dword ptr [edi + 4], eax
// 004a5530  85c0                 test eax, eax
// 004a5532  7446                 je 0x4a557a
// 004a5534  56                   push esi
// 004a5535  83c004               add eax, 4
// 004a5538  b901000000           mov ecx, 1
// 004a553d  f00fc108             lock xadd dword ptr [eax], ecx
// 004a5541  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a5545  85f6                 test esi, esi
// 004a5547  742a                 je 0x4a5573
// 004a5549  8d5604               lea edx, [esi + 4]
// 004a554c  83c8ff               or eax, 0xffffffff
// 004a554f  f00fc102             lock xadd dword ptr [edx], eax
// 004a5553  751e                 jne 0x4a5573
// 004a5555  8b16                 mov edx, dword ptr [esi]
// 004a5557  8b4204               mov eax, dword ptr [edx + 4]
// 004a555a  8bce                 mov ecx, esi
// 004a555c  ffd0                 call eax
// 004a555e  8d4e08               lea ecx, [esi + 8]
// 004a5561  83caff               or edx, 0xffffffff
// 004a5564  f00fc111             lock xadd dword ptr [ecx], edx
// 004a5568  7509                 jne 0x4a5573
// 004a556a  8b06                 mov eax, dword ptr [esi]
// 004a556c  8b5008               mov edx, dword ptr [eax + 8]
// 004a556f  8bce                 mov ecx, esi
// 004a5571  ffd2                 call edx
// 004a5573  5e                   pop esi
// 004a5574  8bc7                 mov eax, edi
// 004a5576  5f                   pop edi
// 004a5577  c20800               ret 8
// 004a557a  8bc7                 mov eax, edi
// 004a557c  5f                   pop edi
// 004a557d  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage1@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
