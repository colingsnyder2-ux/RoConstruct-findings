// roc 2007-08 005aaac0  unit: RBX::World  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aaac0
//
// 005aaac0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005aaac4  d901                 fld dword ptr [ecx]
// 005aaac6  32c0                 xor al, al
// 005aaac8  d95c2404             fstp dword ptr [esp + 4]
// 005aaacc  8b542404             mov edx, dword ptr [esp + 4]
// 005aaad0  d9ee                 fldz 
// 005aaad2  f7c20000807f         test edx, 0x7f800000
// 005aaad8  750c                 jne 0x5aaae6
// 005aaada  f7c2ffff7f00         test edx, 0x7fffff
// 005aaae0  7404                 je 0x5aaae6
// 005aaae2  d911                 fst dword ptr [ecx]
// 005aaae4  b001                 mov al, 1
// 005aaae6  d94104               fld dword ptr [ecx + 4]
// 005aaae9  d95c2404             fstp dword ptr [esp + 4]
// 005aaaed  8b542404             mov edx, dword ptr [esp + 4]
// 005aaaf1  f7c20000807f         test edx, 0x7f800000
// 005aaaf7  750d                 jne 0x5aab06
// 005aaaf9  f7c2ffff7f00         test edx, 0x7fffff
// 005aaaff  7405                 je 0x5aab06
// 005aab01  d95104               fst dword ptr [ecx + 4]
// 005aab04  b001                 mov al, 1
// 005aab06  d94108               fld dword ptr [ecx + 8]
// 005aab09  d95c2404             fstp dword ptr [esp + 4]
// 005aab0d  8b542404             mov edx, dword ptr [esp + 4]
// 005aab11  f7c20000807f         test edx, 0x7f800000
// 005aab17  750e                 jne 0x5aab27
// 005aab19  f7c2ffff7f00         test edx, 0x7fffff
// 005aab1f  7406                 je 0x5aab27
// 005aab21  d95908               fstp dword ptr [ecx + 8]
// 005aab24  b001                 mov al, 1
// 005aab26  c3                   ret 
// 005aab27  ddd8                 fstp st(0)
// 005aab29  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fixDenorm@Math@RBX@@SA_NAAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
