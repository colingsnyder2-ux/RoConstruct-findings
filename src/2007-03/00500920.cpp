// roc 2007-03 00500920  unit: seg_00500000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500920
//
// 00500920  b801000000           mov eax, 1
// 00500925  84052cb08b00         test byte ptr [0x8bb02c], al
// 0050092b  751a                 jne 0x500947
// 0050092d  d9e8                 fld1 
// 0050092f  09052cb08b00         or dword ptr [0x8bb02c], eax
// 00500935  d91520b08b00         fst dword ptr [0x8bb020]
// 0050093b  d91524b08b00         fst dword ptr [0x8bb024]
// 00500941  d91d28b08b00         fstp dword ptr [0x8bb028]
// 00500947  b820b08b00           mov eax, 0x8bb020
// 0050094c  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?one@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
