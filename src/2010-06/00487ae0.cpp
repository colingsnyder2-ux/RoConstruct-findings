// from server: 100% by auto
// roc 2010-06 00487ae0  unit: G3D::Win32Window  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487ae0
//
// 00487ae0  83ec08               sub esp, 8
// 00487ae3  56                   push esi
// 00487ae4  8d442404             lea eax, [esp + 4]
// 00487ae8  50                   push eax
// 00487ae9  8bf1                 mov esi, ecx
// 00487aeb  ff1574bc9e00         call dword ptr [0x9ebc74]
// 00487af1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00487af5  2b8ecc010000         sub ecx, dword ptr [esi + 0x1cc]
// 00487afb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00487aff  8b442408             mov eax, dword ptr [esp + 8]
// 00487b03  890a                 mov dword ptr [edx], ecx
// 00487b05  2b86d0010000         sub eax, dword ptr [esi + 0x1d0]
// 00487b0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00487b0f  8901                 mov dword ptr [ecx], eax
// 00487b11  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00487b15  c60100               mov byte ptr [ecx], 0
// 00487b18  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00487b1f  0f95c2               setne dl
// 00487b22  8811                 mov byte ptr [ecx], dl
// 00487b24  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00487b2b  0f95c0               setne al
// 00487b2e  02c0                 add al, al
// 00487b30  0ac2                 or al, dl
// 00487b32  8801                 mov byte ptr [ecx], al
// 00487b34  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 00487b3b  5e                   pop esi
// 00487b3c  0f95c2               setne dl
// 00487b3f  02d2                 add dl, dl
// 00487b41  02d2                 add dl, dl
// 00487b43  0ad0                 or dl, al
// 00487b45  8811                 mov byte ptr [ecx], dl
// 00487b47  83c408               add esp, 8
// 00487b4a  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getRelativeMouseState@Win32Window@G3D@@UBEXAAH0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
