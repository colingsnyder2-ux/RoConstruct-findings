// roc 2009-12 0084f660  unit: CPropGrid  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f660
//
// 0084f660  56                   push esi
// 0084f661  8bf1                 mov esi, ecx
// 0084f663  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 0084f669  33c9                 xor ecx, ecx
// 0084f66b  394828               cmp dword ptr [eax + 0x28], ecx
// 0084f66e  0f95c1               setne cl
// 0084f671  398e3c010000         cmp dword ptr [esi + 0x13c], ecx
// 0084f677  7418                 je 0x84f691
// 0084f679  8bce                 mov ecx, esi
// 0084f67b  e800e4ffff           call 0x84da80
// 0084f680  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 0084f687  7508                 jne 0x84f691
// 0084f689  8bce                 mov ecx, esi
// 0084f68b  5e                   pop esi
// 0084f68c  e9bff6ffff           jmp 0x84ed50
// 0084f691  837e2000             cmp dword ptr [esi + 0x20], 0
// 0084f695  741e                 je 0x84f6b5
// 0084f697  8bce                 mov ecx, esi
// 0084f699  e8e2e3ffff           call 0x84da80
// 0084f69e  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 0084f6a5  750e                 jne 0x84f6b5
// 0084f6a7  8b5620               mov edx, dword ptr [esi + 0x20]
// 0084f6aa  6a00                 push 0
// 0084f6ac  6a00                 push 0
// 0084f6ae  52                   push edx
// 0084f6af  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0084f6b5  5e                   pop esi
// 0084f6b6  c3                   ret 
// copied from an identical function in another client (function ?OnVerbsChanged@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp