// roc 2012-06 00629790  unit: G3D::ReferenceCountedObject  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00629790
//
// 00629790  8b442408             mov eax, dword ptr [esp + 8]
// 00629794  83f807               cmp eax, 7
// 00629797  776c                 ja 0x629805
// 00629799  ff248508986200       jmp dword ptr [eax*4 + 0x629808]
// 006297a0  8b442404             mov eax, dword ptr [esp + 4]
// 006297a4  50                   push eax
// 006297a5  e836410100           call 0x63d8e0
// 006297aa  c20800               ret 8
// 006297ad  8b542404             mov edx, dword ptr [esp + 4]
// 006297b1  52                   push edx
// 006297b2  e8a93c0100           call 0x63d460
// 006297b7  c20800               ret 8
// 006297ba  8b442404             mov eax, dword ptr [esp + 4]
// 006297be  50                   push eax
// 006297bf  e8fc330100           call 0x63cbc0
// 006297c4  c20800               ret 8
// 006297c7  8b542404             mov edx, dword ptr [esp + 4]
// 006297cb  52                   push edx
// 006297cc  e81f290100           call 0x63c0f0
// 006297d1  c20800               ret 8
// 006297d4  8b442404             mov eax, dword ptr [esp + 4]
// 006297d8  50                   push eax
// 006297d9  e802060100           call 0x639de0
// 006297de  c20800               ret 8
// 006297e1  8b542404             mov edx, dword ptr [esp + 4]
// 006297e5  52                   push edx
// 006297e6  e8a50e0100           call 0x63a690
// 006297eb  c20800               ret 8
// 006297ee  8b442404             mov eax, dword ptr [esp + 4]
// 006297f2  50                   push eax
// 006297f3  e8781b0100           call 0x63b370
// 006297f8  c20800               ret 8
// 006297fb  8b542404             mov edx, dword ptr [esp + 4]
// 006297ff  52                   push edx
// 00629800  e84bf4ffff           call 0x628c50
// 00629805  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?decode@GImage@G3D@@AAEXAAVBinaryInput@2@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
