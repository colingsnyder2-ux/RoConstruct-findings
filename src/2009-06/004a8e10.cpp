// roc 2009-06 004a8e10  unit: G3D::Win32Window  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8e10
//
// 004a8e10  53                   push ebx
// 004a8e11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004a8e15  56                   push esi
// 004a8e16  57                   push edi
// 004a8e17  8bf9                 mov edi, ecx
// 004a8e19  8db788000000         lea esi, [edi + 0x88]
// 004a8e1f  53                   push ebx
// 004a8e20  56                   push esi
// 004a8e21  ff1530e48900         call dword ptr [0x89e430]
// 004a8e27  83c408               add esp, 8
// 004a8e2a  84c0                 test al, al
// 004a8e2c  7437                 je 0x4a8e65
// 004a8e2e  53                   push ebx
// 004a8e2f  8bce                 mov ecx, esi
// 004a8e31  ff1564e48900         call dword ptr [0x89e464]
// 004a8e37  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004a8e3b  7217                 jb 0x4a8e54
// 004a8e3d  8b7604               mov esi, dword ptr [esi + 4]
// 004a8e40  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 004a8e46  56                   push esi
// 004a8e47  50                   push eax
// 004a8e48  ff1580ed8900         call dword ptr [0x89ed80]
// 004a8e4e  5f                   pop edi
// 004a8e4f  5e                   pop esi
// 004a8e50  5b                   pop ebx
// 004a8e51  c20400               ret 4
// 004a8e54  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 004a8e5a  83c604               add esi, 4
// 004a8e5d  56                   push esi
// 004a8e5e  50                   push eax
// 004a8e5f  ff1580ed8900         call dword ptr [0x89ed80]
// 004a8e65  5f                   pop edi
// 004a8e66  5e                   pop esi
// 004a8e67  5b                   pop ebx
// 004a8e68  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setCaption@Win32Window@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
