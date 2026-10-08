// from server: 100% by auto
// roc 2012-06 00a62f80  unit: CXTColorWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62f80
//
// 00a62f80  83ec14               sub esp, 0x14
// 00a62f83  dd442418             fld qword ptr [esp + 0x18]
// 00a62f87  53                   push ebx
// 00a62f88  56                   push esi
// 00a62f89  57                   push edi
// 00a62f8a  8bf1                 mov esi, ecx
// 00a62f8c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a62f8f  dd5e60               fstp qword ptr [esi + 0x60]
// 00a62f92  8d442410             lea eax, [esp + 0x10]
// 00a62f96  50                   push eax
// 00a62f97  51                   push ecx
// 00a62f98  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a62f9e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a62fa2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a62fa6  8bd7                 mov edx, edi
// 00a62fa8  2bd3                 sub edx, ebx
// 00a62faa  8954240c             mov dword ptr [esp + 0xc], edx
// 00a62fae  db44240c             fild dword ptr [esp + 0xc]
// 00a62fb2  dc4c2424             fmul qword ptr [esp + 0x24]
// 00a62fb6  e8f505f2ff           call 0x9835b0
// 00a62fbb  6a00                 push 0
// 00a62fbd  2bf8                 sub edi, eax
// 00a62fbf  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a62fc2  6a00                 push 0
// 00a62fc4  2bfb                 sub edi, ebx
// 00a62fc6  50                   push eax
// 00a62fc7  897e74               mov dword ptr [esi + 0x74], edi
// 00a62fca  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a62fd0  5f                   pop edi
// 00a62fd1  5e                   pop esi
// 00a62fd2  5b                   pop ebx
// 00a62fd3  83c414               add esp, 0x14
// 00a62fd6  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?SetSaturation@CXTPColorWnd@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
