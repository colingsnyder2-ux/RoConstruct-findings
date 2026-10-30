// roc 2010-06 008790a0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008790a0
//
// 008790a0  6aff                 push -1
// 008790a2  6880a39b00           push 0x9ba380
// 008790a7  64a100000000         mov eax, dword ptr fs:[0]
// 008790ad  50                   push eax
// 008790ae  51                   push ecx
// 008790af  56                   push esi
// 008790b0  57                   push edi
// 008790b1  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008790b6  33c4                 xor eax, esp
// 008790b8  50                   push eax
// 008790b9  8d442410             lea eax, [esp + 0x10]
// 008790bd  64a300000000         mov dword ptr fs:[0], eax
// 008790c3  8bf1                 mov esi, ecx
// 008790c5  8974240c             mov dword ptr [esp + 0xc], esi
// 008790c9  6a30                 push 0x30
// 008790cb  6a00                 push 0
// 008790cd  689d230000           push 0x239d
// 008790d2  e851411000           call 0x97d228
// 008790d7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008790db  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008790e1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008790e9  c7061cd9a600         mov dword ptr [esi], 0xa6d91c
// 008790ef  898688000000         mov dword ptr [esi + 0x88], eax
// 008790f5  e826faffff           call 0x878b20
// 008790fa  8dbefc000000         lea edi, [esi + 0xfc]
// 00879100  8bcf                 mov ecx, edi
// 00879102  c644241801           mov byte ptr [esp + 0x18], 1
// 00879107  e87cf1f2ff           call 0x7a8288
// 0087910c  c7074486a500         mov dword ptr [edi], 0xa58644
// 00879112  8dbe50010000         lea edi, [esi + 0x150]
// 00879118  8bcf                 mov ecx, edi
// 0087911a  c644241802           mov byte ptr [esp + 0x18], 2
// 0087911f  e864f1f2ff           call 0x7a8288
// 00879124  c7074486a500         mov dword ptr [edi], 0xa58644
// 0087912a  8dbea4010000         lea edi, [esi + 0x1a4]
// 00879130  8bcf                 mov ecx, edi
// 00879132  c644241803           mov byte ptr [esp + 0x18], 3
// 00879137  e84cf1f2ff           call 0x7a8288
// 0087913c  c7074486a500         mov dword ptr [edi], 0xa58644
// 00879142  8dbef8010000         lea edi, [esi + 0x1f8]
// 00879148  8bcf                 mov ecx, edi
// 0087914a  c644241804           mov byte ptr [esp + 0x18], 4
// 0087914f  e834f1f2ff           call 0x7a8288
// 00879154  c7074486a500         mov dword ptr [edi], 0xa58644
// 0087915a  8bc6                 mov eax, esi
// 0087915c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00879160  64890d00000000       mov dword ptr fs:[0], ecx
// 00879167  59                   pop ecx
// 00879168  5f                   pop edi
// 00879169  5e                   pop esi
// 0087916a  83c410               add esp, 0x10
// 0087916d  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeToolbarsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeToolbarsPage.cpp