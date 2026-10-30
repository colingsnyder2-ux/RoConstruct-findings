// from server: 100% by auto
// roc 2007-08 006efd40  unit: CXTPShadowsManager::CShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006efd40
//
// 006efd40  83ec20               sub esp, 0x20
// 006efd43  53                   push ebx
// 006efd44  56                   push esi
// 006efd45  8bf1                 mov esi, ecx
// 006efd47  56                   push esi
// 006efd48  8d4c240c             lea ecx, [esp + 0xc]
// 006efd4c  e84f02f9ff           call 0x67ffa0
// 006efd51  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006efd55  8b5804               mov ebx, dword ptr [eax + 4]
// 006efd58  85db                 test ebx, ebx
// 006efd5a  0f84ba000000         je 0x6efe1a
// 006efd60  55                   push ebp
// 006efd61  57                   push edi
// 006efd62  8bc3                 mov eax, ebx
// 006efd64  8b4008               mov eax, dword ptr [eax + 8]
// 006efd67  8b1b                 mov ebx, dword ptr [ebx]
// 006efd69  33c9                 xor ecx, ecx
// 006efd6b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 006efd6e  0f94c1               sete cl
// 006efd71  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 006efd74  0f8596000000         jne 0x6efe10
// 006efd7a  50                   push eax
// 006efd7b  8d4c2424             lea ecx, [esp + 0x24]
// 006efd7f  e81c02f9ff           call 0x67ffa0
// 006efd84  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 006efd88  7540                 jne 0x6efdca
// 006efd8a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006efd8e  8b542414             mov edx, dword ptr [esp + 0x14]
// 006efd92  8d41ff               lea eax, [ecx - 1]
// 006efd95  3bd0                 cmp edx, eax
// 006efd97  7577                 jne 0x6efe10
// 006efd99  8b442418             mov eax, dword ptr [esp + 0x18]
// 006efd9d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 006efda1  7d6d                 jge 0x6efe10
// 006efda3  3b442420             cmp eax, dword ptr [esp + 0x20]
// 006efda7  7e67                 jle 0x6efe10
// 006efda9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006efdad  2bf9                 sub edi, ecx
// 006efdaf  8d0c7a               lea ecx, [edx + edi*2]
// 006efdb2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006efdb6  6a00                 push 0
// 006efdb8  2bd1                 sub edx, ecx
// 006efdba  52                   push edx
// 006efdbb  8b542418             mov edx, dword ptr [esp + 0x18]
// 006efdbf  2bc2                 sub eax, edx
// 006efdc1  50                   push eax
// 006efdc2  51                   push ecx
// 006efdc3  894c2424             mov dword ptr [esp + 0x24], ecx
// 006efdc7  52                   push edx
// 006efdc8  eb3f                 jmp 0x6efe09
// 006efdca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006efdce  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006efdd2  8d41ff               lea eax, [ecx - 1]
// 006efdd5  3bf8                 cmp edi, eax
// 006efdd7  7537                 jne 0x6efe10
// 006efdd9  8b542414             mov edx, dword ptr [esp + 0x14]
// 006efddd  3b542424             cmp edx, dword ptr [esp + 0x24]
// 006efde1  7e2d                 jle 0x6efe10
// 006efde3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006efde7  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 006efdeb  7d23                 jge 0x6efe10
// 006efded  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006efdf1  6a00                 push 0
// 006efdf3  2bc2                 sub eax, edx
// 006efdf5  50                   push eax
// 006efdf6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006efdfa  2be9                 sub ebp, ecx
// 006efdfc  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 006efe00  2bc1                 sub eax, ecx
// 006efe02  50                   push eax
// 006efe03  52                   push edx
// 006efe04  894c2420             mov dword ptr [esp + 0x20], ecx
// 006efe08  51                   push ecx
// 006efe09  8bce                 mov ecx, esi
// 006efe0b  e82402f4ff           call 0x630034
// 006efe10  85db                 test ebx, ebx
// 006efe12  0f854affffff         jne 0x6efd62
// 006efe18  5f                   pop edi
// 006efe19  5d                   pop ebp
// 006efe1a  5e                   pop esi
// 006efe1b  5b                   pop ebx
// 006efe1c  83c420               add esp, 0x20
// 006efe1f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShadowsManager.cpp (function ?LongShadow@CShadowWnd@CXTPShadowsManager@@QAEXPAVCShadowList@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShadowsManager.cpp
