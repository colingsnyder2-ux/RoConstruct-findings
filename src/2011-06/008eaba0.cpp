// from server: 100% by auto
// roc 2011-06 008eaba0  unit: CXTColorWnd  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eaba0
//
// 008eaba0  83ec14               sub esp, 0x14
// 008eaba3  dd442418             fld qword ptr [esp + 0x18]
// 008eaba7  53                   push ebx
// 008eaba8  56                   push esi
// 008eaba9  57                   push edi
// 008eabaa  8bf1                 mov esi, ecx
// 008eabac  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008eabaf  dd5e60               fstp qword ptr [esi + 0x60]
// 008eabb2  8d442410             lea eax, [esp + 0x10]
// 008eabb6  50                   push eax
// 008eabb7  51                   push ecx
// 008eabb8  ff157c1ca400         call dword ptr [0xa41c7c]
// 008eabbe  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008eabc2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008eabc6  8bd7                 mov edx, edi
// 008eabc8  2bd3                 sub edx, ebx
// 008eabca  8954240c             mov dword ptr [esp + 0xc], edx
// 008eabce  db44240c             fild dword ptr [esp + 0xc]
// 008eabd2  dc4c2424             fmul qword ptr [esp + 0x24]
// 008eabd6  e85509f2ff           call 0x80b530
// 008eabdb  6a00                 push 0
// 008eabdd  2bf8                 sub edi, eax
// 008eabdf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008eabe2  6a00                 push 0
// 008eabe4  2bfb                 sub edi, ebx
// 008eabe6  50                   push eax
// 008eabe7  897e74               mov dword ptr [esi + 0x74], edi
// 008eabea  ff15ec19a400         call dword ptr [0xa419ec]
// 008eabf0  5f                   pop edi
// 008eabf1  5e                   pop esi
// 008eabf2  5b                   pop ebx
// 008eabf3  83c414               add esp, 0x14
// 008eabf6  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?SetSaturation@CXTPColorWnd@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
