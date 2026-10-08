// roc 2009-12 006146f0  unit: seg_00610000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006146f0
//
// 006146f0  56                   push esi
// 006146f1  8b742408             mov esi, dword ptr [esp + 8]
// 006146f5  8b4604               mov eax, dword ptr [esi + 4]
// 006146f8  8b08                 mov ecx, dword ptr [eax]
// 006146fa  6a18                 push 0x18
// 006146fc  6a00                 push 0
// 006146fe  56                   push esi
// 006146ff  ffd1                 call ecx
// 00614701  898690010000         mov dword ptr [esi + 0x190], eax
// 00614707  83c40c               add esp, 0xc
// 0061470a  c700d0456100         mov dword ptr [eax], 0x6145d0
// 00614710  c7400490466100       mov dword ptr [eax + 4], 0x614690
// 00614717  c7400890456100       mov dword ptr [eax + 8], 0x614590
// 0061471e  c7400cd0466100       mov dword ptr [eax + 0xc], 0x6146d0
// 00614725  c6401000             mov byte ptr [eax + 0x10], 0
// 00614729  c6401100             mov byte ptr [eax + 0x11], 0
// 0061472d  c6401401             mov byte ptr [eax + 0x14], 1
// 00614731  5e                   pop esi
// 00614732  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
