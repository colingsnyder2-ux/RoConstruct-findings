// roc 2012-06 0059db60  unit: VAuthoringSettings::?$FactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059db60
//
// 0059db60  56                   push esi
// 0059db61  8bf1                 mov esi, ecx
// 0059db63  837e0800             cmp dword ptr [esi + 8], 0
// 0059db67  7430                 je 0x59db99
// 0059db69  8b06                 mov eax, dword ptr [esi]
// 0059db6b  50                   push eax
// 0059db6c  e849483e00           call 0x9823ba
// 0059db71  83c404               add esp, 4
// 0059db74  c7460800000000       mov dword ptr [esi + 8], 0
// 0059db7b  837e0800             cmp dword ptr [esi + 8], 0
// 0059db7f  c70600000000         mov dword ptr [esi], 0
// 0059db85  c7460400000000       mov dword ptr [esi + 4], 0
// 0059db8c  760b                 jbe 0x59db99
// 0059db8e  8b0e                 mov ecx, dword ptr [esi]
// 0059db90  51                   push ecx
// 0059db91  e824483e00           call 0x9823ba
// 0059db96  83c404               add esp, 4
// 0059db99  5e                   pop esi
// 0059db9a  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$OrderedList@URakNetGUID@RakNet@@U12@$1??$defaultOrderedListComparison@URakNetGUID@RakNet@@U12@@DataStructures@@YAHABU12@0@Z@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
