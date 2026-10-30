// roc 2009-12 0080d490  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d490
//
// 0080d490  56                   push esi
// 0080d491  57                   push edi
// 0080d492  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0080d496  8d44240c             lea eax, [esp + 0xc]
// 0080d49a  8d7128               lea esi, [ecx + 0x28]
// 0080d49d  50                   push eax
// 0080d49e  57                   push edi
// 0080d49f  8bce                 mov ecx, esi
// 0080d4a1  e8daf4ffff           call 0x80c980
// 0080d4a6  85c0                 test eax, eax
// 0080d4a8  741a                 je 0x80d4c4
// 0080d4aa  57                   push edi
// 0080d4ab  8bce                 mov ecx, esi
// 0080d4ad  e81ef40900           call 0x8ac8d0
// 0080d4b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080d4b6  8bce                 mov ecx, esi
// 0080d4b8  e8c3f2ffff           call 0x80c780
// 0080d4bd  8bce                 mov ecx, esi
// 0080d4bf  e81869feff           call 0x7f3ddc
// 0080d4c4  5f                   pop edi
// 0080d4c5  5e                   pop esi
// 0080d4c6  c20400               ret 4
// copied from an identical function in another client (function ?RemoveIcon@CXTPImageManager@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp