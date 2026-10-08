// roc 2007-03 0051f890  unit: seg_00510000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f890
//
// 0051f890  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051f894  8b442404             mov eax, dword ptr [esp + 4]
// 0051f898  53                   push ebx
// 0051f899  33db                 xor ebx, ebx
// 0051f89b  2bcb                 sub ecx, ebx
// 0051f89d  56                   push esi
// 0051f89e  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 0051f8a4  7425                 je 0x51f8cb
// 0051f8a6  83e902               sub ecx, 2
// 0051f8a9  7416                 je 0x51f8c1
// 0051f8ab  8b08                 mov ecx, dword ptr [eax]
// 0051f8ad  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0051f8b4  8b10                 mov edx, dword ptr [eax]
// 0051f8b6  50                   push eax
// 0051f8b7  8b02                 mov eax, dword ptr [edx]
// 0051f8b9  ffd0                 call eax
// 0051f8bb  83c404               add esp, 4
// 0051f8be  5e                   pop esi
// 0051f8bf  5b                   pop ebx
// 0051f8c0  c3                   ret 
// 0051f8c1  c7460460f85100       mov dword ptr [esi + 4], 0x51f860
// 0051f8c8  5e                   pop esi
// 0051f8c9  5b                   pop ebx
// 0051f8ca  c3                   ret 
// 0051f8cb  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 0051f8d1  385908               cmp byte ptr [ecx + 8], bl
// 0051f8d4  7422                 je 0x51f8f8
// 0051f8d6  50                   push eax
// 0051f8d7  c7460420f75100       mov dword ptr [esi + 4], 0x51f720
// 0051f8de  e8edfaffff           call 0x51f3d0
// 0051f8e3  83c404               add esp, 4
// 0051f8e6  895e40               mov dword ptr [esi + 0x40], ebx
// 0051f8e9  895e44               mov dword ptr [esi + 0x44], ebx
// 0051f8ec  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0051f8ef  885e30               mov byte ptr [esi + 0x30], bl
// 0051f8f2  895e34               mov dword ptr [esi + 0x34], ebx
// 0051f8f5  5e                   pop esi
// 0051f8f6  5b                   pop ebx
// 0051f8f7  c3                   ret 
// 0051f8f8  885e30               mov byte ptr [esi + 0x30], bl
// 0051f8fb  895e34               mov dword ptr [esi + 0x34], ebx
// 0051f8fe  c74604b0f65100       mov dword ptr [esi + 4], 0x51f6b0
// 0051f905  5e                   pop esi
// 0051f906  5b                   pop ebx
// 0051f907  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
