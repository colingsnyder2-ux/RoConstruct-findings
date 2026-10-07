// roc 2008-06 0052ab00  unit: seg_00520000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ab00
//
// 0052ab00  56                   push esi
// 0052ab01  8b742408             mov esi, dword ptr [esp + 8]
// 0052ab05  8b4604               mov eax, dword ptr [esi + 4]
// 0052ab08  8b08                 mov ecx, dword ptr [eax]
// 0052ab0a  6a18                 push 0x18
// 0052ab0c  6a00                 push 0
// 0052ab0e  56                   push esi
// 0052ab0f  ffd1                 call ecx
// 0052ab11  898690010000         mov dword ptr [esi + 0x190], eax
// 0052ab17  83c40c               add esp, 0xc
// 0052ab1a  c700e0a95200         mov dword ptr [eax], 0x52a9e0
// 0052ab20  c74004a0aa5200       mov dword ptr [eax + 4], 0x52aaa0
// 0052ab27  c74008a0a95200       mov dword ptr [eax + 8], 0x52a9a0
// 0052ab2e  c7400ce0aa5200       mov dword ptr [eax + 0xc], 0x52aae0
// 0052ab35  c6401000             mov byte ptr [eax + 0x10], 0
// 0052ab39  c6401100             mov byte ptr [eax + 0x11], 0
// 0052ab3d  c6401401             mov byte ptr [eax + 0x14], 1
// 0052ab41  5e                   pop esi
// 0052ab42  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
