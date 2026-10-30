// roc 2009-12 0084fbb0  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fbb0
//
// 0084fbb0  56                   push esi
// 0084fbb1  8bf1                 mov esi, ecx
// 0084fbb3  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0084fbb9  e822feffff           call 0x84f9e0
// 0084fbbe  8bce                 mov ecx, esi
// 0084fbc0  e8bbdeffff           call 0x84da80
// 0084fbc5  8bc8                 mov ecx, eax
// 0084fbc7  e834890100           call 0x868500
// 0084fbcc  8bce                 mov ecx, esi
// 0084fbce  e8addeffff           call 0x84da80
// 0084fbd3  ff8048010000         inc dword ptr [eax + 0x148]
// 0084fbd9  0548010000           add eax, 0x148
// 0084fbde  8bce                 mov ecx, esi
// 0084fbe0  e89bdeffff           call 0x84da80
// 0084fbe5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 0084fbeb  e8e0670100           call 0x8663d0
// 0084fbf0  8bce                 mov ecx, esi
// 0084fbf2  e889deffff           call 0x84da80
// 0084fbf7  ff8848010000         dec dword ptr [eax + 0x148]
// 0084fbfd  0548010000           add eax, 0x148
// 0084fc02  5e                   pop esi
// 0084fc03  c3                   ret 
// copied from an identical function in another client (function ?ResetContent@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp