// roc 2009-12 00614690  unit: seg_00610000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614690
//
// 00614690  56                   push esi
// 00614691  8b742408             mov esi, dword ptr [esp + 8]
// 00614695  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0061469b  c700d0456100         mov dword ptr [eax], 0x6145d0
// 006146a1  c6401000             mov byte ptr [eax + 0x10], 0
// 006146a5  c6401100             mov byte ptr [eax + 0x11], 0
// 006146a9  c6401401             mov byte ptr [eax + 0x14], 1
// 006146ad  8b06                 mov eax, dword ptr [esi]
// 006146af  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006146b2  56                   push esi
// 006146b3  ffd1                 call ecx
// 006146b5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 006146bb  8b02                 mov eax, dword ptr [edx]
// 006146bd  56                   push esi
// 006146be  ffd0                 call eax
// 006146c0  83c408               add esp, 8
// 006146c3  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 006146cd  5e                   pop esi
// 006146ce  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
