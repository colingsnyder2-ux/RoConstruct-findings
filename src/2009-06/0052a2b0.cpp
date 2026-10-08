// from server: 100% by auto
// roc 2009-06 0052a2b0  unit: RBX::ViewG3D  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0052a2b0
//
// 0052a2b0  b801000000           mov eax, 1
// 0052a2b5  84055419a400         test byte ptr [0xa41954], al
// 0052a2bb  751a                 jne 0x52a2d7
// 0052a2bd  d9e8                 fld1 
// 0052a2bf  09055419a400         or dword ptr [0xa41954], eax
// 0052a2c5  d9154819a400         fst dword ptr [0xa41948]
// 0052a2cb  d9154c19a400         fst dword ptr [0xa4194c]
// 0052a2d1  d91d5019a400         fstp dword ptr [0xa41950]
// 0052a2d7  b84819a400           mov eax, 0xa41948
// 0052a2dc  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
