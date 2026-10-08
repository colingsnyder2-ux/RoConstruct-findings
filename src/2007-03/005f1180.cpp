// roc 2007-03 005f1180  unit: seg_005f0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1180
//
// 005f1180  8b5104               mov edx, dword ptr [ecx + 4]
// 005f1183  85d2                 test edx, edx
// 005f1185  750c                 jne 0x5f1193
// 005f1187  33c0                 xor eax, eax
// 005f1189  33c9                 xor ecx, ecx
// 005f118b  85c0                 test eax, eax
// 005f118d  0f94c1               sete cl
// 005f1190  8ac1                 mov al, cl
// 005f1192  c3                   ret 
// 005f1193  8b4108               mov eax, dword ptr [ecx + 8]
// 005f1196  2bc2                 sub eax, edx
// 005f1198  c1f802               sar eax, 2
// 005f119b  33c9                 xor ecx, ecx
// 005f119d  85c0                 test eax, eax
// 005f119f  0f94c1               sete cl
// 005f11a2  8ac1                 mov al, cl
// 005f11a4  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?empty@?$vector@PAV?$Listener@VStandardOut@RBX@@UStandardOutMessage@2@@RBX@@V?$allocator@PAV?$Listener@VStandardOut@RBX@@UStandardOutMessage@2@@RBX@@@std@@@std@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
