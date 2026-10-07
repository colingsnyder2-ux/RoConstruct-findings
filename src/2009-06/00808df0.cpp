// roc 2009-06 00808df0  unit: CXTShadowHook  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808df0
//
// 00808df0  b801000000           mov eax, 1
// 00808df5  84056c2ba500         test byte ptr [0xa52b6c], al
// 00808dfb  751d                 jne 0x808e1a
// 00808dfd  09056c2ba500         or dword ptr [0xa52b6c], eax
// 00808e03  b9302ba500           mov ecx, 0xa52b30
// 00808e08  e863feffff           call 0x808c70
// 00808e0d  68f0d58900           push 0x89d5f0
// 00808e12  e8e40cf1ff           call 0x719afb
// 00808e17  83c404               add esp, 4
// 00808e1a  b8302ba500           mov eax, 0xa52b30
// 00808e1f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
