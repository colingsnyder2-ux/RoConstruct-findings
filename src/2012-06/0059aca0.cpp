// roc 2012-06 0059aca0  unit: VAuthoringSettings::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059aca0
//
// 0059aca0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059aca4  8b11                 mov edx, dword ptr [ecx]
// 0059aca6  8b4a08               mov ecx, dword ptr [edx + 8]
// 0059aca9  8b442404             mov eax, dword ptr [esp + 4]
// 0059acad  8b11                 mov edx, dword ptr [ecx]
// 0059acaf  0fb700               movzx eax, word ptr [eax]
// 0059acb2  0fb74a0e             movzx ecx, word ptr [edx + 0xe]
// 0059acb6  663bc1               cmp ax, cx
// 0059acb9  7304                 jae 0x59acbf
// 0059acbb  83c8ff               or eax, 0xffffffff
// 0059acbe  c3                   ret 
// 0059acbf  33d2                 xor edx, edx
// 0059acc1  663bc1               cmp ax, cx
// 0059acc4  0f95c2               setne dl
// 0059acc7  8bc2                 mov eax, edx
// 0059acc9  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?SplitPacketChannelComp@RakNet@@YAHABGABQAUSplitPacketChannel@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
