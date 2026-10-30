// roc 2009-12 00834ec0  unit: CXTTreeView  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834ec0
//
// 00834ec0  6aff                 push -1
// 00834ec2  687a6a9600           push 0x966a7a
// 00834ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00834ecd  50                   push eax
// 00834ece  51                   push ecx
// 00834ecf  a10052b600           mov eax, dword ptr [0xb65200]
// 00834ed4  33c4                 xor eax, esp
// 00834ed6  50                   push eax
// 00834ed7  8d442408             lea eax, [esp + 8]
// 00834edb  64a300000000         mov dword ptr fs:[0], eax
// 00834ee1  68a0000000           push 0xa0
// 00834ee6  e875e9fbff           call 0x7f3860
// 00834eeb  83c404               add esp, 4
// 00834eee  89442404             mov dword ptr [esp + 4], eax
// 00834ef2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00834efa  85c0                 test eax, eax
// 00834efc  7417                 je 0x834f15
// 00834efe  8bc8                 mov ecx, eax
// 00834f00  e86bffffff           call 0x834e70
// 00834f05  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00834f09  64890d00000000       mov dword ptr fs:[0], ecx
// 00834f10  59                   pop ecx
// 00834f11  83c410               add esp, 0x10
// 00834f14  c3                   ret 
// 00834f15  33c0                 xor eax, eax
// 00834f17  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00834f1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00834f22  59                   pop ecx
// 00834f23  83c410               add esp, 0x10
// 00834f26  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTTreeView@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp