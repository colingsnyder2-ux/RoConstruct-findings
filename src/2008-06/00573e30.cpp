// roc 2008-06 00573e30  unit: RBX::TopMenuBar  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573e30
//
// 00573e30  55                   push ebp
// 00573e31  8bec                 mov ebp, esp
// 00573e33  83e4f8               and esp, 0xfffffff8
// 00573e36  83ec0c               sub esp, 0xc
// 00573e39  d9ee                 fldz 
// 00573e3b  53                   push ebx
// 00573e3c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00573e3f  d913                 fst dword ptr [ebx]
// 00573e41  56                   push esi
// 00573e42  d95b04               fstp dword ptr [ebx + 4]
// 00573e45  8bf1                 mov esi, ecx
// 00573e47  57                   push edi
// 00573e48  83c304               add ebx, 4
// 00573e4b  8974240c             mov dword ptr [esp + 0xc], esi
// 00573e4f  33ff                 xor edi, edi
// 00573e51  e8ca6ff1ff           call 0x48ae20
// 00573e56  85c0                 test eax, eax
// 00573e58  0f86b8000000         jbe 0x573f16
// 00573e5e  eb04                 jmp 0x573e64
// 00573e60  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00573e64  8bb608010000         mov esi, dword ptr [esi + 0x108]
// 00573e6a  8b4610               mov eax, dword ptr [esi + 0x10]
// 00573e6d  2b460c               sub eax, dword ptr [esi + 0xc]
// 00573e70  c1f803               sar eax, 3
// 00573e73  3bf8                 cmp edi, eax
// 00573e75  7206                 jb 0x573e7d
// 00573e77  ff1590288000         call dword ptr [0x802890]
// 00573e7d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00573e80  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 00573e83  6a00                 push 0
// 00573e85  68d8b89200           push 0x92b8d8
// 00573e8a  687c909200           push 0x92907c
// 00573e8f  6a00                 push 0
// 00573e91  50                   push eax
// 00573e92  e82fd91200           call 0x6a17c6
// 00573e97  83c414               add esp, 0x14
// 00573e9a  85c0                 test eax, eax
// 00573e9c  7466                 je 0x573f04
// 00573e9e  8b10                 mov edx, dword ptr [eax]
// 00573ea0  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00573ea3  8d4c2410             lea ecx, [esp + 0x10]
// 00573ea7  51                   push ecx
// 00573ea8  8bc8                 mov ecx, eax
// 00573eaa  ffd2                 call edx
// 00573eac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00573eb0  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00573eb6  83e800               sub eax, 0
// 00573eb9  7427                 je 0x573ee2
// 00573ebb  83e801               sub eax, 1
// 00573ebe  7544                 jne 0x573f04
// 00573ec0  d9442410             fld dword ptr [esp + 0x10]
// 00573ec4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00573ec7  d819                 fcomp dword ptr [ecx]
// 00573ec9  dfe0                 fnstsw ax
// 00573ecb  f6c441               test ah, 0x41
// 00573ece  8d442410             lea eax, [esp + 0x10]
// 00573ed2  7402                 je 0x573ed6
// 00573ed4  8bc1                 mov eax, ecx
// 00573ed6  d900                 fld dword ptr [eax]
// 00573ed8  d919                 fstp dword ptr [ecx]
// 00573eda  d903                 fld dword ptr [ebx]
// 00573edc  d8442414             fadd dword ptr [esp + 0x14]
// 00573ee0  eb20                 jmp 0x573f02
// 00573ee2  8b4508               mov eax, dword ptr [ebp + 8]
// 00573ee5  d900                 fld dword ptr [eax]
// 00573ee7  d8442410             fadd dword ptr [esp + 0x10]
// 00573eeb  d918                 fstp dword ptr [eax]
// 00573eed  d9442414             fld dword ptr [esp + 0x14]
// 00573ef1  d81b                 fcomp dword ptr [ebx]
// 00573ef3  dfe0                 fnstsw ax
// 00573ef5  f6c441               test ah, 0x41
// 00573ef8  8d442414             lea eax, [esp + 0x14]
// 00573efc  7402                 je 0x573f00
// 00573efe  8bc3                 mov eax, ebx
// 00573f00  d900                 fld dword ptr [eax]
// 00573f02  d91b                 fstp dword ptr [ebx]
// 00573f04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573f08  47                   inc edi
// 00573f09  e8126ff1ff           call 0x48ae20
// 00573f0e  3bf8                 cmp edi, eax
// 00573f10  0f824affffff         jb 0x573e60
// 00573f16  8b4508               mov eax, dword ptr [ebp + 8]
// 00573f19  5f                   pop edi
// 00573f1a  5e                   pop esi
// 00573f1b  5b                   pop ebx
// 00573f1c  8be5                 mov esp, ebp
// 00573f1e  5d                   pop ebp
// 00573f1f  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?getSize@TopMenuBar@RBX@@UBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/gui/GUI.cpp
