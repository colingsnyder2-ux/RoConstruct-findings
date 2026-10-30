// from server: 100% by auto
// roc 2008-06 00536fb0  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536fb0
//
// 00536fb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00536fb4  80b9b000000000       cmp byte ptr [ecx + 0xb0], 0
// 00536fbb  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 00536fc1  7538                 jne 0x536ffb
// 00536fc3  8b542408             mov edx, dword ptr [esp + 8]
// 00536fc7  c7400800000000       mov dword ptr [eax + 8], 0
// 00536fce  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00536fd5  c6401000             mov byte ptr [eax + 0x10], 0
// 00536fd9  895014               mov dword ptr [eax + 0x14], edx
// 00536fdc  85d2                 test edx, edx
// 00536fde  7414                 je 0x536ff4
// 00536fe0  8b01                 mov eax, dword ptr [ecx]
// 00536fe2  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00536fe9  8b11                 mov edx, dword ptr [ecx]
// 00536feb  8b02                 mov eax, dword ptr [edx]
// 00536fed  51                   push ecx
// 00536fee  ffd0                 call eax
// 00536ff0  83c404               add esp, 4
// 00536ff3  c3                   ret 
// 00536ff4  c74004106f5300       mov dword ptr [eax + 4], 0x536f10
// 00536ffb  c3                   ret 
// library jpeg-6b/jcmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
