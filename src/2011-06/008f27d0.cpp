// roc 2011-06 008f27d0  unit: CXTColorSelectorCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f27d0
//
// 008f27d0  6aff                 push -1
// 008f27d2  68e3eaa000           push 0xa0eae3
// 008f27d7  64a100000000         mov eax, dword ptr fs:[0]
// 008f27dd  50                   push eax
// 008f27de  51                   push ecx
// 008f27df  56                   push esi
// 008f27e0  57                   push edi
// 008f27e1  a12058c900           mov eax, dword ptr [0xc95820]
// 008f27e6  33c4                 xor eax, esp
// 008f27e8  50                   push eax
// 008f27e9  8d442410             lea eax, [esp + 0x10]
// 008f27ed  64a300000000         mov dword ptr fs:[0], eax
// 008f27f3  8bf1                 mov esi, ecx
// 008f27f5  8974240c             mov dword ptr [esp + 0xc], esi
// 008f27f9  8d7e54               lea edi, [esi + 0x54]
// 008f27fc  c7063ca4ad00         mov dword ptr [esi], 0xada43c
// 008f2802  c70728a4ad00         mov dword ptr [edi], 0xada428
// 008f2808  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008f2810  e8bbfbffff           call 0x8f23d0
// 008f2815  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008f281b  85c9                 test ecx, ecx
// 008f281d  740f                 je 0x8f282e
// 008f281f  e8b67df1ff           call 0x80a5da
// 008f2824  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 008f282e  8bcf                 mov ecx, edi
// 008f2830  c644241800           mov byte ptr [esp + 0x18], 0
// 008f2835  e8e690f7ff           call 0x86b920
// 008f283a  8bce                 mov ecx, esi
// 008f283c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008f2844  e8439f0d00           call 0x9cc78c
// 008f2849  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f284d  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2854  59                   pop ecx
// 008f2855  5f                   pop edi
// 008f2856  5e                   pop esi
// 008f2857  83c410               add esp, 0x10
// 008f285a  c3                   ret 
// copied from an identical function in another client (function ??1CXTButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp