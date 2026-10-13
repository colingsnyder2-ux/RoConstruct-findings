// roc 2008-06 0050f2e0  unit: seg_00500000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050f2e0
//
// 0050f2e0  8b442404             mov eax, dword ptr [esp + 4]
// 0050f2e4  83f807               cmp eax, 7
// 0050f2e7  7752                 ja 0x50f33b
// 0050f2e9  ff248540f35000       jmp dword ptr [eax*4 + 0x50f340]
// 0050f2f0  8b442408             mov eax, dword ptr [esp + 8]
// 0050f2f4  50                   push eax
// 0050f2f5  e8f6f7ffff           call 0x50eaf0
// 0050f2fa  c20800               ret 8
// 0050f2fd  8b542408             mov edx, dword ptr [esp + 8]
// 0050f301  52                   push edx
// 0050f302  e829c7ffff           call 0x50ba30
// 0050f307  c20800               ret 8
// 0050f30a  8b442408             mov eax, dword ptr [esp + 8]
// 0050f30e  50                   push eax
// 0050f30f  e8ecc3ffff           call 0x50b700
// 0050f314  c20800               ret 8
// 0050f317  8b542408             mov edx, dword ptr [esp + 8]
// 0050f31b  52                   push edx
// 0050f31c  e87ff5ffff           call 0x50e8a0
// 0050f321  c20800               ret 8
// 0050f324  8b442408             mov eax, dword ptr [esp + 8]
// 0050f328  50                   push eax
// 0050f329  e8c2bbffff           call 0x50aef0
// 0050f32e  c20800               ret 8
// 0050f331  8b542408             mov edx, dword ptr [esp + 8]
// 0050f335  52                   push edx
// 0050f336  e865beffff           call 0x50b1a0
// 0050f33b  c20800               ret 8
// 0050f33e  8bff                 mov edi, edi
// 0050f340  17                   pop ss
// 0050f341  f350                 push eax
// 0050f343  0024f3               add byte ptr [ebx + esi*8], ah
// 0050f346  50                   push eax
// 0050f347  0031                 add byte ptr [ecx], dh
// 0050f349  f350                 push eax
// 0050f34b  003b                 add byte ptr [ebx], bh
// 0050f34d  f350                 push eax
// 0050f34f  003b                 add byte ptr [ebx], bh
// 0050f351  f350                 push eax
// 0050f353  000a                 add byte ptr [edx], cl
// 0050f355  f350                 push eax
// 0050f357  00f0                 add al, dh
// 0050f359  f250                 push eax
// 0050f35b  00fd                 add ch, bh
// 0050f35d  f250                 push eax
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_df9dd825b863ce4d.cpp (function ?encode@GImage@G3D@@QBEXW4Format@12@AAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_df9dd825b863ce4d.cpp
