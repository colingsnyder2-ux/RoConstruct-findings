// roc 2010-06 00576010  unit: seg_00570000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576010
//
// 00576010  56                   push esi
// 00576011  8b742408             mov esi, dword ptr [esp + 8]
// 00576015  8b4604               mov eax, dword ptr [esi + 4]
// 00576018  8b08                 mov ecx, dword ptr [eax]
// 0057601a  6a18                 push 0x18
// 0057601c  6a00                 push 0
// 0057601e  56                   push esi
// 0057601f  ffd1                 call ecx
// 00576021  898690010000         mov dword ptr [esi + 0x190], eax
// 00576027  83c40c               add esp, 0xc
// 0057602a  c700f05e5700         mov dword ptr [eax], 0x575ef0
// 00576030  c74004b05f5700       mov dword ptr [eax + 4], 0x575fb0
// 00576037  c74008b05e5700       mov dword ptr [eax + 8], 0x575eb0
// 0057603e  c7400cf05f5700       mov dword ptr [eax + 0xc], 0x575ff0
// 00576045  c6401000             mov byte ptr [eax + 0x10], 0
// 00576049  c6401100             mov byte ptr [eax + 0x11], 0
// 0057604d  c6401401             mov byte ptr [eax + 0x14], 1
// 00576051  5e                   pop esi
// 00576052  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
