// roc 2010-06 00487e20  unit: G3D::Win32Window  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487e20
//
// 00487e20  807c240400           cmp byte ptr [esp + 4], 0
// 00487e25  7409                 je 0x487e30
// 00487e27  c60602               mov byte ptr [esi], 2
// 00487e2a  c6460201             mov byte ptr [esi + 2], 1
// 00487e2e  eb07                 jmp 0x487e37
// 00487e30  c60603               mov byte ptr [esi], 3
// 00487e33  c6460200             mov byte ptr [esi + 2], 0
// 00487e37  b820000000           mov eax, 0x20
// 00487e3c  685037c000           push 0xc03750
// 00487e41  66894610             mov word ptr [esi + 0x10], ax
// 00487e45  894e08               mov dword ptr [esi + 8], ecx
// 00487e48  c6460400             mov byte ptr [esi + 4], 0
// 00487e4c  ff158cbb9e00         call dword ptr [0x9ebb8c]
// 00487e52  b980000000           mov ecx, 0x80
// 00487e57  33c0                 xor eax, eax
// 00487e59  840df037c000         test byte ptr [0xc037f0], cl
// 00487e5f  7403                 je 0x487e64
// 00487e61  8d4181               lea eax, [ecx - 0x7f]
// 00487e64  840df137c000         test byte ptr [0xc037f1], cl
// 00487e6a  7403                 je 0x487e6f
// 00487e6c  83c802               or eax, 2
// 00487e6f  840df237c000         test byte ptr [0xc037f2], cl
// 00487e75  7403                 je 0x487e7a
// 00487e77  83c840               or eax, 0x40
// 00487e7a  840df337c000         test byte ptr [0xc037f3], cl
// 00487e80  7402                 je 0x487e84
// 00487e82  0bc1                 or eax, ecx
// 00487e84  840df437c000         test byte ptr [0xc037f4], cl
// 00487e8a  7405                 je 0x487e91
// 00487e8c  0d00010000           or eax, 0x100
// 00487e91  840df537c000         test byte ptr [0xc037f5], cl
// 00487e97  7405                 je 0x487e9e
// 00487e99  0d00020000           or eax, 0x200
// 00487e9e  89460c               mov dword ptr [esi + 0xc], eax
// 00487ea1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?mouseButton@G3D@@YAX_NHKAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
