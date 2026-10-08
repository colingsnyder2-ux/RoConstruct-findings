// roc 2008-06 00646b60  unit: RBX::MultiJoint  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646b60
//
// 00646b60  56                   push esi
// 00646b61  6a04                 push 4
// 00646b63  8bf1                 mov esi, ecx
// 00646b65  e896fdffff           call 0x646900
// 00646b6a  d9ee                 fldz 
// 00646b6c  c7067cae8400         mov dword ptr [esi], 0x84ae7c
// 00646b72  d996c0000000         fst dword ptr [esi + 0xc0]
// 00646b78  d996c4000000         fst dword ptr [esi + 0xc4]
// 00646b7e  8bc6                 mov eax, esi
// 00646b80  d996c8000000         fst dword ptr [esi + 0xc8]
// 00646b86  d996cc000000         fst dword ptr [esi + 0xcc]
// 00646b8c  d996d0000000         fst dword ptr [esi + 0xd0]
// 00646b92  d996d4000000         fst dword ptr [esi + 0xd4]
// 00646b98  d996d8000000         fst dword ptr [esi + 0xd8]
// 00646b9e  d996dc000000         fst dword ptr [esi + 0xdc]
// 00646ba4  d996e0000000         fst dword ptr [esi + 0xe0]
// 00646baa  d996e4000000         fst dword ptr [esi + 0xe4]
// 00646bb0  d996e8000000         fst dword ptr [esi + 0xe8]
// 00646bb6  d996ec000000         fst dword ptr [esi + 0xec]
// 00646bbc  d996f0000000         fst dword ptr [esi + 0xf0]
// 00646bc2  d996f4000000         fst dword ptr [esi + 0xf4]
// 00646bc8  d996f8000000         fst dword ptr [esi + 0xf8]
// 00646bce  d996fc000000         fst dword ptr [esi + 0xfc]
// 00646bd4  d99600010000         fst dword ptr [esi + 0x100]
// 00646bda  d99604010000         fst dword ptr [esi + 0x104]
// 00646be0  d99608010000         fst dword ptr [esi + 0x108]
// 00646be6  d9960c010000         fst dword ptr [esi + 0x10c]
// 00646bec  d99610010000         fst dword ptr [esi + 0x110]
// 00646bf2  d99614010000         fst dword ptr [esi + 0x114]
// 00646bf8  d99618010000         fst dword ptr [esi + 0x118]
// 00646bfe  d99e1c010000         fstp dword ptr [esi + 0x11c]
// 00646c04  5e                   pop esi
// 00646c05  c3                   ret 
// library rbxgs/v8world\GlueJoint.cpp (function ??0GlueJoint@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/GlueJoint.cpp
