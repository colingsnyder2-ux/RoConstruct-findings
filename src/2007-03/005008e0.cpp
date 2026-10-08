// roc 2007-03 005008e0  unit: seg_00500000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005008e0
//
// 005008e0  b801000000           mov eax, 1
// 005008e5  84051cb08b00         test byte ptr [0x8bb01c], al
// 005008eb  751e                 jne 0x50090b
// 005008ed  d905d0037a00         fld dword ptr [0x7a03d0]
// 005008f3  09051cb08b00         or dword ptr [0x8bb01c], eax
// 005008f9  d91510b08b00         fst dword ptr [0x8bb010]
// 005008ff  d91514b08b00         fst dword ptr [0x8bb014]
// 00500905  d91d18b08b00         fstp dword ptr [0x8bb018]
// 0050090b  b810b08b00           mov eax, 0x8bb010
// 00500910  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ?gray@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
