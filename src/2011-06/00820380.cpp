// roc 2011-06 00820380  unit: CXTPImageManagerResource::CBitmapDC  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00820380
//
// 00820380  56                   push esi
// 00820381  8bf1                 mov esi, ecx
// 00820383  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00820387  85c9                 test ecx, ecx
// 00820389  7427                 je 0x8203b2
// 0082038b  85f6                 test esi, esi
// 0082038d  7511                 jne 0x8203a0
// 0082038f  33c0                 xor eax, eax
// 00820391  51                   push ecx
// 00820392  50                   push eax
// 00820393  ff158c01a400         call dword ptr [0xa4018c]
// 00820399  894610               mov dword ptr [esi + 0x10], eax
// 0082039c  5e                   pop esi
// 0082039d  c20400               ret 4
// 008203a0  8b4604               mov eax, dword ptr [esi + 4]
// 008203a3  51                   push ecx
// 008203a4  50                   push eax
// 008203a5  ff158c01a400         call dword ptr [0xa4018c]
// 008203ab  894610               mov dword ptr [esi + 0x10], eax
// 008203ae  5e                   pop esi
// 008203af  c20400               ret 4
// 008203b2  8b4610               mov eax, dword ptr [esi + 0x10]
// 008203b5  85c0                 test eax, eax
// 008203b7  7412                 je 0x8203cb
// 008203b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 008203bc  50                   push eax
// 008203bd  51                   push ecx
// 008203be  ff158c01a400         call dword ptr [0xa4018c]
// 008203c4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 008203cb  5e                   pop esi
// 008203cc  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?SetBitmap@CBitmapDC@CXTPImageManagerResource@@QAEXPAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
