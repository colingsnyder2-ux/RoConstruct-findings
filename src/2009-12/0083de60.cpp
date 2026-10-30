// roc 2009-12 0083de60  unit: CXTPCustomizeSheet  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083de60
//
// 0083de60  8b442404             mov eax, dword ptr [esp + 4]
// 0083de64  85c0                 test eax, eax
// 0083de66  7505                 jne 0x83de6d
// 0083de68  33c0                 xor eax, eax
// 0083de6a  c20400               ret 4
// 0083de6d  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0083de73  83f901               cmp ecx, 1
// 0083de76  740f                 je 0x83de87
// 0083de78  83f902               cmp ecx, 2
// 0083de7b  740a                 je 0x83de87
// 0083de7d  83f903               cmp ecx, 3
// 0083de80  7405                 je 0x83de87
// 0083de82  83f904               cmp ecx, 4
// 0083de85  75e1                 jne 0x83de68
// 0083de87  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 0083de8d  85c9                 test ecx, ecx
// 0083de8f  750a                 jne 0x83de9b
// 0083de91  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 0083de97  85c9                 test ecx, ecx
// 0083de99  7e0e                 jle 0x83dea9
// 0083de9b  8bc1                 mov eax, ecx
// 0083de9d  33c9                 xor ecx, ecx
// 0083de9f  85c0                 test eax, eax
// 0083dea1  0f9fc1               setg cl
// 0083dea4  8bc1                 mov eax, ecx
// 0083dea6  c20400               ret 4
// 0083dea9  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 0083deaf  85c9                 test ecx, ecx
// 0083deb1  7416                 je 0x83dec9
// 0083deb3  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0083deb6  85c0                 test eax, eax
// 0083deb8  7f15                 jg 0x83decf
// 0083deba  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0083debd  33c9                 xor ecx, ecx
// 0083debf  85c0                 test eax, eax
// 0083dec1  0f9fc1               setg cl
// 0083dec4  8bc1                 mov eax, ecx
// 0083dec6  c20400               ret 4
// 0083dec9  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0083decf  33c9                 xor ecx, ecx
// 0083ded1  85c0                 test eax, eax
// 0083ded3  0f9fc1               setg cl
// 0083ded6  8bc1                 mov eax, ecx
// 0083ded8  c20400               ret 4
// copied from an identical function in another client (function ?IsAllowChangeStyle@CXTPCustomizeSheet@@ABEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp