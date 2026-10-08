// roc 2010-06 00910120  unit: G3D::GFont  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00910120
//
// 00910120  6a01                 push 1
// 00910122  ff15203bc000         call dword ptr [0xc03b20]
// 00910128  50                   push eax
// 00910129  a3f0cbc200           mov dword ptr [0xc2cbf0], eax
// 0091012e  ff15283bc000         call dword ptr [0xc03b28]
// 00910134  ff152c3bc000         call dword ptr [0xc03b2c]
// 0091013a  6876890000           push 0x8976
// 0091013f  68c0840000           push 0x84c0
// 00910144  6821890000           push 0x8921
// 00910149  ff15383bc000         call dword ptr [0xc03b38]
// 0091014f  6a00                 push 0
// 00910151  6805190000           push 0x1905
// 00910156  6821890000           push 0x8921
// 0091015b  6a00                 push 0
// 0091015d  6a01                 push 1
// 0091015f  6824890000           push 0x8924
// 00910164  6861890000           push 0x8961
// 00910169  ff15403bc000         call dword ptr [0xc03b40]
// 0091016f  6876890000           push 0x8976
// 00910174  6821890000           push 0x8921
// 00910179  6822890000           push 0x8922
// 0091017e  ff15383bc000         call dword ptr [0xc03b38]
// 00910184  6876890000           push 0x8976
// 00910189  6824890000           push 0x8924
// 0091018e  6823890000           push 0x8923
// 00910193  ff15383bc000         call dword ptr [0xc03b38]
// 00910199  6a00                 push 0
// 0091019b  6a00                 push 0
// 0091019d  6823890000           push 0x8923
// 009101a2  6a00                 push 0
// 009101a4  6a00                 push 0
// 009101a6  6822890000           push 0x8922
// 009101ab  6a00                 push 0
// 009101ad  6a00                 push 0
// 009101af  6821890000           push 0x8921
// 009101b4  6863890000           push 0x8963
// 009101b9  ff15443bc000         call dword ptr [0xc03b44]
// 009101bf  ff25303bc000         jmp dword ptr [0xc03b30]
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS14ATI@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
