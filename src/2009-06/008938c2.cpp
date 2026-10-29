// roc 2009-06 008938c2  unit: seg_00890000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008938c2
//
// 008938c2  6800090000           push 0x900
// 008938c7  6a00                 push 0
// 008938c9  e8eb8ffbff           call 0x84c8b9
// 008938ce  a2228ca500           mov byte ptr [0xa58c22], al
// 008938d3  c3                   ret 
// copied from an identical function in another client (function ??__E_afxInitAppState@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm mfcs90.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/mfc/ansireleasedllstatic/objr/i386/appmodul.obj