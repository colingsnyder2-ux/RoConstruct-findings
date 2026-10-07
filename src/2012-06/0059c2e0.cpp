// roc 2012-06 0059c2e0  unit: VAuthoringSettings::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c2e0
//
// 0059c2e0  8bc1                 mov eax, ecx
// 0059c2e2  33c9                 xor ecx, ecx
// 0059c2e4  894808               mov dword ptr [eax + 8], ecx
// 0059c2e7  8908                 mov dword ptr [eax], ecx
// 0059c2e9  894804               mov dword ptr [eax + 4], ecx
// 0059c2ec  88480c               mov byte ptr [eax + 0xc], cl
// 0059c2ef  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??0?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
