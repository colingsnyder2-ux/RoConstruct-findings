// roc 2007-03 0047a250  unit: seg_00470000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a250
//
// 0047a250  83ec08               sub esp, 8
// 0047a253  56                   push esi
// 0047a254  8d442404             lea eax, [esp + 4]
// 0047a258  50                   push eax
// 0047a259  8bf1                 mov esi, ecx
// 0047a25b  ff1524ed7700         call dword ptr [0x77ed24]
// 0047a261  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047a265  2b8ecc010000         sub ecx, dword ptr [esi + 0x1cc]
// 0047a26b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047a26f  8b442408             mov eax, dword ptr [esp + 8]
// 0047a273  890a                 mov dword ptr [edx], ecx
// 0047a275  2b86d0010000         sub eax, dword ptr [esi + 0x1d0]
// 0047a27b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047a27f  8901                 mov dword ptr [ecx], eax
// 0047a281  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047a285  c60100               mov byte ptr [ecx], 0
// 0047a288  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0047a28f  0f95c2               setne dl
// 0047a292  8811                 mov byte ptr [ecx], dl
// 0047a294  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0047a29b  0f95c0               setne al
// 0047a29e  02c0                 add al, al
// 0047a2a0  0ac2                 or al, dl
// 0047a2a2  8801                 mov byte ptr [ecx], al
// 0047a2a4  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0047a2ab  5e                   pop esi
// 0047a2ac  0f95c2               setne dl
// 0047a2af  02d2                 add dl, dl
// 0047a2b1  02d2                 add dl, dl
// 0047a2b3  0ad0                 or dl, al
// 0047a2b5  8811                 mov byte ptr [ecx], dl
// 0047a2b7  83c408               add esp, 8
// 0047a2ba  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?getRelativeMouseState@Win32Window@G3D@@UBEXAAH0AAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
