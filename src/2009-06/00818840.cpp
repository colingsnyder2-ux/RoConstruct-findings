// roc 2009-06 00818840  unit: CXTColorSelectorCtrlThemeFactory  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818840
//
// 00818840  6aff                 push -1
// 00818842  68e12a8800           push 0x882ae1
// 00818847  64a100000000         mov eax, dword ptr fs:[0]
// 0081884d  50                   push eax
// 0081884e  56                   push esi
// 0081884f  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00818854  33c4                 xor eax, esp
// 00818856  50                   push eax
// 00818857  8d442408             lea eax, [esp + 8]
// 0081885b  64a300000000         mov dword ptr fs:[0], eax
// 00818861  8b742418             mov esi, dword ptr [esp + 0x18]
// 00818865  8bc6                 mov eax, esi
// 00818867  83e801               sub eax, 1
// 0081886a  6a30                 push 0x30
// 0081886c  7447                 je 0x8188b5
// 0081886e  83e801               sub eax, 1
// 00818871  7421                 je 0x818894
// 00818873  e8c001f0ff           call 0x718a38
// 00818878  83c404               add esp, 4
// 0081887b  89442418             mov dword ptr [esp + 0x18], eax
// 0081887f  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00818887  85c0                 test eax, eax
// 00818889  744b                 je 0x8188d6
// 0081888b  8bc8                 mov ecx, eax
// 0081888d  e88efdffff           call 0x818620
// 00818892  eb44                 jmp 0x8188d8
// 00818894  e89f01f0ff           call 0x718a38
// 00818899  83c404               add esp, 4
// 0081889c  89442418             mov dword ptr [esp + 0x18], eax
// 008188a0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008188a8  85c0                 test eax, eax
// 008188aa  742a                 je 0x8188d6
// 008188ac  8bc8                 mov ecx, eax
// 008188ae  e89dfeffff           call 0x818750
// 008188b3  eb23                 jmp 0x8188d8
// 008188b5  e87e01f0ff           call 0x718a38
// 008188ba  83c404               add esp, 4
// 008188bd  89442418             mov dword ptr [esp + 0x18], eax
// 008188c1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008188c9  85c0                 test eax, eax
// 008188cb  7409                 je 0x8188d6
// 008188cd  8bc8                 mov ecx, eax
// 008188cf  e8ecfdffff           call 0x8186c0
// 008188d4  eb02                 jmp 0x8188d8
// 008188d6  33c0                 xor eax, eax
// 008188d8  897008               mov dword ptr [eax + 8], esi
// 008188db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008188df  64890d00000000       mov dword ptr fs:[0], ecx
// 008188e6  59                   pop ecx
// 008188e7  5e                   pop esi
// 008188e8  83c40c               add esp, 0xc
// 008188eb  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTColorSelectorCtrlThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrlTheme.cpp