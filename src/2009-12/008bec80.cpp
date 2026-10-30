// roc 2009-12 008bec80  unit: CXTPDockingPaneContext  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bec80
//
// 008bec80  57                   push edi
// 008bec81  8bf9                 mov edi, ecx
// 008bec83  83bfdc00000000       cmp dword ptr [edi + 0xdc], 0
// 008bec8a  7430                 je 0x8becbc
// 008bec8c  53                   push ebx
// 008bec8d  56                   push esi
// 008bec8e  8d9fd0000000         lea ebx, [edi + 0xd0]
// 008bec94  8bcb                 mov ecx, ebx
// 008bec96  e8d53d0000           call 0x8c2a70
// 008bec9b  8bf0                 mov esi, eax
// 008bec9d  8b06                 mov eax, dword ptr [esi]
// 008bec9f  8b5068               mov edx, dword ptr [eax + 0x68]
// 008beca2  8bce                 mov ecx, esi
// 008beca4  ffd2                 call edx
// 008beca6  8b06                 mov eax, dword ptr [esi]
// 008beca8  8b5004               mov edx, dword ptr [eax + 4]
// 008becab  6a01                 push 1
// 008becad  8bce                 mov ecx, esi
// 008becaf  ffd2                 call edx
// 008becb1  83bfdc00000000       cmp dword ptr [edi + 0xdc], 0
// 008becb8  75da                 jne 0x8bec94
// 008becba  5e                   pop esi
// 008becbb  5b                   pop ebx
// 008becbc  5f                   pop edi
// 008becbd  c3                   ret 
// copied from an identical function in another client (function ?DestroyDockingStickers@CXTPDockingPaneContext@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp