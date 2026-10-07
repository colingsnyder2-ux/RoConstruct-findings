// roc 2012-06 0059f950  unit: seg_00590000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059f950
//
// 0059f950  8b442408             mov eax, dword ptr [esp + 8]
// 0059f954  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059f958  8981980e0000         mov dword ptr [ecx + 0xe98], eax
// 0059f95e  89919c0e0000         mov dword ptr [ecx + 0xe9c], edx
// 0059f964  8b542404             mov edx, dword ptr [esp + 4]
// 0059f968  51                   push ecx
// 0059f969  8bc4                 mov eax, esp
// 0059f96b  81c1500f0000         add ecx, 0xf50
// 0059f971  8910                 mov dword ptr [eax], edx
// 0059f973  e868f6ffff           call 0x59efe0
// 0059f978  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?SendAcknowledgementPacket@ReliabilityLayer@RakNet@@AAEXUuint24_t@2@_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
