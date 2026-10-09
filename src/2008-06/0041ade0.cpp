// roc 2008-06 0041ade0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ade0
//
// 0041ade0  56                   push esi
// 0041ade1  8b742408             mov esi, dword ptr [esp + 8]
// 0041ade5  57                   push edi
// 0041ade6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041adea  3bf7                 cmp esi, edi
// 0041adec  7417                 je 0x41ae05
// 0041adee  8bff                 mov edi, edi
// 0041adf0  8b0e                 mov ecx, dword ptr [esi]
// 0041adf2  85c9                 test ecx, ecx
// 0041adf4  7408                 je 0x41adfe
// 0041adf6  8b01                 mov eax, dword ptr [ecx]
// 0041adf8  8b10                 mov edx, dword ptr [eax]
// 0041adfa  6a01                 push 1
// 0041adfc  ffd2                 call edx
// 0041adfe  83c604               add esi, 4
// 0041ae01  3bf7                 cmp esi, edi
// 0041ae03  75eb                 jne 0x41adf0
// 0041ae05  5f                   pop edi
// 0041ae06  5e                   pop esi
// 0041ae07  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Destroy@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@IAEXPAVany@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
