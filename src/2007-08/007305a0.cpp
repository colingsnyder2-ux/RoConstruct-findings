// roc 2007-08 007305a0  unit: seg_00730000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007305a0
//
// 007305a0  6a01                 push 1
// 007305a2  ff156cda8b00         call dword ptr [0x8bda6c]
// 007305a8  50                   push eax
// 007305a9  a304998c00           mov dword ptr [0x8c9904], eax
// 007305ae  ff1574da8b00         call dword ptr [0x8bda74]
// 007305b4  ff1578da8b00         call dword ptr [0x8bda78]
// 007305ba  6876890000           push 0x8976
// 007305bf  68c0840000           push 0x84c0
// 007305c4  6821890000           push 0x8921
// 007305c9  ff1584da8b00         call dword ptr [0x8bda84]
// 007305cf  6a00                 push 0
// 007305d1  6805190000           push 0x1905
// 007305d6  6821890000           push 0x8921
// 007305db  6a00                 push 0
// 007305dd  6a01                 push 1
// 007305df  6824890000           push 0x8924
// 007305e4  6861890000           push 0x8961
// 007305e9  ff158cda8b00         call dword ptr [0x8bda8c]
// 007305ef  6876890000           push 0x8976
// 007305f4  6821890000           push 0x8921
// 007305f9  6822890000           push 0x8922
// 007305fe  ff1584da8b00         call dword ptr [0x8bda84]
// 00730604  6876890000           push 0x8976
// 00730609  6824890000           push 0x8924
// 0073060e  6823890000           push 0x8923
// 00730613  ff1584da8b00         call dword ptr [0x8bda84]
// 00730619  6a00                 push 0
// 0073061b  6a00                 push 0
// 0073061d  6823890000           push 0x8923
// 00730622  6a00                 push 0
// 00730624  6a00                 push 0
// 00730626  6822890000           push 0x8922
// 0073062b  6a00                 push 0
// 0073062d  6a00                 push 0
// 0073062f  6821890000           push 0x8921
// 00730634  6863890000           push 0x8963
// 00730639  ff1590da8b00         call dword ptr [0x8bda90]
// 0073063f  ff257cda8b00         jmp dword ptr [0x8bda7c]
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS14ATI@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
