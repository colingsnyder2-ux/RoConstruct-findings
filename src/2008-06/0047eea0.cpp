// from server: 100% by auto
// roc 2008-06 0047eea0  unit: G3D::Win32Window  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047eea0
//
// 0047eea0  83ec08               sub esp, 8
// 0047eea3  56                   push esi
// 0047eea4  8d442404             lea eax, [esp + 4]
// 0047eea8  50                   push eax
// 0047eea9  8bf1                 mov esi, ecx
// 0047eeab  ff159c2d8000         call dword ptr [0x802d9c]
// 0047eeb1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047eeb5  2b8ecc010000         sub ecx, dword ptr [esi + 0x1cc]
// 0047eebb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047eebf  8b442408             mov eax, dword ptr [esp + 8]
// 0047eec3  890a                 mov dword ptr [edx], ecx
// 0047eec5  2b86d0010000         sub eax, dword ptr [esi + 0x1d0]
// 0047eecb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047eecf  8901                 mov dword ptr [ecx], eax
// 0047eed1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047eed5  c60100               mov byte ptr [ecx], 0
// 0047eed8  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0047eedf  0f95c2               setne dl
// 0047eee2  8811                 mov byte ptr [ecx], dl
// 0047eee4  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0047eeeb  0f95c0               setne al
// 0047eeee  02c0                 add al, al
// 0047eef0  0ac2                 or al, dl
// 0047eef2  8801                 mov byte ptr [ecx], al
// 0047eef4  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0047eefb  5e                   pop esi
// 0047eefc  0f95c2               setne dl
// 0047eeff  02d2                 add dl, dl
// 0047ef01  02d2                 add dl, dl
// 0047ef03  0ad0                 or dl, al
// 0047ef05  8811                 mov byte ptr [ecx], dl
// 0047ef07  83c408               add esp, 8
// 0047ef0a  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getRelativeMouseState@Win32Window@G3D@@UBEXAAH0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
