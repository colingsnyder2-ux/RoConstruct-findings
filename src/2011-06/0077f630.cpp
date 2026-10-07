// roc 2011-06 0077f630  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077f630
//
// 0077f630  56                   push esi
// 0077f631  8b742408             mov esi, dword ptr [esp + 8]
// 0077f635  6a05                 push 5
// 0077f637  6a01                 push 1
// 0077f639  56                   push esi
// 0077f63a  e8d14afeff           call 0x764110
// 0077f63f  6a01                 push 1
// 0077f641  56                   push esi
// 0077f642  e88931feff           call 0x7627d0
// 0077f647  50                   push eax
// 0077f648  56                   push esi
// 0077f649  e8f232feff           call 0x762940
// 0077f64e  83c41c               add esp, 0x1c
// 0077f651  b801000000           mov eax, 1
// 0077f656  5e                   pop esi
// 0077f657  c3                   ret 
// library lua-5.1.4/ltablib.c (function _getn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
