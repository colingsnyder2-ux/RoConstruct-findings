// roc 2007-03 005195b0  unit: seg_00510000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005195b0
//
// 005195b0  56                   push esi
// 005195b1  8b742408             mov esi, dword ptr [esp + 8]
// 005195b5  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005195bb  c700f0945100         mov dword ptr [eax], 0x5194f0
// 005195c1  c6401000             mov byte ptr [eax + 0x10], 0
// 005195c5  c6401100             mov byte ptr [eax + 0x11], 0
// 005195c9  c6401401             mov byte ptr [eax + 0x14], 1
// 005195cd  8b06                 mov eax, dword ptr [esi]
// 005195cf  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005195d2  56                   push esi
// 005195d3  ffd1                 call ecx
// 005195d5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 005195db  8b02                 mov eax, dword ptr [edx]
// 005195dd  56                   push esi
// 005195de  ffd0                 call eax
// 005195e0  83c408               add esp, 8
// 005195e3  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 005195ed  5e                   pop esi
// 005195ee  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
