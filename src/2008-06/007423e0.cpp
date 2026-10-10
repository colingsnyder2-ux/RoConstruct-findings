// roc 2008-06 007423e0  unit: CXTPControlEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007423e0
//
// 007423e0  56                   push esi
// 007423e1  57                   push edi
// 007423e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007423e6  57                   push edi
// 007423e7  8bf1                 mov esi, ecx
// 007423e9  e802aff6ff           call 0x6ad2f0
// 007423ee  85c0                 test eax, eax
// 007423f0  7505                 jne 0x7423f7
// 007423f2  5f                   pop edi
// 007423f3  5e                   pop esi
// 007423f4  c20400               ret 4
// 007423f7  85ff                 test edi, edi
// 007423f9  750a                 jne 0x742405
// 007423fb  8b06                 mov eax, dword ptr [esi]
// 007423fd  8b5070               mov edx, dword ptr [eax + 0x70]
// 00742400  57                   push edi
// 00742401  8bce                 mov ecx, esi
// 00742403  ffd2                 call edx
// 00742405  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0074240b  85c9                 test ecx, ecx
// 0074240d  740b                 je 0x74241a
// 0074240f  83792000             cmp dword ptr [ecx + 0x20], 0
// 00742413  7405                 je 0x74241a
// 00742415  e856faffff           call 0x741e70
// 0074241a  5f                   pop edi
// 0074241b  b801000000           mov eax, 1
// 00742420  5e                   pop esi
// 00742421  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?OnSetSelected@CXTPControlEdit@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
