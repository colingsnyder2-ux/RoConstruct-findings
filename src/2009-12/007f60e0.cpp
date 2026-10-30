// roc 2009-12 007f60e0  unit: CRobloxControlColorSelector  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f60e0
//
// 007f60e0  56                   push esi
// 007f60e1  8bf1                 mov esi, ecx
// 007f60e3  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 007f60ea  7519                 jne 0x7f6105
// 007f60ec  8d8edc000000         lea ecx, [esi + 0xdc]
// 007f60f2  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f60f8  84c0                 test al, al
// 007f60fa  7409                 je 0x7f6105
// 007f60fc  83be4c010000ff       cmp dword ptr [esi + 0x14c], -1
// 007f6103  7436                 je 0x7f613b
// 007f6105  6856fd9900           push 0x99fd56
// 007f610a  8d8edc000000         lea ecx, [esi + 0xdc]
// 007f6110  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 007f611a  ff155cde9800         call dword ptr [0x98de5c]
// 007f6120  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6126  c7864c010000ffffffff mov dword ptr [esi + 0x14c], 0xffffffff
// 007f6130  8b01                 mov eax, dword ptr [ecx]
// 007f6132  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 007f6138  5e                   pop esi
// 007f6139  ffe2                 jmp edx
// 007f613b  5e                   pop esi
// 007f613c  c3                   ret 
// copied from an identical function in another client (function ?Reset@CXTPControl@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp