// roc 2007-03 0047a660  unit: seg_00470000  size: 868 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a660
//
// 0047a660  680c050000           push 0x50c
// 0047a665  6a00                 push 0
// 0047a667  6820788b00           push 0x8b7820
// 0047a66c  e8ab491a00           call 0x61f01c
// 0047a671  b860000000           mov eax, 0x60
// 0047a676  83c40c               add esp, 0xc
// 0047a679  c70540788b0008000000 mov dword ptr [0x8b7840], 8
// 0047a683  c70544788b0009000000 mov dword ptr [0x8b7844], 9
// 0047a68d  c70550788b000c000000 mov dword ptr [0x8b7850], 0xc
// 0047a697  c70554788b000d000000 mov dword ptr [0x8b7854], 0xd
// 0047a6a1  c7056c788b0013000000 mov dword ptr [0x8b786c], 0x13
// 0047a6ab  c7058c788b001b000000 mov dword ptr [0x8b788c], 0x1b
// 0047a6b5  c705a0788b0020000000 mov dword ptr [0x8b78a0], 0x20
// 0047a6bf  c705987b8b0027000000 mov dword ptr [0x8b7b98], 0x27
// 0047a6c9  c705107b8b002c000000 mov dword ptr [0x8b7b10], 0x2c
// 0047a6d3  c705147b8b002d000000 mov dword ptr [0x8b7b14], 0x2d
// 0047a6dd  c705187b8b002e000000 mov dword ptr [0x8b7b18], 0x2e
// 0047a6e7  c7051c7b8b002f000000 mov dword ptr [0x8b7b1c], 0x2f
// 0047a6f1  c705e0788b0030000000 mov dword ptr [0x8b78e0], 0x30
// 0047a6fb  c705e4788b0031000000 mov dword ptr [0x8b78e4], 0x31
// 0047a705  c705e8788b0032000000 mov dword ptr [0x8b78e8], 0x32
// 0047a70f  c705ec788b0033000000 mov dword ptr [0x8b78ec], 0x33
// 0047a719  c705f0788b0034000000 mov dword ptr [0x8b78f0], 0x34
// 0047a723  c705f4788b0035000000 mov dword ptr [0x8b78f4], 0x35
// 0047a72d  c705f8788b0036000000 mov dword ptr [0x8b78f8], 0x36
// 0047a737  c705fc788b0037000000 mov dword ptr [0x8b78fc], 0x37
// 0047a741  c70500798b0038000000 mov dword ptr [0x8b7900], 0x38
// 0047a74b  c70504798b0039000000 mov dword ptr [0x8b7904], 0x39
// 0047a755  c705087b8b003b000000 mov dword ptr [0x8b7b08], 0x3b
// 0047a75f  c7050c7b8b003d000000 mov dword ptr [0x8b7b0c], 0x3d
// 0047a769  c7058c7b8b005b000000 mov dword ptr [0x8b7b8c], 0x5b
// 0047a773  c705907b8b005c000000 mov dword ptr [0x8b7b90], 0x5c
// 0047a77d  c705947b8b005d000000 mov dword ptr [0x8b7b94], 0x5d
// 0047a787  a3207b8b00           mov dword ptr [0x8b7b20], eax
// 0047a78c  a39c7b8b00           mov dword ptr [0x8b7b9c], eax
// 0047a791  c705d8788b007f000000 mov dword ptr [0x8b78d8], 0x7f
// 0047a79b  c705a0798b0000010000 mov dword ptr [0x8b79a0], 0x100
// 0047a7a5  c705a4798b0001010000 mov dword ptr [0x8b79a4], 0x101
// 0047a7af  c705a8798b0002010000 mov dword ptr [0x8b79a8], 0x102
// 0047a7b9  c705ac798b0003010000 mov dword ptr [0x8b79ac], 0x103
// 0047a7c3  c705b0798b0004010000 mov dword ptr [0x8b79b0], 0x104
// 0047a7cd  c705b4798b0005010000 mov dword ptr [0x8b79b4], 0x105
// 0047a7d7  c705b8798b0006010000 mov dword ptr [0x8b79b8], 0x106
// 0047a7e1  c705bc798b0007010000 mov dword ptr [0x8b79bc], 0x107
// 0047a7eb  c705c0798b0008010000 mov dword ptr [0x8b79c0], 0x108
// 0047a7f5  c705c4798b0009010000 mov dword ptr [0x8b79c4], 0x109
// 0047a7ff  c705d8798b000a010000 mov dword ptr [0x8b79d8], 0x10a
// 0047a809  c705dc798b000b010000 mov dword ptr [0x8b79dc], 0x10b
// 0047a813  c705c8798b000c010000 mov dword ptr [0x8b79c8], 0x10c
// 0047a81d  c705d4798b000d010000 mov dword ptr [0x8b79d4], 0x10d
// 0047a827  c705cc798b000e010000 mov dword ptr [0x8b79cc], 0x10e
// 0047a831  c705b8788b0011010000 mov dword ptr [0x8b78b8], 0x111
// 0047a83b  c705c0788b0012010000 mov dword ptr [0x8b78c0], 0x112
// 0047a845  c705bc788b0013010000 mov dword ptr [0x8b78bc], 0x113
// 0047a84f  c705b4788b0014010000 mov dword ptr [0x8b78b4], 0x114
// 0047a859  c705d4788b0015010000 mov dword ptr [0x8b78d4], 0x115
// 0047a863  c705b0788b0016010000 mov dword ptr [0x8b78b0], 0x116
// 0047a86d  c705ac788b0017010000 mov dword ptr [0x8b78ac], 0x117
// 0047a877  c705a4788b0018010000 mov dword ptr [0x8b78a4], 0x118
// 0047a881  c705a8788b0019010000 mov dword ptr [0x8b78a8], 0x119
// 0047a88b  c705e0798b001a010000 mov dword ptr [0x8b79e0], 0x11a
// 0047a895  c705e4798b001b010000 mov dword ptr [0x8b79e4], 0x11b
// 0047a89f  c705e8798b001c010000 mov dword ptr [0x8b79e8], 0x11c
// 0047a8a9  c705ec798b001d010000 mov dword ptr [0x8b79ec], 0x11d
// 0047a8b3  c705f0798b001e010000 mov dword ptr [0x8b79f0], 0x11e
// 0047a8bd  c705f4798b001f010000 mov dword ptr [0x8b79f4], 0x11f
// 0047a8c7  c705f8798b0020010000 mov dword ptr [0x8b79f8], 0x120
// 0047a8d1  c705fc798b0021010000 mov dword ptr [0x8b79fc], 0x121
// 0047a8db  c705007a8b0022010000 mov dword ptr [0x8b7a00], 0x122
// 0047a8e5  c705047a8b0023010000 mov dword ptr [0x8b7a04], 0x123
// 0047a8ef  c705087a8b0024010000 mov dword ptr [0x8b7a08], 0x124
// 0047a8f9  c7050c7a8b0025010000 mov dword ptr [0x8b7a0c], 0x125
// 0047a903  c705107a8b0026010000 mov dword ptr [0x8b7a10], 0x126
// 0047a90d  c705147a8b0027010000 mov dword ptr [0x8b7a14], 0x127
// 0047a917  c705187a8b0028010000 mov dword ptr [0x8b7a18], 0x128
// 0047a921  c705607a8b002c010000 mov dword ptr [0x8b7a60], 0x12c
// 0047a92b  c70570788b002d010000 mov dword ptr [0x8b7870], 0x12d
// 0047a935  c705647a8b002e010000 mov dword ptr [0x8b7a64], 0x12e
// 0047a93f  c705a47a8b002f010000 mov dword ptr [0x8b7aa4], 0x12f
// 0047a949  c705a07a8b0030010000 mov dword ptr [0x8b7aa0], 0x130
// 0047a953  c705ac7a8b0031010000 mov dword ptr [0x8b7aac], 0x131
// 0047a95d  b83c010000           mov eax, 0x13c
// 0047a962  c705a87a8b0032010000 mov dword ptr [0x8b7aa8], 0x132
// 0047a96c  c705b47a8b0033010000 mov dword ptr [0x8b7ab4], 0x133
// 0047a976  c705b07a8b0034010000 mov dword ptr [0x8b7ab0], 0x134
// 0047a980  c70590798b0038010000 mov dword ptr [0x8b7990], 0x138
// 0047a98a  c7058c798b0037010000 mov dword ptr [0x8b798c], 0x137
// 0047a994  c705dc788b003b010000 mov dword ptr [0x8b78dc], 0x13b
// 0047a99e  a3c8788b00           mov dword ptr [0x8b78c8], eax
// 0047a9a3  a3d0788b00           mov dword ptr [0x8b78d0], eax
// 0047a9a8  c7052c788b003e010000 mov dword ptr [0x8b782c], 0x13e
// 0047a9b2  c70594798b003f010000 mov dword ptr [0x8b7994], 0x13f
// 0047a9bc  c6052d7d8b0001       mov byte ptr [0x8b7d2d], 1
// 0047a9c3  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?initWin32KeyMap@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
