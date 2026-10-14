// roc 2011-06 0053cb00  unit: G3D::ReferenceCountedObject  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053cb00
//
// 0053cb00  8b442404             mov eax, dword ptr [esp + 4]
// 0053cb04  83f807               cmp eax, 7
// 0053cb07  7752                 ja 0x53cb5b
// 0053cb09  ff248560cb5300       jmp dword ptr [eax*4 + 0x53cb60]
// 0053cb10  8b442408             mov eax, dword ptr [esp + 8]
// 0053cb14  50                   push eax
// 0053cb15  e8b6340100           call 0x54ffd0
// 0053cb1a  c20800               ret 8
// 0053cb1d  8b542408             mov edx, dword ptr [esp + 8]
// 0053cb21  52                   push edx
// 0053cb22  e8c92e0100           call 0x54f9f0
// 0053cb27  c20800               ret 8
// 0053cb2a  8b442408             mov eax, dword ptr [esp + 8]
// 0053cb2e  50                   push eax
// 0053cb2f  e8bc250100           call 0x54f0f0
// 0053cb34  c20800               ret 8
// 0053cb37  8b542408             mov edx, dword ptr [esp + 8]
// 0053cb3b  52                   push edx
// 0053cb3c  e8df210100           call 0x54ed20
// 0053cb41  c20800               ret 8
// 0053cb44  8b442408             mov eax, dword ptr [esp + 8]
// 0053cb48  50                   push eax
// 0053cb49  e852020100           call 0x54cda0
// 0053cb4e  c20800               ret 8
// 0053cb51  8b542408             mov edx, dword ptr [esp + 8]
// 0053cb55  52                   push edx
// 0053cb56  e855f60000           call 0x54c1b0
// 0053cb5b  c20800               ret 8
// 0053cb5e  8bff                 mov edi, edi
// 0053cb60  37                   aaa 
// 0053cb61  cb                   retf 
// 0053cb62  53                   push ebx
// 0053cb63  0044cb53             add byte ptr [ebx + ecx*8 + 0x53], al
// 0053cb67  0051cb               add byte ptr [ecx - 0x35], dl
// 0053cb6a  53                   push ebx
// 0053cb6b  005bcb               add byte ptr [ebx - 0x35], bl
// 0053cb6e  53                   push ebx
// 0053cb6f  005bcb               add byte ptr [ebx - 0x35], bl
// 0053cb72  53                   push ebx
// 0053cb73  002a                 add byte ptr [edx], ch
// 0053cb75  cb                   retf 
// 0053cb76  53                   push ebx
// 0053cb77  001dcb530010         add byte ptr [0x100053cb], bl
// 0053cb7d  cb                   retf 
// 0053cb7e  53                   push ebx
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?encode@GImage@G3D@@QBEXW4Format@12@AAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
