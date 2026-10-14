// roc 2012-06 006289f0  unit: G3D::ReferenceCountedObject  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006289f0
//
// 006289f0  8b442404             mov eax, dword ptr [esp + 4]
// 006289f4  83f807               cmp eax, 7
// 006289f7  7752                 ja 0x628a4b
// 006289f9  ff2485508a6200       jmp dword ptr [eax*4 + 0x628a50]
// 00628a00  8b442408             mov eax, dword ptr [esp + 8]
// 00628a04  50                   push eax
// 00628a05  e8064c0100           call 0x63d610
// 00628a0a  c20800               ret 8
// 00628a0d  8b542408             mov edx, dword ptr [esp + 8]
// 00628a11  52                   push edx
// 00628a12  e819460100           call 0x63d030
// 00628a17  c20800               ret 8
// 00628a1a  8b442408             mov eax, dword ptr [esp + 8]
// 00628a1e  50                   push eax
// 00628a1f  e80c3d0100           call 0x63c730
// 00628a24  c20800               ret 8
// 00628a27  8b542408             mov edx, dword ptr [esp + 8]
// 00628a2b  52                   push edx
// 00628a2c  e82f390100           call 0x63c360
// 00628a31  c20800               ret 8
// 00628a34  8b442408             mov eax, dword ptr [esp + 8]
// 00628a38  50                   push eax
// 00628a39  e8a2190100           call 0x63a3e0
// 00628a3e  c20800               ret 8
// 00628a41  8b542408             mov edx, dword ptr [esp + 8]
// 00628a45  52                   push edx
// 00628a46  e8a50d0100           call 0x6397f0
// 00628a4b  c20800               ret 8
// 00628a4e  8bff                 mov edi, edi
// 00628a50  27                   daa 
// 00628a51  8a6200               mov ah, byte ptr [edx]
// 00628a54  348a                 xor al, 0x8a
// 00628a56  6200                 bound eax, qword ptr [eax]
// 00628a58  41                   inc ecx
// 00628a59  8a6200               mov ah, byte ptr [edx]
// 00628a5c  4b                   dec ebx
// 00628a5d  8a6200               mov ah, byte ptr [edx]
// 00628a60  4b                   dec ebx
// 00628a61  8a6200               mov ah, byte ptr [edx]
// 00628a64  1a8a62000d8a         sbb cl, byte ptr [edx - 0x75f2ff9e]
// 00628a6a  6200                 bound eax, qword ptr [eax]
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?encode@GImage@G3D@@QBEXW4Format@12@AAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
