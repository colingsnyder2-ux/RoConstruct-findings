// roc 2007-08 0049f820  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f820
//
// 0049f820  8bc1                 mov eax, ecx
// 0049f822  8d4811               lea ecx, [eax + 0x11]
// 0049f825  c70000000000         mov dword ptr [eax], 0
// 0049f82b  c7400400080000       mov dword ptr [eax + 4], 0x800
// 0049f832  c7400800000000       mov dword ptr [eax + 8], 0
// 0049f839  89480c               mov dword ptr [eax + 0xc], ecx
// 0049f83c  c6401001             mov byte ptr [eax + 0x10], 1
// 0049f840  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ??0BitStream@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
