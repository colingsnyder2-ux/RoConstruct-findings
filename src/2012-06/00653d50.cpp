// from server: 100% by auto
// roc 2012-06 00653d50  unit: seg_00650000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653d50
//
// 00653d50  56                   push esi
// 00653d51  8b742408             mov esi, dword ptr [esp + 8]
// 00653d55  8b4604               mov eax, dword ptr [esi + 4]
// 00653d58  8b08                 mov ecx, dword ptr [eax]
// 00653d5a  6a18                 push 0x18
// 00653d5c  6a00                 push 0
// 00653d5e  56                   push esi
// 00653d5f  ffd1                 call ecx
// 00653d61  898690010000         mov dword ptr [esi + 0x190], eax
// 00653d67  83c40c               add esp, 0xc
// 00653d6a  c700303c6500         mov dword ptr [eax], 0x653c30
// 00653d70  c74004f03c6500       mov dword ptr [eax + 4], 0x653cf0
// 00653d77  c74008f03b6500       mov dword ptr [eax + 8], 0x653bf0
// 00653d7e  c7400c303d6500       mov dword ptr [eax + 0xc], 0x653d30
// 00653d85  c6401000             mov byte ptr [eax + 0x10], 0
// 00653d89  c6401100             mov byte ptr [eax + 0x11], 0
// 00653d8d  c6401401             mov byte ptr [eax + 0x14], 1
// 00653d91  5e                   pop esi
// 00653d92  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
