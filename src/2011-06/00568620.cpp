// from server: 100% by auto
// roc 2011-06 00568620  unit: seg_00560000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568620
//
// 00568620  8b442404             mov eax, dword ptr [esp + 4]
// 00568624  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 0056862a  c70120855600         mov dword ptr [ecx], 0x568520
// 00568630  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
