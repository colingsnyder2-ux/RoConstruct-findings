// roc 2007-03 00576b00  unit: seg_00570000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576b00
//
// 00576b00  8a442404             mov al, byte ptr [esp + 4]
// 00576b04  3a81a8010000         cmp al, byte ptr [ecx + 0x1a8]
// 00576b0a  7413                 je 0x576b1f
// 00576b0c  8881a8010000         mov byte ptr [ecx + 0x1a8], al
// 00576b12  c7442404b0cb8b00     mov dword ptr [esp + 4], 0x8bcbb0
// 00576b1a  e921d3ecff           jmp 0x443e40
// 00576b1f  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?setPartLocked@PartInstance@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
