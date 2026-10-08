// roc 2007-03 004e2860  unit: seg_004e0000  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2860
//
// 004e2860  56                   push esi
// 004e2861  8bf1                 mov esi, ecx
// 004e2863  8b4614               mov eax, dword ptr [esi + 0x14]
// 004e2866  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e2869  83e802               sub eax, 2
// 004e286c  746f                 je 0x4e28dd
// 004e286e  83e803               sub eax, 3
// 004e2871  0f85fc000000         jne 0x4e2973
// 004e2877  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e287b  6a01                 push 1
// 004e287d  51                   push ecx
// 004e287e  e8cd510000           call 0x4e7a50
// 004e2883  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e2887  6a01                 push 1
// 004e2889  52                   push edx
// 004e288a  89442424             mov dword ptr [esp + 0x24], eax
// 004e288e  e8bd510000           call 0x4e7a50
// 004e2893  89442420             mov dword ptr [esp + 0x20], eax
// 004e2897  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e289b  6a01                 push 1
// 004e289d  50                   push eax
// 004e289e  e8ad510000           call 0x4e7a50
// 004e28a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004e28a7  6a01                 push 1
// 004e28a9  51                   push ecx
// 004e28aa  8944242c             mov dword ptr [esp + 0x2c], eax
// 004e28ae  e89d510000           call 0x4e7a50
// 004e28b3  83c420               add esp, 0x20
// 004e28b6  8d542414             lea edx, [esp + 0x14]
// 004e28ba  52                   push edx
// 004e28bb  8944240c             mov dword ptr [esp + 0xc], eax
// 004e28bf  8d442414             lea eax, [esp + 0x14]
// 004e28c3  50                   push eax
// 004e28c4  8d4c2414             lea ecx, [esp + 0x14]
// 004e28c8  51                   push ecx
// 004e28c9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004e28cc  8d542414             lea edx, [esp + 0x14]
// 004e28d0  52                   push edx
// 004e28d1  83c10c               add ecx, 0xc
// 004e28d4  e8e7adfeff           call 0x4cd6c0
// 004e28d9  5e                   pop esi
// 004e28da  c21000               ret 0x10
// 004e28dd  53                   push ebx
// 004e28de  57                   push edi
// 004e28df  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004e28e3  6a01                 push 1
// 004e28e5  57                   push edi
// 004e28e6  e865510000           call 0x4e7a50
// 004e28eb  89442420             mov dword ptr [esp + 0x20], eax
// 004e28ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e28f3  6a01                 push 1
// 004e28f5  50                   push eax
// 004e28f6  e855510000           call 0x4e7a50
// 004e28fb  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004e28ff  6a01                 push 1
// 004e2901  53                   push ebx
// 004e2902  8944242c             mov dword ptr [esp + 0x2c], eax
// 004e2906  e845510000           call 0x4e7a50
// 004e290b  83c418               add esp, 0x18
// 004e290e  8d4c2418             lea ecx, [esp + 0x18]
// 004e2912  51                   push ecx
// 004e2913  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004e2916  8d542418             lea edx, [esp + 0x18]
// 004e291a  89442414             mov dword ptr [esp + 0x14], eax
// 004e291e  52                   push edx
// 004e291f  8d442418             lea eax, [esp + 0x18]
// 004e2923  50                   push eax
// 004e2924  83c10c               add ecx, 0xc
// 004e2927  e8d4aefeff           call 0x4cd800
// 004e292c  6a01                 push 1
// 004e292e  53                   push ebx
// 004e292f  e81c510000           call 0x4e7a50
// 004e2934  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004e2938  6a01                 push 1
// 004e293a  51                   push ecx
// 004e293b  89442428             mov dword ptr [esp + 0x28], eax
// 004e293f  e80c510000           call 0x4e7a50
// 004e2944  6a01                 push 1
// 004e2946  57                   push edi
// 004e2947  8944242c             mov dword ptr [esp + 0x2c], eax
// 004e294b  e800510000           call 0x4e7a50
// 004e2950  83c418               add esp, 0x18
// 004e2953  8d542418             lea edx, [esp + 0x18]
// 004e2957  89442410             mov dword ptr [esp + 0x10], eax
// 004e295b  52                   push edx
// 004e295c  8d442418             lea eax, [esp + 0x18]
// 004e2960  50                   push eax
// 004e2961  8d4c2418             lea ecx, [esp + 0x18]
// 004e2965  51                   push ecx
// 004e2966  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004e2969  83c10c               add ecx, 0xc
// 004e296c  e88faefeff           call 0x4cd800
// 004e2971  5f                   pop edi
// 004e2972  5b                   pop ebx
// 004e2973  5e                   pop esi
// 004e2974  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromVertexIndices@LevelBuilder@View@RBX@@IAEXIIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
