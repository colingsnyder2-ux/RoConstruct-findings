// roc 2009-12 007fd4e0  unit: CXTPControlComboBoxList  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd4e0
//
// 007fd4e0  6aff                 push -1
// 007fd4e2  68f88f9500           push 0x958ff8
// 007fd4e7  64a100000000         mov eax, dword ptr fs:[0]
// 007fd4ed  50                   push eax
// 007fd4ee  51                   push ecx
// 007fd4ef  56                   push esi
// 007fd4f0  a10052b600           mov eax, dword ptr [0xb65200]
// 007fd4f5  33c4                 xor eax, esp
// 007fd4f7  50                   push eax
// 007fd4f8  8d44240c             lea eax, [esp + 0xc]
// 007fd4fc  64a300000000         mov dword ptr fs:[0], eax
// 007fd502  8bf1                 mov esi, ecx
// 007fd504  89742408             mov dword ptr [esp + 8], esi
// 007fd508  c706401b9f00         mov dword ptr [esi], 0x9f1b40
// 007fd50e  6a00                 push 0
// 007fd510  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007fd518  e863f9ffff           call 0x7fce80
// 007fd51d  6a00                 push 0
// 007fd51f  8bce                 mov ecx, esi
// 007fd521  e85ae7ffff           call 0x7fbc80
// 007fd526  8bce                 mov ecx, esi
// 007fd528  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007fd530  e87b2f0700           call 0x8704b0
// 007fd535  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fd539  64890d00000000       mov dword ptr fs:[0], ecx
// 007fd540  59                   pop ecx
// 007fd541  5e                   pop esi
// 007fd542  83c410               add esp, 0x10
// 007fd545  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControlComboBoxAutoCompleteWnd@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp