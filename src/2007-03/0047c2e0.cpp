// roc 2007-03 0047c2e0  unit: seg_00470000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047c2e0
//
// 0047c2e0  a16c7f8b00           mov eax, dword ptr [0x8b7f6c]
// 0047c2e5  83ec28               sub esp, 0x28
// 0047c2e8  56                   push esi
// 0047c2e9  33f6                 xor esi, esi
// 0047c2eb  3bc6                 cmp eax, esi
// 0047c2ed  757d                 jne 0x47c36c
// 0047c2ef  56                   push esi
// 0047c2f0  c74424082b000000     mov dword ptr [esp + 8], 0x2b
// 0047c2f8  c744240ca0c14700     mov dword ptr [esp + 0xc], 0x47c1a0
// 0047c300  89742414             mov dword ptr [esp + 0x14], esi
// 0047c304  89742410             mov dword ptr [esp + 0x10], esi
// 0047c308  ff1588d27700         call dword ptr [0x77d288]
// 0047c30e  68007f0000           push 0x7f00
// 0047c313  56                   push esi
// 0047c314  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047c318  89742420             mov dword ptr [esp + 0x20], esi
// 0047c31c  ff15f0ec7700         call dword ptr [0x77ecf0]
// 0047c322  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047c326  8d442404             lea eax, [esp + 4]
// 0047c32a  50                   push eax
// 0047c32b  89742424             mov dword ptr [esp + 0x24], esi
// 0047c32f  89742428             mov dword ptr [esp + 0x28], esi
// 0047c333  c744242cf07d7900     mov dword ptr [esp + 0x2c], 0x797df0
// 0047c33b  ff1594ed7700         call dword ptr [0x77ed94]
// 0047c341  6685c0               test ax, ax
// 0047c344  751d                 jne 0x47c363
// 0047c346  68b87d7900           push 0x797db8
// 0047c34b  e850970700           call 0x4f5aa0
// 0047c350  50                   push eax
// 0047c351  e85a920700           call 0x4f55b0
// 0047c356  83c408               add esp, 8
// 0047c359  b8b07d7900           mov eax, 0x797db0
// 0047c35e  5e                   pop esi
// 0047c35f  83c428               add esp, 0x28
// 0047c362  c3                   ret 
// 0047c363  8b442428             mov eax, dword ptr [esp + 0x28]
// 0047c367  a36c7f8b00           mov dword ptr [0x8b7f6c], eax
// 0047c36c  5e                   pop esi
// 0047c36d  83c428               add esp, 0x28
// 0047c370  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?G3DWndClass@G3D@@YAPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
