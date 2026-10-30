// roc 2009-12 00851740  unit: CXTPPropExchange  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851740
//
// 00851740  51                   push ecx
// 00851741  56                   push esi
// 00851742  8bf1                 mov esi, ecx
// 00851744  837e2800             cmp dword ptr [esi + 0x28], 0
// 00851748  57                   push edi
// 00851749  7533                 jne 0x85177e
// 0085174b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085174f  8b08                 mov ecx, dword ptr [eax]
// 00851751  8b11                 mov edx, dword ptr [ecx]
// 00851753  8b02                 mov eax, dword ptr [edx]
// 00851755  ffd0                 call eax
// 00851757  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085175b  51                   push ecx
// 0085175c  8d542414             lea edx, [esp + 0x14]
// 00851760  52                   push edx
// 00851761  6878c49f00           push 0x9fc478
// 00851766  56                   push esi
// 00851767  89442420             mov dword ptr [esp + 0x20], eax
// 0085176b  e840f4ffff           call 0x850bb0
// 00851770  83c410               add esp, 0x10
// 00851773  5f                   pop edi
// 00851774  b801000000           mov eax, 1
// 00851779  5e                   pop esi
// 0085177a  59                   pop ecx
// 0085177b  c20800               ret 8
// 0085177e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00851782  57                   push edi
// 00851783  8d44240c             lea eax, [esp + 0xc]
// 00851787  50                   push eax
// 00851788  6878c49f00           push 0x9fc478
// 0085178d  56                   push esi
// 0085178e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00851796  e815f4ffff           call 0x850bb0
// 0085179b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085179f  83c410               add esp, 0x10
// 008517a2  85c9                 test ecx, ecx
// 008517a4  7508                 jne 0x8517ae
// 008517a6  5f                   pop edi
// 008517a7  33c0                 xor eax, eax
// 008517a9  5e                   pop esi
// 008517aa  59                   pop ecx
// 008517ab  c20800               ret 8
// 008517ae  e8af2afaff           call 0x7f4262
// 008517b3  50                   push eax
// 008517b4  57                   push edi
// 008517b5  e88424faff           call 0x7f3c3e
// 008517ba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008517be  83c408               add esp, 8
// 008517c1  8901                 mov dword ptr [ecx], eax
// 008517c3  85c0                 test eax, eax
// 008517c5  74df                 je 0x8517a6
// 008517c7  5f                   pop edi
// 008517c8  b801000000           mov eax, 1
// 008517cd  5e                   pop esi
// 008517ce  59                   pop ecx
// 008517cf  c20800               ret 8
// copied from an identical function in another client (function ?ExchangeObjectInstance@CXTPPropExchange@@UAEHAAPAVCObject@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp