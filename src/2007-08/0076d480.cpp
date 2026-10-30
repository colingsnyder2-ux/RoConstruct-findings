// roc 2007-08 0076d480  unit: seg_00760000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d480
//
// 0076d480  b97ca58800           mov ecx, 0x88a57c
// 0076d485  ff15acdd7700         call dword ptr [0x77ddac]
// 0076d48b  b980a58800           mov ecx, 0x88a580
// 0076d490  ff15acdd7700         call dword ptr [0x77ddac]
// 0076d496  33c0                 xor eax, eax
// 0076d498  68c07e7700           push 0x777ec0
// 0076d49d  a384a58800           mov dword ptr [0x88a584], eax
// 0076d4a2  c70588a5880001000000 mov dword ptr [0x88a588], 1
// 0076d4ac  a38ca58800           mov dword ptr [0x88a58c], eax
// 0076d4b1  a390a58800           mov dword ptr [0x88a590], eax
// 0076d4b6  e86838ecff           call 0x630d23
// 0076d4bb  59                   pop ecx
// 0076d4bc  c3                   ret 
// copied from an identical function in another client (function ??__E_scintillaEditState@@YAXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp