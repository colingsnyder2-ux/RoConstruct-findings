// from server: 100% by auto
// roc 2007-08 0051f2f0  unit: seg_00510000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f2f0
//
// 0051f2f0  56                   push esi
// 0051f2f1  8b742408             mov esi, dword ptr [esp + 8]
// 0051f2f5  8b4604               mov eax, dword ptr [esi + 4]
// 0051f2f8  8b08                 mov ecx, dword ptr [eax]
// 0051f2fa  6a18                 push 0x18
// 0051f2fc  6a00                 push 0
// 0051f2fe  56                   push esi
// 0051f2ff  ffd1                 call ecx
// 0051f301  898690010000         mov dword ptr [esi + 0x190], eax
// 0051f307  83c40c               add esp, 0xc
// 0051f30a  c700d0f15100         mov dword ptr [eax], 0x51f1d0
// 0051f310  c7400490f25100       mov dword ptr [eax + 4], 0x51f290
// 0051f317  c7400890f15100       mov dword ptr [eax + 8], 0x51f190
// 0051f31e  c7400cd0f25100       mov dword ptr [eax + 0xc], 0x51f2d0
// 0051f325  c6401000             mov byte ptr [eax + 0x10], 0
// 0051f329  c6401100             mov byte ptr [eax + 0x11], 0
// 0051f32d  c6401401             mov byte ptr [eax + 0x14], 1
// 0051f331  5e                   pop esi
// 0051f332  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
