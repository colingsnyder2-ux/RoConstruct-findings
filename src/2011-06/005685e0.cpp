// from server: 100% by auto
// roc 2011-06 005685e0  unit: seg_00560000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005685e0
//
// 005685e0  56                   push esi
// 005685e1  8b742408             mov esi, dword ptr [esp + 8]
// 005685e5  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005685eb  c70020855600         mov dword ptr [eax], 0x568520
// 005685f1  c6401000             mov byte ptr [eax + 0x10], 0
// 005685f5  c6401100             mov byte ptr [eax + 0x11], 0
// 005685f9  c6401401             mov byte ptr [eax + 0x14], 1
// 005685fd  8b06                 mov eax, dword ptr [esi]
// 005685ff  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00568602  56                   push esi
// 00568603  ffd1                 call ecx
// 00568605  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0056860b  8b02                 mov eax, dword ptr [edx]
// 0056860d  56                   push esi
// 0056860e  ffd0                 call eax
// 00568610  83c408               add esp, 8
// 00568613  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 0056861d  5e                   pop esi
// 0056861e  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
