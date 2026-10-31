// roc 2012-06 0041aea0  unit: CopyVerb  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041aea0
//
// 0041aea0  56                   push esi
// 0041aea1  57                   push edi
// 0041aea2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041aea6  8bf1                 mov esi, ecx
// 0041aea8  85ff                 test edi, edi
// 0041aeaa  7459                 je 0x41af05
// 0041aeac  8d44240c             lea eax, [esp + 0xc]
// 0041aeb0  50                   push eax
// 0041aeb1  57                   push edi
// 0041aeb2  ff15282bb200         call dword ptr [0xb22b28]
// 0041aeb8  85c0                 test eax, eax
// 0041aeba  7c27                 jl 0x41aee3
// 0041aebc  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0041aec1  7420                 je 0x41aee3
// 0041aec3  56                   push esi
// 0041aec4  57                   push edi
// 0041aec5  e866ffffff           call 0x41ae30
// 0041aeca  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041aece  83c408               add esp, 8
// 0041aed1  b900200000           mov ecx, 0x2000
// 0041aed6  66090e               or word ptr [esi], cx
// 0041aed9  5f                   pop edi
// 0041aeda  895608               mov dword ptr [esi + 8], edx
// 0041aedd  8bc6                 mov eax, esi
// 0041aedf  5e                   pop esi
// 0041aee0  c20400               ret 4
// 0041aee3  b90a000000           mov ecx, 0xa
// 0041aee8  66890e               mov word ptr [esi], cx
// 0041aeeb  894608               mov dword ptr [esi + 8], eax
// 0041aeee  3d0e000780           cmp eax, 0x8007000e
// 0041aef3  7506                 jne 0x41aefb
// 0041aef5  50                   push eax
// 0041aef6  e8b592feff           call 0x4041b0
// 0041aefb  6857000780           push 0x80070057
// 0041af00  e8ab92feff           call 0x4041b0
// 0041af05  33d2                 xor edx, edx
// 0041af07  5f                   pop edi
// 0041af08  668916               mov word ptr [esi], dx
// 0041af0b  8bc6                 mov eax, esi
// 0041af0d  5e                   pop esi
// 0041af0e  c20400               ret 4
// copied from an identical function in another client (function ??0CComVariant@ATL@@QAE@PBUtagSAFEARRAY@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp