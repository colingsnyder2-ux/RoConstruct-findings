// roc 2007-03 00500840  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500840
//
// 00500840  b801000000           mov eax, 1
// 00500845  8405ecaf8b00         test byte ptr [0x8bafec], al
// 0050084b  751c                 jne 0x500869
// 0050084d  d9e8                 fld1 
// 0050084f  0905ecaf8b00         or dword ptr [0x8bafec], eax
// 00500855  d915e0af8b00         fst dword ptr [0x8bafe0]
// 0050085b  d91de4af8b00         fstp dword ptr [0x8bafe4]
// 00500861  d9ee                 fldz 
// 00500863  d91de8af8b00         fstp dword ptr [0x8bafe8]
// 00500869  b8e0af8b00           mov eax, 0x8bafe0
// 0050086e  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ?yellow@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
