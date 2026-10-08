// roc 2007-03 0049bae0  unit: seg_00490000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049bae0
//
// 0049bae0  807c240400           cmp byte ptr [esp + 4], 0
// 0049bae5  741a                 je 0x49bb01
// 0049bae7  8a442408             mov al, byte ptr [esp + 8]
// 0049baeb  6a01                 push 1
// 0049baed  6a04                 push 4
// 0049baef  8d4c240c             lea ecx, [esp + 0xc]
// 0049baf3  51                   push ecx
// 0049baf4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049baf8  88442410             mov byte ptr [esp + 0x10], al
// 0049bafc  e8afc2ffff           call 0x497db0
// 0049bb01  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?writeValueType@@YAX_NW4ValueType@@AAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
