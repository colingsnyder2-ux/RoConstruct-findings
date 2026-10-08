// roc 2010-06 00494130  unit: seg_00490000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00494130
//
// 00494130  6aff                 push -1
// 00494132  6848fd9800           push 0x98fd48
// 00494137  64a100000000         mov eax, dword ptr fs:[0]
// 0049413d  50                   push eax
// 0049413e  64892500000000       mov dword ptr fs:[0], esp
// 00494145  83ec74               sub esp, 0x74
// 00494148  53                   push ebx
// 00494149  56                   push esi
// 0049414a  57                   push edi
// 0049414b  8bf1                 mov esi, ecx
// 0049414d  8d86d8070000         lea eax, [esi + 0x7d8]
// 00494153  50                   push eax
// 00494154  8d4c2414             lea ecx, [esp + 0x14]
// 00494158  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 00494163  e8081f0c00           call 0x556070
// 00494168  0f57c0               xorps xmm0, xmm0
// 0049416b  bb01000000           mov ebx, 1
// 00494170  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00494176  751e                 jne 0x494196
// 00494178  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 0049417e  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00494186  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 0049418e  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00494196  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 0049419e  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004941a4  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 004941ac  51                   push ecx
// 004941ad  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004941b3  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 004941bb  8bcc                 mov ecx, esp
// 004941bd  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 004941c3  c70100000000         mov dword ptr [ecx], 0
// 004941c9  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 004941d0  89642410             mov dword ptr [esp + 0x10], esp
// 004941d4  50                   push eax
// 004941d5  e8462bffff           call 0x486d20
// 004941da  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 004941e1  57                   push edi
// 004941e2  8bce                 mov ecx, esi
// 004941e4  e897faffff           call 0x493c80
// 004941e9  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 004941ef  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 004941f5  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 004941fb  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00494201  f30f10442418         movss xmm0, dword ptr [esp + 0x18]
// 00494207  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 0049420d  f30f10442434         movss xmm0, dword ptr [esp + 0x34]
// 00494213  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 00494219  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 0049421f  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 00494225  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 0049422b  f30f11442454         movss dword ptr [esp + 0x54], xmm0
// 00494231  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 00494237  f30f11442458         movss dword ptr [esp + 0x58], xmm0
// 0049423d  f30f10442438         movss xmm0, dword ptr [esp + 0x38]
// 00494243  f30f1144245c         movss dword ptr [esp + 0x5c], xmm0
// 00494249  f30f10442428         movss xmm0, dword ptr [esp + 0x28]
// 0049424f  f30f11442460         movss dword ptr [esp + 0x60], xmm0
// 00494255  f30f1044242c         movss xmm0, dword ptr [esp + 0x2c]
// 0049425b  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 00494261  f30f10442430         movss xmm0, dword ptr [esp + 0x30]
// 00494267  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 0049426d  f30f1044243c         movss xmm0, dword ptr [esp + 0x3c]
// 00494273  f30f1144246c         movss dword ptr [esp + 0x6c], xmm0
// 00494279  0f57c0               xorps xmm0, xmm0
// 0049427c  8d4c2440             lea ecx, [esp + 0x40]
// 00494280  51                   push ecx
// 00494281  f30f11442474         movss dword ptr [esp + 0x74], xmm0
// 00494287  f30f11442478         movss dword ptr [esp + 0x78], xmm0
// 0049428d  f30f1144247c         movss dword ptr [esp + 0x7c], xmm0
// 00494293  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 0049429b  57                   push edi
// 0049429c  8bce                 mov ecx, esi
// 0049429e  f30f11842484000000   movss dword ptr [esp + 0x84], xmm0
// 004942a7  e864f8ffff           call 0x493b10
// 004942ac  015e78               add dword ptr [esi + 0x78], ebx
// 004942af  015e70               add dword ptr [esi + 0x70], ebx
// 004942b2  81c7c0840000         add edi, 0x84c0
// 004942b8  57                   push edi
// 004942b9  ff15a439c000         call dword ptr [0xc039a4]
// 004942bf  8b3520ab9e00         mov esi, dword ptr [0x9eab20]
// 004942c5  6812850000           push 0x8512
// 004942ca  6800250000           push 0x2500
// 004942cf  6800200000           push 0x2000
// 004942d4  ffd6                 call esi
// 004942d6  6812850000           push 0x8512
// 004942db  6800250000           push 0x2500
// 004942e0  6801200000           push 0x2001
// 004942e5  ffd6                 call esi
// 004942e7  6812850000           push 0x8512
// 004942ec  6800250000           push 0x2500
// 004942f1  6802200000           push 0x2002
// 004942f6  ffd6                 call esi
// 004942f8  8b35ecaa9e00         mov esi, dword ptr [0x9eaaec]
// 004942fe  68600c0000           push 0xc60
// 00494303  ffd6                 call esi
// 00494305  68610c0000           push 0xc61
// 0049430a  ffd6                 call esi
// 0049430c  68620c0000           push 0xc62
// 00494311  ffd6                 call esi
// 00494313  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0049431a  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 00494325  85c0                 test eax, eax
// 00494327  742c                 je 0x494355
// 00494329  83c004               add eax, 4
// 0049432c  50                   push eax
// 0049432d  ff157ca39e00         call dword ptr [0x9ea37c]
// 00494333  85c0                 test eax, eax
// 00494335  751e                 jne 0x494355
// 00494337  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0049433e  e8ddf7feff           call 0x483b20
// 00494343  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0049434a  85c9                 test ecx, ecx
// 0049434c  7407                 je 0x494355
// 0049434e  8b11                 mov edx, dword ptr [ecx]
// 00494350  8b02                 mov eax, dword ptr [edx]
// 00494352  53                   push ebx
// 00494353  ffd0                 call eax
// 00494355  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0049435c  5f                   pop edi
// 0049435d  5e                   pop esi
// 0049435e  64890d00000000       mov dword ptr fs:[0], ecx
// 00494365  5b                   pop ebx
// 00494366  81c480000000         add esp, 0x80
// 0049436c  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?configureReflectionMap@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
