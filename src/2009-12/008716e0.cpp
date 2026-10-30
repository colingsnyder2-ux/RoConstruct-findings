// roc 2009-12 008716e0  unit: CXTPRibbonTheme  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008716e0
//
// 008716e0  56                   push esi
// 008716e1  8b742408             mov esi, dword ptr [esp + 8]
// 008716e5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008716eb  57                   push edi
// 008716ec  8bf9                 mov edi, ecx
// 008716ee  83f8ff               cmp eax, -1
// 008716f1  750f                 jne 0x871702
// 008716f3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008716f9  85c9                 test ecx, ecx
// 008716fb  7405                 je 0x871702
// 008716fd  e8ae4ef8ff           call 0x7f65b0
// 00871702  85c0                 test eax, eax
// 00871704  750e                 jne 0x871714
// 00871706  6a0f                 push 0xf
// 00871708  8bcf                 mov ecx, edi
// 0087170a  e831bff8ff           call 0x7fd640
// 0087170f  5f                   pop edi
// 00871710  5e                   pop esi
// 00871711  c20400               ret 4
// 00871714  8b06                 mov eax, dword ptr [esi]
// 00871716  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00871719  8bce                 mov ecx, esi
// 0087171b  ffd2                 call edx
// 0087171d  85c0                 test eax, eax
// 0087171f  740e                 je 0x87172f
// 00871721  6a05                 push 5
// 00871723  8bcf                 mov ecx, edi
// 00871725  e816bff8ff           call 0x7fd640
// 0087172a  5f                   pop edi
// 0087172b  5e                   pop esi
// 0087172c  c20400               ret 4
// 0087172f  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00871735  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0087173c  750e                 jne 0x87174c
// 0087173e  6a29                 push 0x29
// 00871740  8bcf                 mov ecx, edi
// 00871742  e8f9bef8ff           call 0x7fd640
// 00871747  5f                   pop edi
// 00871748  5e                   pop esi
// 00871749  c20400               ret 4
// 0087174c  8b8778060000         mov eax, dword ptr [edi + 0x678]
// 00871752  5f                   pop edi
// 00871753  5e                   pop esi
// 00871754  c20400               ret 4
// copied from an identical function in another client (function ?GetControlEditBackColor@CXTPRibbonTheme@@MAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp