// roc 2009-06 00480f90  unit: Ogre::RbxStaticCluster  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00480f90
//
// 00480f90  56                   push esi
// 00480f91  8b742408             mov esi, dword ptr [esp + 8]
// 00480f95  85f6                 test esi, esi
// 00480f97  7516                 jne 0x480faf
// 00480f99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00480f9d  8b5104               mov edx, dword ptr [ecx + 4]
// 00480fa0  33c0                 xor eax, eax
// 00480fa2  52                   push edx
// 00480fa3  50                   push eax
// 00480fa4  8b01                 mov eax, dword ptr [ecx]
// 00480fa6  ffd0                 call eax
// 00480fa8  83c408               add esp, 8
// 00480fab  8bc6                 mov eax, esi
// 00480fad  5e                   pop esi
// 00480fae  c3                   ret 
// 00480faf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00480fb3  8b06                 mov eax, dword ptr [esi]
// 00480fb5  8b4004               mov eax, dword ptr [eax + 4]
// 00480fb8  8b5104               mov edx, dword ptr [ecx + 4]
// 00480fbb  03c6                 add eax, esi
// 00480fbd  52                   push edx
// 00480fbe  50                   push eax
// 00480fbf  8b01                 mov eax, dword ptr [ecx]
// 00480fc1  ffd0                 call eax
// 00480fc3  83c408               add esp, 8
// 00480fc6  8bc6                 mov eax, esi
// 00480fc8  5e                   pop esi
// 00480fc9  c3                   ret 
// library ogre-1.7.0/OgreLog.cpp (function ??$?6DU?$char_traits@D@std@@H@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABU?$_Smanip@H@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreLog.cpp
