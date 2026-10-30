// roc 2011-06 008e7820  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7820
//
// 008e7820  56                   push esi
// 008e7821  8bf1                 mov esi, ecx
// 008e7823  e81e31f2ff           call 0x80a946
// 008e7828  c7065c8dad00         mov dword ptr [esi], 0xad8d5c
// 008e782e  6a0a                 push 0xa
// 008e7830  8d4e74               lea ecx, [esi + 0x74]
// 008e7833  c7465800000000       mov dword ptr [esi + 0x58], 0
// 008e783a  c7465490e7a500       mov dword ptr [esi + 0x54], 0xa5e790
// 008e7841  e87affffff           call 0x8e77c0
// 008e7846  b801000000           mov eax, 1
// 008e784b  894664               mov dword ptr [esi + 0x64], eax
// 008e784e  88465c               mov byte ptr [esi + 0x5c], al
// 008e7851  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 008e7858  c7466000000000       mov dword ptr [esi + 0x60], 0
// 008e785f  8bc6                 mov eax, esi
// 008e7861  5e                   pop esi
// 008e7862  c3                   ret 
// copied from an identical function in another client (function ??0CXTColorHex@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp