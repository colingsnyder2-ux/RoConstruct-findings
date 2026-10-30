// roc 2009-12 008c3bd0  unit: CXTPImageEditorPicture  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c3bd0
//
// 008c3bd0  56                   push esi
// 008c3bd1  8bf1                 mov esi, ecx
// 008c3bd3  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008c3bda  7427                 je 0x8c3c03
// 008c3bdc  57                   push edi
// 008c3bdd  8dbe9c000000         lea edi, [esi + 0x9c]
// 008c3be3  8bcf                 mov ecx, edi
// 008c3be5  e86647feff           call 0x8a8350
// 008c3bea  85c0                 test eax, eax
// 008c3bec  740b                 je 0x8c3bf9
// 008c3bee  8b10                 mov edx, dword ptr [eax]
// 008c3bf0  8bc8                 mov ecx, eax
// 008c3bf2  8b4204               mov eax, dword ptr [edx + 4]
// 008c3bf5  6a01                 push 1
// 008c3bf7  ffd0                 call eax
// 008c3bf9  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008c3c00  75e1                 jne 0x8c3be3
// 008c3c02  5f                   pop edi
// 008c3c03  83be8c0000000f       cmp dword ptr [esi + 0x8c], 0xf
// 008c3c0a  7e1a                 jle 0x8c3c26
// 008c3c0c  8d8e80000000         lea ecx, [esi + 0x80]
// 008c3c12  e859eeffff           call 0x8c2a70
// 008c3c17  85c0                 test eax, eax
// 008c3c19  740b                 je 0x8c3c26
// 008c3c1b  8b10                 mov edx, dword ptr [eax]
// 008c3c1d  8bc8                 mov ecx, eax
// 008c3c1f  8b4204               mov eax, dword ptr [edx + 4]
// 008c3c22  6a01                 push 1
// 008c3c24  ffd0                 call eax
// 008c3c26  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008c3c29  51                   push ecx
// 008c3c2a  8d8e80000000         lea ecx, [esi + 0x80]
// 008c3c30  e84bffffff           call 0x8c3b80
// 008c3c35  c7467800000000       mov dword ptr [esi + 0x78], 0
// 008c3c3c  8bce                 mov ecx, esi
// 008c3c3e  5e                   pop esi
// 008c3c3f  e90cf1ffff           jmp 0x8c2d50
// copied from an identical function in another client (function ?Apply@CXTPImageEditorPicture@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp