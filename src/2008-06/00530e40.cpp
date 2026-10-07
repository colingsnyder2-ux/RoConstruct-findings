// roc 2008-06 00530e40  unit: seg_00530000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530e40
//
// 00530e40  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00530e44  8b442404             mov eax, dword ptr [esp + 4]
// 00530e48  53                   push ebx
// 00530e49  33db                 xor ebx, ebx
// 00530e4b  2bcb                 sub ecx, ebx
// 00530e4d  56                   push esi
// 00530e4e  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 00530e54  7425                 je 0x530e7b
// 00530e56  83e902               sub ecx, 2
// 00530e59  7416                 je 0x530e71
// 00530e5b  8b08                 mov ecx, dword ptr [eax]
// 00530e5d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00530e64  8b10                 mov edx, dword ptr [eax]
// 00530e66  50                   push eax
// 00530e67  8b02                 mov eax, dword ptr [edx]
// 00530e69  ffd0                 call eax
// 00530e6b  83c404               add esp, 4
// 00530e6e  5e                   pop esi
// 00530e6f  5b                   pop ebx
// 00530e70  c3                   ret 
// 00530e71  c74604100e5300       mov dword ptr [esi + 4], 0x530e10
// 00530e78  5e                   pop esi
// 00530e79  5b                   pop ebx
// 00530e7a  c3                   ret 
// 00530e7b  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00530e81  385908               cmp byte ptr [ecx + 8], bl
// 00530e84  7422                 je 0x530ea8
// 00530e86  50                   push eax
// 00530e87  c74604d00c5300       mov dword ptr [esi + 4], 0x530cd0
// 00530e8e  e80dfbffff           call 0x5309a0
// 00530e93  83c404               add esp, 4
// 00530e96  895e40               mov dword ptr [esi + 0x40], ebx
// 00530e99  895e44               mov dword ptr [esi + 0x44], ebx
// 00530e9c  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00530e9f  885e30               mov byte ptr [esi + 0x30], bl
// 00530ea2  895e34               mov dword ptr [esi + 0x34], ebx
// 00530ea5  5e                   pop esi
// 00530ea6  5b                   pop ebx
// 00530ea7  c3                   ret 
// 00530ea8  885e30               mov byte ptr [esi + 0x30], bl
// 00530eab  895e34               mov dword ptr [esi + 0x34], ebx
// 00530eae  c74604600c5300       mov dword ptr [esi + 4], 0x530c60
// 00530eb5  5e                   pop esi
// 00530eb6  5b                   pop ebx
// 00530eb7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
