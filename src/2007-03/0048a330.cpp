// roc 2007-03 0048a330  unit: seg_00480000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048a330
//
// 0048a330  8a442404             mov al, byte ptr [esp + 4]
// 0048a334  3a812c010000         cmp al, byte ptr [ecx + 0x12c]
// 0048a33a  7413                 je 0x48a34f
// 0048a33c  88812c010000         mov byte ptr [ecx + 0x12c], al
// 0048a342  c744240444858b00     mov dword ptr [esp + 4], 0x8b8544
// 0048a34a  e9f19afbff           jmp 0x443e40
// 0048a34f  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?setNeutral@Player@Network@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
