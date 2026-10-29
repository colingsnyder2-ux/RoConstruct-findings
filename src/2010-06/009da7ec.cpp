// roc 2010-06 009da7ec  unit: seg_009d0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da7ec
//
// 009da7ec  6800090000           push 0x900
// 009da7f1  6a00                 push 0
// 009da7f3  e86f2ffaff           call 0x97d767
// 009da7f8  a2cacfc200           mov byte ptr [0xc2cfca], al
// 009da7fd  c3                   ret 
// copied from an identical function in another client (function ??__E_afxInitAppState@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm mfcs90.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/mfc/ansireleasedllstatic/objr/i386/appmodul.obj