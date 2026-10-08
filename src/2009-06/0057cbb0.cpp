// from server: 100% by auto
// roc 2009-06 0057cbb0  unit: G3D::_internal::DialogTemplate  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057cbb0
//
// 0057cbb0  53                   push ebx
// 0057cbb1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0057cbb5  56                   push esi
// 0057cbb6  8bf1                 mov esi, ecx
// 0057cbb8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057cbbb  8b4608               mov eax, dword ptr [esi + 8]
// 0057cbbe  03cb                 add ecx, ebx
// 0057cbc0  3bc8                 cmp ecx, eax
// 0057cbc2  7e2f                 jle 0x57cbf3
// 0057cbc4  8d0458               lea eax, [eax + ebx*2]
// 0057cbc7  57                   push edi
// 0057cbc8  50                   push eax
// 0057cbc9  894608               mov dword ptr [esi + 8], eax
// 0057cbcc  ff1594e98900         call dword ptr [0x89e994]
// 0057cbd2  8b560c               mov edx, dword ptr [esi + 0xc]
// 0057cbd5  8bf8                 mov edi, eax
// 0057cbd7  8b4604               mov eax, dword ptr [esi + 4]
// 0057cbda  52                   push edx
// 0057cbdb  50                   push eax
// 0057cbdc  57                   push edi
// 0057cbdd  e8d4d21900           call 0x719eb6
// 0057cbe2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057cbe5  51                   push ecx
// 0057cbe6  ff15cce98900         call dword ptr [0x89e9cc]
// 0057cbec  83c414               add esp, 0x14
// 0057cbef  897e04               mov dword ptr [esi + 4], edi
// 0057cbf2  5f                   pop edi
// 0057cbf3  8b4604               mov eax, dword ptr [esi + 4]
// 0057cbf6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057cbfa  03460c               add eax, dword ptr [esi + 0xc]
// 0057cbfd  53                   push ebx
// 0057cbfe  52                   push edx
// 0057cbff  50                   push eax
// 0057cc00  e8b1d21900           call 0x719eb6
// 0057cc05  015e0c               add dword ptr [esi + 0xc], ebx
// 0057cc08  83c40c               add esp, 0xc
// 0057cc0b  5e                   pop esi
// 0057cc0c  5b                   pop ebx
// 0057cc0d  c20800               ret 8
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
