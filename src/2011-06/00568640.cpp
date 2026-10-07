// roc 2011-06 00568640  unit: seg_00560000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568640
//
// 00568640  56                   push esi
// 00568641  8b742408             mov esi, dword ptr [esp + 8]
// 00568645  8b4604               mov eax, dword ptr [esi + 4]
// 00568648  8b08                 mov ecx, dword ptr [eax]
// 0056864a  6a18                 push 0x18
// 0056864c  6a00                 push 0
// 0056864e  56                   push esi
// 0056864f  ffd1                 call ecx
// 00568651  898690010000         mov dword ptr [esi + 0x190], eax
// 00568657  83c40c               add esp, 0xc
// 0056865a  c70020855600         mov dword ptr [eax], 0x568520
// 00568660  c74004e0855600       mov dword ptr [eax + 4], 0x5685e0
// 00568667  c74008e0845600       mov dword ptr [eax + 8], 0x5684e0
// 0056866e  c7400c20865600       mov dword ptr [eax + 0xc], 0x568620
// 00568675  c6401000             mov byte ptr [eax + 0x10], 0
// 00568679  c6401100             mov byte ptr [eax + 0x11], 0
// 0056867d  c6401401             mov byte ptr [eax + 0x14], 1
// 00568681  5e                   pop esi
// 00568682  c3                   ret 
// library jpeg-6b/jdinput.c (function _jinit_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
