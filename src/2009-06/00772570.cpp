// from server: 100% by auto
// roc 2009-06 00772570  unit: CXTPCompatibleDC  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772570
//
// 00772570  b801000000           mov eax, 1
// 00772575  84050c22a500         test byte ptr [0xa5220c], al
// 0077257b  751d                 jne 0x77259a
// 0077257d  09050c22a500         or dword ptr [0xa5220c], eax
// 00772583  b9f821a500           mov ecx, 0xa521f8
// 00772588  e823cfffff           call 0x76f4b0
// 0077258d  68f0d48900           push 0x89d4f0
// 00772592  e86475faff           call 0x719afb
// 00772597  83c404               add esp, 4
// 0077259a  b8f821a500           mov eax, 0xa521f8
// 0077259f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
