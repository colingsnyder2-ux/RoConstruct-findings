// from server: 100% by auto
// roc 2008-06 0052aaa0  unit: seg_00520000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052aaa0
//
// 0052aaa0  56                   push esi
// 0052aaa1  8b742408             mov esi, dword ptr [esp + 8]
// 0052aaa5  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0052aaab  c700e0a95200         mov dword ptr [eax], 0x52a9e0
// 0052aab1  c6401000             mov byte ptr [eax + 0x10], 0
// 0052aab5  c6401100             mov byte ptr [eax + 0x11], 0
// 0052aab9  c6401401             mov byte ptr [eax + 0x14], 1
// 0052aabd  8b06                 mov eax, dword ptr [esi]
// 0052aabf  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0052aac2  56                   push esi
// 0052aac3  ffd1                 call ecx
// 0052aac5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0052aacb  8b02                 mov eax, dword ptr [edx]
// 0052aacd  56                   push esi
// 0052aace  ffd0                 call eax
// 0052aad0  83c408               add esp, 8
// 0052aad3  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 0052aadd  5e                   pop esi
// 0052aade  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
