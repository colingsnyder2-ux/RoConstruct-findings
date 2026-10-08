// from server: 100% by auto
// roc 2011-06 008203d0  unit: CXTPImageManagerResource::CBitmapDC  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008203d0
//
// 008203d0  56                   push esi
// 008203d1  8bf1                 mov esi, ecx
// 008203d3  8b4610               mov eax, dword ptr [esi + 0x10]
// 008203d6  c7064c2fac00         mov dword ptr [esi], 0xac2f4c
// 008203dc  85c0                 test eax, eax
// 008203de  740b                 je 0x8203eb
// 008203e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 008203e3  50                   push eax
// 008203e4  51                   push ecx
// 008203e5  ff158c01a400         call dword ptr [0xa4018c]
// 008203eb  8bce                 mov ecx, esi
// 008203ed  e810aafeff           call 0x80ae02
// 008203f2  f644240801           test byte ptr [esp + 8], 1
// 008203f7  7409                 je 0x820402
// 008203f9  56                   push esi
// 008203fa  e8599cfeff           call 0x80a058
// 008203ff  83c404               add esp, 4
// 00820402  8bc6                 mov eax, esi
// 00820404  5e                   pop esi
// 00820405  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??_GCBitmapDC@CXTPImageManagerResource@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
