// roc 2009-12 0084eff0  unit: CXTPPropertyGrid  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084eff0
//
// 0084eff0  56                   push esi
// 0084eff1  8bf1                 mov esi, ecx
// 0084eff3  e888eaffff           call 0x84da80
// 0084eff8  8b80dc000000         mov eax, dword ptr [eax + 0xdc]
// 0084effe  6a01                 push 1
// 0084f000  6a01                 push 1
// 0084f002  50                   push eax
// 0084f003  8bce                 mov ecx, esi
// 0084f005  e876eaffff           call 0x84da80
// 0084f00a  8bc8                 mov ecx, eax
// 0084f00c  e87fb30100           call 0x86a390
// 0084f011  5e                   pop esi
// 0084f012  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Refresh@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
