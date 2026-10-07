// roc 2011-06 004df550  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004df550
//
// 004df550  8b11                 mov edx, dword ptr [ecx]
// 004df552  8b442404             mov eax, dword ptr [esp + 4]
// 004df556  3b10                 cmp edx, dword ptr [eax]
// 004df558  7508                 jne 0x4df562
// 004df55a  8b4904               mov ecx, dword ptr [ecx + 4]
// 004df55d  3b4804               cmp ecx, dword ptr [eax + 4]
// 004df560  7408                 je 0x4df56a
// 004df562  b801000000           mov eax, 1
// 004df567  c20400               ret 4
// 004df56a  33c0                 xor eax, eax
// 004df56c  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ??9RakNetGUID@RakNet@@QBE_NABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
