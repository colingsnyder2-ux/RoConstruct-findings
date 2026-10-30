// from server: 100% by auto
// roc 2008-06 0078a980  unit: CXTColorWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a980
//
// 0078a980  83ec14               sub esp, 0x14
// 0078a983  dd442418             fld qword ptr [esp + 0x18]
// 0078a987  53                   push ebx
// 0078a988  56                   push esi
// 0078a989  57                   push edi
// 0078a98a  8bf1                 mov esi, ecx
// 0078a98c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078a98f  dd5e60               fstp qword ptr [esi + 0x60]
// 0078a992  8d442410             lea eax, [esp + 0x10]
// 0078a996  50                   push eax
// 0078a997  51                   push ecx
// 0078a998  ff15842d8000         call dword ptr [0x802d84]
// 0078a99e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0078a9a2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0078a9a6  8bd7                 mov edx, edi
// 0078a9a8  2bd3                 sub edx, ebx
// 0078a9aa  8954240c             mov dword ptr [esp + 0xc], edx
// 0078a9ae  db44240c             fild dword ptr [esp + 0xc]
// 0078a9b2  dc4c2424             fmul qword ptr [esp + 0x24]
// 0078a9b6  e8356ef1ff           call 0x6a17f0
// 0078a9bb  6a00                 push 0
// 0078a9bd  2bf8                 sub edi, eax
// 0078a9bf  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078a9c2  6a00                 push 0
// 0078a9c4  2bfb                 sub edi, ebx
// 0078a9c6  50                   push eax
// 0078a9c7  897e74               mov dword ptr [esi + 0x74], edi
// 0078a9ca  ff15182e8000         call dword ptr [0x802e18]
// 0078a9d0  5f                   pop edi
// 0078a9d1  5e                   pop esi
// 0078a9d2  5b                   pop ebx
// 0078a9d3  83c414               add esp, 0x14
// 0078a9d6  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?SetSaturation@CXTColorWnd@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
