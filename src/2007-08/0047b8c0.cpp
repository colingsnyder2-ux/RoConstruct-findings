// roc 2007-08 0047b8c0  unit: G3D::Win32Window  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b8c0
//
// 0047b8c0  83ec08               sub esp, 8
// 0047b8c3  56                   push esi
// 0047b8c4  8d442404             lea eax, [esp + 4]
// 0047b8c8  50                   push eax
// 0047b8c9  8bf1                 mov esi, ecx
// 0047b8cb  ff1554ec7700         call dword ptr [0x77ec54]
// 0047b8d1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047b8d5  2b8ecc010000         sub ecx, dword ptr [esi + 0x1cc]
// 0047b8db  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047b8df  8b442408             mov eax, dword ptr [esp + 8]
// 0047b8e3  890a                 mov dword ptr [edx], ecx
// 0047b8e5  2b86d0010000         sub eax, dword ptr [esi + 0x1d0]
// 0047b8eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047b8ef  8901                 mov dword ptr [ecx], eax
// 0047b8f1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047b8f5  c60100               mov byte ptr [ecx], 0
// 0047b8f8  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0047b8ff  0f95c2               setne dl
// 0047b902  8811                 mov byte ptr [ecx], dl
// 0047b904  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0047b90b  0f95c0               setne al
// 0047b90e  02c0                 add al, al
// 0047b910  0ac2                 or al, dl
// 0047b912  8801                 mov byte ptr [ecx], al
// 0047b914  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0047b91b  5e                   pop esi
// 0047b91c  0f95c2               setne dl
// 0047b91f  02d2                 add dl, dl
// 0047b921  02d2                 add dl, dl
// 0047b923  0ad0                 or dl, al
// 0047b925  8811                 mov byte ptr [ecx], dl
// 0047b927  83c408               add esp, 8
// 0047b92a  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getRelativeMouseState@Win32Window@G3D@@UBEXAAH0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
