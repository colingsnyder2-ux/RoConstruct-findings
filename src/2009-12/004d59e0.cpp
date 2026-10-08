// roc 2009-12 004d59e0  unit: G3D::Win32Window  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d59e0
//
// 004d59e0  53                   push ebx
// 004d59e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004d59e5  56                   push esi
// 004d59e6  57                   push edi
// 004d59e7  8bf9                 mov edi, ecx
// 004d59e9  8db788000000         lea esi, [edi + 0x88]
// 004d59ef  53                   push ebx
// 004d59f0  56                   push esi
// 004d59f1  ff1570b69800         call dword ptr [0x98b670]
// 004d59f7  83c408               add esp, 8
// 004d59fa  84c0                 test al, al
// 004d59fc  7437                 je 0x4d5a35
// 004d59fe  53                   push ebx
// 004d59ff  8bce                 mov ecx, esi
// 004d5a01  ff159cb69800         call dword ptr [0x98b69c]
// 004d5a07  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004d5a0b  7217                 jb 0x4d5a24
// 004d5a0d  8b7604               mov esi, dword ptr [esi + 4]
// 004d5a10  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 004d5a16  56                   push esi
// 004d5a17  50                   push eax
// 004d5a18  ff1514ca9800         call dword ptr [0x98ca14]
// 004d5a1e  5f                   pop edi
// 004d5a1f  5e                   pop esi
// 004d5a20  5b                   pop ebx
// 004d5a21  c20400               ret 4
// 004d5a24  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 004d5a2a  83c604               add esi, 4
// 004d5a2d  56                   push esi
// 004d5a2e  50                   push eax
// 004d5a2f  ff1514ca9800         call dword ptr [0x98ca14]
// 004d5a35  5f                   pop edi
// 004d5a36  5e                   pop esi
// 004d5a37  5b                   pop ebx
// 004d5a38  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setCaption@Win32Window@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
