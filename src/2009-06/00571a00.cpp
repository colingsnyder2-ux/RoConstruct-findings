// roc 2009-06 00571a00  unit: seg_00570000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00571a00
//
// 00571a00  8b442404             mov eax, dword ptr [esp + 4]
// 00571a04  83f807               cmp eax, 7
// 00571a07  7752                 ja 0x571a5b
// 00571a09  ff2485601a5700       jmp dword ptr [eax*4 + 0x571a60]
// 00571a10  8b442408             mov eax, dword ptr [esp + 8]
// 00571a14  50                   push eax
// 00571a15  e8f6f7ffff           call 0x571210
// 00571a1a  c20800               ret 8
// 00571a1d  8b542408             mov edx, dword ptr [esp + 8]
// 00571a21  52                   push edx
// 00571a22  e839c7ffff           call 0x56e160
// 00571a27  c20800               ret 8
// 00571a2a  8b442408             mov eax, dword ptr [esp + 8]
// 00571a2e  50                   push eax
// 00571a2f  e8fcc3ffff           call 0x56de30
// 00571a34  c20800               ret 8
// 00571a37  8b542408             mov edx, dword ptr [esp + 8]
// 00571a3b  52                   push edx
// 00571a3c  e87ff5ffff           call 0x570fc0
// 00571a41  c20800               ret 8
// 00571a44  8b442408             mov eax, dword ptr [esp + 8]
// 00571a48  50                   push eax
// 00571a49  e8d2bbffff           call 0x56d620
// 00571a4e  c20800               ret 8
// 00571a51  8b542408             mov edx, dword ptr [esp + 8]
// 00571a55  52                   push edx
// 00571a56  e875beffff           call 0x56d8d0
// 00571a5b  c20800               ret 8
// 00571a5e  8bff                 mov edi, edi
// 00571a60  37                   aaa 
// 00571a61  1a5700               sbb dl, byte ptr [edi]
// 00571a64  44                   inc esp
// 00571a65  1a5700               sbb dl, byte ptr [edi]
// 00571a68  51                   push ecx
// 00571a69  1a5700               sbb dl, byte ptr [edi]
// 00571a6c  5b                   pop ebx
// 00571a6d  1a5700               sbb dl, byte ptr [edi]
// 00571a70  5b                   pop ebx
// 00571a71  1a5700               sbb dl, byte ptr [edi]
// 00571a74  2a1a                 sub bl, byte ptr [edx]
// 00571a76  57                   push edi
// 00571a77  0010                 add byte ptr [eax], dl
// 00571a79  1a5700               sbb dl, byte ptr [edi]
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?encode@GImage@G3D@@QBEXW4Format@12@AAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
