// roc 2008-06 005dd570  unit: RBX::Message  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd570
//
// 005dd570  8b542404             mov edx, dword ptr [esp + 4]
// 005dd574  d94210               fld dword ptr [edx + 0x10]
// 005dd577  d802                 fadd dword ptr [edx]
// 005dd579  d84220               fadd dword ptr [edx + 0x20]
// 005dd57c  d9ee                 fldz 
// 005dd57e  d8d9                 fcomp st(1)
// 005dd580  dfe0                 fnstsw ax
// 005dd582  f6c405               test ah, 5
// 005dd585  7a3e                 jp 0x5dd5c5
// 005dd587  d80594748200         fadd dword ptr [0x827494]
// 005dd58d  8bc1                 mov eax, ecx
// 005dd58f  d9fa                 fsqrt 
// 005dd591  d9c0                 fld st(0)
// 005dd593  d905ac9b8100         fld dword ptr [0x819bac]
// 005dd599  dcc9                 fmul st(1), st(0)
// 005dd59b  d9c9                 fxch st(1)
// 005dd59d  d9590c               fstp dword ptr [ecx + 0xc]
// 005dd5a0  def1                 fdivrp st(1)
// 005dd5a2  d9421c               fld dword ptr [edx + 0x1c]
// 005dd5a5  d86214               fsub dword ptr [edx + 0x14]
// 005dd5a8  d8c9                 fmul st(1)
// 005dd5aa  d919                 fstp dword ptr [ecx]
// 005dd5ac  d94208               fld dword ptr [edx + 8]
// 005dd5af  d86218               fsub dword ptr [edx + 0x18]
// 005dd5b2  d8c9                 fmul st(1)
// 005dd5b4  d95904               fstp dword ptr [ecx + 4]
// 005dd5b7  d9420c               fld dword ptr [edx + 0xc]
// 005dd5ba  d86204               fsub dword ptr [edx + 4]
// 005dd5bd  dec9                 fmulp st(1)
// 005dd5bf  d95908               fstp dword ptr [ecx + 8]
// 005dd5c2  c20400               ret 4
// 005dd5c5  ddd8                 fstp st(0)
// 005dd5c7  d94210               fld dword ptr [edx + 0x10]
// 005dd5ca  d81a                 fcomp dword ptr [edx]
// 005dd5cc  dfe0                 fnstsw ax
// 005dd5ce  f6c405               test ah, 5
// 005dd5d1  7a54                 jp 0x5dd627
// 005dd5d3  d94220               fld dword ptr [edx + 0x20]
// 005dd5d6  d81a                 fcomp dword ptr [edx]
// 005dd5d8  dfe0                 fnstsw ax
// 005dd5da  f6c405               test ah, 5
// 005dd5dd  7a48                 jp 0x5dd627
// 005dd5df  d902                 fld dword ptr [edx]
// 005dd5e1  8bc1                 mov eax, ecx
// 005dd5e3  d80594748200         fadd dword ptr [0x827494]
// 005dd5e9  d86210               fsub dword ptr [edx + 0x10]
// 005dd5ec  d86220               fsub dword ptr [edx + 0x20]
// 005dd5ef  d9fa                 fsqrt 
// 005dd5f1  d9e0                 fchs 
// 005dd5f3  d9c0                 fld st(0)
// 005dd5f5  d905ac9b8100         fld dword ptr [0x819bac]
// 005dd5fb  dcc9                 fmul st(1), st(0)
// 005dd5fd  d9c9                 fxch st(1)
// 005dd5ff  d919                 fstp dword ptr [ecx]
// 005dd601  def1                 fdivrp st(1)
// 005dd603  d9420c               fld dword ptr [edx + 0xc]
// 005dd606  d84204               fadd dword ptr [edx + 4]
// 005dd609  d8c9                 fmul st(1)
// 005dd60b  d95904               fstp dword ptr [ecx + 4]
// 005dd60e  d94218               fld dword ptr [edx + 0x18]
// 005dd611  d84208               fadd dword ptr [edx + 8]
// 005dd614  d8c9                 fmul st(1)
// 005dd616  d95908               fstp dword ptr [ecx + 8]
// 005dd619  d9421c               fld dword ptr [edx + 0x1c]
// 005dd61c  d86214               fsub dword ptr [edx + 0x14]
// 005dd61f  dec9                 fmulp st(1)
// 005dd621  d9590c               fstp dword ptr [ecx + 0xc]
// 005dd624  c20400               ret 4
// 005dd627  d94220               fld dword ptr [edx + 0x20]
// 005dd62a  d85a10               fcomp dword ptr [edx + 0x10]
// 005dd62d  dfe0                 fnstsw ax
// 005dd62f  f6c405               test ah, 5
// 005dd632  7a48                 jp 0x5dd67c
// 005dd634  d94210               fld dword ptr [edx + 0x10]
// 005dd637  8bc1                 mov eax, ecx
// 005dd639  d80594748200         fadd dword ptr [0x827494]
// 005dd63f  d822                 fsub dword ptr [edx]
// 005dd641  d86220               fsub dword ptr [edx + 0x20]
// 005dd644  d9fa                 fsqrt 
// 005dd646  d9e0                 fchs 
// 005dd648  d9c0                 fld st(0)
// 005dd64a  d905ac9b8100         fld dword ptr [0x819bac]
// 005dd650  dcc9                 fmul st(1), st(0)
// 005dd652  d9c9                 fxch st(1)
// 005dd654  d95904               fstp dword ptr [ecx + 4]
// 005dd657  def1                 fdivrp st(1)
// 005dd659  d9420c               fld dword ptr [edx + 0xc]
// 005dd65c  d84204               fadd dword ptr [edx + 4]
// 005dd65f  d8c9                 fmul st(1)
// 005dd661  d919                 fstp dword ptr [ecx]
// 005dd663  d9421c               fld dword ptr [edx + 0x1c]
// 005dd666  d84214               fadd dword ptr [edx + 0x14]
// 005dd669  d8c9                 fmul st(1)
// 005dd66b  d95908               fstp dword ptr [ecx + 8]
// 005dd66e  d94208               fld dword ptr [edx + 8]
// 005dd671  d86218               fsub dword ptr [edx + 0x18]
// 005dd674  dec9                 fmulp st(1)
// 005dd676  d9590c               fstp dword ptr [ecx + 0xc]
// 005dd679  c20400               ret 4
// 005dd67c  d94220               fld dword ptr [edx + 0x20]
// 005dd67f  8bc1                 mov eax, ecx
// 005dd681  d80594748200         fadd dword ptr [0x827494]
// 005dd687  d822                 fsub dword ptr [edx]
// 005dd689  d86210               fsub dword ptr [edx + 0x10]
// 005dd68c  d9fa                 fsqrt 
// 005dd68e  d9e0                 fchs 
// 005dd690  d9c0                 fld st(0)
// 005dd692  d905ac9b8100         fld dword ptr [0x819bac]
// 005dd698  dcc9                 fmul st(1), st(0)
// 005dd69a  d9c9                 fxch st(1)
// 005dd69c  d95908               fstp dword ptr [ecx + 8]
// 005dd69f  def1                 fdivrp st(1)
// 005dd6a1  d94218               fld dword ptr [edx + 0x18]
// 005dd6a4  d84208               fadd dword ptr [edx + 8]
// 005dd6a7  d8c9                 fmul st(1)
// 005dd6a9  d919                 fstp dword ptr [ecx]
// 005dd6ab  d9421c               fld dword ptr [edx + 0x1c]
// 005dd6ae  d84214               fadd dword ptr [edx + 0x14]
// 005dd6b1  d8c9                 fmul st(1)
// 005dd6b3  d95904               fstp dword ptr [ecx + 4]
// 005dd6b6  d9420c               fld dword ptr [edx + 0xc]
// 005dd6b9  d86204               fsub dword ptr [edx + 4]
// 005dd6bc  dec9                 fmulp st(1)
// 005dd6be  d9590c               fstp dword ptr [ecx + 0xc]
// 005dd6c1  c20400               ret 4
// library rbxgs-dll/util\Quaternion.cpp (function ??0Quaternion@RBX@@QAE@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Quaternion.cpp
