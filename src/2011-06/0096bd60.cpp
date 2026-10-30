// from server: 100% by auto
// roc 2011-06 0096bd60  unit: Ogre::istreamDataStream  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0096bd60
//
// 0096bd60  8b4908               mov ecx, dword ptr [ecx + 8]
// 0096bd63  85c9                 test ecx, ecx
// 0096bd65  7413                 je 0x96bd7a
// 0096bd67  8d4108               lea eax, [ecx + 8]
// 0096bd6a  83caff               or edx, 0xffffffff
// 0096bd6d  f00fc110             lock xadd dword ptr [eax], edx
// 0096bd71  7507                 jne 0x96bd7a
// 0096bd73  8b01                 mov eax, dword ptr [ecx]
// 0096bd75  8b5008               mov edx, dword ptr [eax + 8]
// 0096bd78  ffe2                 jmp edx
// 0096bd7a  c3                   ret 
// library templates-boost-1_34_1/map_int_wp.cpp (function ??1?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
