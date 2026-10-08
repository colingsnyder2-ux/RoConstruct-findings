// roc 2007-08 004a4ea0  unit: FilePacketLogger  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4ea0
//
// 004a4ea0  807c240400           cmp byte ptr [esp + 4], 0
// 004a4ea5  741a                 je 0x4a4ec1
// 004a4ea7  8a442408             mov al, byte ptr [esp + 8]
// 004a4eab  6a01                 push 1
// 004a4ead  6a04                 push 4
// 004a4eaf  8d4c240c             lea ecx, [esp + 0xc]
// 004a4eb3  51                   push ecx
// 004a4eb4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a4eb8  88442410             mov byte ptr [esp + 0x10], al
// 004a4ebc  e8cfaeffff           call 0x49fd90
// 004a4ec1  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?writeValueType@@YAX_NW4ValueType@@AAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
