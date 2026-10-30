// roc 2009-12 008671f0  unit: CXTPPropertyGridItemColor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008671f0
//
// 008671f0  56                   push esi
// 008671f1  8bf1                 mov esi, ecx
// 008671f3  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 008671f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008671fd  898e0c010000         mov dword ptr [esi + 0x10c], ecx
// 00867203  85c0                 test eax, eax
// 00867205  7402                 je 0x867209
// 00867207  8908                 mov dword ptr [eax], ecx
// 00867209  51                   push ecx
// 0086720a  8bc4                 mov eax, esp
// 0086720c  8964240c             mov dword ptr [esp + 0xc], esp
// 00867210  51                   push ecx
// 00867211  50                   push eax
// 00867212  e8d9feffff           call 0x8670f0
// 00867217  83c408               add esp, 8
// 0086721a  8bce                 mov ecx, esi
// 0086721c  e8cfdfffff           call 0x8651f0
// 00867221  5e                   pop esi
// 00867222  c20400               ret 4
// copied from an identical function in another client (function ?SetColor@CXTPPropertyGridItemColor@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemColor.cpp