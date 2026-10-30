// roc 2011-06 00a2fe05  unit: seg_00a20000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fe05
//
// 00a2fe05  6800090000           push 0x900
// 00a2fe0a  6a00                 push 0
// 00a2fe0c  e87cd0f9ff           call 0x9cce8d
// 00a2fe11  a2b7fbd100           mov byte ptr [0xd1fbb7], al
// 00a2fe16  c3                   ret 
// copied from an identical function in another client (function ??__E_afxInitAppState@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm mfcs90.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/mfc/ansireleasedllstatic/objr/i386/appmodul.obj