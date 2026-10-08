// roc 2007-03 0046f710  unit: seg_00460000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f710
//
// 0046f710  68ffff0f00           push 0xfffff
// 0046f715  ff1580eb7700         call dword ptr [0x77eb80]
// 0046f71b  6aff                 push -1
// 0046f71d  ff1590eb7700         call dword ptr [0x77eb90]
// 0046f723  803d2a768b0000       cmp byte ptr [0x8b762a], 0
// 0046f72a  740b                 je 0x46f737
// 0046f72c  68c0840000           push 0x84c0
// 0046f731  ff15a87f8b00         call dword ptr [0x8b7fa8]
// 0046f737  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ?glStatePush@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp
