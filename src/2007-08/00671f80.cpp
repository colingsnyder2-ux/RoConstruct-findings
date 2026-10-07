// roc 2007-08 00671f80  unit: CXTPModuleHandle  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671f80
//
// 00671f80  56                   push esi
// 00671f81  57                   push edi
// 00671f82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671f86  57                   push edi
// 00671f87  8bf1                 mov esi, ecx
// 00671f89  e842feffff           call 0x671dd0
// 00671f8e  85c0                 test eax, eax
// 00671f90  7511                 jne 0x671fa3
// 00671f92  57                   push edi
// 00671f93  8bce                 mov ecx, esi
// 00671f95  e876feffff           call 0x671e10
// 00671f9a  85c0                 test eax, eax
// 00671f9c  7505                 jne 0x671fa3
// 00671f9e  5f                   pop edi
// 00671f9f  5e                   pop esi
// 00671fa0  c20400               ret 4
// 00671fa3  5f                   pop edi
// 00671fa4  b801000000           mov eax, 1
// 00671fa9  5e                   pop esi
// 00671faa  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?Init@CXTPModuleHandle@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
