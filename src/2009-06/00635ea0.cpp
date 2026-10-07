// roc 2009-06 00635ea0  unit: RBX::Lua::VFunctionRef::?$holder  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635ea0
//
// 00635ea0  57                   push edi
// 00635ea1  8b7c2408             mov edi, dword ptr [esp + 8]
// 00635ea5  3b7c240c             cmp edi, dword ptr [esp + 0xc]
// 00635ea9  7464                 je 0x635f0f
// 00635eab  53                   push ebx
// 00635eac  55                   push ebp
// 00635ead  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00635eb1  56                   push esi
// 00635eb2  8b4500               mov eax, dword ptr [ebp]
// 00635eb5  8907                 mov dword ptr [edi], eax
// 00635eb7  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00635eba  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00635ebd  7444                 je 0x635f03
// 00635ebf  85db                 test ebx, ebx
// 00635ec1  740c                 je 0x635ecf
// 00635ec3  8d4b04               lea ecx, [ebx + 4]
// 00635ec6  ba01000000           mov edx, 1
// 00635ecb  f00fc111             lock xadd dword ptr [ecx], edx
// 00635ecf  8b7704               mov esi, dword ptr [edi + 4]
// 00635ed2  85f6                 test esi, esi
// 00635ed4  742a                 je 0x635f00
// 00635ed6  8d4604               lea eax, [esi + 4]
// 00635ed9  83c9ff               or ecx, 0xffffffff
// 00635edc  f00fc108             lock xadd dword ptr [eax], ecx
// 00635ee0  751e                 jne 0x635f00
// 00635ee2  8b16                 mov edx, dword ptr [esi]
// 00635ee4  8b4204               mov eax, dword ptr [edx + 4]
// 00635ee7  8bce                 mov ecx, esi
// 00635ee9  ffd0                 call eax
// 00635eeb  8d4e08               lea ecx, [esi + 8]
// 00635eee  83caff               or edx, 0xffffffff
// 00635ef1  f00fc111             lock xadd dword ptr [ecx], edx
// 00635ef5  7509                 jne 0x635f00
// 00635ef7  8b06                 mov eax, dword ptr [esi]
// 00635ef9  8b5008               mov edx, dword ptr [eax + 8]
// 00635efc  8bce                 mov ecx, esi
// 00635efe  ffd2                 call edx
// 00635f00  895f04               mov dword ptr [edi + 4], ebx
// 00635f03  83c708               add edi, 8
// 00635f06  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 00635f0a  75a6                 jne 0x635eb2
// 00635f0c  5e                   pop esi
// 00635f0d  5d                   pop ebp
// 00635f0e  5b                   pop ebx
// 00635f0f  5f                   pop edi
// 00635f10  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Fill@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@V12@@std@@YAXPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
