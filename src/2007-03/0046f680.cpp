// roc 2007-03 0046f680  unit: seg_00460000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f680
//
// 0046f680  b801000000           mov eax, 1
// 0046f685  840514778b00         test byte ptr [0x8b7714], al
// 0046f68b  7510                 jne 0x46f69d
// 0046f68d  090514778b00         or dword ptr [0x8b7714], eax
// 0046f693  b9f8768b00           mov ecx, 0x8b76f8
// 0046f698  e8a3ffffff           call 0x46f640
// 0046f69d  b8f8768b00           mov eax, 0x8b76f8
// 0046f6a2  c3                   ret 
// library rbxgs/util\Extents.cpp (function ?negativeInfiniteExtents@Extents@RBX@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
