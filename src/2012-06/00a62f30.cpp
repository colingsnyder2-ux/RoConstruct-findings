// from server: 100% by auto
// roc 2012-06 00a62f30  unit: CXTColorWnd  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62f30
//
// 00a62f30  83ec14               sub esp, 0x14
// 00a62f33  dd442418             fld qword ptr [esp + 0x18]
// 00a62f37  56                   push esi
// 00a62f38  8bf1                 mov esi, ecx
// 00a62f3a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a62f3d  dd5e68               fstp qword ptr [esi + 0x68]
// 00a62f40  8d442408             lea eax, [esp + 8]
// 00a62f44  50                   push eax
// 00a62f45  51                   push ecx
// 00a62f46  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a62f4c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a62f50  2b542408             sub edx, dword ptr [esp + 8]
// 00a62f54  89542404             mov dword ptr [esp + 4], edx
// 00a62f58  db442404             fild dword ptr [esp + 4]
// 00a62f5c  dc4c241c             fmul qword ptr [esp + 0x1c]
// 00a62f60  e84b06f2ff           call 0x9835b0
// 00a62f65  6a00                 push 0
// 00a62f67  894670               mov dword ptr [esi + 0x70], eax
// 00a62f6a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a62f6d  6a00                 push 0
// 00a62f6f  50                   push eax
// 00a62f70  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a62f76  5e                   pop esi
// 00a62f77  83c414               add esp, 0x14
// 00a62f7a  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?SetHue@CXTPColorWnd@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
