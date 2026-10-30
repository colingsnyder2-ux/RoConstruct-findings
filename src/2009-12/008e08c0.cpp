// roc 2009-12 008e08c0  unit: CXTPOffice2007Image  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e08c0
//
// 008e08c0  83ec18               sub esp, 0x18
// 008e08c3  56                   push esi
// 008e08c4  33f6                 xor esi, esi
// 008e08c6  3bce                 cmp ecx, esi
// 008e08c8  7516                 jne 0x8e08e0
// 008e08ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e08ce  8930                 mov dword ptr [eax], esi
// 008e08d0  897004               mov dword ptr [eax + 4], esi
// 008e08d3  897008               mov dword ptr [eax + 8], esi
// 008e08d6  89700c               mov dword ptr [eax + 0xc], esi
// 008e08d9  5e                   pop esi
// 008e08da  83c418               add esp, 0x18
// 008e08dd  c20c00               ret 0xc
// 008e08e0  8d442404             lea eax, [esp + 4]
// 008e08e4  50                   push eax
// 008e08e5  e886ffffff           call 0x8e0870
// 008e08ea  8b442408             mov eax, dword ptr [esp + 8]
// 008e08ee  99                   cdq 
// 008e08ef  f77c2428             idiv dword ptr [esp + 0x28]
// 008e08f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008e08f7  8d54240c             lea edx, [esp + 0xc]
// 008e08fb  8974240c             mov dword ptr [esp + 0xc], esi
// 008e08ff  89742410             mov dword ptr [esp + 0x10], esi
// 008e0903  894c2414             mov dword ptr [esp + 0x14], ecx
// 008e0907  89442418             mov dword ptr [esp + 0x18], eax
// 008e090b  0faf442424           imul eax, dword ptr [esp + 0x24]
// 008e0910  50                   push eax
// 008e0911  56                   push esi
// 008e0912  52                   push edx
// 008e0913  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e0919  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e091d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e0921  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e0925  8908                 mov dword ptr [eax], ecx
// 008e0927  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e092b  895004               mov dword ptr [eax + 4], edx
// 008e092e  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e0932  894808               mov dword ptr [eax + 8], ecx
// 008e0935  89500c               mov dword ptr [eax + 0xc], edx
// 008e0938  5e                   pop esi
// 008e0939  83c418               add esp, 0x18
// 008e093c  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetSource@CXTPOffice2007Image@@QBE?AVCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp