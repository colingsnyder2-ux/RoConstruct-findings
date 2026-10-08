// roc 2007-03 00506500  unit: seg_00500000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506500
//
// 00506500  807c241400           cmp byte ptr [esp + 0x14], 0
// 00506505  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00506509  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050650d  8b542404             mov edx, dword ptr [esp + 4]
// 00506511  50                   push eax
// 00506512  8b442414             mov eax, dword ptr [esp + 0x14]
// 00506516  51                   push ecx
// 00506517  52                   push edx
// 00506518  7409                 je 0x506523
// 0050651a  e881feffff           call 0x5063a0
// 0050651f  83c40c               add esp, 0xc
// 00506522  c3                   ret 
// 00506523  e848faffff           call 0x505f70
// 00506528  83c40c               add esp, 0xc
// 0050652b  c3                   ret 
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?prompt@G3D@@YAHPBD0PAPBDH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
