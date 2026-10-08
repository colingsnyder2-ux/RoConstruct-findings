// roc 2008-06 004f1ff0  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f1ff0
//
// 004f1ff0  8b442404             mov eax, dword ptr [esp + 4]
// 004f1ff4  48                   dec eax
// 004f1ff5  83f803               cmp eax, 3
// 004f1ff8  7718                 ja 0x4f2012
// 004f1ffa  ff248518204f00       jmp dword ptr [eax*4 + 0x4f2018]
// 004f2001  d905ac9b8100         fld dword ptr [0x819bac]
// 004f2007  c3                   ret 
// 004f2008  d9e8                 fld1 
// 004f200a  c3                   ret 
// 004f200b  d9057ce38100         fld dword ptr [0x81e37c]
// 004f2011  c3                   ret 
// 004f2012  d9ee                 fldz 
// 004f2014  c3                   ret 
// 004f2015  8d4900               lea ecx, [ecx]
// 004f2018  1220                 adc ah, byte ptr [eax]
// 004f201a  4f                   dec edi
// 004f201b  0001                 add byte ptr [ecx], al
// 004f201d  204f00               and byte ptr [edi], cl
// 004f2020  0820                 or byte ptr [eax], ah
// 004f2022  4f                   dec edi
// 004f2023  000b                 add byte ptr [ebx], cl
// 004f2025  204f00               and byte ptr [edi], cl
// library rbxgs-view/QuadVolume.cpp (function ?offset@LevelBuilder@View@RBX@@KAMW4RenderSurfaceType@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
