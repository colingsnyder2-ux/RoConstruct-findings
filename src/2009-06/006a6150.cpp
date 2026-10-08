// roc 2009-06 006a6150  unit: CXTCaptionButtonTheme  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a6150
//
// 006a6150  d9442414             fld dword ptr [esp + 0x14]
// 006a6154  83ec60               sub esp, 0x60
// 006a6157  56                   push esi
// 006a6158  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006a615c  57                   push edi
// 006a615d  51                   push ecx
// 006a615e  8bce                 mov ecx, esi
// 006a6160  d91c24               fstp dword ptr [esp]
// 006a6163  e8a8adfcff           call 0x670f10
// 006a6168  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 006a616c  50                   push eax
// 006a616d  8bcf                 mov ecx, edi
// 006a616f  e89cadfcff           call 0x670f10
// 006a6174  50                   push eax
// 006a6175  e8167ffcff           call 0x66e090
// 006a617a  83c40c               add esp, 0xc
// 006a617d  84c0                 test al, al
// 006a617f  7508                 jne 0x6a6189
// 006a6181  5f                   pop edi
// 006a6182  32c0                 xor al, al
// 006a6184  5e                   pop esi
// 006a6185  83c460               add esp, 0x60
// 006a6188  c3                   ret 
// 006a6189  8b442474             mov eax, dword ptr [esp + 0x74]
// 006a618d  50                   push eax
// 006a618e  8d4c243c             lea ecx, [esp + 0x3c]
// 006a6192  51                   push ecx
// 006a6193  8bcf                 mov ecx, edi
// 006a6195  e846acfcff           call 0x670de0
// 006a619a  8b542478             mov edx, dword ptr [esp + 0x78]
// 006a619e  52                   push edx
// 006a619f  8d44240c             lea eax, [esp + 0xc]
// 006a61a3  50                   push eax
// 006a61a4  8bce                 mov ecx, esi
// 006a61a6  e835acfcff           call 0x670de0
// 006a61ab  d9058c9f8e00         fld dword ptr [0x8e9f8c]
// 006a61b1  51                   push ecx
// 006a61b2  8d4c240c             lea ecx, [esp + 0xc]
// 006a61b6  d91c24               fstp dword ptr [esp]
// 006a61b9  51                   push ecx
// 006a61ba  8d542440             lea edx, [esp + 0x40]
// 006a61be  52                   push edx
// 006a61bf  e8bcf50200           call 0x6d5780
// 006a61c4  83c40c               add esp, 0xc
// 006a61c7  84c0                 test al, al
// 006a61c9  74b6                 je 0x6a6181
// 006a61cb  d9842480000000       fld dword ptr [esp + 0x80]
// 006a61d2  51                   push ecx
// 006a61d3  8d44240c             lea eax, [esp + 0xc]
// 006a61d7  d91c24               fstp dword ptr [esp]
// 006a61da  50                   push eax
// 006a61db  8d4c2440             lea ecx, [esp + 0x40]
// 006a61df  51                   push ecx
// 006a61e0  e80bf90200           call 0x6d5af0
// 006a61e5  83c40c               add esp, 0xc
// 006a61e8  84c0                 test al, al
// 006a61ea  5f                   pop edi
// 006a61eb  0f95c0               setne al
// 006a61ee  5e                   pop esi
// 006a61ef  83c460               add esp, 0x60
// 006a61f2  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJoint@Joint@RBX@@CA_NPAVPrimitive@2@0W4NormalId@2@1MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
