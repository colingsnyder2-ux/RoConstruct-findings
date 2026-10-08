// roc 2007-08 00731ed0  unit: seg_00730000  size: 850 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00731ed0
//
// 00731ed0  83ec10               sub esp, 0x10
// 00731ed3  d9442424             fld dword ptr [esp + 0x24]
// 00731ed7  53                   push ebx
// 00731ed8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00731edc  55                   push ebp
// 00731edd  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00731ee1  8d85a8040000         lea eax, [ebp + 0x4a8]
// 00731ee7  d918                 fstp dword ptr [eax]
// 00731ee9  50                   push eax
// 00731eea  d9442434             fld dword ptr [esp + 0x34]
// 00731eee  d95804               fstp dword ptr [eax + 4]
// 00731ef1  d9442438             fld dword ptr [esp + 0x38]
// 00731ef5  d95808               fstp dword ptr [eax + 8]
// 00731ef8  d944243c             fld dword ptr [esp + 0x3c]
// 00731efc  d9580c               fstp dword ptr [eax + 0xc]
// 00731eff  ff150ceb7700         call dword ptr [0x77eb0c]
// 00731f05  6a05                 push 5
// 00731f07  8bcd                 mov ecx, ebp
// 00731f09  e8325fd4ff           call 0x477e40
// 00731f0e  d9ee                 fldz 
// 00731f10  8d44242c             lea eax, [esp + 0x2c]
// 00731f14  d954242c             fst dword ptr [esp + 0x2c]
// 00731f18  50                   push eax
// 00731f19  d95c2434             fstp dword ptr [esp + 0x34]
// 00731f1d  6a00                 push 0
// 00731f1f  8bcd                 mov ecx, ebp
// 00731f21  e86a2cd4ff           call 0x474b90
// 00731f26  d907                 fld dword ptr [edi]
// 00731f28  d806                 fadd dword ptr [esi]
// 00731f2a  8d4c242c             lea ecx, [esp + 0x2c]
// 00731f2e  51                   push ecx
// 00731f2f  8bcd                 mov ecx, ebp
// 00731f31  d95c2430             fstp dword ptr [esp + 0x30]
// 00731f35  d94704               fld dword ptr [edi + 4]
// 00731f38  d84604               fadd dword ptr [esi + 4]
// 00731f3b  d95c2434             fstp dword ptr [esp + 0x34]
// 00731f3f  d94708               fld dword ptr [edi + 8]
// 00731f42  d84608               fadd dword ptr [esi + 8]
// 00731f45  d95c2438             fstp dword ptr [esp + 0x38]
// 00731f49  d9470c               fld dword ptr [edi + 0xc]
// 00731f4c  d8460c               fadd dword ptr [esi + 0xc]
// 00731f4f  d95c243c             fstp dword ptr [esp + 0x3c]
// 00731f53  dd442428             fld qword ptr [esp + 0x28]
// 00731f57  d95c2424             fstp dword ptr [esp + 0x24]
// 00731f5b  d9442424             fld dword ptr [esp + 0x24]
// 00731f5f  d95c2420             fstp dword ptr [esp + 0x20]
// 00731f63  d9442430             fld dword ptr [esp + 0x30]
// 00731f67  d9442420             fld dword ptr [esp + 0x20]
// 00731f6b  d9c0                 fld st(0)
// 00731f6d  deca                 fmulp st(2)
// 00731f6f  d9c9                 fxch st(1)
// 00731f71  d95c240c             fstp dword ptr [esp + 0xc]
// 00731f75  d9442434             fld dword ptr [esp + 0x34]
// 00731f79  d8c9                 fmul st(1)
// 00731f7b  d95c2410             fstp dword ptr [esp + 0x10]
// 00731f7f  d9442438             fld dword ptr [esp + 0x38]
// 00731f83  d8c9                 fmul st(1)
// 00731f85  d95c2414             fstp dword ptr [esp + 0x14]
// 00731f89  d84c243c             fmul dword ptr [esp + 0x3c]
// 00731f8d  d95c2418             fstp dword ptr [esp + 0x18]
// 00731f91  d903                 fld dword ptr [ebx]
// 00731f93  d844240c             fadd dword ptr [esp + 0xc]
// 00731f97  d95c2430             fstp dword ptr [esp + 0x30]
// 00731f9b  d94304               fld dword ptr [ebx + 4]
// 00731f9e  d8442410             fadd dword ptr [esp + 0x10]
// 00731fa2  d95c2434             fstp dword ptr [esp + 0x34]
// 00731fa6  d9442414             fld dword ptr [esp + 0x14]
// 00731faa  d84308               fadd dword ptr [ebx + 8]
// 00731fad  d95c2438             fstp dword ptr [esp + 0x38]
// 00731fb1  d9442418             fld dword ptr [esp + 0x18]
// 00731fb5  d8430c               fadd dword ptr [ebx + 0xc]
// 00731fb8  d95c243c             fstp dword ptr [esp + 0x3c]
// 00731fbc  e84f2cd4ff           call 0x474c10
// 00731fc1  d9ee                 fldz 
// 00731fc3  8d542424             lea edx, [esp + 0x24]
// 00731fc7  d95c2424             fstp dword ptr [esp + 0x24]
// 00731fcb  52                   push edx
// 00731fcc  d9e8                 fld1 
// 00731fce  6a00                 push 0
// 00731fd0  8bcd                 mov ecx, ebp
// 00731fd2  d95c2430             fstp dword ptr [esp + 0x30]
// 00731fd6  e8b52bd4ff           call 0x474b90
// 00731fdb  d907                 fld dword ptr [edi]
// 00731fdd  8d44242c             lea eax, [esp + 0x2c]
// 00731fe1  d826                 fsub dword ptr [esi]
// 00731fe3  50                   push eax
// 00731fe4  8bcd                 mov ecx, ebp
// 00731fe6  d95c2430             fstp dword ptr [esp + 0x30]
// 00731fea  d94704               fld dword ptr [edi + 4]
// 00731fed  d86604               fsub dword ptr [esi + 4]
// 00731ff0  d95c2434             fstp dword ptr [esp + 0x34]
// 00731ff4  d94708               fld dword ptr [edi + 8]
// 00731ff7  d86608               fsub dword ptr [esi + 8]
// 00731ffa  d95c2438             fstp dword ptr [esp + 0x38]
// 00731ffe  d9470c               fld dword ptr [edi + 0xc]
// 00732001  d8660c               fsub dword ptr [esi + 0xc]
// 00732004  d95c243c             fstp dword ptr [esp + 0x3c]
// 00732008  d9442424             fld dword ptr [esp + 0x24]
// 0073200c  d95c2420             fstp dword ptr [esp + 0x20]
// 00732010  d9442430             fld dword ptr [esp + 0x30]
// 00732014  d9442420             fld dword ptr [esp + 0x20]
// 00732018  d9c0                 fld st(0)
// 0073201a  deca                 fmulp st(2)
// 0073201c  d9c9                 fxch st(1)
// 0073201e  d95c240c             fstp dword ptr [esp + 0xc]
// 00732022  d9442434             fld dword ptr [esp + 0x34]
// 00732026  d8c9                 fmul st(1)
// 00732028  d95c2410             fstp dword ptr [esp + 0x10]
// 0073202c  d9442438             fld dword ptr [esp + 0x38]
// 00732030  d8c9                 fmul st(1)
// 00732032  d95c2414             fstp dword ptr [esp + 0x14]
// 00732036  d84c243c             fmul dword ptr [esp + 0x3c]
// 0073203a  d95c2418             fstp dword ptr [esp + 0x18]
// 0073203e  d903                 fld dword ptr [ebx]
// 00732040  d844240c             fadd dword ptr [esp + 0xc]
// 00732044  d95c2430             fstp dword ptr [esp + 0x30]
// 00732048  d94304               fld dword ptr [ebx + 4]
// 0073204b  d8442410             fadd dword ptr [esp + 0x10]
// 0073204f  d95c2434             fstp dword ptr [esp + 0x34]
// 00732053  d9442414             fld dword ptr [esp + 0x14]
// 00732057  d84308               fadd dword ptr [ebx + 8]
// 0073205a  d95c2438             fstp dword ptr [esp + 0x38]
// 0073205e  d9442418             fld dword ptr [esp + 0x18]
// 00732062  d8430c               fadd dword ptr [ebx + 0xc]
// 00732065  d95c243c             fstp dword ptr [esp + 0x3c]
// 00732069  e8a22bd4ff           call 0x474c10
// 0073206e  d9e8                 fld1 
// 00732070  8d4c2424             lea ecx, [esp + 0x24]
// 00732074  51                   push ecx
// 00732075  d9542428             fst dword ptr [esp + 0x28]
// 00732079  6a00                 push 0
// 0073207b  d95c2430             fstp dword ptr [esp + 0x30]
// 0073207f  8bcd                 mov ecx, ebp
// 00732081  e80a2bd4ff           call 0x474b90
// 00732086  d907                 fld dword ptr [edi]
// 00732088  d9e0                 fchs 
// 0073208a  d95c242c             fstp dword ptr [esp + 0x2c]
// 0073208e  d94704               fld dword ptr [edi + 4]
// 00732091  d9e0                 fchs 
// 00732093  d95c2430             fstp dword ptr [esp + 0x30]
// 00732097  d94708               fld dword ptr [edi + 8]
// 0073209a  d9e0                 fchs 
// 0073209c  d95c2434             fstp dword ptr [esp + 0x34]
// 007320a0  d9470c               fld dword ptr [edi + 0xc]
// 007320a3  d9e0                 fchs 
// 007320a5  d95c2438             fstp dword ptr [esp + 0x38]
// 007320a9  d944242c             fld dword ptr [esp + 0x2c]
// 007320ad  d826                 fsub dword ptr [esi]
// 007320af  d95c2408             fstp dword ptr [esp + 8]
// 007320b3  d9442430             fld dword ptr [esp + 0x30]
// 007320b7  d86604               fsub dword ptr [esi + 4]
// 007320ba  d95c240c             fstp dword ptr [esp + 0xc]
// 007320be  d9442434             fld dword ptr [esp + 0x34]
// 007320c2  d86608               fsub dword ptr [esi + 8]
// 007320c5  d95c2410             fstp dword ptr [esp + 0x10]
// 007320c9  d9442438             fld dword ptr [esp + 0x38]
// 007320cd  d8660c               fsub dword ptr [esi + 0xc]
// 007320d0  d95c2414             fstp dword ptr [esp + 0x14]
// 007320d4  d9442420             fld dword ptr [esp + 0x20]
// 007320d8  d95c241c             fstp dword ptr [esp + 0x1c]
// 007320dc  d9442408             fld dword ptr [esp + 8]
// 007320e0  d944241c             fld dword ptr [esp + 0x1c]
// 007320e4  d9c0                 fld st(0)
// 007320e6  deca                 fmulp st(2)
// 007320e8  8d542408             lea edx, [esp + 8]
// 007320ec  d9c9                 fxch st(1)
// 007320ee  52                   push edx
// 007320ef  8bcd                 mov ecx, ebp
// 007320f1  d95c2430             fstp dword ptr [esp + 0x30]
// 007320f5  d9442410             fld dword ptr [esp + 0x10]
// 007320f9  d8c9                 fmul st(1)
// 007320fb  d95c2434             fstp dword ptr [esp + 0x34]
// 007320ff  d9442414             fld dword ptr [esp + 0x14]
// 00732103  d8c9                 fmul st(1)
// 00732105  d95c2438             fstp dword ptr [esp + 0x38]
// 00732109  d84c2418             fmul dword ptr [esp + 0x18]
// 0073210d  d95c243c             fstp dword ptr [esp + 0x3c]
// 00732111  d903                 fld dword ptr [ebx]
// 00732113  d8442430             fadd dword ptr [esp + 0x30]
// 00732117  d95c240c             fstp dword ptr [esp + 0xc]
// 0073211b  d94304               fld dword ptr [ebx + 4]
// 0073211e  d8442434             fadd dword ptr [esp + 0x34]
// 00732122  d95c2410             fstp dword ptr [esp + 0x10]
// 00732126  d9442438             fld dword ptr [esp + 0x38]
// 0073212a  d84308               fadd dword ptr [ebx + 8]
// 0073212d  d95c2414             fstp dword ptr [esp + 0x14]
// 00732131  d944243c             fld dword ptr [esp + 0x3c]
// 00732135  d8430c               fadd dword ptr [ebx + 0xc]
// 00732138  d95c2418             fstp dword ptr [esp + 0x18]
// 0073213c  e8cf2ad4ff           call 0x474c10
// 00732141  d9e8                 fld1 
// 00732143  8d442424             lea eax, [esp + 0x24]
// 00732147  d95c2424             fstp dword ptr [esp + 0x24]
// 0073214b  50                   push eax
// 0073214c  d9ee                 fldz 
// 0073214e  6a00                 push 0
// 00732150  8bcd                 mov ecx, ebp
// 00732152  d95c2430             fstp dword ptr [esp + 0x30]
// 00732156  e8352ad4ff           call 0x474b90
// 0073215b  d907                 fld dword ptr [edi]
// 0073215d  d9e0                 fchs 
// 0073215f  d95c242c             fstp dword ptr [esp + 0x2c]
// 00732163  d94704               fld dword ptr [edi + 4]
// 00732166  d9e0                 fchs 
// 00732168  d95c2430             fstp dword ptr [esp + 0x30]
// 0073216c  d94708               fld dword ptr [edi + 8]
// 0073216f  d9e0                 fchs 
// 00732171  d95c2434             fstp dword ptr [esp + 0x34]
// 00732175  d9470c               fld dword ptr [edi + 0xc]
// 00732178  d9e0                 fchs 
// 0073217a  d95c2438             fstp dword ptr [esp + 0x38]
// 0073217e  d906                 fld dword ptr [esi]
// 00732180  d844242c             fadd dword ptr [esp + 0x2c]
// 00732184  d95c2408             fstp dword ptr [esp + 8]
// 00732188  d9442430             fld dword ptr [esp + 0x30]
// 0073218c  d84604               fadd dword ptr [esi + 4]
// 0073218f  d95c240c             fstp dword ptr [esp + 0xc]
// 00732193  d94608               fld dword ptr [esi + 8]
// 00732196  d8442434             fadd dword ptr [esp + 0x34]
// 0073219a  d95c2410             fstp dword ptr [esp + 0x10]
// 0073219e  d9442438             fld dword ptr [esp + 0x38]
// 007321a2  d8460c               fadd dword ptr [esi + 0xc]
// 007321a5  d95c2414             fstp dword ptr [esp + 0x14]
// 007321a9  d9442420             fld dword ptr [esp + 0x20]
// 007321ad  d95c2420             fstp dword ptr [esp + 0x20]
// 007321b1  d9442408             fld dword ptr [esp + 8]
// 007321b5  d9442420             fld dword ptr [esp + 0x20]
// 007321b9  d9c0                 fld st(0)
// 007321bb  deca                 fmulp st(2)
// 007321bd  d9c9                 fxch st(1)
// 007321bf  d95c242c             fstp dword ptr [esp + 0x2c]
// 007321c3  d944240c             fld dword ptr [esp + 0xc]
// 007321c7  d8c9                 fmul st(1)
// 007321c9  d95c2430             fstp dword ptr [esp + 0x30]
// 007321cd  d9442410             fld dword ptr [esp + 0x10]
// 007321d1  d8c9                 fmul st(1)
// 007321d3  d95c2434             fstp dword ptr [esp + 0x34]
// 007321d7  d84c2414             fmul dword ptr [esp + 0x14]
// 007321db  d95c2438             fstp dword ptr [esp + 0x38]
// 007321df  d903                 fld dword ptr [ebx]
// 007321e1  d844242c             fadd dword ptr [esp + 0x2c]
// 007321e5  d95c2408             fstp dword ptr [esp + 8]
// 007321e9  d94304               fld dword ptr [ebx + 4]
// 007321ec  d8442430             fadd dword ptr [esp + 0x30]
// 007321f0  d95c240c             fstp dword ptr [esp + 0xc]
// 007321f4  8d4c2408             lea ecx, [esp + 8]
// 007321f8  d9442434             fld dword ptr [esp + 0x34]
// 007321fc  51                   push ecx
// 007321fd  d84308               fadd dword ptr [ebx + 8]
// 00732200  8bcd                 mov ecx, ebp
// 00732202  d95c2414             fstp dword ptr [esp + 0x14]
// 00732206  d944243c             fld dword ptr [esp + 0x3c]
// 0073220a  d8430c               fadd dword ptr [ebx + 0xc]
// 0073220d  d95c2418             fstp dword ptr [esp + 0x18]
// 00732211  e8fa29d4ff           call 0x474c10
// 00732216  8bcd                 mov ecx, ebp
// 00732218  5d                   pop ebp
// 00732219  5b                   pop ebx
// 0073221a  83c410               add esp, 0x10
// 0073221d  e9ce35d4ff           jmp 0x4757f0
// library rbxgs-g3d/GLG3Dcpp\Sky.cpp (function ?drawCelestialSphere@G3D@@YAXPAVRenderDevice@1@ABVVector4@1@11NVColor4@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Sky.cpp
