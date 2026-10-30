// roc 2009-12 00814230  unit: CXTPCommandBars  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814230
//
// 00814230  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00814236  56                   push esi
// 00814237  8b742408             mov esi, dword ptr [esp + 8]
// 0081423b  8b06                 mov eax, dword ptr [esi]
// 0081423d  8b900c020000         mov edx, dword ptr [eax + 0x20c]
// 00814243  6a01                 push 1
// 00814245  51                   push ecx
// 00814246  8bce                 mov ecx, esi
// 00814248  ffd2                 call edx
// 0081424a  85c0                 test eax, eax
// 0081424c  7504                 jne 0x814252
// 0081424e  5e                   pop esi
// 0081424f  c20400               ret 4
// 00814252  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 00814258  85c9                 test ecx, ecx
// 0081425a  7412                 je 0x81426e
// 0081425c  6aff                 push -1
// 0081425e  56                   push esi
// 0081425f  e86ce30700           call 0x8925d0
// 00814264  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 0081426e  c7860001000004000000 mov dword ptr [esi + 0x100], 4
// 00814278  b801000000           mov eax, 1
// 0081427d  5e                   pop esi
// 0081427e  c20400               ret 4
// copied from an identical function in another client (function ?FloatCommandBar@CXTPCommandBars@@IAEHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp