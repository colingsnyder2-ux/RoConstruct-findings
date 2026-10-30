// roc 2009-06 00613140  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00613140
//
// 00613140  6aff                 push -1
// 00613142  685c7c8600           push 0x867c5c
// 00613147  64a100000000         mov eax, dword ptr fs:[0]
// 0061314d  50                   push eax
// 0061314e  64892500000000       mov dword ptr fs:[0], esp
// 00613155  51                   push ecx
// 00613156  56                   push esi
// 00613157  8bf1                 mov esi, ecx
// 00613159  89742404             mov dword ptr [esp + 4], esi
// 0061315d  8d4e34               lea ecx, [esi + 0x34]
// 00613160  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00613168  ff15c4e48900         call dword ptr [0x89e4c4]
// 0061316e  8d4e18               lea ecx, [esi + 0x18]
// 00613171  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00613179  ff15c4e48900         call dword ptr [0x89e4c4]
// 0061317f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00613183  5e                   pop esi
// 00613184  64890d00000000       mov dword ptr fs:[0], ecx
// 0061318b  83c410               add esp, 0x10
// 0061318e  c3                   ret 
// copied from an identical function in another client (function ??1gzip_params@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp