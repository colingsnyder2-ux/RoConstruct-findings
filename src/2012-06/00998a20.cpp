// roc 2012-06 00998a20  unit: CXTPImageManagerResource::CBitmapDC  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998a20
//
// 00998a20  56                   push esi
// 00998a21  8bf1                 mov esi, ecx
// 00998a23  8b4610               mov eax, dword ptr [esi + 0x10]
// 00998a26  c70634e6c000         mov dword ptr [esi], 0xc0e634
// 00998a2c  85c0                 test eax, eax
// 00998a2e  740b                 je 0x998a3b
// 00998a30  8b4e04               mov ecx, dword ptr [esi + 4]
// 00998a33  50                   push eax
// 00998a34  51                   push ecx
// 00998a35  ff156021b200         call dword ptr [0xb22160]
// 00998a3b  8bce                 mov ecx, esi
// 00998a3d  e83ca5feff           call 0x982f7e
// 00998a42  f644240801           test byte ptr [esp + 8], 1
// 00998a47  7409                 je 0x998a52
// 00998a49  56                   push esi
// 00998a4a  e8c596feff           call 0x982114
// 00998a4f  83c404               add esp, 4
// 00998a52  8bc6                 mov eax, esi
// 00998a54  5e                   pop esi
// 00998a55  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ??_GCBitmapDC@CXTPImageManagerResource@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
