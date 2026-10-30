// roc 2009-12 00829d40  unit: CXTPReportHeader  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829d40
//
// 00829d40  56                   push esi
// 00829d41  8bf1                 mov esi, ecx
// 00829d43  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829d46  57                   push edi
// 00829d47  33ff                 xor edi, edi
// 00829d49  39b9c0010000         cmp dword ptr [ecx + 0x1c0], edi
// 00829d4f  7464                 je 0x829db5
// 00829d51  57                   push edi
// 00829d52  e83947ffff           call 0x81e490
// 00829d57  6a01                 push 1
// 00829d59  6aff                 push -1
// 00829d5b  8bce                 mov ecx, esi
// 00829d5d  897e38               mov dword ptr [esi + 0x38], edi
// 00829d60  e87bf4ffff           call 0x8291e0
// 00829d65  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00829d68  3bcf                 cmp ecx, edi
// 00829d6a  740a                 je 0x829d76
// 00829d6c  8b01                 mov eax, dword ptr [ecx]
// 00829d6e  8b5068               mov edx, dword ptr [eax + 0x68]
// 00829d71  ffd2                 call edx
// 00829d73  897e30               mov dword ptr [esi + 0x30], edi
// 00829d76  ff1528cc9800         call dword ptr [0x98cc28]
// 00829d7c  50                   push eax
// 00829d7d  e8a89dfcff           call 0x7f3b2a
// 00829d82  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00829d85  7506                 jne 0x829d8d
// 00829d87  ff1520cc9800         call dword ptr [0x98cc20]
// 00829d8d  e88c9dfcff           call 0x7f3b1e
// 00829d92  68007f0000           push 0x7f00
// 00829d97  57                   push edi
// 00829d98  ff1548ca9800         call dword ptr [0x98ca48]
// 00829d9e  50                   push eax
// 00829d9f  ff1520ca9800         call dword ptr [0x98ca20]
// 00829da5  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829da8  897e44               mov dword ptr [esi + 0x44], edi
// 00829dab  897e40               mov dword ptr [esi + 0x40], edi
// 00829dae  5f                   pop edi
// 00829daf  5e                   pop esi
// 00829db0  e9cb56ffff           jmp 0x81f480
// 00829db5  5f                   pop edi
// 00829db6  5e                   pop esi
// 00829db7  c3                   ret 
// copied from an identical function in another client (function ?CancelMouseMode@CXTPReportHeader@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp