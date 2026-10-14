// roc 2008-06 00677e20  unit: RBX::AdornG3D  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677e20
//
// 00677e20  53                   push ebx
// 00677e21  56                   push esi
// 00677e22  57                   push edi
// 00677e23  ff15642a8000         call dword ptr [0x802a64]
// 00677e29  d9ee                 fldz 
// 00677e2b  8b1d002a8000         mov ebx, dword ptr [0x802a00]
// 00677e31  83ec10               sub esp, 0x10
// 00677e34  d954240c             fst dword ptr [esp + 0xc]
// 00677e38  d9e8                 fld1 
// 00677e3a  d95c2408             fstp dword ptr [esp + 8]
// 00677e3e  d95c2404             fstp dword ptr [esp + 4]
// 00677e42  d9058c438200         fld dword ptr [0x82438c]
// 00677e48  d91c24               fstp dword ptr [esp]
// 00677e4b  ffd3                 call ebx
// 00677e4d  d9442414             fld dword ptr [esp + 0x14]
// 00677e51  8b3d042a8000         mov edi, dword ptr [0x802a04]
// 00677e57  d80ddc828200         fmul dword ptr [0x8282dc]
// 00677e5d  83ec0c               sub esp, 0xc
// 00677e60  d95c2408             fstp dword ptr [esp + 8]
// 00677e64  d9ee                 fldz 
// 00677e66  d9542404             fst dword ptr [esp + 4]
// 00677e6a  d91c24               fstp dword ptr [esp]
// 00677e6d  ffd7                 call edi
// 00677e6f  e830e51200           call 0x7a63a4
// 00677e74  8bf0                 mov esi, eax
// 00677e76  68ac860100           push 0x186ac
// 00677e7b  56                   push esi
// 00677e7c  e81de51200           call 0x7a639e
// 00677e81  d9442414             fld dword ptr [esp + 0x14]
// 00677e85  6a01                 push 1
// 00677e87  6a0c                 push 0xc
// 00677e89  83ec18               sub esp, 0x18
// 00677e8c  dd5c2410             fstp qword ptr [esp + 0x10]
// 00677e90  d9442430             fld dword ptr [esp + 0x30]
// 00677e94  dd542408             fst qword ptr [esp + 8]
// 00677e98  dd1c24               fstp qword ptr [esp]
// 00677e9b  56                   push esi
// 00677e9c  e80fe51200           call 0x7a63b0
// 00677ea1  56                   push esi
// 00677ea2  e8ebe41200           call 0x7a6392
// 00677ea7  d9442414             fld dword ptr [esp + 0x14]
// 00677eab  83ec0c               sub esp, 0xc
// 00677eae  d95c2408             fstp dword ptr [esp + 8]
// 00677eb2  d9ee                 fldz 
// 00677eb4  d9542404             fst dword ptr [esp + 4]
// 00677eb8  d91c24               fstp dword ptr [esp]
// 00677ebb  ffd7                 call edi
// 00677ebd  e8e2e41200           call 0x7a63a4
// 00677ec2  8bf0                 mov esi, eax
// 00677ec4  68ac860100           push 0x186ac
// 00677ec9  56                   push esi
// 00677eca  e8cfe41200           call 0x7a639e
// 00677ecf  d9442410             fld dword ptr [esp + 0x10]
// 00677ed3  6a01                 push 1
// 00677ed5  6a0c                 push 0xc
// 00677ed7  83ec10               sub esp, 0x10
// 00677eda  dd5c2408             fstp qword ptr [esp + 8]
// 00677ede  d9ee                 fldz 
// 00677ee0  dd1c24               fstp qword ptr [esp]
// 00677ee3  56                   push esi
// 00677ee4  e8c1e41200           call 0x7a63aa
// 00677ee9  56                   push esi
// 00677eea  e8a3e41200           call 0x7a6392
// 00677eef  d9ee                 fldz 
// 00677ef1  83ec10               sub esp, 0x10
// 00677ef4  d954240c             fst dword ptr [esp + 0xc]
// 00677ef8  d9e8                 fld1 
// 00677efa  d95c2408             fstp dword ptr [esp + 8]
// 00677efe  d95c2404             fstp dword ptr [esp + 4]
// 00677f02  d90568f88200         fld dword ptr [0x82f868]
// 00677f08  d91c24               fstp dword ptr [esp]
// 00677f0b  ffd3                 call ebx
// 00677f0d  d9442414             fld dword ptr [esp + 0x14]
// 00677f11  83ec0c               sub esp, 0xc
// 00677f14  d95c2408             fstp dword ptr [esp + 8]
// 00677f18  d9ee                 fldz 
// 00677f1a  d9542404             fst dword ptr [esp + 4]
// 00677f1e  d91c24               fstp dword ptr [esp]
// 00677f21  ffd7                 call edi
// 00677f23  e87ce41200           call 0x7a63a4
// 00677f28  8bf0                 mov esi, eax
// 00677f2a  68ac860100           push 0x186ac
// 00677f2f  56                   push esi
// 00677f30  e869e41200           call 0x7a639e
// 00677f35  d9442410             fld dword ptr [esp + 0x10]
// 00677f39  6a01                 push 1
// 00677f3b  6a0c                 push 0xc
// 00677f3d  83ec10               sub esp, 0x10
// 00677f40  dd5c2408             fstp qword ptr [esp + 8]
// 00677f44  d9ee                 fldz 
// 00677f46  dd1c24               fstp qword ptr [esp]
// 00677f49  56                   push esi
// 00677f4a  e85be41200           call 0x7a63aa
// 00677f4f  56                   push esi
// 00677f50  e83de41200           call 0x7a6392
// 00677f55  5f                   pop edi
// 00677f56  5e                   pop esi
// 00677f57  5b                   pop ebx
// 00677f58  ff25702a8000         jmp dword ptr [0x802a70]
// library openrbx-client/Rendering\AppDraw\DrawPrimitives.cpp (function ?rawCylinderAlongX@DrawPrimitives@RBX@@SAXMMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/DrawPrimitives.cpp
