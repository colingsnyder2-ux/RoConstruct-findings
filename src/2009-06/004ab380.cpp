// roc 2009-06 004ab380  unit: G3D::Win32Window  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ab380
//
// 004ab380  a12cd1a300           mov eax, dword ptr [0xa3d12c]
// 004ab385  83ec28               sub esp, 0x28
// 004ab388  56                   push esi
// 004ab389  33f6                 xor esi, esi
// 004ab38b  3bc6                 cmp eax, esi
// 004ab38d  757d                 jne 0x4ab40c
// 004ab38f  56                   push esi
// 004ab390  c74424082b000000     mov dword ptr [esp + 8], 0x2b
// 004ab398  c744240c40b24a00     mov dword ptr [esp + 0xc], 0x4ab240
// 004ab3a0  89742414             mov dword ptr [esp + 0x14], esi
// 004ab3a4  89742410             mov dword ptr [esp + 0x10], esi
// 004ab3a8  ff15e4e18900         call dword ptr [0x89e1e4]
// 004ab3ae  68007f0000           push 0x7f00
// 004ab3b3  56                   push esi
// 004ab3b4  8944241c             mov dword ptr [esp + 0x1c], eax
// 004ab3b8  89742420             mov dword ptr [esp + 0x20], esi
// 004ab3bc  ff15b0ed8900         call dword ptr [0x89edb0]
// 004ab3c2  8944241c             mov dword ptr [esp + 0x1c], eax
// 004ab3c6  8d442404             lea eax, [esp + 4]
// 004ab3ca  50                   push eax
// 004ab3cb  89742424             mov dword ptr [esp + 0x24], esi
// 004ab3cf  89742428             mov dword ptr [esp + 0x28], esi
// 004ab3d3  c744242ca0238c00     mov dword ptr [esp + 0x2c], 0x8c23a0
// 004ab3db  ff1554ed8900         call dword ptr [0x89ed54]
// 004ab3e1  6685c0               test ax, ax
// 004ab3e4  751d                 jne 0x4ab403
// 004ab3e6  6868238c00           push 0x8c2368
// 004ab3eb  e8b0190c00           call 0x56cda0
// 004ab3f0  50                   push eax
// 004ab3f1  e81a1d0c00           call 0x56d110
// 004ab3f6  83c408               add esp, 8
// 004ab3f9  b860238c00           mov eax, 0x8c2360
// 004ab3fe  5e                   pop esi
// 004ab3ff  83c428               add esp, 0x28
// 004ab402  c3                   ret 
// 004ab403  8b442428             mov eax, dword ptr [esp + 0x28]
// 004ab407  a32cd1a300           mov dword ptr [0xa3d12c], eax
// 004ab40c  5e                   pop esi
// 004ab40d  83c428               add esp, 0x28
// 004ab410  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?G3DWndClass@G3D@@YAPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
