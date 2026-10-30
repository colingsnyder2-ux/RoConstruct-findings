// roc 2009-06 007f9c20  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f9c20
//
// 007f9c20  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f9c24  83f803               cmp eax, 3
// 007f9c27  0f87a8000000         ja 0x7f9cd5
// 007f9c2d  ff2485d89c7f00       jmp dword ptr [eax*4 + 0x7f9cd8]
// 007f9c34  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f9c38  83f8ff               cmp eax, -1
// 007f9c3b  0f8494000000         je 0x7f9cd5
// 007f9c41  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9c45  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f9c49  50                   push eax
// 007f9c4a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f9c4e  6a01                 push 1
// 007f9c50  2bc8                 sub ecx, eax
// 007f9c52  51                   push ecx
// 007f9c53  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9c57  52                   push edx
// 007f9c58  50                   push eax
// 007f9c59  e8d2220500           call 0x84bf30
// 007f9c5e  c3                   ret 
// 007f9c5f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f9c63  83f8ff               cmp eax, -1
// 007f9c66  746d                 je 0x7f9cd5
// 007f9c68  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f9c6c  8b542408             mov edx, dword ptr [esp + 8]
// 007f9c70  50                   push eax
// 007f9c71  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f9c75  2bc8                 sub ecx, eax
// 007f9c77  51                   push ecx
// 007f9c78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f9c7c  6a01                 push 1
// 007f9c7e  50                   push eax
// 007f9c7f  52                   push edx
// 007f9c80  e8ab220500           call 0x84bf30
// 007f9c85  c3                   ret 
// 007f9c86  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f9c8a  83f8ff               cmp eax, -1
// 007f9c8d  7446                 je 0x7f9cd5
// 007f9c8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9c93  8b542414             mov edx, dword ptr [esp + 0x14]
// 007f9c97  50                   push eax
// 007f9c98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f9c9c  6a01                 push 1
// 007f9c9e  2bc8                 sub ecx, eax
// 007f9ca0  51                   push ecx
// 007f9ca1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9ca5  4a                   dec edx
// 007f9ca6  52                   push edx
// 007f9ca7  50                   push eax
// 007f9ca8  e883220500           call 0x84bf30
// 007f9cad  c3                   ret 
// 007f9cae  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f9cb2  83f8ff               cmp eax, -1
// 007f9cb5  741e                 je 0x7f9cd5
// 007f9cb7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f9cbb  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f9cbf  50                   push eax
// 007f9cc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f9cc4  2bc8                 sub ecx, eax
// 007f9cc6  51                   push ecx
// 007f9cc7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f9ccb  6a01                 push 1
// 007f9ccd  4a                   dec edx
// 007f9cce  50                   push eax
// 007f9ccf  52                   push edx
// 007f9cd0  e85b220500           call 0x84bf30
// 007f9cd5  c3                   ret 
// 007f9cd6  8bff                 mov edi, edi
// 007f9cd8  349c                 xor al, 0x9c
// 007f9cda  7f00                 jg 0x7f9cdc
// 007f9cdc  5f                   pop edi
// 007f9cdd  9c                   pushfd 
// 007f9cde  7f00                 jg 0x7f9ce0
// 007f9ce0  869c7f00ae9c7f       xchg byte ptr [edi + edi*2 + 0x7f9cae00], bl
// copied from an identical function in another client (function ?DrawSingleLineBorder@CAppearanceSet@CXTPTabPaintManager@@SAXPAVCDC@@VCRect@@W4XTPTabPosition@@KK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp