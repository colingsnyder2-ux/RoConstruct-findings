// roc 2007-03 00572e10  unit: seg_00570000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572e10
//
// 00572e10  83ec68               sub esp, 0x68
// 00572e13  56                   push esi
// 00572e14  8bf1                 mov esi, ecx
// 00572e16  807e6800             cmp byte ptr [esi + 0x68], 0
// 00572e1a  742f                 je 0x572e4b
// 00572e1c  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00572e1f  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 00572e25  8d4c2404             lea ecx, [esp + 4]
// 00572e29  51                   push ecx
// 00572e2a  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00572e2d  8b140a               mov edx, dword ptr [edx + ecx]
// 00572e30  035674               add edx, dword ptr [esi + 0x74]
// 00572e33  8d8c02f4000000       lea ecx, [edx + eax + 0xf4]
// 00572e3a  8b4670               mov eax, dword ptr [esi + 0x70]
// 00572e3d  ffd0                 call eax
// 00572e3f  50                   push eax
// 00572e40  8bce                 mov ecx, esi
// 00572e42  e8f9f3ffff           call 0x572240
// 00572e47  c6466800             mov byte ptr [esi + 0x68], 0
// 00572e4b  56                   push esi
// 00572e4c  8b742474             mov esi, dword ptr [esp + 0x74]
// 00572e50  8bce                 mov ecx, esi
// 00572e52  e879f4ffff           call 0x5722d0
// 00572e57  8bc6                 mov eax, esi
// 00572e59  5e                   pop esi
// 00572e5a  83c468               add esp, 0x68
// 00572e5d  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?getValue@?$ComputeProp@VPart@RBX@@VPartInstance@2@@RBX@@QBE?AVPart@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
