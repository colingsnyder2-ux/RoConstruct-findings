// roc 2009-06 007eb040  unit: CXTPControlCustom  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb040
//
// 007eb040  56                   push esi
// 007eb041  8bf1                 mov esi, ecx
// 007eb043  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 007eb049  85c0                 test eax, eax
// 007eb04b  7416                 je 0x7eb063
// 007eb04d  50                   push eax
// 007eb04e  ff15c8ed8900         call dword ptr [0x89edc8]
// 007eb054  85c0                 test eax, eax
// 007eb056  740b                 je 0x7eb063
// 007eb058  8bce                 mov ecx, esi
// 007eb05a  e83148f3ff           call 0x71f890
// 007eb05f  85c0                 test eax, eax
// 007eb061  7416                 je 0x7eb079
// 007eb063  8b442410             mov eax, dword ptr [esp + 0x10]
// 007eb067  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007eb06b  8b542408             mov edx, dword ptr [esp + 8]
// 007eb06f  50                   push eax
// 007eb070  51                   push ecx
// 007eb071  52                   push edx
// 007eb072  8bce                 mov ecx, esi
// 007eb074  e8b73afdff           call 0x7beb30
// 007eb079  5e                   pop esi
// 007eb07a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnClick@CXTPControlCustom@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
