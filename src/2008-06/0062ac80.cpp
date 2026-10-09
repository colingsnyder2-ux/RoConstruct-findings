// roc 2008-06 0062ac80  unit: RBX::VExplosion::?$FactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062ac80
//
// 0062ac80  6aff                 push -1
// 0062ac82  6878787c00           push 0x7c7878
// 0062ac87  64a100000000         mov eax, dword ptr fs:[0]
// 0062ac8d  50                   push eax
// 0062ac8e  64892500000000       mov dword ptr fs:[0], esp
// 0062ac95  83ec24               sub esp, 0x24
// 0062ac98  53                   push ebx
// 0062ac99  55                   push ebp
// 0062ac9a  56                   push esi
// 0062ac9b  57                   push edi
// 0062ac9c  8bf9                 mov edi, ecx
// 0062ac9e  897c2410             mov dword ptr [esp + 0x10], edi
// 0062aca2  e87956f9ff           call 0x5c0320
// 0062aca7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0062acab  51                   push ecx
// 0062acac  50                   push eax
// 0062acad  8bcf                 mov ecx, edi
// 0062acaf  e8fc0df4ff           call 0x56bab0
// 0062acb4  8b542448             mov edx, dword ptr [esp + 0x48]
// 0062acb8  6aff                 push -1
// 0062acba  52                   push edx
// 0062acbb  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0062acc3  c707d85d8400         mov dword ptr [edi], 0x845dd8
// 0062acc9  e8c292f2ff           call 0x553f90
// 0062acce  83c408               add esp, 8
// 0062acd1  89442424             mov dword ptr [esp + 0x24], eax
// 0062acd5  e8061ef4ff           call 0x56cae0
// 0062acda  8d4c242c             lea ecx, [esp + 0x2c]
// 0062acde  89442428             mov dword ptr [esp + 0x28], eax
// 0062ace2  e8d99df6ff           call 0x594ac0
// 0062ace7  8b6f2c               mov ebp, dword ptr [edi + 0x2c]
// 0062acea  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0062aced  8d7718               lea esi, [edi + 0x18]
// 0062acf0  8d442424             lea eax, [esp + 0x24]
// 0062acf4  50                   push eax
// 0062acf5  51                   push ecx
// 0062acf6  55                   push ebp
// 0062acf7  8bce                 mov ecx, esi
// 0062acf9  c644244801           mov byte ptr [esp + 0x48], 1
// 0062acfe  e8fdd1deff           call 0x417f00
// 0062ad03  6a01                 push 1
// 0062ad05  8bce                 mov ecx, esi
// 0062ad07  8bd8                 mov ebx, eax
// 0062ad09  e8b27f0500           call 0x682cc0
// 0062ad0e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0062ad12  895d04               mov dword ptr [ebp + 4], ebx
// 0062ad15  8b4304               mov eax, dword ptr [ebx + 4]
// 0062ad18  6aff                 push -1
// 0062ad1a  52                   push edx
// 0062ad1b  8918                 mov dword ptr [eax], ebx
// 0062ad1d  e86e92f2ff           call 0x553f90
// 0062ad22  83c408               add esp, 8
// 0062ad25  89442414             mov dword ptr [esp + 0x14], eax
// 0062ad29  e8721ff4ff           call 0x56cca0
// 0062ad2e  8d4c241c             lea ecx, [esp + 0x1c]
// 0062ad32  89442418             mov dword ptr [esp + 0x18], eax
// 0062ad36  e8859df6ff           call 0x594ac0
// 0062ad3b  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0062ad3e  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0062ad41  8d442414             lea eax, [esp + 0x14]
// 0062ad45  50                   push eax
// 0062ad46  51                   push ecx
// 0062ad47  53                   push ebx
// 0062ad48  8bce                 mov ecx, esi
// 0062ad4a  c644244802           mov byte ptr [esp + 0x48], 2
// 0062ad4f  e8acd1deff           call 0x417f00
// 0062ad54  6a01                 push 1
// 0062ad56  8bce                 mov ecx, esi
// 0062ad58  8be8                 mov ebp, eax
// 0062ad5a  e8617f0500           call 0x682cc0
// 0062ad5f  896b04               mov dword ptr [ebx + 4], ebp
// 0062ad62  8b4504               mov eax, dword ptr [ebp + 4]
// 0062ad65  8928                 mov dword ptr [eax], ebp
// 0062ad67  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062ad6b  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0062ad70  85c9                 test ecx, ecx
// 0062ad72  7408                 je 0x62ad7c
// 0062ad74  8b11                 mov edx, dword ptr [ecx]
// 0062ad76  8b02                 mov eax, dword ptr [edx]
// 0062ad78  6a01                 push 1
// 0062ad7a  ffd0                 call eax
// 0062ad7c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062ad80  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0062ad85  85c9                 test ecx, ecx
// 0062ad87  7408                 je 0x62ad91
// 0062ad89  8b11                 mov edx, dword ptr [ecx]
// 0062ad8b  8b02                 mov eax, dword ptr [edx]
// 0062ad8d  6a01                 push 1
// 0062ad8f  ffd0                 call eax
// 0062ad91  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0062ad95  8bc7                 mov eax, edi
// 0062ad97  5f                   pop edi
// 0062ad98  5e                   pop esi
// 0062ad99  5d                   pop ebp
// 0062ad9a  5b                   pop ebx
// 0062ad9b  64890d00000000       mov dword ptr fs:[0], ecx
// 0062ada2  83c430               add esp, 0x30
// 0062ada5  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@RBX@@QAE@PBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
