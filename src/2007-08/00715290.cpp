// roc 2007-08 00715290  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715290
//
// 00715290  56                   push esi
// 00715291  8bf1                 mov esi, ecx
// 00715293  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0071529a  7443                 je 0x7152df
// 0071529c  57                   push edi
// 0071529d  e870310200           call 0x738412
// 007152a2  8bf8                 mov edi, eax
// 007152a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007152a8  6a00                 push 0
// 007152aa  83c80b               or eax, 0xb
// 007152ad  50                   push eax
// 007152ae  6a00                 push 0
// 007152b0  8bce                 mov ecx, esi
// 007152b2  e801b1f1ff           call 0x6303b8
// 007152b7  8bce                 mov ecx, esi
// 007152b9  e854310200           call 0x738412
// 007152be  3bf8                 cmp edi, eax
// 007152c0  5f                   pop edi
// 007152c1  7416                 je 0x7152d9
// 007152c3  66837c240c00         cmp word ptr [esp + 0xc], 0
// 007152c9  740e                 je 0x7152d9
// 007152cb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007152ce  6a01                 push 1
// 007152d0  6a00                 push 0
// 007152d2  51                   push ecx
// 007152d3  ff15dcec7700         call dword ptr [0x77ecdc]
// 007152d9  33c0                 xor eax, eax
// 007152db  5e                   pop esi
// 007152dc  c20800               ret 8
// 007152df  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007152e3  8b442408             mov eax, dword ptr [esp + 8]
// 007152e7  52                   push edx
// 007152e8  50                   push eax
// 007152e9  e862fdffff           call 0x715050
// 007152ee  5e                   pop esi
// 007152ef  c20800               ret 8
// copied from an identical function in another client (function ?OnSetStyle@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp