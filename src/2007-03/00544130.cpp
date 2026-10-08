// roc 2007-03 00544130  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544130
//
// 00544130  8a442404             mov al, byte ptr [esp + 4]
// 00544134  3a05e9d18b00         cmp al, byte ptr [0x8bd1e9]
// 0054413a  7412                 je 0x54414e
// 0054413c  a2e9d18b00           mov byte ptr [0x8bd1e9], al
// 00544141  c744240484bc8b00     mov dword ptr [esp + 4], 0x8bbc84
// 00544149  e9f2fcefff           jmp 0x443e40
// 0054414e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
