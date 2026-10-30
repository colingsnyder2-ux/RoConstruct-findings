// roc 2011-06 0083d640  unit: CXTPReportHeader  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083d640
//
// 0083d640  56                   push esi
// 0083d641  8bf1                 mov esi, ecx
// 0083d643  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083d646  57                   push edi
// 0083d647  33ff                 xor edi, edi
// 0083d649  39b9c0010000         cmp dword ptr [ecx + 0x1c0], edi
// 0083d64f  7464                 je 0x83d6b5
// 0083d651  57                   push edi
// 0083d652  e8c94fffff           call 0x832620
// 0083d657  6a01                 push 1
// 0083d659  6aff                 push -1
// 0083d65b  8bce                 mov ecx, esi
// 0083d65d  897e38               mov dword ptr [esi + 0x38], edi
// 0083d660  e87bf4ffff           call 0x83cae0
// 0083d665  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0083d668  3bcf                 cmp ecx, edi
// 0083d66a  740a                 je 0x83d676
// 0083d66c  8b01                 mov eax, dword ptr [ecx]
// 0083d66e  8b5068               mov edx, dword ptr [eax + 0x68]
// 0083d671  ffd2                 call edx
// 0083d673  897e30               mov dword ptr [esi + 0x30], edi
// 0083d676  ff15381ba400         call dword ptr [0xa41b38]
// 0083d67c  50                   push eax
// 0083d67d  e8a6ccfcff           call 0x80a328
// 0083d682  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0083d685  7506                 jne 0x83d68d
// 0083d687  ff15401ba400         call dword ptr [0xa41b40]
// 0083d68d  e88accfcff           call 0x80a31c
// 0083d692  68007f0000           push 0x7f00
// 0083d697  57                   push edi
// 0083d698  ff15081aa400         call dword ptr [0xa41a08]
// 0083d69e  50                   push eax
// 0083d69f  ff15f41ba400         call dword ptr [0xa41bf4]
// 0083d6a5  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083d6a8  897e44               mov dword ptr [esi + 0x44], edi
// 0083d6ab  897e40               mov dword ptr [esi + 0x40], edi
// 0083d6ae  5f                   pop edi
// 0083d6af  5e                   pop esi
// 0083d6b0  e9bb5fffff           jmp 0x833670
// 0083d6b5  5f                   pop edi
// 0083d6b6  5e                   pop esi
// 0083d6b7  c3                   ret 
// copied from an identical function in another client (function ?CancelMouseMode@CXTPReportHeader@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp