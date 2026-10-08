// from server: 100% by auto
// roc 2012-06 0041b810  unit: RBX::JavaScript::VMarshalledFunction::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b810
//
// 0041b810  8b442404             mov eax, dword ptr [esp + 4]
// 0041b814  56                   push esi
// 0041b815  8b7004               mov esi, dword ptr [eax + 4]
// 0041b818  85f6                 test esi, esi
// 0041b81a  742b                 je 0x41b847
// 0041b81c  8d4e04               lea ecx, [esi + 4]
// 0041b81f  83caff               or edx, 0xffffffff
// 0041b822  f00fc111             lock xadd dword ptr [ecx], edx
// 0041b826  751f                 jne 0x41b847
// 0041b828  8b06                 mov eax, dword ptr [esi]
// 0041b82a  8b5004               mov edx, dword ptr [eax + 4]
// 0041b82d  8bce                 mov ecx, esi
// 0041b82f  ffd2                 call edx
// 0041b831  8d4608               lea eax, [esi + 8]
// 0041b834  83c9ff               or ecx, 0xffffffff
// 0041b837  f00fc108             lock xadd dword ptr [eax], ecx
// 0041b83b  750a                 jne 0x41b847
// 0041b83d  8b16                 mov edx, dword ptr [esi]
// 0041b83f  8b4208               mov eax, dword ptr [edx + 8]
// 0041b842  8bce                 mov ecx, esi
// 0041b844  5e                   pop esi
// 0041b845  ffe0                 jmp eax
// 0041b847  5e                   pop esi
// 0041b848  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Destroy@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
