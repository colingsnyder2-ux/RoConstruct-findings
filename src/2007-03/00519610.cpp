// roc 2007-03 00519610  unit: seg_00510000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519610
//
// 00519610  56                   push esi
// 00519611  8b742408             mov esi, dword ptr [esp + 8]
// 00519615  8b4604               mov eax, dword ptr [esi + 4]
// 00519618  8b08                 mov ecx, dword ptr [eax]
// 0051961a  6a18                 push 0x18
// 0051961c  6a00                 push 0
// 0051961e  56                   push esi
// 0051961f  ffd1                 call ecx
// 00519621  898690010000         mov dword ptr [esi + 0x190], eax
// 00519627  83c40c               add esp, 0xc
// 0051962a  c700f0945100         mov dword ptr [eax], 0x5194f0
// 00519630  c74004b0955100       mov dword ptr [eax + 4], 0x5195b0
// 00519637  c74008b0945100       mov dword ptr [eax + 8], 0x5194b0
// 0051963e  c7400cf0955100       mov dword ptr [eax + 0xc], 0x5195f0
// 00519645  c6401000             mov byte ptr [eax + 0x10], 0
// 00519649  c6401100             mov byte ptr [eax + 0x11], 0
// 0051964d  c6401401             mov byte ptr [eax + 0x14], 1
// 00519651  5e                   pop esi
// 00519652  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
