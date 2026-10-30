// roc 2009-12 0084fe60  unit: CXTPPropertyGrid  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fe60
//
// 0084fe60  56                   push esi
// 0084fe61  57                   push edi
// 0084fe62  8bf1                 mov esi, ecx
// 0084fe64  e817dcffff           call 0x84da80
// 0084fe69  8bce                 mov ecx, esi
// 0084fe6b  c7804801000001000000 mov dword ptr [eax + 0x148], 1
// 0084fe75  e806dcffff           call 0x84da80
// 0084fe7a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084fe7d  6a00                 push 0
// 0084fe7f  6a00                 push 0
// 0084fe81  6a0b                 push 0xb
// 0084fe83  50                   push eax
// 0084fe84  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0084fe8a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084fe8e  57                   push edi
// 0084fe8f  8bce                 mov ecx, esi
// 0084fe91  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 0084fe98  c7474000000000       mov dword ptr [edi + 0x40], 0
// 0084fe9f  e86cddffff           call 0x84dc10
// 0084fea4  50                   push eax
// 0084fea5  8bce                 mov ecx, esi
// 0084fea7  e8f4feffff           call 0x84fda0
// 0084feac  8bce                 mov ecx, esi
// 0084feae  e8cddbffff           call 0x84da80
// 0084feb3  8b88dc000000         mov ecx, dword ptr [eax + 0xdc]
// 0084feb9  894f44               mov dword ptr [edi + 0x44], ecx
// 0084febc  8bce                 mov ecx, esi
// 0084febe  e8edfcffff           call 0x84fbb0
// 0084fec3  5f                   pop edi
// 0084fec4  5e                   pop esi
// 0084fec5  c20400               ret 4
// copied from an identical function in another client (function ?BeginUpdate@CXTPPropertyGrid@@QAEXAAVCXTPPropertyGridUpdateContext@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp