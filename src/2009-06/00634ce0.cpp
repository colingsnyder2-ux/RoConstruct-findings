// from server: 100% by auto
// roc 2009-06 00634ce0  unit: RBX::VScriptContext::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634ce0
//
// 00634ce0  8b4908               mov ecx, dword ptr [ecx + 8]
// 00634ce3  85c9                 test ecx, ecx
// 00634ce5  7413                 je 0x634cfa
// 00634ce7  8d4108               lea eax, [ecx + 8]
// 00634cea  83caff               or edx, 0xffffffff
// 00634ced  f00fc110             lock xadd dword ptr [eax], edx
// 00634cf1  7507                 jne 0x634cfa
// 00634cf3  8b01                 mov eax, dword ptr [ecx]
// 00634cf5  8b5008               mov edx, dword ptr [eax + 8]
// 00634cf8  ffe2                 jmp edx
// 00634cfa  c3                   ret 
// library templates-boost-1_34_1/map_int_wp.cpp (function ??1?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
