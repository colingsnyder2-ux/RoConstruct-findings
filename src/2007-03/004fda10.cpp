// roc 2007-03 004fda10  unit: seg_004f0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fda10
//
// 004fda10  53                   push ebx
// 004fda11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004fda15  56                   push esi
// 004fda16  8bc3                 mov eax, ebx
// 004fda18  57                   push edi
// 004fda19  8bf1                 mov esi, ecx
// 004fda1b  8d5001               lea edx, [eax + 1]
// 004fda1e  8bff                 mov edi, edi
// 004fda20  8a08                 mov cl, byte ptr [eax]
// 004fda22  83c001               add eax, 1
// 004fda25  84c9                 test cl, cl
// 004fda27  75f7                 jne 0x4fda20
// 004fda29  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004fda2c  2bc2                 sub eax, edx
// 004fda2e  8d7801               lea edi, [eax + 1]
// 004fda31  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004fda34  03c7                 add eax, edi
// 004fda36  3bc8                 cmp ecx, eax
// 004fda38  7c02                 jl 0x4fda3c
// 004fda3a  8bc1                 mov eax, ecx
// 004fda3c  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004fda3f  894634               mov dword ptr [esi + 0x34], eax
// 004fda42  7e09                 jle 0x4fda4d
// 004fda44  51                   push ecx
// 004fda45  57                   push edi
// 004fda46  8bce                 mov ecx, esi
// 004fda48  e843feffff           call 0x4fd890
// 004fda4d  8b4630               mov eax, dword ptr [esi + 0x30]
// 004fda50  03463c               add eax, dword ptr [esi + 0x3c]
// 004fda53  57                   push edi
// 004fda54  53                   push ebx
// 004fda55  50                   push eax
// 004fda56  e85566ffff           call 0x4f40b0
// 004fda5b  017e3c               add dword ptr [esi + 0x3c], edi
// 004fda5e  83c40c               add esp, 0xc
// 004fda61  5f                   pop edi
// 004fda62  5e                   pop esi
// 004fda63  5b                   pop ebx
// 004fda64  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?writeString@BinaryOutput@G3D@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
