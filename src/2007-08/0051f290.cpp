// from server: 100% by auto
// roc 2007-08 0051f290  unit: seg_00510000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f290
//
// 0051f290  56                   push esi
// 0051f291  8b742408             mov esi, dword ptr [esp + 8]
// 0051f295  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0051f29b  c700d0f15100         mov dword ptr [eax], 0x51f1d0
// 0051f2a1  c6401000             mov byte ptr [eax + 0x10], 0
// 0051f2a5  c6401100             mov byte ptr [eax + 0x11], 0
// 0051f2a9  c6401401             mov byte ptr [eax + 0x14], 1
// 0051f2ad  8b06                 mov eax, dword ptr [esi]
// 0051f2af  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0051f2b2  56                   push esi
// 0051f2b3  ffd1                 call ecx
// 0051f2b5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0051f2bb  8b02                 mov eax, dword ptr [edx]
// 0051f2bd  56                   push esi
// 0051f2be  ffd0                 call eax
// 0051f2c0  83c408               add esp, 8
// 0051f2c3  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 0051f2cd  5e                   pop esi
// 0051f2ce  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
