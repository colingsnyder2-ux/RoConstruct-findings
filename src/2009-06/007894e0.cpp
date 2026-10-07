// roc 2009-06 007894e0  unit: CXTAuxData  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007894e0
//
// 007894e0  6aff                 push -1
// 007894e2  689eaa8700           push 0x87aa9e
// 007894e7  64a100000000         mov eax, dword ptr fs:[0]
// 007894ed  50                   push eax
// 007894ee  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007894f3  33c4                 xor eax, esp
// 007894f5  50                   push eax
// 007894f6  8d442404             lea eax, [esp + 4]
// 007894fa  64a300000000         mov dword ptr fs:[0], eax
// 00789500  b801000000           mov eax, 1
// 00789505  84057c23a500         test byte ptr [0xa5237c], al
// 0078950b  7525                 jne 0x789532
// 0078950d  09057c23a500         or dword ptr [0xa5237c], eax
// 00789513  b92822a500           mov ecx, 0xa52228
// 00789518  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00789520  e8ebfdffff           call 0x789310
// 00789525  6820d58900           push 0x89d520
// 0078952a  e8cc05f9ff           call 0x719afb
// 0078952f  83c404               add esp, 4
// 00789532  b82822a500           mov eax, 0xa52228
// 00789537  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078953b  64890d00000000       mov dword ptr fs:[0], ecx
// 00789542  59                   pop ecx
// 00789543  83c40c               add esp, 0xc
// 00789546  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
