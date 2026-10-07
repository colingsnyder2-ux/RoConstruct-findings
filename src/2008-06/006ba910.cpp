// roc 2008-06 006ba910  unit: CXTPImageManagerResource::CBitmapDC  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ba910
//
// 006ba910  56                   push esi
// 006ba911  8bf1                 mov esi, ecx
// 006ba913  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ba916  c706d41f8500         mov dword ptr [esi], 0x851fd4
// 006ba91c  85c0                 test eax, eax
// 006ba91e  740b                 je 0x6ba92b
// 006ba920  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ba923  50                   push eax
// 006ba924  51                   push ecx
// 006ba925  ff15b0208000         call dword ptr [0x8020b0]
// 006ba92b  8bce                 mov ecx, esi
// 006ba92d  e820171000           call 0x7bc052
// 006ba932  f644240801           test byte ptr [esp + 8], 1
// 006ba937  7409                 je 0x6ba942
// 006ba939  56                   push esi
// 006ba93a  e83b5dfeff           call 0x6a067a
// 006ba93f  83c404               add esp, 4
// 006ba942  8bc6                 mov eax, esi
// 006ba944  5e                   pop esi
// 006ba945  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ??_GCBitmapDC@CXTPImageManagerResource@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
