// roc 2007-08 0060a910  unit: RBX::WeldJoint  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a910
//
// 0060a910  56                   push esi
// 0060a911  6a04                 push 4
// 0060a913  8bf1                 mov esi, ecx
// 0060a915  e856fdffff           call 0x60a670
// 0060a91a  d9ee                 fldz 
// 0060a91c  c706542e7c00         mov dword ptr [esi], 0x7c2e54
// 0060a922  d996c0000000         fst dword ptr [esi + 0xc0]
// 0060a928  d996c4000000         fst dword ptr [esi + 0xc4]
// 0060a92e  8bc6                 mov eax, esi
// 0060a930  d996c8000000         fst dword ptr [esi + 0xc8]
// 0060a936  d996cc000000         fst dword ptr [esi + 0xcc]
// 0060a93c  d996d0000000         fst dword ptr [esi + 0xd0]
// 0060a942  d996d4000000         fst dword ptr [esi + 0xd4]
// 0060a948  d996d8000000         fst dword ptr [esi + 0xd8]
// 0060a94e  d996dc000000         fst dword ptr [esi + 0xdc]
// 0060a954  d996e0000000         fst dword ptr [esi + 0xe0]
// 0060a95a  d996e4000000         fst dword ptr [esi + 0xe4]
// 0060a960  d996e8000000         fst dword ptr [esi + 0xe8]
// 0060a966  d996ec000000         fst dword ptr [esi + 0xec]
// 0060a96c  d996f0000000         fst dword ptr [esi + 0xf0]
// 0060a972  d996f4000000         fst dword ptr [esi + 0xf4]
// 0060a978  d996f8000000         fst dword ptr [esi + 0xf8]
// 0060a97e  d996fc000000         fst dword ptr [esi + 0xfc]
// 0060a984  d99600010000         fst dword ptr [esi + 0x100]
// 0060a98a  d99604010000         fst dword ptr [esi + 0x104]
// 0060a990  d99608010000         fst dword ptr [esi + 0x108]
// 0060a996  d9960c010000         fst dword ptr [esi + 0x10c]
// 0060a99c  d99610010000         fst dword ptr [esi + 0x110]
// 0060a9a2  d99614010000         fst dword ptr [esi + 0x114]
// 0060a9a8  d99618010000         fst dword ptr [esi + 0x118]
// 0060a9ae  d99e1c010000         fstp dword ptr [esi + 0x11c]
// 0060a9b4  5e                   pop esi
// 0060a9b5  c3                   ret 
// library rbxgs/v8world\GlueJoint.cpp (function ??0GlueJoint@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/GlueJoint.cpp
