// roc 2009-06 00806080  unit: CXTPOffice2007Image  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00806080
//
// 00806080  6aff                 push -1
// 00806082  68ff188800           push 0x8818ff
// 00806087  64a100000000         mov eax, dword ptr fs:[0]
// 0080608d  50                   push eax
// 0080608e  83ec18               sub esp, 0x18
// 00806091  53                   push ebx
// 00806092  55                   push ebp
// 00806093  56                   push esi
// 00806094  57                   push edi
// 00806095  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080609a  33c4                 xor eax, esp
// 0080609c  50                   push eax
// 0080609d  8d44242c             lea eax, [esp + 0x2c]
// 008060a1  64a300000000         mov dword ptr fs:[0], eax
// 008060a7  8be9                 mov ebp, ecx
// 008060a9  33ff                 xor edi, edi
// 008060ab  897c2428             mov dword ptr [esp + 0x28], edi
// 008060af  c744243401000000     mov dword ptr [esp + 0x34], 1
// 008060b7  397d08               cmp dword ptr [ebp + 8], edi
// 008060ba  7516                 jne 0x8060d2
// 008060bc  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008060c0  6816d28a00           push 0x8ad216
// 008060c5  8bce                 mov ecx, esi
// 008060c7  ff1508fd8900         call dword ptr [0x89fd08]
// 008060cd  e9a2010000           jmp 0x806274
// 008060d2  8d4c2440             lea ecx, [esp + 0x40]
// 008060d6  ff153cf18900         call dword ptr [0x89f13c]
// 008060dc  8d4c2444             lea ecx, [esp + 0x44]
// 008060e0  ff153cf18900         call dword ptr [0x89f13c]
// 008060e6  8b4508               mov eax, dword ptr [ebp + 8]
// 008060e9  8d4c2414             lea ecx, [esp + 0x14]
// 008060ed  89442424             mov dword ptr [esp + 0x24], eax
// 008060f1  ff15bcfc8900         call dword ptr [0x89fcbc]
// 008060f7  8d4c2424             lea ecx, [esp + 0x24]
// 008060fb  51                   push ecx
// 008060fc  8d542418             lea edx, [esp + 0x18]
// 00806100  bb02000000           mov ebx, 2
// 00806105  52                   push edx
// 00806106  8bcd                 mov ecx, ebp
// 00806108  885c243c             mov byte ptr [esp + 0x3c], bl
// 0080610c  e86ff3ffff           call 0x805480
// 00806111  85c0                 test eax, eax
// 00806113  0f8440010000         je 0x806259
// 00806119  8d4c2414             lea ecx, [esp + 0x14]
// 0080611d  ff1588f98900         call dword ptr [0x89f988]
// 00806123  6a00                 push 0
// 00806125  6a3b                 push 0x3b
// 00806127  8d4c241c             lea ecx, [esp + 0x1c]
// 0080612b  ff1500008a00         call dword ptr [0x8a0000]
// 00806131  85c0                 test eax, eax
// 00806133  0f8407010000         je 0x806240
// 00806139  7e2e                 jle 0x806169
// 0080613b  50                   push eax
// 0080613c  8d44242c             lea eax, [esp + 0x2c]
// 00806140  50                   push eax
// 00806141  8d4c241c             lea ecx, [esp + 0x1c]
// 00806145  ff1510f48900         call dword ptr [0x89f410]
// 0080614b  50                   push eax
// 0080614c  8d4c2418             lea ecx, [esp + 0x18]
// 00806150  c644243803           mov byte ptr [esp + 0x38], 3
// 00806155  ff1508fa8900         call dword ptr [0x89fa08]
// 0080615b  8d4c2428             lea ecx, [esp + 0x28]
// 0080615f  885c2434             mov byte ptr [esp + 0x34], bl
// 00806163  ff1510fd8900         call dword ptr [0x89fd10]
// 00806169  8d4c2414             lea ecx, [esp + 0x14]
// 0080616d  ff155cfb8900         call dword ptr [0x89fb5c]
// 00806173  84c0                 test al, al
// 00806175  0f85c5000000         jne 0x806240
// 0080617b  8d4c2414             lea ecx, [esp + 0x14]
// 0080617f  ff153cf18900         call dword ptr [0x89f13c]
// 00806185  6a00                 push 0
// 00806187  8d4c2418             lea ecx, [esp + 0x18]
// 0080618b  ff15e0f98900         call dword ptr [0x89f9e0]
// 00806191  3c5b                 cmp al, 0x5b
// 00806193  754d                 jne 0x8061e2
// 00806195  85ff                 test edi, edi
// 00806197  0f85bc000000         jne 0x806259
// 0080619d  8d4c2414             lea ecx, [esp + 0x14]
// 008061a1  ff1554fb8900         call dword ptr [0x89fb54]
// 008061a7  2bc3                 sub eax, ebx
// 008061a9  50                   push eax
// 008061aa  6a01                 push 1
// 008061ac  8d4c2428             lea ecx, [esp + 0x28]
// 008061b0  51                   push ecx
// 008061b1  8d4c2420             lea ecx, [esp + 0x20]
// 008061b5  ff157cfe8900         call dword ptr [0x89fe7c]
// 008061bb  8d4c2440             lea ecx, [esp + 0x40]
// 008061bf  c644243404           mov byte ptr [esp + 0x34], 4
// 008061c4  ff15d0fc8900         call dword ptr [0x89fcd0]
// 008061ca  50                   push eax
// 008061cb  8d4c2424             lea ecx, [esp + 0x24]
// 008061cf  ff15d4fc8900         call dword ptr [0x89fcd4]
// 008061d5  85c0                 test eax, eax
// 008061d7  7503                 jne 0x8061dc
// 008061d9  8d7801               lea edi, [eax + 1]
// 008061dc  8d4c2420             lea ecx, [esp + 0x20]
// 008061e0  eb54                 jmp 0x806236
// 008061e2  85ff                 test edi, edi
// 008061e4  745a                 je 0x806240
// 008061e6  6a00                 push 0
// 008061e8  6a3d                 push 0x3d
// 008061ea  8d4c241c             lea ecx, [esp + 0x1c]
// 008061ee  ff1500008a00         call dword ptr [0x8a0000]
// 008061f4  8bf0                 mov esi, eax
// 008061f6  85f6                 test esi, esi
// 008061f8  7e46                 jle 0x806240
// 008061fa  56                   push esi
// 008061fb  8d542420             lea edx, [esp + 0x20]
// 008061ff  52                   push edx
// 00806200  8d4c241c             lea ecx, [esp + 0x1c]
// 00806204  ff1510f48900         call dword ptr [0x89f410]
// 0080620a  8d4c241c             lea ecx, [esp + 0x1c]
// 0080620e  c644243405           mov byte ptr [esp + 0x34], 5
// 00806213  ff1548f78900         call dword ptr [0x89f748]
// 00806219  8d4c2444             lea ecx, [esp + 0x44]
// 0080621d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00806223  50                   push eax
// 00806224  8d4c2420             lea ecx, [esp + 0x20]
// 00806228  ff15d4fc8900         call dword ptr [0x89fcd4]
// 0080622e  85c0                 test eax, eax
// 00806230  746e                 je 0x8062a0
// 00806232  8d4c241c             lea ecx, [esp + 0x1c]
// 00806236  885c2434             mov byte ptr [esp + 0x34], bl
// 0080623a  ff1510fd8900         call dword ptr [0x89fd10]
// 00806240  8d442424             lea eax, [esp + 0x24]
// 00806244  50                   push eax
// 00806245  8d4c2418             lea ecx, [esp + 0x18]
// 00806249  51                   push ecx
// 0080624a  8bcd                 mov ecx, ebp
// 0080624c  e82ff2ffff           call 0x805480
// 00806251  85c0                 test eax, eax
// 00806253  0f85c0feffff         jne 0x806119
// 00806259  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0080625d  6816d28a00           push 0x8ad216
// 00806262  8bce                 mov ecx, esi
// 00806264  ff1508fd8900         call dword ptr [0x89fd08]
// 0080626a  8d4c2414             lea ecx, [esp + 0x14]
// 0080626e  ff1510fd8900         call dword ptr [0x89fd10]
// 00806274  8d4c2440             lea ecx, [esp + 0x40]
// 00806278  ff1510fd8900         call dword ptr [0x89fd10]
// 0080627e  8d4c2444             lea ecx, [esp + 0x44]
// 00806282  ff1510fd8900         call dword ptr [0x89fd10]
// 00806288  8bc6                 mov eax, esi
// 0080628a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080628e  64890d00000000       mov dword ptr fs:[0], ecx
// 00806295  59                   pop ecx
// 00806296  5f                   pop edi
// 00806297  5e                   pop esi
// 00806298  5d                   pop ebp
// 00806299  5b                   pop ebx
// 0080629a  83c424               add esp, 0x24
// 0080629d  c20c00               ret 0xc
// 008062a0  46                   inc esi
// 008062a1  56                   push esi
// 008062a2  8d54241c             lea edx, [esp + 0x1c]
// 008062a6  52                   push edx
// 008062a7  8d4c241c             lea ecx, [esp + 0x1c]
// 008062ab  ff1504008a00         call dword ptr [0x8a0004]
// 008062b1  8d4c2418             lea ecx, [esp + 0x18]
// 008062b5  c644243406           mov byte ptr [esp + 0x34], 6
// 008062ba  ff1588f98900         call dword ptr [0x89f988]
// 008062c0  8d4c2418             lea ecx, [esp + 0x18]
// 008062c4  ff1548f78900         call dword ptr [0x89f748]
// 008062ca  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008062ce  8d442418             lea eax, [esp + 0x18]
// 008062d2  50                   push eax
// 008062d3  8bce                 mov ecx, esi
// 008062d5  ff15e4fc8900         call dword ptr [0x89fce4]
// 008062db  8d4c2418             lea ecx, [esp + 0x18]
// 008062df  ff1510fd8900         call dword ptr [0x89fd10]
// 008062e5  8d4c241c             lea ecx, [esp + 0x1c]
// 008062e9  ff1510fd8900         call dword ptr [0x89fd10]
// 008062ef  e976ffffff           jmp 0x80626a
// copied from an identical function in another client (function ?GetImageValue@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp