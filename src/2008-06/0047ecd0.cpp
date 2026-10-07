// roc 2008-06 0047ecd0  unit: G3D::Win32Window  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ecd0
//
// 0047ecd0  53                   push ebx
// 0047ecd1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0047ecd5  56                   push esi
// 0047ecd6  57                   push edi
// 0047ecd7  8bf9                 mov edi, ecx
// 0047ecd9  8db788000000         lea esi, [edi + 0x88]
// 0047ecdf  53                   push ebx
// 0047ece0  56                   push esi
// 0047ece1  ff15d8238000         call dword ptr [0x8023d8]
// 0047ece7  83c408               add esp, 8
// 0047ecea  84c0                 test al, al
// 0047ecec  7437                 je 0x47ed25
// 0047ecee  53                   push ebx
// 0047ecef  8bce                 mov ecx, esi
// 0047ecf1  ff150c248000         call dword ptr [0x80240c]
// 0047ecf7  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0047ecfb  7217                 jb 0x47ed14
// 0047ecfd  8b7604               mov esi, dword ptr [esi + 4]
// 0047ed00  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 0047ed06  56                   push esi
// 0047ed07  50                   push eax
// 0047ed08  ff15ec2c8000         call dword ptr [0x802cec]
// 0047ed0e  5f                   pop edi
// 0047ed0f  5e                   pop esi
// 0047ed10  5b                   pop ebx
// 0047ed11  c20400               ret 4
// 0047ed14  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 0047ed1a  83c604               add esi, 4
// 0047ed1d  56                   push esi
// 0047ed1e  50                   push eax
// 0047ed1f  ff15ec2c8000         call dword ptr [0x802cec]
// 0047ed25  5f                   pop edi
// 0047ed26  5e                   pop esi
// 0047ed27  5b                   pop ebx
// 0047ed28  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setCaption@Win32Window@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
