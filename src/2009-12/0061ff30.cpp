// roc 2009-12 0061ff30  unit: seg_00610000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061ff30
//
// 0061ff30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061ff34  83e900               sub ecx, 0
// 0061ff37  8b442404             mov eax, dword ptr [esp + 4]
// 0061ff3b  56                   push esi
// 0061ff3c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 0061ff42  0f848d000000         je 0x61ffd5
// 0061ff48  83e902               sub ecx, 2
// 0061ff4b  7458                 je 0x61ffa5
// 0061ff4d  83e901               sub ecx, 1
// 0061ff50  7423                 je 0x61ff75
// 0061ff52  8b08                 mov ecx, dword ptr [eax]
// 0061ff54  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0061ff5b  8b10                 mov edx, dword ptr [eax]
// 0061ff5d  50                   push eax
// 0061ff5e  8b02                 mov eax, dword ptr [edx]
// 0061ff60  ffd0                 call eax
// 0061ff62  83c404               add esp, 4
// 0061ff65  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0061ff6c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0061ff73  5e                   pop esi
// 0061ff74  c3                   ret 
// 0061ff75  837e0800             cmp dword ptr [esi + 8], 0
// 0061ff79  7513                 jne 0x61ff8e
// 0061ff7b  8b08                 mov ecx, dword ptr [eax]
// 0061ff7d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0061ff84  8b10                 mov edx, dword ptr [eax]
// 0061ff86  50                   push eax
// 0061ff87  8b02                 mov eax, dword ptr [edx]
// 0061ff89  ffd0                 call eax
// 0061ff8b  83c404               add esp, 4
// 0061ff8e  c74604e0fd6100       mov dword ptr [esi + 4], 0x61fde0
// 0061ff95  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0061ff9c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0061ffa3  5e                   pop esi
// 0061ffa4  c3                   ret 
// 0061ffa5  837e0800             cmp dword ptr [esi + 8], 0
// 0061ffa9  7513                 jne 0x61ffbe
// 0061ffab  8b08                 mov ecx, dword ptr [eax]
// 0061ffad  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 0061ffb4  8b10                 mov edx, dword ptr [eax]
// 0061ffb6  50                   push eax
// 0061ffb7  8b02                 mov eax, dword ptr [edx]
// 0061ffb9  ffd0                 call eax
// 0061ffbb  83c404               add esp, 4
// 0061ffbe  c7460490fe6100       mov dword ptr [esi + 4], 0x61fe90
// 0061ffc5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0061ffcc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0061ffd3  5e                   pop esi
// 0061ffd4  c3                   ret 
// 0061ffd5  80784a00             cmp byte ptr [eax + 0x4a], 0
// 0061ffd9  7438                 je 0x620013
// 0061ffdb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0061ffdf  c7460460fd6100       mov dword ptr [esi + 4], 0x61fd60
// 0061ffe6  7537                 jne 0x62001f
// 0061ffe8  8b5610               mov edx, dword ptr [esi + 0x10]
// 0061ffeb  8b4804               mov ecx, dword ptr [eax + 4]
// 0061ffee  6a01                 push 1
// 0061fff0  52                   push edx
// 0061fff1  8b5608               mov edx, dword ptr [esi + 8]
// 0061fff4  6a00                 push 0
// 0061fff6  52                   push edx
// 0061fff7  50                   push eax
// 0061fff8  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0061fffb  ffd0                 call eax
// 0061fffd  83c414               add esp, 0x14
// 00620000  89460c               mov dword ptr [esi + 0xc], eax
// 00620003  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0062000a  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00620011  5e                   pop esi
// 00620012  c3                   ret 
// 00620013  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00620019  8b5104               mov edx, dword ptr [ecx + 4]
// 0062001c  895604               mov dword ptr [esi + 4], edx
// 0062001f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00620026  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0062002d  5e                   pop esi
// 0062002e  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
