// roc 2009-12 00816cd0  unit: MyXTPCommandBars  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816cd0
//
// 00816cd0  6aff                 push -1
// 00816cd2  687a6a9600           push 0x966a7a
// 00816cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00816cdd  50                   push eax
// 00816cde  51                   push ecx
// 00816cdf  a10052b600           mov eax, dword ptr [0xb65200]
// 00816ce4  33c4                 xor eax, esp
// 00816ce6  50                   push eax
// 00816ce7  8d442408             lea eax, [esp + 8]
// 00816ceb  64a300000000         mov dword ptr fs:[0], eax
// 00816cf1  68cc000000           push 0xcc
// 00816cf6  e865cbfdff           call 0x7f3860
// 00816cfb  83c404               add esp, 4
// 00816cfe  89442404             mov dword ptr [esp + 4], eax
// 00816d02  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00816d0a  85c0                 test eax, eax
// 00816d0c  7417                 je 0x816d25
// 00816d0e  8bc8                 mov ecx, eax
// 00816d10  e82be4ffff           call 0x815140
// 00816d15  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00816d19  64890d00000000       mov dword ptr fs:[0], ecx
// 00816d20  59                   pop ecx
// 00816d21  83c410               add esp, 0x10
// 00816d24  c3                   ret 
// 00816d25  33c0                 xor eax, eax
// 00816d27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00816d2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00816d32  59                   pop ecx
// 00816d33  83c410               add esp, 0x10
// 00816d36  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPCommandBars@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp