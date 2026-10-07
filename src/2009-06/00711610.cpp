// roc 2009-06 00711610  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00711610
//
// 00711610  6aff                 push -1
// 00711612  681e418700           push 0x87411e
// 00711617  64a100000000         mov eax, dword ptr fs:[0]
// 0071161d  50                   push eax
// 0071161e  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00711623  33c4                 xor eax, esp
// 00711625  50                   push eax
// 00711626  8d442404             lea eax, [esp + 4]
// 0071162a  64a300000000         mov dword ptr fs:[0], eax
// 00711630  b801000000           mov eax, 1
// 00711635  84053c09a500         test byte ptr [0xa5093c], al
// 0071163b  7525                 jne 0x711662
// 0071163d  09053c09a500         or dword ptr [0xa5093c], eax
// 00711643  b95008a500           mov ecx, 0xa50850
// 00711648  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00711650  e83b160000           call 0x712c90
// 00711655  68c0d28900           push 0x89d2c0
// 0071165a  e89c840000           call 0x719afb
// 0071165f  83c404               add esp, 4
// 00711662  b85008a500           mov eax, 0xa50850
// 00711667  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071166b  64890d00000000       mov dword ptr fs:[0], ecx
// 00711672  59                   pop ecx
// 00711673  83c40c               add esp, 0xc
// 00711676  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
