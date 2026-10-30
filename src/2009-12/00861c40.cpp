// roc 2009-12 00861c40  unit: CXTPToolTipContext::CHTMLToolTip  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861c40
//
// 00861c40  8b542404             mov edx, dword ptr [esp + 4]
// 00861c44  56                   push esi
// 00861c45  8bf1                 mov esi, ecx
// 00861c47  395630               cmp dword ptr [esi + 0x30], edx
// 00861c4a  745d                 je 0x861ca9
// 00861c4c  83fa01               cmp edx, 1
// 00861c4f  7509                 jne 0x861c5a
// 00861c51  e8cae3ffff           call 0x860020
// 00861c56  85c0                 test eax, eax
// 00861c58  744f                 je 0x861ca9
// 00861c5a  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00861c5d  895630               mov dword ptr [esi + 0x30], edx
// 00861c60  85c9                 test ecx, ecx
// 00861c62  741e                 je 0x861c82
// 00861c64  8b01                 mov eax, dword ptr [ecx]
// 00861c66  8b5068               mov edx, dword ptr [eax + 0x68]
// 00861c69  ffd2                 call edx
// 00861c6b  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00861c6e  85c9                 test ecx, ecx
// 00861c70  7409                 je 0x861c7b
// 00861c72  8b01                 mov eax, dword ptr [ecx]
// 00861c74  8b5004               mov edx, dword ptr [eax + 4]
// 00861c77  6a01                 push 1
// 00861c79  ffd2                 call edx
// 00861c7b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00861c82  8b4630               mov eax, dword ptr [esi + 0x30]
// 00861c85  33c9                 xor ecx, ecx
// 00861c87  83f802               cmp eax, 2
// 00861c8a  0f95c1               setne cl
// 00861c8d  83e802               sub eax, 2
// 00861c90  49                   dec ecx
// 00861c91  81e100300000         and ecx, 0x3000
// 00861c97  f7d8                 neg eax
// 00861c99  1bc0                 sbb eax, eax
// 00861c9b  51                   push ecx
// 00861c9c  2500300000           and eax, 0x3000
// 00861ca1  50                   push eax
// 00861ca2  8bce                 mov ecx, esi
// 00861ca4  e837e5ffff           call 0x8601e0
// 00861ca9  5e                   pop esi
// 00861caa  c20400               ret 4
// copied from an identical function in another client (function ?SetStyle@CXTPToolTipContext@@QAEXW4XTPToolTipStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp