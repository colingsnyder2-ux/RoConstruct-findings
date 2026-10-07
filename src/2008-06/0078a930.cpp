// roc 2008-06 0078a930  unit: CXTColorWnd  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a930
//
// 0078a930  83ec14               sub esp, 0x14
// 0078a933  dd442418             fld qword ptr [esp + 0x18]
// 0078a937  56                   push esi
// 0078a938  8bf1                 mov esi, ecx
// 0078a93a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078a93d  dd5e68               fstp qword ptr [esi + 0x68]
// 0078a940  8d442408             lea eax, [esp + 8]
// 0078a944  50                   push eax
// 0078a945  51                   push ecx
// 0078a946  ff15842d8000         call dword ptr [0x802d84]
// 0078a94c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078a950  2b542408             sub edx, dword ptr [esp + 8]
// 0078a954  89542404             mov dword ptr [esp + 4], edx
// 0078a958  db442404             fild dword ptr [esp + 4]
// 0078a95c  dc4c241c             fmul qword ptr [esp + 0x1c]
// 0078a960  e88b6ef1ff           call 0x6a17f0
// 0078a965  6a00                 push 0
// 0078a967  894670               mov dword ptr [esi + 0x70], eax
// 0078a96a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078a96d  6a00                 push 0
// 0078a96f  50                   push eax
// 0078a970  ff15182e8000         call dword ptr [0x802e18]
// 0078a976  5e                   pop esi
// 0078a977  83c414               add esp, 0x14
// 0078a97a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?SetHue@CXTColorWnd@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
