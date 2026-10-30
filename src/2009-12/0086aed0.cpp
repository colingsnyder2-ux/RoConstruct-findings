// roc 2009-12 0086aed0  unit: CXTPPropertyGridItemBool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086aed0
//
// 0086aed0  56                   push esi
// 0086aed1  8bf1                 mov esi, ecx
// 0086aed3  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0086aed9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086aedd  898e0c010000         mov dword ptr [esi + 0x10c], ecx
// 0086aee3  85c0                 test eax, eax
// 0086aee5  7402                 je 0x86aee9
// 0086aee7  8908                 mov dword ptr [eax], ecx
// 0086aee9  8d8614010000         lea eax, [esi + 0x114]
// 0086aeef  85c9                 test ecx, ecx
// 0086aef1  7506                 jne 0x86aef9
// 0086aef3  8d8618010000         lea eax, [esi + 0x118]
// 0086aef9  51                   push ecx
// 0086aefa  8bcc                 mov ecx, esp
// 0086aefc  8964240c             mov dword ptr [esp + 0xc], esp
// 0086af00  50                   push eax
// 0086af01  ff1594de9800         call dword ptr [0x98de94]
// 0086af07  8bce                 mov ecx, esi
// 0086af09  e8e2a2ffff           call 0x8651f0
// 0086af0e  5e                   pop esi
// 0086af0f  c20400               ret 4
// copied from an identical function in another client (function ?SetBool@CXTPPropertyGridItemBool@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemBool.cpp