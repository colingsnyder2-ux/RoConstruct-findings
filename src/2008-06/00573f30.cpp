// roc 2008-06 00573f30  unit: RBX::TopMenuBar  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573f30
//
// 00573f30  55                   push ebp
// 00573f31  8bec                 mov ebp, esp
// 00573f33  83e4f8               and esp, 0xfffffff8
// 00573f36  83ec1c               sub esp, 0x1c
// 00573f39  53                   push ebx
// 00573f3a  56                   push esi
// 00573f3b  57                   push edi
// 00573f3c  8bf9                 mov edi, ecx
// 00573f3e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00573f41  8b07                 mov eax, dword ptr [edi]
// 00573f43  8b5048               mov edx, dword ptr [eax + 0x48]
// 00573f46  51                   push ecx
// 00573f47  8bcf                 mov ecx, edi
// 00573f49  ffd2                 call edx
// 00573f4b  8b07                 mov eax, dword ptr [edi]
// 00573f4d  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00573f50  8d4c2410             lea ecx, [esp + 0x10]
// 00573f54  51                   push ecx
// 00573f55  8bcf                 mov ecx, edi
// 00573f57  ffd2                 call edx
// 00573f59  33db                 xor ebx, ebx
// 00573f5b  8bcf                 mov ecx, edi
// 00573f5d  895c240c             mov dword ptr [esp + 0xc], ebx
// 00573f61  e8ba6ef1ff           call 0x48ae20
// 00573f66  85c0                 test eax, eax
// 00573f68  0f8692000000         jbe 0x574000
// 00573f6e  8bff                 mov edi, edi
// 00573f70  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 00573f76  8b4610               mov eax, dword ptr [esi + 0x10]
// 00573f79  2b460c               sub eax, dword ptr [esi + 0xc]
// 00573f7c  c1f803               sar eax, 3
// 00573f7f  3bd8                 cmp ebx, eax
// 00573f81  7206                 jb 0x573f89
// 00573f83  ff1590288000         call dword ptr [0x802890]
// 00573f89  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00573f8c  8b04d9               mov eax, dword ptr [ecx + ebx*8]
// 00573f8f  6a00                 push 0
// 00573f91  68d8b89200           push 0x92b8d8
// 00573f96  687c909200           push 0x92907c
// 00573f9b  6a00                 push 0
// 00573f9d  50                   push eax
// 00573f9e  e823d81200           call 0x6a17c6
// 00573fa3  8bf0                 mov esi, eax
// 00573fa5  83c414               add esp, 0x14
// 00573fa8  85f6                 test esi, esi
// 00573faa  7440                 je 0x573fec
// 00573fac  8b16                 mov edx, dword ptr [esi]
// 00573fae  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00573fb1  8d442418             lea eax, [esp + 0x18]
// 00573fb5  50                   push eax
// 00573fb6  8bce                 mov ecx, esi
// 00573fb8  ffd2                 call edx
// 00573fba  3b750c               cmp esi, dword ptr [ebp + 0xc]
// 00573fbd  744d                 je 0x57400c
// 00573fbf  83bf5401000001       cmp dword ptr [edi + 0x154], 1
// 00573fc6  7724                 ja 0x573fec
// 00573fc8  8b06                 mov eax, dword ptr [esi]
// 00573fca  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00573fcd  8b9f54010000         mov ebx, dword ptr [edi + 0x154]
// 00573fd3  8d4c2420             lea ecx, [esp + 0x20]
// 00573fd7  51                   push ecx
// 00573fd8  8bce                 mov ecx, esi
// 00573fda  ffd2                 call edx
// 00573fdc  d90498               fld dword ptr [eax + ebx*4]
// 00573fdf  8b4508               mov eax, dword ptr [ebp + 8]
// 00573fe2  d80498               fadd dword ptr [eax + ebx*4]
// 00573fe5  d91c98               fstp dword ptr [eax + ebx*4]
// 00573fe8  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00573fec  43                   inc ebx
// 00573fed  8bcf                 mov ecx, edi
// 00573fef  895c240c             mov dword ptr [esp + 0xc], ebx
// 00573ff3  e8286ef1ff           call 0x48ae20
// 00573ff8  3bd8                 cmp ebx, eax
// 00573ffa  0f8270ffffff         jb 0x573f70
// 00574000  8b4508               mov eax, dword ptr [ebp + 8]
// 00574003  5f                   pop edi
// 00574004  5e                   pop esi
// 00574005  5b                   pop ebx
// 00574006  8be5                 mov esp, ebp
// 00574008  5d                   pop ebp
// 00574009  c20800               ret 8
// 0057400c  8b8754010000         mov eax, dword ptr [edi + 0x154]
// 00574012  40                   inc eax
// 00574013  2501000080           and eax, 0x80000001
// 00574018  7905                 jns 0x57401f
// 0057401a  48                   dec eax
// 0057401b  83c8fe               or eax, 0xfffffffe
// 0057401e  40                   inc eax
// 0057401f  d9448410             fld dword ptr [esp + eax*4 + 0x10]
// 00574023  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00574026  d8648418             fsub dword ptr [esp + eax*4 + 0x18]
// 0057402a  5f                   pop edi
// 0057402b  5e                   pop esi
// 0057402c  5b                   pop ebx
// 0057402d  d80dac9b8100         fmul dword ptr [0x819bac]
// 00574033  d80481               fadd dword ptr [ecx + eax*4]
// 00574036  d91c81               fstp dword ptr [ecx + eax*4]
// 00574039  8bc1                 mov eax, ecx
// 0057403b  8be5                 mov esp, ebp
// 0057403d  5d                   pop ebp
// 0057403e  c20800               ret 8
// library openrbx-client/App\gui\GUI.cpp (function ?getChildPosition@TopMenuBar@RBX@@MBE?AVVector2@G3D@@PBVGuiItem@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/gui/GUI.cpp
