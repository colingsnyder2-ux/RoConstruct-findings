// roc 2009-12 0081e410  unit: CXTPReportControl  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e410
//
// 0081e410  6aff                 push -1
// 0081e412  68689f9500           push 0x959f68
// 0081e417  64a100000000         mov eax, dword ptr fs:[0]
// 0081e41d  50                   push eax
// 0081e41e  83ec48               sub esp, 0x48
// 0081e421  56                   push esi
// 0081e422  a10052b600           mov eax, dword ptr [0xb65200]
// 0081e427  33c4                 xor eax, esp
// 0081e429  50                   push eax
// 0081e42a  8d442450             lea eax, [esp + 0x50]
// 0081e42e  64a300000000         mov dword ptr fs:[0], eax
// 0081e434  8bf1                 mov esi, ecx
// 0081e436  8b442460             mov eax, dword ptr [esp + 0x60]
// 0081e43a  50                   push eax
// 0081e43b  8d4c240c             lea ecx, [esp + 0xc]
// 0081e43f  e85c360300           call 0x851aa0
// 0081e444  8b16                 mov edx, dword ptr [esi]
// 0081e446  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 0081e44c  8d442408             lea eax, [esp + 8]
// 0081e450  50                   push eax
// 0081e451  8bce                 mov ecx, esi
// 0081e453  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0081e45b  ffd2                 call edx
// 0081e45d  8d4c2408             lea ecx, [esp + 8]
// 0081e461  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0081e469  e8021c0300           call 0x850070
// 0081e46e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081e472  64890d00000000       mov dword ptr fs:[0], ecx
// 0081e479  59                   pop ecx
// 0081e47a  5e                   pop esi
// 0081e47b  83c454               add esp, 0x54
// 0081e47e  c20400               ret 4
// copied from an identical function in another client (function ?SerializeState@CXTPReportControl@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp