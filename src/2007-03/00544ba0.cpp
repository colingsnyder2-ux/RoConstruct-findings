// roc 2007-03 00544ba0  unit: seg_00540000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544ba0
//
// 00544ba0  8b01                 mov eax, dword ptr [ecx]
// 00544ba2  85c0                 test eax, eax
// 00544ba4  8b4904               mov ecx, dword ptr [ecx + 4]
// 00544ba7  7508                 jne 0x544bb1
// 00544ba9  81f900000080         cmp ecx, 0x80000000
// 00544baf  7410                 je 0x544bc1
// 00544bb1  83f8ff               cmp eax, -1
// 00544bb4  7508                 jne 0x544bbe
// 00544bb6  81f9ffffff7f         cmp ecx, 0x7fffffff
// 00544bbc  7403                 je 0x544bc1
// 00544bbe  33c0                 xor eax, eax
// 00544bc0  c3                   ret 
// 00544bc1  b801000000           mov eax, 1
// 00544bc6  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?is_infinity@?$int_adapter@_J@date_time@boost@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
