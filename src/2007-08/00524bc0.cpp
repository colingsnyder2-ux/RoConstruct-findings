// from server: 100% by auto
// roc 2007-08 00524bc0  unit: G3D::Line  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524bc0
//
// 00524bc0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00524bc4  8b442404             mov eax, dword ptr [esp + 4]
// 00524bc8  53                   push ebx
// 00524bc9  33db                 xor ebx, ebx
// 00524bcb  2bcb                 sub ecx, ebx
// 00524bcd  56                   push esi
// 00524bce  8bb084010000         mov esi, dword ptr [eax + 0x184]
// 00524bd4  7425                 je 0x524bfb
// 00524bd6  83e902               sub ecx, 2
// 00524bd9  7416                 je 0x524bf1
// 00524bdb  8b08                 mov ecx, dword ptr [eax]
// 00524bdd  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00524be4  8b10                 mov edx, dword ptr [eax]
// 00524be6  50                   push eax
// 00524be7  8b02                 mov eax, dword ptr [edx]
// 00524be9  ffd0                 call eax
// 00524beb  83c404               add esp, 4
// 00524bee  5e                   pop esi
// 00524bef  5b                   pop ebx
// 00524bf0  c3                   ret 
// 00524bf1  c74604904b5200       mov dword ptr [esi + 4], 0x524b90
// 00524bf8  5e                   pop esi
// 00524bf9  5b                   pop ebx
// 00524bfa  c3                   ret 
// 00524bfb  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00524c01  385908               cmp byte ptr [ecx + 8], bl
// 00524c04  7422                 je 0x524c28
// 00524c06  50                   push eax
// 00524c07  c74604504a5200       mov dword ptr [esi + 4], 0x524a50
// 00524c0e  e8edfaffff           call 0x524700
// 00524c13  83c404               add esp, 4
// 00524c16  895e40               mov dword ptr [esi + 0x40], ebx
// 00524c19  895e44               mov dword ptr [esi + 0x44], ebx
// 00524c1c  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00524c1f  885e30               mov byte ptr [esi + 0x30], bl
// 00524c22  895e34               mov dword ptr [esi + 0x34], ebx
// 00524c25  5e                   pop esi
// 00524c26  5b                   pop ebx
// 00524c27  c3                   ret 
// 00524c28  885e30               mov byte ptr [esi + 0x30], bl
// 00524c2b  895e34               mov dword ptr [esi + 0x34], ebx
// 00524c2e  c74604e0495200       mov dword ptr [esi + 4], 0x5249e0
// 00524c35  5e                   pop esi
// 00524c36  5b                   pop ebx
// 00524c37  c3                   ret 
// library jpeg-6b/jdmainct.c (function _start_pass_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
