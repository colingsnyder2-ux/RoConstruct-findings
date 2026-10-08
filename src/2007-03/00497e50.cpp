// roc 2007-03 00497e50  unit: seg_00490000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497e50
//
// 00497e50  56                   push esi
// 00497e51  6a01                 push 1
// 00497e53  8bf1                 mov esi, ecx
// 00497e55  e8d6fcffff           call 0x497b30
// 00497e5a  807c240800           cmp byte ptr [esp + 8], 0
// 00497e5f  8b06                 mov eax, dword ptr [esi]
// 00497e61  742d                 je 0x497e90
// 00497e63  8bc8                 mov ecx, eax
// 00497e65  c1f803               sar eax, 3
// 00497e68  83e107               and ecx, 7
// 00497e6b  750e                 jne 0x497e7b
// 00497e6d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497e70  c6040880             mov byte ptr [eax + ecx], 0x80
// 00497e74  830601               add dword ptr [esi], 1
// 00497e77  5e                   pop esi
// 00497e78  c20400               ret 4
// 00497e7b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00497e7e  03c2                 add eax, edx
// 00497e80  ba80000000           mov edx, 0x80
// 00497e85  d3fa                 sar edx, cl
// 00497e87  0810                 or byte ptr [eax], dl
// 00497e89  830601               add dword ptr [esi], 1
// 00497e8c  5e                   pop esi
// 00497e8d  c20400               ret 4
// 00497e90  a807                 test al, 7
// 00497e92  750a                 jne 0x497e9e
// 00497e94  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497e97  c1f803               sar eax, 3
// 00497e9a  c6040800             mov byte ptr [eax + ecx], 0
// 00497e9e  830601               add dword ptr [esi], 1
// 00497ea1  5e                   pop esi
// 00497ea2  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ??$Write@_N@BitStream@RakNet@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
