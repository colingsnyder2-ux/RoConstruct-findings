// roc 2009-12 0088b8c0  unit: CXTPControlEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b8c0
//
// 0088b8c0  56                   push esi
// 0088b8c1  57                   push edi
// 0088b8c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0088b8c6  57                   push edi
// 0088b8c7  8bf1                 mov esi, ecx
// 0088b8c9  e872c8f6ff           call 0x7f8140
// 0088b8ce  85c0                 test eax, eax
// 0088b8d0  7505                 jne 0x88b8d7
// 0088b8d2  5f                   pop edi
// 0088b8d3  5e                   pop esi
// 0088b8d4  c20400               ret 4
// 0088b8d7  85ff                 test edi, edi
// 0088b8d9  750a                 jne 0x88b8e5
// 0088b8db  8b06                 mov eax, dword ptr [esi]
// 0088b8dd  8b5070               mov edx, dword ptr [eax + 0x70]
// 0088b8e0  57                   push edi
// 0088b8e1  8bce                 mov ecx, esi
// 0088b8e3  ffd2                 call edx
// 0088b8e5  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088b8eb  85c9                 test ecx, ecx
// 0088b8ed  740b                 je 0x88b8fa
// 0088b8ef  83792000             cmp dword ptr [ecx + 0x20], 0
// 0088b8f3  7405                 je 0x88b8fa
// 0088b8f5  e8c6faffff           call 0x88b3c0
// 0088b8fa  5f                   pop edi
// 0088b8fb  b801000000           mov eax, 1
// 0088b900  5e                   pop esi
// 0088b901  c20400               ret 4
// copied from an identical function in another client (function ?OnSetSelected@CXTPControlEdit@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp