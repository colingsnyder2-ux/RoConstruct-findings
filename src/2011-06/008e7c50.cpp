// roc 2011-06 008e7c50  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7c50
//
// 008e7c50  8b442404             mov eax, dword ptr [esp + 4]
// 008e7c54  56                   push esi
// 008e7c55  8bf1                 mov esi, ecx
// 008e7c57  83f8ff               cmp eax, -1
// 008e7c5a  7421                 je 0x8e7c7d
// 008e7c5c  50                   push eax
// 008e7c5d  8d4e74               lea ecx, [esi + 0x74]
// 008e7c60  e89b66f6ff           call 0x84e300
// 008e7c65  8b4008               mov eax, dword ptr [eax + 8]
// 008e7c68  85c0                 test eax, eax
// 008e7c6a  7411                 je 0x8e7c7d
// 008e7c6c  8b4014               mov eax, dword ptr [eax + 0x14]
// 008e7c6f  8b4804               mov ecx, dword ptr [eax + 4]
// 008e7c72  8b10                 mov edx, dword ptr [eax]
// 008e7c74  51                   push ecx
// 008e7c75  52                   push edx
// 008e7c76  8bce                 mov ecx, esi
// 008e7c78  e8c3fdffff           call 0x8e7a40
// 008e7c7d  5e                   pop esi
// 008e7c7e  c20400               ret 4
// copied from an identical function in another client (function ?SetSelectedColor@CXTColorHex@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp