// roc 2012-06 0059a7a0  unit: VAuthoringSettings::?$FactoryProduct  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a7a0
//
// 0059a7a0  64a100000000         mov eax, dword ptr fs:[0]
// 0059a7a6  6aff                 push -1
// 0059a7a8  684b16ab00           push 0xab164b
// 0059a7ad  50                   push eax
// 0059a7ae  64892500000000       mov dword ptr fs:[0], esp
// 0059a7b5  56                   push esi
// 0059a7b6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059a7ba  57                   push edi
// 0059a7bb  85f6                 test esi, esi
// 0059a7bd  7462                 je 0x59a821
// 0059a7bf  33c9                 xor ecx, ecx
// 0059a7c1  8bc6                 mov eax, esi
// 0059a7c3  ba10000000           mov edx, 0x10
// 0059a7c8  f7e2                 mul edx
// 0059a7ca  0f90c1               seto cl
// 0059a7cd  f7d9                 neg ecx
// 0059a7cf  0bc8                 or ecx, eax
// 0059a7d1  33c0                 xor eax, eax
// 0059a7d3  83c104               add ecx, 4
// 0059a7d6  0f92c0               setb al
// 0059a7d9  f7d8                 neg eax
// 0059a7db  0bc1                 or eax, ecx
// 0059a7dd  50                   push eax
// 0059a7de  e80d7c3e00           call 0x9823f0
// 0059a7e3  83c404               add esp, 4
// 0059a7e6  89442418             mov dword ptr [esp + 0x18], eax
// 0059a7ea  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059a7f2  85c0                 test eax, eax
// 0059a7f4  742b                 je 0x59a821
// 0059a7f6  6890a75900           push 0x59a790
// 0059a7fb  68005d9f00           push 0x9f5d00
// 0059a800  56                   push esi
// 0059a801  8d7804               lea edi, [eax + 4]
// 0059a804  6a10                 push 0x10
// 0059a806  57                   push edi
// 0059a807  8930                 mov dword ptr [eax], esi
// 0059a809  e86c8b3e00           call 0x98337a
// 0059a80e  8bc7                 mov eax, edi
// 0059a810  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059a814  64890d00000000       mov dword ptr fs:[0], ecx
// 0059a81b  5f                   pop edi
// 0059a81c  5e                   pop esi
// 0059a81d  83c40c               add esp, 0xc
// 0059a820  c3                   ret 
// 0059a821  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059a825  5f                   pop edi
// 0059a826  33c0                 xor eax, eax
// 0059a828  64890d00000000       mov dword ptr fs:[0], ecx
// 0059a82f  5e                   pop esi
// 0059a830  83c40c               add esp, 0xc
// 0059a833  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??$OP_NEW_ARRAY@UTimeAndValue2@BPSTracker@RakNet@@@RakNet@@YAPAUTimeAndValue2@BPSTracker@0@HPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
