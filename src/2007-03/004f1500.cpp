// roc 2007-03 004f1500  unit: seg_004f0000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f1500
//
// 004f1500  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f1504  57                   push edi
// 004f1505  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f1509  8bd7                 mov edx, edi
// 004f150b  2bd1                 sub edx, ecx
// 004f150d  b867666666           mov eax, 0x66666667
// 004f1512  f7ea                 imul edx
// 004f1514  c1fa05               sar edx, 5
// 004f1517  8bc2                 mov eax, edx
// 004f1519  c1e81f               shr eax, 0x1f
// 004f151c  03c2                 add eax, edx
// 004f151e  83f828               cmp eax, 0x28
// 004f1521  7e74                 jle 0x4f1597
// 004f1523  83c001               add eax, 1
// 004f1526  99                   cdq 
// 004f1527  53                   push ebx
// 004f1528  83e207               and edx, 7
// 004f152b  03c2                 add eax, edx
// 004f152d  55                   push ebp
// 004f152e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004f1532  c1f803               sar eax, 3
// 004f1535  56                   push esi
// 004f1536  8d1c80               lea ebx, [eax + eax*4]
// 004f1539  8d3480               lea esi, [eax + eax*4]
// 004f153c  c1e305               shl ebx, 5
// 004f153f  55                   push ebp
// 004f1540  8d140b               lea edx, [ebx + ecx]
// 004f1543  c1e604               shl esi, 4
// 004f1546  8d040e               lea eax, [esi + ecx]
// 004f1549  52                   push edx
// 004f154a  50                   push eax
// 004f154b  51                   push ecx
// 004f154c  89442424             mov dword ptr [esp + 0x24], eax
// 004f1550  e8fbfdffff           call 0x4f1350
// 004f1555  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f1559  55                   push ebp
// 004f155a  8d0c06               lea ecx, [esi + eax]
// 004f155d  51                   push ecx
// 004f155e  50                   push eax
// 004f155f  2bc6                 sub eax, esi
// 004f1561  50                   push eax
// 004f1562  e8e9fdffff           call 0x4f1350
// 004f1567  55                   push ebp
// 004f1568  8bc7                 mov eax, edi
// 004f156a  2bc6                 sub eax, esi
// 004f156c  57                   push edi
// 004f156d  50                   push eax
// 004f156e  2bfb                 sub edi, ebx
// 004f1570  57                   push edi
// 004f1571  8944244c             mov dword ptr [esp + 0x4c], eax
// 004f1575  e8d6fdffff           call 0x4f1350
// 004f157a  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004f157e  8b442448             mov eax, dword ptr [esp + 0x48]
// 004f1582  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004f1586  55                   push ebp
// 004f1587  52                   push edx
// 004f1588  50                   push eax
// 004f1589  51                   push ecx
// 004f158a  e8c1fdffff           call 0x4f1350
// 004f158f  83c440               add esp, 0x40
// 004f1592  5e                   pop esi
// 004f1593  5d                   pop ebp
// 004f1594  5b                   pop ebx
// 004f1595  5f                   pop edi
// 004f1596  c3                   ret 
// 004f1597  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f159b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f159f  52                   push edx
// 004f15a0  57                   push edi
// 004f15a1  50                   push eax
// 004f15a2  51                   push ecx
// 004f15a3  e8a8fdffff           call 0x4f1350
// 004f15a8  83c410               add esp, 0x10
// 004f15ab  5f                   pop edi
// 004f15ac  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Median@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
