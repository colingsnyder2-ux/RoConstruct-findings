// roc 2009-06 005c5000  unit: seg_005c0000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5000
//
// 005c5000  55                   push ebp
// 005c5001  8bec                 mov ebp, esp
// 005c5003  83ec18               sub esp, 0x18
// 005c5006  894de8               mov dword ptr [ebp - 0x18], ecx
// 005c5009  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c500c  50                   push eax
// 005c500d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c5010  51                   push ecx
// 005c5011  8d55f8               lea edx, [ebp - 8]
// 005c5014  52                   push edx
// 005c5015  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c5018  e8f3000000           call 0x5c5110
// 005c501d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005c5020  50                   push eax
// 005c5021  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005c5024  51                   push ecx
// 005c5025  8d55f0               lea edx, [ebp - 0x10]
// 005c5028  52                   push edx
// 005c5029  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c502c  e8df000000           call 0x5c5110
// 005c5031  8d45f0               lea eax, [ebp - 0x10]
// 005c5034  50                   push eax
// 005c5035  8d4df8               lea ecx, [ebp - 8]
// 005c5038  e803aeffff           call 0x5bfe40
// 005c503d  0fb6c8               movzx ecx, al
// 005c5040  85c9                 test ecx, ecx
// 005c5042  7436                 je 0x5c507a
// 005c5044  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c5047  52                   push edx
// 005c5048  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c504b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005c504e  51                   push ecx
// 005c504f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005c5052  52                   push edx
// 005c5053  e8a80c0000           call 0x5c5d00
// 005c5058  83c40c               add esp, 0xc
// 005c505b  8945ec               mov dword ptr [ebp - 0x14], eax
// 005c505e  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c5061  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005c5064  51                   push ecx
// 005c5065  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005c5068  52                   push edx
// 005c5069  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c506c  e83ff7ffff           call 0x5c47b0
// 005c5071  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c5074  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005c5077  894810               mov dword ptr [eax + 0x10], ecx
// 005c507a  8b5508               mov edx, dword ptr [ebp + 8]
// 005c507d  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c5080  8902                 mov dword ptr [edx], eax
// 005c5082  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c5085  894a04               mov dword ptr [edx + 4], ecx
// 005c5088  8b4508               mov eax, dword ptr [ebp + 8]
// 005c508b  8be5                 mov esp, ebp
// 005c508d  5d                   pop ebp
// 005c508e  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V?$_Vector_const_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp