// roc 2012-06 008199c0  unit: RBX::VChatService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008199c0
//
// 008199c0  6aff                 push -1
// 008199c2  6808beac00           push 0xacbe08
// 008199c7  64a100000000         mov eax, dword ptr fs:[0]
// 008199cd  50                   push eax
// 008199ce  64892500000000       mov dword ptr fs:[0], esp
// 008199d5  51                   push ecx
// 008199d6  56                   push esi
// 008199d7  8bf1                 mov esi, ecx
// 008199d9  89742404             mov dword ptr [esp + 4], esi
// 008199dd  8d4e04               lea ecx, [esi + 4]
// 008199e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008199e8  e8c3edcaff           call 0x4c87b0
// 008199ed  8bce                 mov ecx, esi
// 008199ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008199f7  e874f6ffff           call 0x819070
// 008199fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00819a00  5e                   pop esi
// 00819a01  64890d00000000       mov dword ptr fs:[0], ecx
// 00819a08  83c410               add esp, 0x10
// 00819a0b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
