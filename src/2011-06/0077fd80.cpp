// roc 2011-06 0077fd80  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077fd80
//
// 0077fd80  56                   push esi
// 0077fd81  8b742408             mov esi, dword ptr [esp + 8]
// 0077fd85  6a01                 push 1
// 0077fd87  56                   push esi
// 0077fd88  e8c344feff           call 0x764250
// 0077fd8d  d9e1                 fabs 
// 0077fd8f  dd1c24               fstp qword ptr [esp]
// 0077fd92  56                   push esi
// 0077fd93  e8882bfeff           call 0x762920
// 0077fd98  83c40c               add esp, 0xc
// 0077fd9b  b801000000           mov eax, 1
// 0077fda0  5e                   pop esi
// 0077fda1  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_abs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
