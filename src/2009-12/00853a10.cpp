// roc 2009-12 00853a10  unit: CXTPPropExchangeXMLNode  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853a10
//
// 00853a10  56                   push esi
// 00853a11  8bf1                 mov esi, ecx
// 00853a13  e898c6ffff           call 0x8500b0
// 00853a18  8b06                 mov eax, dword ptr [esi]
// 00853a1a  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00853a20  ffd2                 call edx
// 00853a22  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00853a25  85c9                 test ecx, ecx
// 00853a27  743f                 je 0x853a68
// 00853a29  837e4800             cmp dword ptr [esi + 0x48], 0
// 00853a2d  7439                 je 0x853a68
// 00853a2f  8b4648               mov eax, dword ptr [esi + 0x48]
// 00853a32  85c0                 test eax, eax
// 00853a34  750a                 jne 0x853a40
// 00853a36  6803400080           push 0x80004003
// 00853a3b  e8c01efaff           call 0x7f5900
// 00853a40  8b10                 mov edx, dword ptr [eax]
// 00853a42  6a00                 push 0
// 00853a44  51                   push ecx
// 00853a45  50                   push eax
// 00853a46  8b4250               mov eax, dword ptr [edx + 0x50]
// 00853a49  ffd0                 call eax
// 00853a4b  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00853a4e  85c0                 test eax, eax
// 00853a50  740f                 je 0x853a61
// 00853a52  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 00853a59  8b08                 mov ecx, dword ptr [eax]
// 00853a5b  8b5108               mov edx, dword ptr [ecx + 8]
// 00853a5e  50                   push eax
// 00853a5f  ffd2                 call edx
// 00853a61  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00853a68  5e                   pop esi
// 00853a69  c3                   ret 
// copied from an identical function in another client (function ?EmptySection@CXTPPropExchangeXMLNode@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp