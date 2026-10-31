// roc 2011-06 00636900  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00636900
//
// 00636900  6aff                 push -1
// 00636902  68b9aa9e00           push 0x9eaab9
// 00636907  64a100000000         mov eax, dword ptr fs:[0]
// 0063690d  50                   push eax
// 0063690e  64892500000000       mov dword ptr fs:[0], esp
// 00636915  51                   push ecx
// 00636916  55                   push ebp
// 00636917  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0063691b  c744240400000000     mov dword ptr [esp + 4], 0
// 00636923  8b4500               mov eax, dword ptr [ebp]
// 00636926  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00636929  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00636931  85c9                 test ecx, ecx
// 00636933  740b                 je 0x636940
// 00636935  8b11                 mov edx, dword ptr [ecx]
// 00636937  8b4210               mov eax, dword ptr [edx + 0x10]
// 0063693a  ffd0                 call eax
// 0063693c  85c0                 test eax, eax
// 0063693e  7510                 jne 0x636950
// 00636940  8b151c93d100         mov edx, dword ptr [0xd1931c]
// 00636946  8b4210               mov eax, dword ptr [edx + 0x10]
// 00636949  b91c93d100           mov ecx, 0xd1931c
// 0063694e  ffd0                 call eax
// 00636950  33c9                 xor ecx, ecx
// 00636952  85c0                 test eax, eax
// 00636954  0f95c1               setne cl
// 00636957  85c9                 test ecx, ecx
// 00636959  750a                 jne 0x636965
// 0063695b  6805400080           push 0x80004005
// 00636960  e83bccdcff           call 0x4035a0
// 00636965  8b10                 mov edx, dword ptr [eax]
// 00636967  56                   push esi
// 00636968  8bc8                 mov ecx, eax
// 0063696a  8b420c               mov eax, dword ptr [edx + 0xc]
// 0063696d  57                   push edi
// 0063696e  ffd0                 call eax
// 00636970  8b742420             mov esi, dword ptr [esp + 0x20]
// 00636974  83c010               add eax, 0x10
// 00636977  8906                 mov dword ptr [esi], eax
// 00636979  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0063697d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00636985  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0063698d  85ff                 test edi, edi
// 0063698f  7504                 jne 0x636995
// 00636991  33c0                 xor eax, eax
// 00636993  eb14                 jmp 0x6369a9
// 00636995  8bc7                 mov eax, edi
// 00636997  8d5001               lea edx, [eax + 1]
// 0063699a  8d9b00000000         lea ebx, [ebx]
// 006369a0  8a08                 mov cl, byte ptr [eax]
// 006369a2  40                   inc eax
// 006369a3  84c9                 test cl, cl
// 006369a5  75f9                 jne 0x6369a0
// 006369a7  2bc2                 sub eax, edx
// 006369a9  8b4d00               mov ecx, dword ptr [ebp]
// 006369ac  8b51f4               mov edx, dword ptr [ecx - 0xc]
// 006369af  50                   push eax
// 006369b0  57                   push edi
// 006369b1  52                   push edx
// 006369b2  51                   push ecx
// 006369b3  56                   push esi
// 006369b4  e807feffff           call 0x6367c0
// 006369b9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006369bd  83c414               add esp, 0x14
// 006369c0  5f                   pop edi
// 006369c1  8bc6                 mov eax, esi
// 006369c3  5e                   pop esi
// 006369c4  5d                   pop ebp
// 006369c5  64890d00000000       mov dword ptr fs:[0], ecx
// 006369cc  83c410               add esp, 0x10
// 006369cf  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitATL@DV?$ChTraitsCRT@D@ATL@@@ATL@@@0@ABV10@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0 roc_espclaude_14507603bc13e812.cpp