// roc 2010-06 009113a0  unit: G3D::GFont  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009113a0
//
// 009113a0  80791400             cmp byte ptr [ecx + 0x14], 0
// 009113a4  7419                 je 0x9113bf
// 009113a6  a168ebbf00           mov eax, dword ptr [0xbfeb68]
// 009113ab  83e802               sub eax, 2
// 009113ae  740a                 je 0x9113ba
// 009113b0  83e802               sub eax, 2
// 009113b3  750a                 jne 0x9113bf
// 009113b5  e9b6faffff           jmp 0x910e70
// 009113ba  e901f8ffff           jmp 0x910bc0
// 009113bf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?endFrame@ToneMap@G3D@@QAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
