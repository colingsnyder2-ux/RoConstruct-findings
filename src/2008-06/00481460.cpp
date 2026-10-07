// roc 2008-06 00481460  unit: G3D::Win32Window  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00481460
//
// 00481460  a1ccf79600           mov eax, dword ptr [0x96f7cc]
// 00481465  83ec28               sub esp, 0x28
// 00481468  56                   push esi
// 00481469  33f6                 xor esi, esi
// 0048146b  3bc6                 cmp eax, esi
// 0048146d  757d                 jne 0x4814ec
// 0048146f  56                   push esi
// 00481470  c74424082b000000     mov dword ptr [esp + 8], 0x2b
// 00481478  c744240c20134800     mov dword ptr [esp + 0xc], 0x481320
// 00481480  89742414             mov dword ptr [esp + 0x14], esi
// 00481484  89742410             mov dword ptr [esp + 0x10], esi
// 00481488  ff15bc218000         call dword ptr [0x8021bc]
// 0048148e  68007f0000           push 0x7f00
// 00481493  56                   push esi
// 00481494  8944241c             mov dword ptr [esp + 0x1c], eax
// 00481498  89742420             mov dword ptr [esp + 0x20], esi
// 0048149c  ff15d02d8000         call dword ptr [0x802dd0]
// 004814a2  8944241c             mov dword ptr [esp + 0x1c], eax
// 004814a6  8d442404             lea eax, [esp + 4]
// 004814aa  50                   push eax
// 004814ab  89742424             mov dword ptr [esp + 0x24], esi
// 004814af  89742428             mov dword ptr [esp + 0x28], esi
// 004814b3  c744242c00f48100     mov dword ptr [esp + 0x2c], 0x81f400
// 004814bb  ff15342d8000         call dword ptr [0x802d34]
// 004814c1  6685c0               test ax, ax
// 004814c4  751d                 jne 0x4814e3
// 004814c6  68c8f38100           push 0x81f3c8
// 004814cb  e8e0880800           call 0x509db0
// 004814d0  50                   push eax
// 004814d1  e84a8c0800           call 0x50a120
// 004814d6  83c408               add esp, 8
// 004814d9  b8c0f38100           mov eax, 0x81f3c0
// 004814de  5e                   pop esi
// 004814df  83c428               add esp, 0x28
// 004814e2  c3                   ret 
// 004814e3  8b442428             mov eax, dword ptr [esp + 0x28]
// 004814e7  a3ccf79600           mov dword ptr [0x96f7cc], eax
// 004814ec  5e                   pop esi
// 004814ed  83c428               add esp, 0x28
// 004814f0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?G3DWndClass@G3D@@YAPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
