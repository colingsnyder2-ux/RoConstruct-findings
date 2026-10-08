// from server: 100% by auto
// roc 2007-08 0047ded0  unit: G3D::Win32Window  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047ded0
//
// 0047ded0  a1b4d88b00           mov eax, dword ptr [0x8bd8b4]
// 0047ded5  83ec28               sub esp, 0x28
// 0047ded8  56                   push esi
// 0047ded9  33f6                 xor esi, esi
// 0047dedb  3bc6                 cmp eax, esi
// 0047dedd  757d                 jne 0x47df5c
// 0047dedf  56                   push esi
// 0047dee0  c74424082b000000     mov dword ptr [esp + 8], 0x2b
// 0047dee8  c744240c90dd4700     mov dword ptr [esp + 0xc], 0x47dd90
// 0047def0  89742414             mov dword ptr [esp + 0x14], esi
// 0047def4  89742410             mov dword ptr [esp + 0x10], esi
// 0047def8  ff15c8d27700         call dword ptr [0x77d2c8]
// 0047defe  68007f0000           push 0x7f00
// 0047df03  56                   push esi
// 0047df04  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047df08  89742420             mov dword ptr [esp + 0x20], esi
// 0047df0c  ff1520ec7700         call dword ptr [0x77ec20]
// 0047df12  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047df16  8d442404             lea eax, [esp + 4]
// 0047df1a  50                   push eax
// 0047df1b  89742424             mov dword ptr [esp + 0x24], esi
// 0047df1f  89742428             mov dword ptr [esp + 0x28], esi
// 0047df23  c744242c288c7900     mov dword ptr [esp + 0x2c], 0x798c28
// 0047df2b  ff1598ed7700         call dword ptr [0x77ed98]
// 0047df31  6685c0               test ax, ax
// 0047df34  751d                 jne 0x47df53
// 0047df36  68f08b7900           push 0x798bf0
// 0047df3b  e8f03f0800           call 0x501f30
// 0047df40  50                   push eax
// 0047df41  e8fa3a0800           call 0x501a40
// 0047df46  83c408               add esp, 8
// 0047df49  b8e88b7900           mov eax, 0x798be8
// 0047df4e  5e                   pop esi
// 0047df4f  83c428               add esp, 0x28
// 0047df52  c3                   ret 
// 0047df53  8b442428             mov eax, dword ptr [esp + 0x28]
// 0047df57  a3b4d88b00           mov dword ptr [0x8bd8b4], eax
// 0047df5c  5e                   pop esi
// 0047df5d  83c428               add esp, 0x28
// 0047df60  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?G3DWndClass@G3D@@YAPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
