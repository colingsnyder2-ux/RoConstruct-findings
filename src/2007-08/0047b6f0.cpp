// roc 2007-08 0047b6f0  unit: G3D::Win32Window  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b6f0
//
// 0047b6f0  53                   push ebx
// 0047b6f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0047b6f5  56                   push esi
// 0047b6f6  57                   push edi
// 0047b6f7  8bf9                 mov edi, ecx
// 0047b6f9  8db788000000         lea esi, [edi + 0x88]
// 0047b6ff  53                   push ebx
// 0047b700  56                   push esi
// 0047b701  ff1530e67700         call dword ptr [0x77e630]
// 0047b707  83c408               add esp, 8
// 0047b70a  84c0                 test al, al
// 0047b70c  7437                 je 0x47b745
// 0047b70e  53                   push ebx
// 0047b70f  8bce                 mov ecx, esi
// 0047b711  ff1590e67700         call dword ptr [0x77e690]
// 0047b717  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0047b71b  7217                 jb 0x47b734
// 0047b71d  8b7604               mov esi, dword ptr [esi + 4]
// 0047b720  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 0047b726  56                   push esi
// 0047b727  50                   push eax
// 0047b728  ff1550ed7700         call dword ptr [0x77ed50]
// 0047b72e  5f                   pop edi
// 0047b72f  5e                   pop esi
// 0047b730  5b                   pop ebx
// 0047b731  c20400               ret 4
// 0047b734  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 0047b73a  83c604               add esi, 4
// 0047b73d  56                   push esi
// 0047b73e  50                   push eax
// 0047b73f  ff1550ed7700         call dword ptr [0x77ed50]
// 0047b745  5f                   pop edi
// 0047b746  5e                   pop esi
// 0047b747  5b                   pop ebx
// 0047b748  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setCaption@Win32Window@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
