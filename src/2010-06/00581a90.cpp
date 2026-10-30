// from server: 100% by auto
// roc 2010-06 00581a90  unit: seg_00580000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581a90
//
// 00581a90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581a94  83e900               sub ecx, 0
// 00581a97  8b442404             mov eax, dword ptr [esp + 4]
// 00581a9b  56                   push esi
// 00581a9c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 00581aa2  0f848d000000         je 0x581b35
// 00581aa8  83e902               sub ecx, 2
// 00581aab  7458                 je 0x581b05
// 00581aad  83e901               sub ecx, 1
// 00581ab0  7423                 je 0x581ad5
// 00581ab2  8b08                 mov ecx, dword ptr [eax]
// 00581ab4  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00581abb  8b10                 mov edx, dword ptr [eax]
// 00581abd  50                   push eax
// 00581abe  8b02                 mov eax, dword ptr [edx]
// 00581ac0  ffd0                 call eax
// 00581ac2  83c404               add esp, 4
// 00581ac5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00581acc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00581ad3  5e                   pop esi
// 00581ad4  c3                   ret 
// 00581ad5  837e0800             cmp dword ptr [esi + 8], 0
// 00581ad9  7513                 jne 0x581aee
// 00581adb  8b08                 mov ecx, dword ptr [eax]
// 00581add  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00581ae4  8b10                 mov edx, dword ptr [eax]
// 00581ae6  50                   push eax
// 00581ae7  8b02                 mov eax, dword ptr [edx]
// 00581ae9  ffd0                 call eax
// 00581aeb  83c404               add esp, 4
// 00581aee  c7460440195800       mov dword ptr [esi + 4], 0x581940
// 00581af5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00581afc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00581b03  5e                   pop esi
// 00581b04  c3                   ret 
// 00581b05  837e0800             cmp dword ptr [esi + 8], 0
// 00581b09  7513                 jne 0x581b1e
// 00581b0b  8b08                 mov ecx, dword ptr [eax]
// 00581b0d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00581b14  8b10                 mov edx, dword ptr [eax]
// 00581b16  50                   push eax
// 00581b17  8b02                 mov eax, dword ptr [edx]
// 00581b19  ffd0                 call eax
// 00581b1b  83c404               add esp, 4
// 00581b1e  c74604f0195800       mov dword ptr [esi + 4], 0x5819f0
// 00581b25  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00581b2c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00581b33  5e                   pop esi
// 00581b34  c3                   ret 
// 00581b35  80784a00             cmp byte ptr [eax + 0x4a], 0
// 00581b39  7438                 je 0x581b73
// 00581b3b  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00581b3f  c74604c0185800       mov dword ptr [esi + 4], 0x5818c0
// 00581b46  7537                 jne 0x581b7f
// 00581b48  8b5610               mov edx, dword ptr [esi + 0x10]
// 00581b4b  8b4804               mov ecx, dword ptr [eax + 4]
// 00581b4e  6a01                 push 1
// 00581b50  52                   push edx
// 00581b51  8b5608               mov edx, dword ptr [esi + 8]
// 00581b54  6a00                 push 0
// 00581b56  52                   push edx
// 00581b57  50                   push eax
// 00581b58  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00581b5b  ffd0                 call eax
// 00581b5d  83c414               add esp, 0x14
// 00581b60  89460c               mov dword ptr [esi + 0xc], eax
// 00581b63  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00581b6a  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00581b71  5e                   pop esi
// 00581b72  c3                   ret 
// 00581b73  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00581b79  8b5104               mov edx, dword ptr [ecx + 4]
// 00581b7c  895604               mov dword ptr [esi + 4], edx
// 00581b7f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00581b86  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00581b8d  5e                   pop esi
// 00581b8e  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
