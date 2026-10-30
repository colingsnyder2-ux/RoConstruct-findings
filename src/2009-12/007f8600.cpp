// roc 2009-12 007f8600  unit: CXTPControl  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8600
//
// 007f8600  51                   push ecx
// 007f8601  53                   push ebx
// 007f8602  55                   push ebp
// 007f8603  56                   push esi
// 007f8604  57                   push edi
// 007f8605  6a01                 push 1
// 007f8607  8bf1                 mov esi, ecx
// 007f8609  e8827d0700           call 0x870390
// 007f860e  8bc8                 mov ecx, eax
// 007f8610  e86b7e0700           call 0x870480
// 007f8615  8bce                 mov ecx, esi
// 007f8617  e864d8ffff           call 0x7f5e80
// 007f861c  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f8622  f7d8                 neg eax
// 007f8624  1bc0                 sbb eax, eax
// 007f8626  83e002               and eax, 2
// 007f8629  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 007f862f  e86cbe0000           call 0x8044a0
// 007f8634  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f863a  8bf8                 mov edi, eax
// 007f863c  8baf28010000         mov ebp, dword ptr [edi + 0x128]
// 007f8642  e8a9ea0000           call 0x8070f0
// 007f8647  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f864d  89442410             mov dword ptr [esp + 0x10], eax
// 007f8651  e87abe0000           call 0x8044d0
// 007f8656  83bf5401000000       cmp dword ptr [edi + 0x154], 0
// 007f865d  8bd8                 mov ebx, eax
// 007f865f  743f                 je 0x7f86a0
// 007f8661  85ed                 test ebp, ebp
// 007f8663  7420                 je 0x7f8685
// 007f8665  8b07                 mov eax, dword ptr [edi]
// 007f8667  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 007f866d  8bcf                 mov ecx, edi
// 007f866f  ffd2                 call edx
// 007f8671  8b8754010000         mov eax, dword ptr [edi + 0x154]
// 007f8677  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007f867d  5f                   pop edi
// 007f867e  5e                   pop esi
// 007f867f  5d                   pop ebp
// 007f8680  8908                 mov dword ptr [eax], ecx
// 007f8682  5b                   pop ebx
// 007f8683  59                   pop ecx
// 007f8684  c3                   ret 
// 007f8685  8bcb                 mov ecx, ebx
// 007f8687  e854d80100           call 0x815ee0
// 007f868c  8b8754010000         mov eax, dword ptr [edi + 0x154]
// 007f8692  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007f8698  5f                   pop edi
// 007f8699  5e                   pop esi
// 007f869a  5d                   pop ebp
// 007f869b  8908                 mov dword ptr [eax], ecx
// 007f869d  5b                   pop ebx
// 007f869e  59                   pop ecx
// 007f869f  c3                   ret 
// 007f86a0  85db                 test ebx, ebx
// 007f86a2  7447                 je 0x7f86eb
// 007f86a4  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 007f86aa  85c0                 test eax, eax
// 007f86ac  7408                 je 0x7f86b6
// 007f86ae  50                   push eax
// 007f86af  8bcb                 mov ecx, ebx
// 007f86b1  e8daf00100           call 0x817790
// 007f86b6  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 007f86bc  52                   push edx
// 007f86bd  e8be920400           call 0x841980
// 007f86c2  50                   push eax
// 007f86c3  e876b5ffff           call 0x7f3c3e
// 007f86c8  83c408               add esp, 8
// 007f86cb  85c0                 test eax, eax
// 007f86cd  741c                 je 0x7f86eb
// 007f86cf  8b8080010000         mov eax, dword ptr [eax + 0x180]
// 007f86d5  85c0                 test eax, eax
// 007f86d7  7412                 je 0x7f86eb
// 007f86d9  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 007f86df  85c0                 test eax, eax
// 007f86e1  7408                 je 0x7f86eb
// 007f86e3  50                   push eax
// 007f86e4  8bcb                 mov ecx, ebx
// 007f86e6  e8a5f00100           call 0x817790
// 007f86eb  8d4604               lea eax, [esi + 4]
// 007f86ee  50                   push eax
// 007f86ef  ff150cb29800         call dword ptr [0x98b20c]
// 007f86f5  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 007f86fc  742b                 je 0x7f8729
// 007f86fe  85ed                 test ebp, ebp
// 007f8700  740e                 je 0x7f8710
// 007f8702  8b17                 mov edx, dword ptr [edi]
// 007f8704  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 007f870a  8bcf                 mov ecx, edi
// 007f870c  ffd0                 call eax
// 007f870e  eb19                 jmp 0x7f8729
// 007f8710  85db                 test ebx, ebx
// 007f8712  7409                 je 0x7f871d
// 007f8714  8bcb                 mov ecx, ebx
// 007f8716  e8c5d70100           call 0x815ee0
// 007f871b  eb0c                 jmp 0x7f8729
// 007f871d  e87ef2ffff           call 0x7f79a0
// 007f8722  8bc8                 mov ecx, eax
// 007f8724  e8f7690700           call 0x86f120
// 007f8729  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 007f8730  750e                 jne 0x7f8740
// 007f8732  5f                   pop edi
// 007f8733  8bce                 mov ecx, esi
// 007f8735  5e                   pop esi
// 007f8736  5d                   pop ebp
// 007f8737  5b                   pop ebx
// 007f8738  83c404               add esp, 4
// 007f873b  e99cb6ffff           jmp 0x7f3ddc
// 007f8740  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f8744  51                   push ecx
// 007f8745  56                   push esi
// 007f8746  e815fbffff           call 0x7f8260
// 007f874b  83c408               add esp, 8
// 007f874e  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 007f8755  7409                 je 0x7f8760
// 007f8757  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 007f875e  742b                 je 0x7f878b
// 007f8760  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f8766  85c9                 test ecx, ecx
// 007f8768  7421                 je 0x7f878b
// 007f876a  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 007f8774  8b11                 mov edx, dword ptr [ecx]
// 007f8776  8b82f4010000         mov eax, dword ptr [edx + 0x1f4]
// 007f877c  6a00                 push 0
// 007f877e  6a00                 push 0
// 007f8780  ffd0                 call eax
// 007f8782  6a01                 push 1
// 007f8784  8bce                 mov ecx, esi
// 007f8786  e835dfffff           call 0x7f66c0
// 007f878b  5f                   pop edi
// 007f878c  8bce                 mov ecx, esi
// 007f878e  5e                   pop esi
// 007f878f  5d                   pop ebp
// 007f8790  5b                   pop ebx
// 007f8791  83c404               add esp, 4
// 007f8794  e943b6ffff           jmp 0x7f3ddc
// copied from an identical function in another client (function ?OnExecute@CXTPControl@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp