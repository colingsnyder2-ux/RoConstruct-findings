// roc 2009-06 005c6810  unit: seg_005c0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6810
//
// 005c6810  55                   push ebp
// 005c6811  8bec                 mov ebp, esp
// 005c6813  51                   push ecx
// 005c6814  894dfc               mov dword ptr [ebp - 4], ecx
// 005c6817  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c681a  83780c00             cmp dword ptr [eax + 0xc], 0
// 005c681e  7438                 je 0x5c6858
// 005c6820  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c6823  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005c6826  52                   push edx
// 005c6827  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c682a  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005c682d  51                   push ecx
// 005c682e  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c6831  e86a060000           call 0x5c6ea0
// 005c6836  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c6839  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c683c  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005c683f  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005c6842  c1f902               sar ecx, 2
// 005c6845  51                   push ecx
// 005c6846  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c6849  8b420c               mov eax, dword ptr [edx + 0xc]
// 005c684c  50                   push eax
// 005c684d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c6850  83c108               add ecx, 8
// 005c6853  e84876ffff           call 0x5bdea0
// 005c6858  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c685b  c7410c00000000       mov dword ptr [ecx + 0xc], 0
// 005c6862  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c6865  c7421000000000       mov dword ptr [edx + 0x10], 0
// 005c686c  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c686f  c7401400000000       mov dword ptr [eax + 0x14], 0
// 005c6876  8be5                 mov esp, ebp
// 005c6878  5d                   pop ebp
// 005c6879  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$vector@HV?$allocator@H@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp