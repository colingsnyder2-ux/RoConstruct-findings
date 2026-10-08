// roc 2007-03 00734640  unit: seg_00730000  size: 850 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00734640
//
// 00734640  83ec10               sub esp, 0x10
// 00734643  d9442424             fld dword ptr [esp + 0x24]
// 00734647  53                   push ebx
// 00734648  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0073464c  55                   push ebp
// 0073464d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00734651  8d85a8040000         lea eax, [ebp + 0x4a8]
// 00734657  d918                 fstp dword ptr [eax]
// 00734659  50                   push eax
// 0073465a  d9442434             fld dword ptr [esp + 0x34]
// 0073465e  d95804               fstp dword ptr [eax + 4]
// 00734661  d9442438             fld dword ptr [esp + 0x38]
// 00734665  d95808               fstp dword ptr [eax + 8]
// 00734668  d944243c             fld dword ptr [esp + 0x3c]
// 0073466c  d9580c               fstp dword ptr [eax + 0xc]
// 0073466f  ff15b0eb7700         call dword ptr [0x77ebb0]
// 00734675  6a05                 push 5
// 00734677  8bcd                 mov ecx, ebp
// 00734679  e82239d4ff           call 0x477fa0
// 0073467e  d9ee                 fldz 
// 00734680  8d44242c             lea eax, [esp + 0x2c]
// 00734684  d954242c             fst dword ptr [esp + 0x2c]
// 00734688  50                   push eax
// 00734689  d95c2434             fstp dword ptr [esp + 0x34]
// 0073468d  6a00                 push 0
// 0073468f  8bcd                 mov ecx, ebp
// 00734691  e8fa05d4ff           call 0x474c90
// 00734696  d907                 fld dword ptr [edi]
// 00734698  d806                 fadd dword ptr [esi]
// 0073469a  8d4c242c             lea ecx, [esp + 0x2c]
// 0073469e  51                   push ecx
// 0073469f  8bcd                 mov ecx, ebp
// 007346a1  d95c2430             fstp dword ptr [esp + 0x30]
// 007346a5  d94704               fld dword ptr [edi + 4]
// 007346a8  d84604               fadd dword ptr [esi + 4]
// 007346ab  d95c2434             fstp dword ptr [esp + 0x34]
// 007346af  d94708               fld dword ptr [edi + 8]
// 007346b2  d84608               fadd dword ptr [esi + 8]
// 007346b5  d95c2438             fstp dword ptr [esp + 0x38]
// 007346b9  d9470c               fld dword ptr [edi + 0xc]
// 007346bc  d8460c               fadd dword ptr [esi + 0xc]
// 007346bf  d95c243c             fstp dword ptr [esp + 0x3c]
// 007346c3  dd442428             fld qword ptr [esp + 0x28]
// 007346c7  d95c2424             fstp dword ptr [esp + 0x24]
// 007346cb  d9442424             fld dword ptr [esp + 0x24]
// 007346cf  d95c2420             fstp dword ptr [esp + 0x20]
// 007346d3  d9442430             fld dword ptr [esp + 0x30]
// 007346d7  d9442420             fld dword ptr [esp + 0x20]
// 007346db  d9c0                 fld st(0)
// 007346dd  deca                 fmulp st(2)
// 007346df  d9c9                 fxch st(1)
// 007346e1  d95c240c             fstp dword ptr [esp + 0xc]
// 007346e5  d9442434             fld dword ptr [esp + 0x34]
// 007346e9  d8c9                 fmul st(1)
// 007346eb  d95c2410             fstp dword ptr [esp + 0x10]
// 007346ef  d9442438             fld dword ptr [esp + 0x38]
// 007346f3  d8c9                 fmul st(1)
// 007346f5  d95c2414             fstp dword ptr [esp + 0x14]
// 007346f9  d84c243c             fmul dword ptr [esp + 0x3c]
// 007346fd  d95c2418             fstp dword ptr [esp + 0x18]
// 00734701  d903                 fld dword ptr [ebx]
// 00734703  d844240c             fadd dword ptr [esp + 0xc]
// 00734707  d95c2430             fstp dword ptr [esp + 0x30]
// 0073470b  d94304               fld dword ptr [ebx + 4]
// 0073470e  d8442410             fadd dword ptr [esp + 0x10]
// 00734712  d95c2434             fstp dword ptr [esp + 0x34]
// 00734716  d9442414             fld dword ptr [esp + 0x14]
// 0073471a  d84308               fadd dword ptr [ebx + 8]
// 0073471d  d95c2438             fstp dword ptr [esp + 0x38]
// 00734721  d9442418             fld dword ptr [esp + 0x18]
// 00734725  d8430c               fadd dword ptr [ebx + 0xc]
// 00734728  d95c243c             fstp dword ptr [esp + 0x3c]
// 0073472c  e8df05d4ff           call 0x474d10
// 00734731  d9ee                 fldz 
// 00734733  8d542424             lea edx, [esp + 0x24]
// 00734737  d95c2424             fstp dword ptr [esp + 0x24]
// 0073473b  52                   push edx
// 0073473c  d9e8                 fld1 
// 0073473e  6a00                 push 0
// 00734740  8bcd                 mov ecx, ebp
// 00734742  d95c2430             fstp dword ptr [esp + 0x30]
// 00734746  e84505d4ff           call 0x474c90
// 0073474b  d907                 fld dword ptr [edi]
// 0073474d  8d44242c             lea eax, [esp + 0x2c]
// 00734751  d826                 fsub dword ptr [esi]
// 00734753  50                   push eax
// 00734754  8bcd                 mov ecx, ebp
// 00734756  d95c2430             fstp dword ptr [esp + 0x30]
// 0073475a  d94704               fld dword ptr [edi + 4]
// 0073475d  d86604               fsub dword ptr [esi + 4]
// 00734760  d95c2434             fstp dword ptr [esp + 0x34]
// 00734764  d94708               fld dword ptr [edi + 8]
// 00734767  d86608               fsub dword ptr [esi + 8]
// 0073476a  d95c2438             fstp dword ptr [esp + 0x38]
// 0073476e  d9470c               fld dword ptr [edi + 0xc]
// 00734771  d8660c               fsub dword ptr [esi + 0xc]
// 00734774  d95c243c             fstp dword ptr [esp + 0x3c]
// 00734778  d9442424             fld dword ptr [esp + 0x24]
// 0073477c  d95c2420             fstp dword ptr [esp + 0x20]
// 00734780  d9442430             fld dword ptr [esp + 0x30]
// 00734784  d9442420             fld dword ptr [esp + 0x20]
// 00734788  d9c0                 fld st(0)
// 0073478a  deca                 fmulp st(2)
// 0073478c  d9c9                 fxch st(1)
// 0073478e  d95c240c             fstp dword ptr [esp + 0xc]
// 00734792  d9442434             fld dword ptr [esp + 0x34]
// 00734796  d8c9                 fmul st(1)
// 00734798  d95c2410             fstp dword ptr [esp + 0x10]
// 0073479c  d9442438             fld dword ptr [esp + 0x38]
// 007347a0  d8c9                 fmul st(1)
// 007347a2  d95c2414             fstp dword ptr [esp + 0x14]
// 007347a6  d84c243c             fmul dword ptr [esp + 0x3c]
// 007347aa  d95c2418             fstp dword ptr [esp + 0x18]
// 007347ae  d903                 fld dword ptr [ebx]
// 007347b0  d844240c             fadd dword ptr [esp + 0xc]
// 007347b4  d95c2430             fstp dword ptr [esp + 0x30]
// 007347b8  d94304               fld dword ptr [ebx + 4]
// 007347bb  d8442410             fadd dword ptr [esp + 0x10]
// 007347bf  d95c2434             fstp dword ptr [esp + 0x34]
// 007347c3  d9442414             fld dword ptr [esp + 0x14]
// 007347c7  d84308               fadd dword ptr [ebx + 8]
// 007347ca  d95c2438             fstp dword ptr [esp + 0x38]
// 007347ce  d9442418             fld dword ptr [esp + 0x18]
// 007347d2  d8430c               fadd dword ptr [ebx + 0xc]
// 007347d5  d95c243c             fstp dword ptr [esp + 0x3c]
// 007347d9  e83205d4ff           call 0x474d10
// 007347de  d9e8                 fld1 
// 007347e0  8d4c2424             lea ecx, [esp + 0x24]
// 007347e4  51                   push ecx
// 007347e5  d9542428             fst dword ptr [esp + 0x28]
// 007347e9  6a00                 push 0
// 007347eb  d95c2430             fstp dword ptr [esp + 0x30]
// 007347ef  8bcd                 mov ecx, ebp
// 007347f1  e89a04d4ff           call 0x474c90
// 007347f6  d907                 fld dword ptr [edi]
// 007347f8  d9e0                 fchs 
// 007347fa  d95c242c             fstp dword ptr [esp + 0x2c]
// 007347fe  d94704               fld dword ptr [edi + 4]
// 00734801  d9e0                 fchs 
// 00734803  d95c2430             fstp dword ptr [esp + 0x30]
// 00734807  d94708               fld dword ptr [edi + 8]
// 0073480a  d9e0                 fchs 
// 0073480c  d95c2434             fstp dword ptr [esp + 0x34]
// 00734810  d9470c               fld dword ptr [edi + 0xc]
// 00734813  d9e0                 fchs 
// 00734815  d95c2438             fstp dword ptr [esp + 0x38]
// 00734819  d944242c             fld dword ptr [esp + 0x2c]
// 0073481d  d826                 fsub dword ptr [esi]
// 0073481f  d95c2408             fstp dword ptr [esp + 8]
// 00734823  d9442430             fld dword ptr [esp + 0x30]
// 00734827  d86604               fsub dword ptr [esi + 4]
// 0073482a  d95c240c             fstp dword ptr [esp + 0xc]
// 0073482e  d9442434             fld dword ptr [esp + 0x34]
// 00734832  d86608               fsub dword ptr [esi + 8]
// 00734835  d95c2410             fstp dword ptr [esp + 0x10]
// 00734839  d9442438             fld dword ptr [esp + 0x38]
// 0073483d  d8660c               fsub dword ptr [esi + 0xc]
// 00734840  d95c2414             fstp dword ptr [esp + 0x14]
// 00734844  d9442420             fld dword ptr [esp + 0x20]
// 00734848  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073484c  d9442408             fld dword ptr [esp + 8]
// 00734850  d944241c             fld dword ptr [esp + 0x1c]
// 00734854  d9c0                 fld st(0)
// 00734856  deca                 fmulp st(2)
// 00734858  8d542408             lea edx, [esp + 8]
// 0073485c  d9c9                 fxch st(1)
// 0073485e  52                   push edx
// 0073485f  8bcd                 mov ecx, ebp
// 00734861  d95c2430             fstp dword ptr [esp + 0x30]
// 00734865  d9442410             fld dword ptr [esp + 0x10]
// 00734869  d8c9                 fmul st(1)
// 0073486b  d95c2434             fstp dword ptr [esp + 0x34]
// 0073486f  d9442414             fld dword ptr [esp + 0x14]
// 00734873  d8c9                 fmul st(1)
// 00734875  d95c2438             fstp dword ptr [esp + 0x38]
// 00734879  d84c2418             fmul dword ptr [esp + 0x18]
// 0073487d  d95c243c             fstp dword ptr [esp + 0x3c]
// 00734881  d903                 fld dword ptr [ebx]
// 00734883  d8442430             fadd dword ptr [esp + 0x30]
// 00734887  d95c240c             fstp dword ptr [esp + 0xc]
// 0073488b  d94304               fld dword ptr [ebx + 4]
// 0073488e  d8442434             fadd dword ptr [esp + 0x34]
// 00734892  d95c2410             fstp dword ptr [esp + 0x10]
// 00734896  d9442438             fld dword ptr [esp + 0x38]
// 0073489a  d84308               fadd dword ptr [ebx + 8]
// 0073489d  d95c2414             fstp dword ptr [esp + 0x14]
// 007348a1  d944243c             fld dword ptr [esp + 0x3c]
// 007348a5  d8430c               fadd dword ptr [ebx + 0xc]
// 007348a8  d95c2418             fstp dword ptr [esp + 0x18]
// 007348ac  e85f04d4ff           call 0x474d10
// 007348b1  d9e8                 fld1 
// 007348b3  8d442424             lea eax, [esp + 0x24]
// 007348b7  d95c2424             fstp dword ptr [esp + 0x24]
// 007348bb  50                   push eax
// 007348bc  d9ee                 fldz 
// 007348be  6a00                 push 0
// 007348c0  8bcd                 mov ecx, ebp
// 007348c2  d95c2430             fstp dword ptr [esp + 0x30]
// 007348c6  e8c503d4ff           call 0x474c90
// 007348cb  d907                 fld dword ptr [edi]
// 007348cd  d9e0                 fchs 
// 007348cf  d95c242c             fstp dword ptr [esp + 0x2c]
// 007348d3  d94704               fld dword ptr [edi + 4]
// 007348d6  d9e0                 fchs 
// 007348d8  d95c2430             fstp dword ptr [esp + 0x30]
// 007348dc  d94708               fld dword ptr [edi + 8]
// 007348df  d9e0                 fchs 
// 007348e1  d95c2434             fstp dword ptr [esp + 0x34]
// 007348e5  d9470c               fld dword ptr [edi + 0xc]
// 007348e8  d9e0                 fchs 
// 007348ea  d95c2438             fstp dword ptr [esp + 0x38]
// 007348ee  d906                 fld dword ptr [esi]
// 007348f0  d844242c             fadd dword ptr [esp + 0x2c]
// 007348f4  d95c2408             fstp dword ptr [esp + 8]
// 007348f8  d9442430             fld dword ptr [esp + 0x30]
// 007348fc  d84604               fadd dword ptr [esi + 4]
// 007348ff  d95c240c             fstp dword ptr [esp + 0xc]
// 00734903  d94608               fld dword ptr [esi + 8]
// 00734906  d8442434             fadd dword ptr [esp + 0x34]
// 0073490a  d95c2410             fstp dword ptr [esp + 0x10]
// 0073490e  d9442438             fld dword ptr [esp + 0x38]
// 00734912  d8460c               fadd dword ptr [esi + 0xc]
// 00734915  d95c2414             fstp dword ptr [esp + 0x14]
// 00734919  d9442420             fld dword ptr [esp + 0x20]
// 0073491d  d95c2420             fstp dword ptr [esp + 0x20]
// 00734921  d9442408             fld dword ptr [esp + 8]
// 00734925  d9442420             fld dword ptr [esp + 0x20]
// 00734929  d9c0                 fld st(0)
// 0073492b  deca                 fmulp st(2)
// 0073492d  d9c9                 fxch st(1)
// 0073492f  d95c242c             fstp dword ptr [esp + 0x2c]
// 00734933  d944240c             fld dword ptr [esp + 0xc]
// 00734937  d8c9                 fmul st(1)
// 00734939  d95c2430             fstp dword ptr [esp + 0x30]
// 0073493d  d9442410             fld dword ptr [esp + 0x10]
// 00734941  d8c9                 fmul st(1)
// 00734943  d95c2434             fstp dword ptr [esp + 0x34]
// 00734947  d84c2414             fmul dword ptr [esp + 0x14]
// 0073494b  d95c2438             fstp dword ptr [esp + 0x38]
// 0073494f  d903                 fld dword ptr [ebx]
// 00734951  d844242c             fadd dword ptr [esp + 0x2c]
// 00734955  d95c2408             fstp dword ptr [esp + 8]
// 00734959  d94304               fld dword ptr [ebx + 4]
// 0073495c  d8442430             fadd dword ptr [esp + 0x30]
// 00734960  d95c240c             fstp dword ptr [esp + 0xc]
// 00734964  8d4c2408             lea ecx, [esp + 8]
// 00734968  d9442434             fld dword ptr [esp + 0x34]
// 0073496c  51                   push ecx
// 0073496d  d84308               fadd dword ptr [ebx + 8]
// 00734970  8bcd                 mov ecx, ebp
// 00734972  d95c2414             fstp dword ptr [esp + 0x14]
// 00734976  d944243c             fld dword ptr [esp + 0x3c]
// 0073497a  d8430c               fadd dword ptr [ebx + 0xc]
// 0073497d  d95c2418             fstp dword ptr [esp + 0x18]
// 00734981  e88a03d4ff           call 0x474d10
// 00734986  8bcd                 mov ecx, ebp
// 00734988  5d                   pop ebp
// 00734989  5b                   pop ebx
// 0073498a  83c410               add esp, 0x10
// 0073498d  e97e0fd4ff           jmp 0x475910
// library rbxgs-g3d/GLG3Dcpp\Sky.cpp (function ?drawCelestialSphere@G3D@@YAXPAVRenderDevice@1@ABVVector4@1@11NVColor4@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Sky.cpp
