// roc 2011-06 0084a060  unit: CRobloxTreeCtrl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a060
//
// 0084a060  51                   push ecx
// 0084a061  56                   push esi
// 0084a062  57                   push edi
// 0084a063  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084a067  8bf1                 mov esi, ecx
// 0084a069  8d442410             lea eax, [esp + 0x10]
// 0084a06d  50                   push eax
// 0084a06e  8d4c240c             lea ecx, [esp + 0xc]
// 0084a072  51                   push ecx
// 0084a073  57                   push edi
// 0084a074  8bce                 mov ecx, esi
// 0084a076  e815ebffff           call 0x848b90
// 0084a07b  85c0                 test eax, eax
// 0084a07d  753f                 jne 0x84a0be
// 0084a07f  394604               cmp dword ptr [esi + 4], eax
// 0084a082  7518                 jne 0x84a09c
// 0084a084  8b5608               mov edx, dword ptr [esi + 8]
// 0084a087  6a01                 push 1
// 0084a089  52                   push edx
// 0084a08a  8bce                 mov ecx, esi
// 0084a08c  e8afa5bfff           call 0x444640
// 0084a091  837e0400             cmp dword ptr [esi + 4], 0
// 0084a095  7505                 jne 0x84a09c
// 0084a097  e86e02fcff           call 0x80a30a
// 0084a09c  57                   push edi
// 0084a09d  8bce                 mov ecx, esi
// 0084a09f  e80cf6ffff           call 0x8496b0
// 0084a0a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084a0a8  89484c               mov dword ptr [eax + 0x4c], ecx
// 0084a0ab  8b5604               mov edx, dword ptr [esi + 4]
// 0084a0ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084a0b2  8b148a               mov edx, dword ptr [edx + ecx*4]
// 0084a0b5  895048               mov dword ptr [eax + 0x48], edx
// 0084a0b8  8b5604               mov edx, dword ptr [esi + 4]
// 0084a0bb  89048a               mov dword ptr [edx + ecx*4], eax
// 0084a0be  5f                   pop edi
// 0084a0bf  83c004               add eax, 4
// 0084a0c2  5e                   pop esi
// 0084a0c3  59                   pop ecx
// 0084a0c4  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ??A?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@QAEAAUCLRFONT@CXTPTreeBase@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
