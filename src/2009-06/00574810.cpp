// from server: 100% by auto
// roc 2009-06 00574810  unit: G3D::GCamera  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574810
//
// 00574810  807c240400           cmp byte ptr [esp + 4], 0
// 00574815  7424                 je 0x57483b
// 00574817  0fb64803             movzx ecx, byte ptr [eax + 3]
// 0057481b  0fb65002             movzx edx, byte ptr [eax + 2]
// 0057481f  884c2404             mov byte ptr [esp + 4], cl
// 00574823  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00574827  88542405             mov byte ptr [esp + 5], dl
// 0057482b  0fb610               movzx edx, byte ptr [eax]
// 0057482e  884c2406             mov byte ptr [esp + 6], cl
// 00574832  88542407             mov byte ptr [esp + 7], dl
// 00574836  8b442404             mov eax, dword ptr [esp + 4]
// 0057483a  c3                   ret 
// 0057483b  8b00                 mov eax, dword ptr [eax]
// 0057483d  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readUInt32@G3D@@YAIPBE_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
