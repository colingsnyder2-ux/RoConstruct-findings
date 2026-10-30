// roc 2009-12 008c3f80  unit: CXTPImageEditorPicture  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c3f80
//
// 008c3f80  56                   push esi
// 008c3f81  8bf1                 mov esi, ecx
// 008c3f83  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008c3f8a  7429                 je 0x8c3fb5
// 008c3f8c  57                   push edi
// 008c3f8d  8d8e9c000000         lea ecx, [esi + 0x9c]
// 008c3f93  e8b843feff           call 0x8a8350
// 008c3f98  8bf8                 mov edi, eax
// 008c3f9a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c3f9d  50                   push eax
// 008c3f9e  8d8e80000000         lea ecx, [esi + 0x80]
// 008c3fa4  e8d7fbffff           call 0x8c3b80
// 008c3fa9  897e7c               mov dword ptr [esi + 0x7c], edi
// 008c3fac  5f                   pop edi
// 008c3fad  8bce                 mov ecx, esi
// 008c3faf  5e                   pop esi
// 008c3fb0  e99bedffff           jmp 0x8c2d50
// 008c3fb5  5e                   pop esi
// 008c3fb6  c3                   ret 
// copied from an identical function in another client (function ?Redo@CXTPImageEditorPicture@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp