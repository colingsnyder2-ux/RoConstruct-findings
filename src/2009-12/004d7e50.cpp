// roc 2009-12 004d7e50  unit: G3D::Win32Window  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7e50
//
// 004d7e50  a1dcd8b700           mov eax, dword ptr [0xb7d8dc]
// 004d7e55  83ec28               sub esp, 0x28
// 004d7e58  56                   push esi
// 004d7e59  33f6                 xor esi, esi
// 004d7e5b  3bc6                 cmp eax, esi
// 004d7e5d  757d                 jne 0x4d7edc
// 004d7e5f  56                   push esi
// 004d7e60  c74424082b000000     mov dword ptr [esp + 8], 0x2b
// 004d7e68  c744240c107d4d00     mov dword ptr [esp + 0xc], 0x4d7d10
// 004d7e70  89742414             mov dword ptr [esp + 0x14], esi
// 004d7e74  89742410             mov dword ptr [esp + 0x10], esi
// 004d7e78  ff151cb29800         call dword ptr [0x98b21c]
// 004d7e7e  68007f0000           push 0x7f00
// 004d7e83  56                   push esi
// 004d7e84  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d7e88  89742420             mov dword ptr [esp + 0x20], esi
// 004d7e8c  ff1548ca9800         call dword ptr [0x98ca48]
// 004d7e92  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d7e96  8d442404             lea eax, [esp + 4]
// 004d7e9a  50                   push eax
// 004d7e9b  89742424             mov dword ptr [esp + 0x24], esi
// 004d7e9f  89742428             mov dword ptr [esp + 0x28], esi
// 004d7ea3  c744242c987c9b00     mov dword ptr [esp + 0x2c], 0x9b7c98
// 004d7eab  ff15d4c99800         call dword ptr [0x98c9d4]
// 004d7eb1  6685c0               test ax, ax
// 004d7eb4  751d                 jne 0x4d7ed3
// 004d7eb6  68607c9b00           push 0x9b7c60
// 004d7ebb  e8f03f1100           call 0x5ebeb0
// 004d7ec0  50                   push eax
// 004d7ec1  e85a431100           call 0x5ec220
// 004d7ec6  83c408               add esp, 8
// 004d7ec9  b8587c9b00           mov eax, 0x9b7c58
// 004d7ece  5e                   pop esi
// 004d7ecf  83c428               add esp, 0x28
// 004d7ed2  c3                   ret 
// 004d7ed3  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d7ed7  a3dcd8b700           mov dword ptr [0xb7d8dc], eax
// 004d7edc  5e                   pop esi
// 004d7edd  83c428               add esp, 0x28
// 004d7ee0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?G3DWndClass@G3D@@YAPBDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
