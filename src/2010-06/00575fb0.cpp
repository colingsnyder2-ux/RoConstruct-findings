// roc 2010-06 00575fb0  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00575fb0
//
// 00575fb0  56                   push esi
// 00575fb1  8b742408             mov esi, dword ptr [esp + 8]
// 00575fb5  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00575fbb  c700f05e5700         mov dword ptr [eax], 0x575ef0
// 00575fc1  c6401000             mov byte ptr [eax + 0x10], 0
// 00575fc5  c6401100             mov byte ptr [eax + 0x11], 0
// 00575fc9  c6401401             mov byte ptr [eax + 0x14], 1
// 00575fcd  8b06                 mov eax, dword ptr [esi]
// 00575fcf  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00575fd2  56                   push esi
// 00575fd3  ffd1                 call ecx
// 00575fd5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00575fdb  8b02                 mov eax, dword ptr [edx]
// 00575fdd  56                   push esi
// 00575fde  ffd0                 call eax
// 00575fe0  83c408               add esp, 8
// 00575fe3  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 00575fed  5e                   pop esi
// 00575fee  c3                   ret 
// library jpeg-6b/jdinput.c (function _reset_input_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
