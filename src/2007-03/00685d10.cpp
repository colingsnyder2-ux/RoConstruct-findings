// roc 2007-03 00685d10  unit: seg_00680000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00685d10
//
// 00685d10  b801000000           mov eax, 1
// 00685d15  8405b4218c00         test byte ptr [0x8c21b4], al
// 00685d1b  7510                 jne 0x685d2d
// 00685d1d  0905b4218c00         or dword ptr [0x8c21b4], eax
// 00685d23  b920218c00           mov ecx, 0x8c2120
// 00685d28  e8b3ffffff           call 0x685ce0
// 00685d2d  b820218c00           mov eax, 0x8c2120
// 00685d32  c3                   ret 
// library rbxgs/util\Extents.cpp (function ?negativeInfiniteExtents@Extents@RBX@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
