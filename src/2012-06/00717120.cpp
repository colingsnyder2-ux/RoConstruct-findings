// roc 2012-06 00717120  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00717120
//
// 00717120  6aff                 push -1
// 00717122  68a9e8ab00           push 0xabe8a9
// 00717127  64a100000000         mov eax, dword ptr fs:[0]
// 0071712d  50                   push eax
// 0071712e  64892500000000       mov dword ptr fs:[0], esp
// 00717135  51                   push ecx
// 00717136  55                   push ebp
// 00717137  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0071713b  c744240400000000     mov dword ptr [esp + 4], 0
// 00717143  8b4500               mov eax, dword ptr [ebp]
// 00717146  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00717149  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00717151  85c9                 test ecx, ecx
// 00717153  740b                 je 0x717160
// 00717155  8b11                 mov edx, dword ptr [ecx]
// 00717157  8b4210               mov eax, dword ptr [edx + 0x10]
// 0071715a  ffd0                 call eax
// 0071715c  85c0                 test eax, eax
// 0071715e  7510                 jne 0x717170
// 00717160  8b15fca4e500         mov edx, dword ptr [0xe5a4fc]
// 00717166  8b4210               mov eax, dword ptr [edx + 0x10]
// 00717169  b9fca4e500           mov ecx, 0xe5a4fc
// 0071716e  ffd0                 call eax
// 00717170  33c9                 xor ecx, ecx
// 00717172  85c0                 test eax, eax
// 00717174  0f95c1               setne cl
// 00717177  85c9                 test ecx, ecx
// 00717179  750a                 jne 0x717185
// 0071717b  6805400080           push 0x80004005
// 00717180  e82bd0ceff           call 0x4041b0
// 00717185  8b10                 mov edx, dword ptr [eax]
// 00717187  56                   push esi
// 00717188  8bc8                 mov ecx, eax
// 0071718a  8b420c               mov eax, dword ptr [edx + 0xc]
// 0071718d  57                   push edi
// 0071718e  ffd0                 call eax
// 00717190  8b742420             mov esi, dword ptr [esp + 0x20]
// 00717194  83c010               add eax, 0x10
// 00717197  8906                 mov dword ptr [esi], eax
// 00717199  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0071719d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007171a5  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 007171ad  85ff                 test edi, edi
// 007171af  7504                 jne 0x7171b5
// 007171b1  33c0                 xor eax, eax
// 007171b3  eb14                 jmp 0x7171c9
// 007171b5  8bc7                 mov eax, edi
// 007171b7  8d5001               lea edx, [eax + 1]
// 007171ba  8d9b00000000         lea ebx, [ebx]
// 007171c0  8a08                 mov cl, byte ptr [eax]
// 007171c2  40                   inc eax
// 007171c3  84c9                 test cl, cl
// 007171c5  75f9                 jne 0x7171c0
// 007171c7  2bc2                 sub eax, edx
// 007171c9  8b4d00               mov ecx, dword ptr [ebp]
// 007171cc  8b51f4               mov edx, dword ptr [ecx - 0xc]
// 007171cf  50                   push eax
// 007171d0  57                   push edi
// 007171d1  52                   push edx
// 007171d2  51                   push ecx
// 007171d3  56                   push esi
// 007171d4  e8e7fbffff           call 0x716dc0
// 007171d9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007171dd  83c414               add esp, 0x14
// 007171e0  5f                   pop edi
// 007171e1  8bc6                 mov eax, esi
// 007171e3  5e                   pop esi
// 007171e4  5d                   pop ebp
// 007171e5  64890d00000000       mov dword ptr fs:[0], ecx
// 007171ec  83c410               add esp, 0x10
// 007171ef  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitATL@DV?$ChTraitsCRT@D@ATL@@@ATL@@@0@ABV10@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0 roc_espclaude_14507603bc13e812.cpp