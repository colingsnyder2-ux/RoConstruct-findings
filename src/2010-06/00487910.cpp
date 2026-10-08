// from server: 100% by auto
// roc 2010-06 00487910  unit: G3D::Win32Window  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487910
//
// 00487910  53                   push ebx
// 00487911  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00487915  56                   push esi
// 00487916  57                   push edi
// 00487917  8bf9                 mov edi, ecx
// 00487919  8db788000000         lea esi, [edi + 0x88]
// 0048791f  53                   push ebx
// 00487920  56                   push esi
// 00487921  ff1598a49e00         call dword ptr [0x9ea498]
// 00487927  83c408               add esp, 8
// 0048792a  84c0                 test al, al
// 0048792c  7437                 je 0x487965
// 0048792e  53                   push ebx
// 0048792f  8bce                 mov ecx, esi
// 00487931  ff1568a49e00         call dword ptr [0x9ea468]
// 00487937  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0048793b  7217                 jb 0x487954
// 0048793d  8b7604               mov esi, dword ptr [esi + 4]
// 00487940  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 00487946  56                   push esi
// 00487947  50                   push eax
// 00487948  ff1510bc9e00         call dword ptr [0x9ebc10]
// 0048794e  5f                   pop edi
// 0048794f  5e                   pop esi
// 00487950  5b                   pop ebx
// 00487951  c20400               ret 4
// 00487954  8b87e8010000         mov eax, dword ptr [edi + 0x1e8]
// 0048795a  83c604               add esi, 4
// 0048795d  56                   push esi
// 0048795e  50                   push eax
// 0048795f  ff1510bc9e00         call dword ptr [0x9ebc10]
// 00487965  5f                   pop edi
// 00487966  5e                   pop esi
// 00487967  5b                   pop ebx
// 00487968  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setCaption@Win32Window@G3D@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
