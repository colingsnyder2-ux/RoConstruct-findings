// from server: 100% by auto
// roc 2008-06 006ddc90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddc90
//
// 006ddc90  51                   push ecx
// 006ddc91  56                   push esi
// 006ddc92  8bf1                 mov esi, ecx
// 006ddc94  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006ddc97  e86ee30d00           call 0x7bc00a
// 006ddc9c  a900040000           test eax, 0x400
// 006ddca1  740d                 je 0x6ddcb0
// 006ddca3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006ddca6  e8bd2ffcff           call 0x6a0c68
// 006ddcab  5e                   pop esi
// 006ddcac  59                   pop ecx
// 006ddcad  c20c00               ret 0xc
// 006ddcb0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ddcb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ddcb8  57                   push edi
// 006ddcb9  8d442408             lea eax, [esp + 8]
// 006ddcbd  50                   push eax
// 006ddcbe  51                   push ecx
// 006ddcbf  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006ddcc2  52                   push edx
// 006ddcc3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006ddccb  e88c32fcff           call 0x6a0f5c
// 006ddcd0  8bf8                 mov edi, eax
// 006ddcd2  85ff                 test edi, edi
// 006ddcd4  7437                 je 0x6ddd0d
// 006ddcd6  f644240846           test byte ptr [esp + 8], 0x46
// 006ddcdb  7430                 je 0x6ddd0d
// 006ddcdd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006ddce0  6a02                 push 2
// 006ddce2  57                   push edi
// 006ddce3  e834e60d00           call 0x7bc31c
// 006ddce8  a802                 test al, 2
// 006ddcea  752c                 jne 0x6ddd18
// 006ddcec  6a00                 push 0
// 006ddcee  6a00                 push 0
// 006ddcf0  8bce                 mov ecx, esi
// 006ddcf2  e8c9f1ffff           call 0x6dcec0
// 006ddcf7  57                   push edi
// 006ddcf8  8bce                 mov ecx, esi
// 006ddcfa  e881f0ffff           call 0x6dcd80
// 006ddcff  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006ddd02  e8612ffcff           call 0x6a0c68
// 006ddd07  5f                   pop edi
// 006ddd08  5e                   pop esi
// 006ddd09  59                   pop ecx
// 006ddd0a  c20c00               ret 0xc
// 006ddd0d  6a00                 push 0
// 006ddd0f  6a00                 push 0
// 006ddd11  8bce                 mov ecx, esi
// 006ddd13  e8a8f1ffff           call 0x6dcec0
// 006ddd18  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006ddd1b  e8482ffcff           call 0x6a0c68
// 006ddd20  5f                   pop edi
// 006ddd21  5e                   pop esi
// 006ddd22  59                   pop ecx
// 006ddd23  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?OnRButtonDown@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
