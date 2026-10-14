// roc 2009-12 005f0b00  unit: seg_005f0000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f0b00
//
// 005f0b00  8b442404             mov eax, dword ptr [esp + 4]
// 005f0b04  83f807               cmp eax, 7
// 005f0b07  7752                 ja 0x5f0b5b
// 005f0b09  ff2485600b5f00       jmp dword ptr [eax*4 + 0x5f0b60]
// 005f0b10  8b442408             mov eax, dword ptr [esp + 8]
// 005f0b14  50                   push eax
// 005f0b15  e8d6f6ffff           call 0x5f01f0
// 005f0b1a  c20800               ret 8
// 005f0b1d  8b542408             mov edx, dword ptr [esp + 8]
// 005f0b21  52                   push edx
// 005f0b22  e849c7ffff           call 0x5ed270
// 005f0b27  c20800               ret 8
// 005f0b2a  8b442408             mov eax, dword ptr [esp + 8]
// 005f0b2e  50                   push eax
// 005f0b2f  e80cc4ffff           call 0x5ecf40
// 005f0b34  c20800               ret 8
// 005f0b37  8b542408             mov edx, dword ptr [esp + 8]
// 005f0b3b  52                   push edx
// 005f0b3c  e85ff4ffff           call 0x5effa0
// 005f0b41  c20800               ret 8
// 005f0b44  8b442408             mov eax, dword ptr [esp + 8]
// 005f0b48  50                   push eax
// 005f0b49  e8e2bbffff           call 0x5ec730
// 005f0b4e  c20800               ret 8
// 005f0b51  8b542408             mov edx, dword ptr [esp + 8]
// 005f0b55  52                   push edx
// 005f0b56  e885beffff           call 0x5ec9e0
// 005f0b5b  c20800               ret 8
// 005f0b5e  8bff                 mov edi, edi
// 005f0b60  37                   aaa 
// 005f0b61  0b5f00               or ebx, dword ptr [edi]
// 005f0b64  44                   inc esp
// 005f0b65  0b5f00               or ebx, dword ptr [edi]
// 005f0b68  51                   push ecx
// 005f0b69  0b5f00               or ebx, dword ptr [edi]
// 005f0b6c  5b                   pop ebx
// 005f0b6d  0b5f00               or ebx, dword ptr [edi]
// 005f0b70  5b                   pop ebx
// 005f0b71  0b5f00               or ebx, dword ptr [edi]
// 005f0b74  2a0b                 sub cl, byte ptr [ebx]
// 005f0b76  5f                   pop edi
// 005f0b77  0010                 add byte ptr [eax], dl
// 005f0b79  0b5f00               or ebx, dword ptr [edi]
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?encode@GImage@G3D@@QBEXW4Format@12@AAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
