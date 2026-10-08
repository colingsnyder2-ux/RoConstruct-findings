// from server: 100% by auto
// roc 2012-06 009989d0  unit: CXTPImageManagerResource::CBitmapDC  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009989d0
//
// 009989d0  56                   push esi
// 009989d1  8bf1                 mov esi, ecx
// 009989d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009989d7  85c9                 test ecx, ecx
// 009989d9  7427                 je 0x998a02
// 009989db  85f6                 test esi, esi
// 009989dd  7511                 jne 0x9989f0
// 009989df  33c0                 xor eax, eax
// 009989e1  51                   push ecx
// 009989e2  50                   push eax
// 009989e3  ff156021b200         call dword ptr [0xb22160]
// 009989e9  894610               mov dword ptr [esi + 0x10], eax
// 009989ec  5e                   pop esi
// 009989ed  c20400               ret 4
// 009989f0  8b4604               mov eax, dword ptr [esi + 4]
// 009989f3  51                   push ecx
// 009989f4  50                   push eax
// 009989f5  ff156021b200         call dword ptr [0xb22160]
// 009989fb  894610               mov dword ptr [esi + 0x10], eax
// 009989fe  5e                   pop esi
// 009989ff  c20400               ret 4
// 00998a02  8b4610               mov eax, dword ptr [esi + 0x10]
// 00998a05  85c0                 test eax, eax
// 00998a07  7412                 je 0x998a1b
// 00998a09  8b4e04               mov ecx, dword ptr [esi + 4]
// 00998a0c  50                   push eax
// 00998a0d  51                   push ecx
// 00998a0e  ff156021b200         call dword ptr [0xb22160]
// 00998a14  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00998a1b  5e                   pop esi
// 00998a1c  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?SetBitmap@CBitmapDC@CXTPImageManagerResource@@QAEXPAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
