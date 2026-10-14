// roc 2010-06 00554a00  unit: seg_00550000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00554a00
//
// 00554a00  8b442404             mov eax, dword ptr [esp + 4]
// 00554a04  83f807               cmp eax, 7
// 00554a07  7752                 ja 0x554a5b
// 00554a09  ff2485604a5500       jmp dword ptr [eax*4 + 0x554a60]
// 00554a10  8b442408             mov eax, dword ptr [esp + 8]
// 00554a14  50                   push eax
// 00554a15  e8d6f6ffff           call 0x5540f0
// 00554a1a  c20800               ret 8
// 00554a1d  8b542408             mov edx, dword ptr [esp + 8]
// 00554a21  52                   push edx
// 00554a22  e849c7ffff           call 0x551170
// 00554a27  c20800               ret 8
// 00554a2a  8b442408             mov eax, dword ptr [esp + 8]
// 00554a2e  50                   push eax
// 00554a2f  e80cc4ffff           call 0x550e40
// 00554a34  c20800               ret 8
// 00554a37  8b542408             mov edx, dword ptr [esp + 8]
// 00554a3b  52                   push edx
// 00554a3c  e85ff4ffff           call 0x553ea0
// 00554a41  c20800               ret 8
// 00554a44  8b442408             mov eax, dword ptr [esp + 8]
// 00554a48  50                   push eax
// 00554a49  e8e2bbffff           call 0x550630
// 00554a4e  c20800               ret 8
// 00554a51  8b542408             mov edx, dword ptr [esp + 8]
// 00554a55  52                   push edx
// 00554a56  e885beffff           call 0x5508e0
// 00554a5b  c20800               ret 8
// 00554a5e  8bff                 mov edi, edi
// 00554a60  37                   aaa 
// 00554a61  4a                   dec edx
// 00554a62  55                   push ebp
// 00554a63  00444a55             add byte ptr [edx + ecx*2 + 0x55], al
// 00554a67  00514a               add byte ptr [ecx + 0x4a], dl
// 00554a6a  55                   push ebp
// 00554a6b  005b4a               add byte ptr [ebx + 0x4a], bl
// 00554a6e  55                   push ebp
// 00554a6f  005b4a               add byte ptr [ebx + 0x4a], bl
// 00554a72  55                   push ebp
// 00554a73  002a                 add byte ptr [edx], ch
// 00554a75  4a                   dec edx
// 00554a76  55                   push ebp
// 00554a77  0010                 add byte ptr [eax], dl
// 00554a79  4a                   dec edx
// 00554a7a  55                   push ebp
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?encode@GImage@G3D@@QBEXW4Format@12@AAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
