// roc 2008-06 007b24f0  unit: RBX::RenderNew::TextureProxy  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b24f0
//
// 007b24f0  80791400             cmp byte ptr [ecx + 0x14], 0
// 007b24f4  7419                 je 0x7b250f
// 007b24f6  a130bf9600           mov eax, dword ptr [0x96bf30]
// 007b24fb  83e802               sub eax, 2
// 007b24fe  740a                 je 0x7b250a
// 007b2500  83e802               sub eax, 2
// 007b2503  750a                 jne 0x7b250f
// 007b2505  e936fcffff           jmp 0x7b2140
// 007b250a  e901faffff           jmp 0x7b1f10
// 007b250f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?endFrame@ToneMap@G3D@@QAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
