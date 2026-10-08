// roc 2007-08 00591ab0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591ab0
//
// 00591ab0  56                   push esi
// 00591ab1  8bf1                 mov esi, ecx
// 00591ab3  e838e4f6ff           call 0x4ffef0
// 00591ab8  dd06                 fld qword ptr [esi]
// 00591aba  dc8610000200         fadd qword ptr [esi + 0x20010]
// 00591ac0  d8d9                 fcomp st(1)
// 00591ac2  dfe0                 fnstsw ax
// 00591ac4  f6c441               test ah, 0x41
// 00591ac7  7a68                 jp 0x591b31
// 00591ac9  8b4608               mov eax, dword ptr [esi + 8]
// 00591acc  d9c0                 fld st(0)
// 00591ace  dca610000200         fsub qword ptr [esi + 0x20010]
// 00591ad4  8b542408             mov edx, dword ptr [esp + 8]
// 00591ad8  c1e005               shl eax, 5
// 00591adb  33c9                 xor ecx, ecx
// 00591add  dd5c3010             fstp qword ptr [eax + esi + 0x10]
// 00591ae1  8b4608               mov eax, dword ptr [esi + 8]
// 00591ae4  83c001               add eax, 1
// 00591ae7  25ff0f0000           and eax, 0xfff
// 00591aec  384c2418             cmp byte ptr [esp + 0x18], cl
// 00591af0  894608               mov dword ptr [esi + 8], eax
// 00591af3  0f95c1               setne cl
// 00591af6  c1e005               shl eax, 5
// 00591af9  894c3028             mov dword ptr [eax + esi + 0x28], ecx
// 00591afd  8b4608               mov eax, dword ptr [esi + 8]
// 00591b00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00591b04  c1e005               shl eax, 5
// 00591b07  89543018             mov dword ptr [eax + esi + 0x18], edx
// 00591b0b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00591b0f  894c301c             mov dword ptr [eax + esi + 0x1c], ecx
// 00591b13  8b4608               mov eax, dword ptr [esi + 8]
// 00591b16  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00591b1a  83c001               add eax, 1
// 00591b1d  c1e005               shl eax, 5
// 00591b20  891430               mov dword ptr [eax + esi], edx
// 00591b23  894c3004             mov dword ptr [eax + esi + 4], ecx
// 00591b27  dd9e10000200         fstp qword ptr [esi + 0x20010]
// 00591b2d  5e                   pop esi
// 00591b2e  c21400               ret 0x14
// 00591b31  807c241800           cmp byte ptr [esp + 0x18], 0
// 00591b36  ddd8                 fstp st(0)
// 00591b38  740f                 je 0x591b49
// 00591b3a  8b5608               mov edx, dword ptr [esi + 8]
// 00591b3d  c1e205               shl edx, 5
// 00591b40  8344322801           add dword ptr [edx + esi + 0x28], 1
// 00591b45  8d443228             lea eax, [edx + esi + 0x28]
// 00591b49  8b4608               mov eax, dword ptr [esi + 8]
// 00591b4c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00591b50  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00591b54  c1e005               shl eax, 5
// 00591b57  014c3018             add dword ptr [eax + esi + 0x18], ecx
// 00591b5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00591b5f  8d443018             lea eax, [eax + esi + 0x18]
// 00591b63  115004               adc dword ptr [eax + 4], edx
// 00591b66  8b4608               mov eax, dword ptr [esi + 8]
// 00591b69  8b542414             mov edx, dword ptr [esp + 0x14]
// 00591b6d  83c001               add eax, 1
// 00591b70  c1e005               shl eax, 5
// 00591b73  03c6                 add eax, esi
// 00591b75  0108                 add dword ptr [eax], ecx
// 00591b77  5e                   pop esi
// 00591b78  115004               adc dword ptr [eax + 4], edx
// 00591b7b  c21400               ret 0x14
// library rbxgs/util\Profiling.cpp (function ?log@CodeProfiler@Profiling@RBX@@AAEX_J0_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
