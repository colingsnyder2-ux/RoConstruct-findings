// roc 2010-06 00489fe0  unit: G3D::Win32Window  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00489fe0
//
// 00489fe0  a18c38c000           mov eax, dword ptr [0xc0388c]
// 00489fe5  83ec28               sub esp, 0x28
// 00489fe8  56                   push esi
// 00489fe9  33f6                 xor esi, esi
// 00489feb  3bc6                 cmp eax, esi
// 00489fed  757d                 jne 0x48a06c
// 00489fef  56                   push esi
// 00489ff0  c74424082b000000     mov dword ptr [esp + 8], 0x2b
// 00489ff8  c744240ca09e4800     mov dword ptr [esp + 0xc], 0x489ea0
// 0048a000  89742414             mov dword ptr [esp + 0x14], esi
// 0048a004  89742410             mov dword ptr [esp + 0x10], esi
// 0048a008  ff158ca39e00         call dword ptr [0x9ea38c]
// 0048a00e  68007f0000           push 0x7f00
// 0048a013  56                   push esi
// 0048a014  8944241c             mov dword ptr [esp + 0x1c], eax
// 0048a018  89742420             mov dword ptr [esp + 0x20], esi
// 0048a01c  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 0048a022  8944241c             mov dword ptr [esp + 0x1c], eax
// 0048a026  8d442404             lea eax, [esp + 4]
// 0048a02a  50                   push eax
// 0048a02b  89742424             mov dword ptr [esp + 0x24], esi
// 0048a02f  89742428             mov dword ptr [esp + 0x28], esi
// 0048a033  c744242c5839a100     mov dword ptr [esp + 0x2c], 0xa13958
// 0048a03b  ff1578bb9e00         call dword ptr [0x9ebb78]
// 0048a041  6685c0               test ax, ax
// 0048a044  751d                 jne 0x48a063
// 0048a046  682039a100           push 0xa13920
// 0048a04b  e8a0540c00           call 0x54f4f0
// 0048a050  50                   push eax
// 0048a051  e80a580c00           call 0x54f860
// 0048a056  83c408               add esp, 8
// 0048a059  b81839a100           mov eax, 0xa13918
// 0048a05e  5e                   pop esi
// 0048a05f  83c428               add esp, 0x28
// 0048a062  c3                   ret 
// 0048a063  8b442428             mov eax, dword ptr [esp + 0x28]
// 0048a067  a38c38c000           mov dword ptr [0xc0388c], eax
// 0048a06c  5e                   pop esi
// 0048a06d  83c428               add esp, 0x28
// 0048a070  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?G3DWndClass@G3D@@YAPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
