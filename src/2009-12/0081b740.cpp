// roc 2009-12 0081b740  unit: CInstanceRecord::CNameItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b740
//
// 0081b740  6aff                 push -1
// 0081b742  6883ab9500           push 0x95ab83
// 0081b747  64a100000000         mov eax, dword ptr fs:[0]
// 0081b74d  50                   push eax
// 0081b74e  51                   push ecx
// 0081b74f  56                   push esi
// 0081b750  a10052b600           mov eax, dword ptr [0xb65200]
// 0081b755  33c4                 xor eax, esp
// 0081b757  50                   push eax
// 0081b758  8d44240c             lea eax, [esp + 0xc]
// 0081b75c  64a300000000         mov dword ptr fs:[0], eax
// 0081b762  8bf1                 mov esi, ecx
// 0081b764  89742408             mov dword ptr [esp + 8], esi
// 0081b768  c706ec499f00         mov dword ptr [esi], 0x9f49ec
// 0081b76e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0081b776  e835fbffff           call 0x81b2b0
// 0081b77b  8d4e20               lea ecx, [esi + 0x20]
// 0081b77e  c644241400           mov byte ptr [esp + 0x14], 0
// 0081b783  e838faffff           call 0x81b1c0
// 0081b788  8bce                 mov ecx, esi
// 0081b78a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0081b792  e84b8cfdff           call 0x7f43e2
// 0081b797  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081b79b  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b7a2  59                   pop ecx
// 0081b7a3  5e                   pop esi
// 0081b7a4  83c410               add esp, 0x10
// 0081b7a7  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItemConstraints@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp