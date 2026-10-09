// roc 2009-12 00740ce0  unit: RBX::VDebrisService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00740ce0
//
// 00740ce0  8b442404             mov eax, dword ptr [esp + 4]
// 00740ce4  57                   push edi
// 00740ce5  8bf9                 mov edi, ecx
// 00740ce7  8907                 mov dword ptr [edi], eax
// 00740ce9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00740ced  894704               mov dword ptr [edi + 4], eax
// 00740cf0  85c0                 test eax, eax
// 00740cf2  7446                 je 0x740d3a
// 00740cf4  56                   push esi
// 00740cf5  83c004               add eax, 4
// 00740cf8  b901000000           mov ecx, 1
// 00740cfd  f00fc108             lock xadd dword ptr [eax], ecx
// 00740d01  8b742410             mov esi, dword ptr [esp + 0x10]
// 00740d05  85f6                 test esi, esi
// 00740d07  742a                 je 0x740d33
// 00740d09  8d5604               lea edx, [esi + 4]
// 00740d0c  83c8ff               or eax, 0xffffffff
// 00740d0f  f00fc102             lock xadd dword ptr [edx], eax
// 00740d13  751e                 jne 0x740d33
// 00740d15  8b16                 mov edx, dword ptr [esi]
// 00740d17  8b4204               mov eax, dword ptr [edx + 4]
// 00740d1a  8bce                 mov ecx, esi
// 00740d1c  ffd0                 call eax
// 00740d1e  8d4e08               lea ecx, [esi + 8]
// 00740d21  83caff               or edx, 0xffffffff
// 00740d24  f00fc111             lock xadd dword ptr [ecx], edx
// 00740d28  7509                 jne 0x740d33
// 00740d2a  8b06                 mov eax, dword ptr [esi]
// 00740d2c  8b5008               mov edx, dword ptr [eax + 8]
// 00740d2f  8bce                 mov ecx, esi
// 00740d31  ffd2                 call edx
// 00740d33  5e                   pop esi
// 00740d34  8bc7                 mov eax, edi
// 00740d36  5f                   pop edi
// 00740d37  c20800               ret 8
// 00740d3a  8bc7                 mov eax, edi
// 00740d3c  5f                   pop edi
// 00740d3d  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage1@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
