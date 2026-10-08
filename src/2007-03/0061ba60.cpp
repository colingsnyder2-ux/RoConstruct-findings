// roc 2007-03 0061ba60  unit: seg_00610000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061ba60
//
// 0061ba60  83ec10               sub esp, 0x10
// 0061ba63  d9ee                 fldz 
// 0061ba65  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061ba69  d91424               fst dword ptr [esp]
// 0061ba6c  d95c2404             fstp dword ptr [esp + 4]
// 0061ba70  d94008               fld dword ptr [eax + 8]
// 0061ba73  d820                 fsub dword ptr [eax]
// 0061ba75  d95c2408             fstp dword ptr [esp + 8]
// 0061ba79  d9400c               fld dword ptr [eax + 0xc]
// 0061ba7c  d86004               fsub dword ptr [eax + 4]
// 0061ba7f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061ba83  83e802               sub eax, 2
// 0061ba86  d95c240c             fstp dword ptr [esp + 0xc]
// 0061ba8a  d9442408             fld dword ptr [esp + 8]
// 0061ba8e  dd05584f7900         fld qword ptr [0x794f58]
// 0061ba94  741a                 je 0x61bab0
// 0061ba96  83e801               sub eax, 1
// 0061ba99  740e                 je 0x61baa9
// 0061ba9b  83e801               sub eax, 1
// 0061ba9e  7515                 jne 0x61bab5
// 0061baa0  d94108               fld dword ptr [ecx + 8]
// 0061baa3  d8e2                 fsub st(2)
// 0061baa5  d8c9                 fmul st(1)
// 0061baa7  eb09                 jmp 0x61bab2
// 0061baa9  d94108               fld dword ptr [ecx + 8]
// 0061baac  d8e2                 fsub st(2)
// 0061baae  eb02                 jmp 0x61bab2
// 0061bab0  d901                 fld dword ptr [ecx]
// 0061bab2  d91c24               fstp dword ptr [esp]
// 0061bab5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061bab9  d944240c             fld dword ptr [esp + 0xc]
// 0061babd  83e800               sub eax, 0
// 0061bac0  7426                 je 0x61bae8
// 0061bac2  83e801               sub eax, 1
// 0061bac5  7414                 je 0x61badb
// 0061bac7  83e803               sub eax, 3
// 0061baca  7527                 jne 0x61baf3
// 0061bacc  d9410c               fld dword ptr [ecx + 0xc]
// 0061bacf  d8e1                 fsub st(1)
// 0061bad1  deca                 fmulp st(2)
// 0061bad3  d9c9                 fxch st(1)
// 0061bad5  d95c2404             fstp dword ptr [esp + 4]
// 0061bad9  eb1a                 jmp 0x61baf5
// 0061badb  ddd9                 fstp st(1)
// 0061badd  d9410c               fld dword ptr [ecx + 0xc]
// 0061bae0  d8e1                 fsub st(1)
// 0061bae2  d95c2404             fstp dword ptr [esp + 4]
// 0061bae6  eb0d                 jmp 0x61baf5
// 0061bae8  ddd9                 fstp st(1)
// 0061baea  d94104               fld dword ptr [ecx + 4]
// 0061baed  d95c2404             fstp dword ptr [esp + 4]
// 0061baf1  eb02                 jmp 0x61baf5
// 0061baf3  ddd9                 fstp st(1)
// 0061baf5  d90424               fld dword ptr [esp]
// 0061baf8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061bafc  d9c0                 fld st(0)
// 0061bafe  dec3                 faddp st(3)
// 0061bb00  d9ca                 fxch st(2)
// 0061bb02  d95c2408             fstp dword ptr [esp + 8]
// 0061bb06  d9442404             fld dword ptr [esp + 4]
// 0061bb0a  d9c0                 fld st(0)
// 0061bb0c  dec2                 faddp st(2)
// 0061bb0e  d9c9                 fxch st(1)
// 0061bb10  d95c240c             fstp dword ptr [esp + 0xc]
// 0061bb14  d9c9                 fxch st(1)
// 0061bb16  d918                 fstp dword ptr [eax]
// 0061bb18  d95804               fstp dword ptr [eax + 4]
// 0061bb1b  d9442408             fld dword ptr [esp + 8]
// 0061bb1f  d95808               fstp dword ptr [eax + 8]
// 0061bb22  d944240c             fld dword ptr [esp + 0xc]
// 0061bb26  d9580c               fstp dword ptr [eax + 0xc]
// 0061bb29  83c410               add esp, 0x10
// 0061bb2c  c21000               ret 0x10
// library rbxgs/util\Rect.cpp (function ?positionChild@Rect@RBX@@QBE?AV12@ABV12@W4Location@12@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Rect.cpp
