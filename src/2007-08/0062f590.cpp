// roc 2007-08 0062f590  unit: RBX::IndexBox  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f590
//
// 0062f590  55                   push ebp
// 0062f591  8bec                 mov ebp, esp
// 0062f593  83e4c0               and esp, 0xffffffc0
// 0062f596  83ec34               sub esp, 0x34
// 0062f599  53                   push ebx
// 0062f59a  56                   push esi
// 0062f59b  57                   push edi
// 0062f59c  ff1598ea7700         call dword ptr [0x77ea98]
// 0062f5a2  d9ee                 fldz 
// 0062f5a4  8b1d34ea7700         mov ebx, dword ptr [0x77ea34]
// 0062f5aa  83ec10               sub esp, 0x10
// 0062f5ad  d954240c             fst dword ptr [esp + 0xc]
// 0062f5b1  d9e8                 fld1 
// 0062f5b3  d95c2408             fstp dword ptr [esp + 8]
// 0062f5b7  d95c2404             fstp dword ptr [esp + 4]
// 0062f5bb  d905b84d7c00         fld dword ptr [0x7c4db8]
// 0062f5c1  d91c24               fstp dword ptr [esp]
// 0062f5c4  ffd3                 call ebx
// 0062f5c6  d9450c               fld dword ptr [ebp + 0xc]
// 0062f5c9  8b3d38ea7700         mov edi, dword ptr [0x77ea38]
// 0062f5cf  d9e0                 fchs 
// 0062f5d1  83ec0c               sub esp, 0xc
// 0062f5d4  dc0d485b7900         fmul qword ptr [0x795b48]
// 0062f5da  d95c2448             fstp dword ptr [esp + 0x48]
// 0062f5de  d9442448             fld dword ptr [esp + 0x48]
// 0062f5e2  d95c2408             fstp dword ptr [esp + 8]
// 0062f5e6  d9ee                 fldz 
// 0062f5e8  d9542404             fst dword ptr [esp + 4]
// 0062f5ec  d91c24               fstp dword ptr [esp]
// 0062f5ef  ffd7                 call edi
// 0062f5f1  e89ec00f00           call 0x72b694
// 0062f5f6  8bf0                 mov esi, eax
// 0062f5f8  68ac860100           push 0x186ac
// 0062f5fd  56                   push esi
// 0062f5fe  e88bc00f00           call 0x72b68e
// 0062f603  d9450c               fld dword ptr [ebp + 0xc]
// 0062f606  6a01                 push 1
// 0062f608  6a0c                 push 0xc
// 0062f60a  83ec18               sub esp, 0x18
// 0062f60d  dd5c2410             fstp qword ptr [esp + 0x10]
// 0062f611  d94508               fld dword ptr [ebp + 8]
// 0062f614  dd542408             fst qword ptr [esp + 8]
// 0062f618  dd1c24               fstp qword ptr [esp]
// 0062f61b  56                   push esi
// 0062f61c  e87fc00f00           call 0x72b6a0
// 0062f621  56                   push esi
// 0062f622  e85bc00f00           call 0x72b682
// 0062f627  d9450c               fld dword ptr [ebp + 0xc]
// 0062f62a  83ec0c               sub esp, 0xc
// 0062f62d  d95c2408             fstp dword ptr [esp + 8]
// 0062f631  d9ee                 fldz 
// 0062f633  d9542404             fst dword ptr [esp + 4]
// 0062f637  d91c24               fstp dword ptr [esp]
// 0062f63a  ffd7                 call edi
// 0062f63c  e853c00f00           call 0x72b694
// 0062f641  8bf0                 mov esi, eax
// 0062f643  68ac860100           push 0x186ac
// 0062f648  56                   push esi
// 0062f649  e840c00f00           call 0x72b68e
// 0062f64e  d94508               fld dword ptr [ebp + 8]
// 0062f651  6a01                 push 1
// 0062f653  6a0c                 push 0xc
// 0062f655  83ec10               sub esp, 0x10
// 0062f658  dd5c2408             fstp qword ptr [esp + 8]
// 0062f65c  d9ee                 fldz 
// 0062f65e  dd1c24               fstp qword ptr [esp]
// 0062f661  56                   push esi
// 0062f662  e833c00f00           call 0x72b69a
// 0062f667  56                   push esi
// 0062f668  e815c00f00           call 0x72b682
// 0062f66d  d9ee                 fldz 
// 0062f66f  83ec10               sub esp, 0x10
// 0062f672  d954240c             fst dword ptr [esp + 0xc]
// 0062f676  d9e8                 fld1 
// 0062f678  d95c2408             fstp dword ptr [esp + 8]
// 0062f67c  d95c2404             fstp dword ptr [esp + 4]
// 0062f680  d90574837a00         fld dword ptr [0x7a8374]
// 0062f686  d91c24               fstp dword ptr [esp]
// 0062f689  ffd3                 call ebx
// 0062f68b  d9450c               fld dword ptr [ebp + 0xc]
// 0062f68e  83ec0c               sub esp, 0xc
// 0062f691  d95c2408             fstp dword ptr [esp + 8]
// 0062f695  d9ee                 fldz 
// 0062f697  d9542404             fst dword ptr [esp + 4]
// 0062f69b  d91c24               fstp dword ptr [esp]
// 0062f69e  ffd7                 call edi
// 0062f6a0  e8efbf0f00           call 0x72b694
// 0062f6a5  8bf0                 mov esi, eax
// 0062f6a7  68ac860100           push 0x186ac
// 0062f6ac  56                   push esi
// 0062f6ad  e8dcbf0f00           call 0x72b68e
// 0062f6b2  d94508               fld dword ptr [ebp + 8]
// 0062f6b5  6a01                 push 1
// 0062f6b7  6a0c                 push 0xc
// 0062f6b9  83ec10               sub esp, 0x10
// 0062f6bc  dd5c2408             fstp qword ptr [esp + 8]
// 0062f6c0  d9ee                 fldz 
// 0062f6c2  dd1c24               fstp qword ptr [esp]
// 0062f6c5  56                   push esi
// 0062f6c6  e8cfbf0f00           call 0x72b69a
// 0062f6cb  56                   push esi
// 0062f6cc  e8b1bf0f00           call 0x72b682
// 0062f6d1  ff15a4ea7700         call dword ptr [0x77eaa4]
// 0062f6d7  5f                   pop edi
// 0062f6d8  5e                   pop esi
// 0062f6d9  5b                   pop ebx
// 0062f6da  8be5                 mov esp, ebp
// 0062f6dc  5d                   pop ebp
// 0062f6dd  c3                   ret 
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rawCylinderAlongX@DrawPrimitives@RBX@@SAXMMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
