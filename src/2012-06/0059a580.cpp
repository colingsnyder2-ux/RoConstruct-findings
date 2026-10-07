// roc 2012-06 0059a580  unit: RBX::Network::Marker  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a580
//
// 0059a580  8b4104               mov eax, dword ptr [ecx + 4]
// 0059a583  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059a586  56                   push esi
// 0059a587  57                   push edi
// 0059a588  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059a58c  8d3438               lea esi, [eax + edi]
// 0059a58f  3bf2                 cmp esi, edx
// 0059a591  720e                 jb 0x59a5a1
// 0059a593  2bc2                 sub eax, edx
// 0059a595  03c7                 add eax, edi
// 0059a597  c1e004               shl eax, 4
// 0059a59a  0301                 add eax, dword ptr [ecx]
// 0059a59c  5f                   pop edi
// 0059a59d  5e                   pop esi
// 0059a59e  c20400               ret 4
// 0059a5a1  8bc6                 mov eax, esi
// 0059a5a3  c1e004               shl eax, 4
// 0059a5a6  0301                 add eax, dword ptr [ecx]
// 0059a5a8  5f                   pop edi
// 0059a5a9  5e                   pop esi
// 0059a5aa  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??A?$Queue@UDatagramHistoryNode@ReliabilityLayer@RakNet@@@DataStructures@@QBEAAUDatagramHistoryNode@ReliabilityLayer@RakNet@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
