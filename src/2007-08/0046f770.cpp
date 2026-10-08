// from server: 100% by auto
// roc 2007-08 0046f770  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f770
//
// 0046f770  68ffff0f00           push 0xfffff
// 0046f775  ff1540eb7700         call dword ptr [0x77eb40]
// 0046f77b  6aff                 push -1
// 0046f77d  ff1530eb7700         call dword ptr [0x77eb30]
// 0046f783  803d62cf8b0000       cmp byte ptr [0x8bcf62], 0
// 0046f78a  740b                 je 0x46f797
// 0046f78c  68c0840000           push 0x84c0
// 0046f791  ff15f0d88b00         call dword ptr [0x8bd8f0]
// 0046f797  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?glStatePush@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
