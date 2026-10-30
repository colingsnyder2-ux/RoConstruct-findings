// roc 2009-12 007fe760  unit: CXTPPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe760
//
// 007fe760  53                   push ebx
// 007fe761  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007fe765  56                   push esi
// 007fe766  57                   push edi
// 007fe767  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007fe76b  8bf1                 mov esi, ecx
// 007fe76d  83ffff               cmp edi, -1
// 007fe770  7413                 je 0x7fe785
// 007fe772  57                   push edi
// 007fe773  e8c8eeffff           call 0x7fd640
// 007fe778  50                   push eax
// 007fe779  8d442418             lea eax, [esp + 0x18]
// 007fe77d  50                   push eax
// 007fe77e  8bcb                 mov ecx, ebx
// 007fe780  e8795effff           call 0x7f45fe
// 007fe785  8b542424             mov edx, dword ptr [esp + 0x24]
// 007fe789  3bd7                 cmp edx, edi
// 007fe78b  7423                 je 0x7fe7b0
// 007fe78d  83faff               cmp edx, -1
// 007fe790  741e                 je 0x7fe7b0
// 007fe792  52                   push edx
// 007fe793  8bce                 mov ecx, esi
// 007fe795  e8a6eeffff           call 0x7fd640
// 007fe79a  50                   push eax
// 007fe79b  52                   push edx
// 007fe79c  8bce                 mov ecx, esi
// 007fe79e  e89deeffff           call 0x7fd640
// 007fe7a3  50                   push eax
// 007fe7a4  8d4c241c             lea ecx, [esp + 0x1c]
// 007fe7a8  51                   push ecx
// 007fe7a9  8bcb                 mov ecx, ebx
// 007fe7ab  e8485effff           call 0x7f45f8
// 007fe7b0  5f                   pop edi
// 007fe7b1  5e                   pop esi
// 007fe7b2  5b                   pop ebx
// 007fe7b3  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Rectangle@CXTPPaintManager@@QAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp