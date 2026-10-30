// roc 2009-06 005b4c80  unit: seg_005b0000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4c80
//
// 005b4c80  55                   push ebp
// 005b4c81  8bec                 mov ebp, esp
// 005b4c83  51                   push ecx
// 005b4c84  894dfc               mov dword ptr [ebp - 4], ecx
// 005b4c87  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b4c8a  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 005b4c91  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4c94  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 005b4c9b  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b4c9e  c7421400000000       mov dword ptr [edx + 0x14], 0
// 005b4ca5  837d0800             cmp dword ptr [ebp + 8], 0
// 005b4ca9  7506                 jne 0x5b4cb1
// 005b4cab  32c0                 xor al, al
// 005b4cad  eb4b                 jmp 0x5b4cfa
// 005b4caf  eb47                 jmp 0x5b4cf8
// 005b4cb1  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4cb4  e837140000           call 0x5b60f0
// 005b4cb9  3b4508               cmp eax, dword ptr [ebp + 8]
// 005b4cbc  7307                 jae 0x5b4cc5
// 005b4cbe  e84d140000           call 0x5b6110
// 005b4cc3  eb33                 jmp 0x5b4cf8
// 005b4cc5  8b4508               mov eax, dword ptr [ebp + 8]
// 005b4cc8  50                   push eax
// 005b4cc9  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4ccc  83c108               add ecx, 8
// 005b4ccf  e8ac140000           call 0x5b6180
// 005b4cd4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4cd7  89410c               mov dword ptr [ecx + 0xc], eax
// 005b4cda  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b4cdd  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b4ce0  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005b4ce3  894a10               mov dword ptr [edx + 0x10], ecx
// 005b4ce6  8b5508               mov edx, dword ptr [ebp + 8]
// 005b4ce9  6bd248               imul edx, edx, 0x48
// 005b4cec  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b4cef  03500c               add edx, dword ptr [eax + 0xc]
// 005b4cf2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b4cf5  895114               mov dword ptr [ecx + 0x14], edx
// 005b4cf8  b001                 mov al, 1
// 005b4cfa  8be5                 mov esp, ebp
// 005b4cfc  5d                   pop ebp
// 005b4cfd  c20400               ret 4
// copied from an identical function in another client (function ?_Buy@?$vector@VFace@?$ConvexClipper@N@Wml@@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@IAE_NI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp