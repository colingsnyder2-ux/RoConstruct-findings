// roc 2007-03 005b6ab0  unit: seg_005b0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6ab0
//
// 005b6ab0  8a442404             mov al, byte ptr [esp + 4]
// 005b6ab4  388158010000         cmp byte ptr [ecx + 0x158], al
// 005b6aba  7413                 je 0x5b6acf
// 005b6abc  888158010000         mov byte ptr [ecx + 0x158], al
// 005b6ac2  c744240414ff8b00     mov dword ptr [esp + 4], 0x8bff14
// 005b6aca  e971d3e8ff           jmp 0x443e40
// 005b6acf  c20400               ret 4
// library rbxgs/v8datamodel\PVInstance.cpp (function ?setShowControllerFlag@PVInstance@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
