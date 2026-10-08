// roc 2008-06 005dd940  unit: RBX::Message  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd940
//
// 005dd940  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dd944  d901                 fld dword ptr [ecx]
// 005dd946  32c0                 xor al, al
// 005dd948  d95c2404             fstp dword ptr [esp + 4]
// 005dd94c  8b542404             mov edx, dword ptr [esp + 4]
// 005dd950  d9ee                 fldz 
// 005dd952  f7c20000807f         test edx, 0x7f800000
// 005dd958  750c                 jne 0x5dd966
// 005dd95a  f7c2ffff7f00         test edx, 0x7fffff
// 005dd960  7404                 je 0x5dd966
// 005dd962  d911                 fst dword ptr [ecx]
// 005dd964  b001                 mov al, 1
// 005dd966  d94104               fld dword ptr [ecx + 4]
// 005dd969  d95c2404             fstp dword ptr [esp + 4]
// 005dd96d  8b542404             mov edx, dword ptr [esp + 4]
// 005dd971  f7c20000807f         test edx, 0x7f800000
// 005dd977  750d                 jne 0x5dd986
// 005dd979  f7c2ffff7f00         test edx, 0x7fffff
// 005dd97f  7405                 je 0x5dd986
// 005dd981  d95104               fst dword ptr [ecx + 4]
// 005dd984  b001                 mov al, 1
// 005dd986  d94108               fld dword ptr [ecx + 8]
// 005dd989  d95c2404             fstp dword ptr [esp + 4]
// 005dd98d  8b542404             mov edx, dword ptr [esp + 4]
// 005dd991  f7c20000807f         test edx, 0x7f800000
// 005dd997  750e                 jne 0x5dd9a7
// 005dd999  f7c2ffff7f00         test edx, 0x7fffff
// 005dd99f  7406                 je 0x5dd9a7
// 005dd9a1  d95908               fstp dword ptr [ecx + 8]
// 005dd9a4  b001                 mov al, 1
// 005dd9a6  c3                   ret 
// 005dd9a7  ddd8                 fstp st(0)
// 005dd9a9  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fixDenorm@Math@RBX@@SA_NAAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
