// roc 2007-03 00500340  unit: seg_00500000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500340
//
// 00500340  53                   push ebx
// 00500341  55                   push ebp
// 00500342  8bc1                 mov eax, ecx
// 00500344  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00500348  56                   push esi
// 00500349  57                   push edi
// 0050034a  8d580c               lea ebx, [eax + 0xc]
// 0050034d  8d7924               lea edi, [ecx + 0x24]
// 00500350  8d7008               lea esi, [eax + 8]
// 00500353  8d5108               lea edx, [ecx + 8]
// 00500356  bd03000000           mov ebp, 3
// 0050035b  eb03                 jmp 0x500360
// 0050035d  8d4900               lea ecx, [ecx]
// 00500360  d942f8               fld dword ptr [edx - 8]
// 00500363  83c20c               add edx, 0xc
// 00500366  d95ef8               fstp dword ptr [esi - 8]
// 00500369  83c610               add esi, 0x10
// 0050036c  d942f0               fld dword ptr [edx - 0x10]
// 0050036f  83c704               add edi, 4
// 00500372  d95eec               fstp dword ptr [esi - 0x14]
// 00500375  83c310               add ebx, 0x10
// 00500378  83ed01               sub ebp, 1
// 0050037b  d942f4               fld dword ptr [edx - 0xc]
// 0050037e  d95ef0               fstp dword ptr [esi - 0x10]
// 00500381  d947fc               fld dword ptr [edi - 4]
// 00500384  d95bf0               fstp dword ptr [ebx - 0x10]
// 00500387  75d7                 jne 0x500360
// 00500389  d9ee                 fldz 
// 0050038b  5f                   pop edi
// 0050038c  d95030               fst dword ptr [eax + 0x30]
// 0050038f  5e                   pop esi
// 00500390  d95034               fst dword ptr [eax + 0x34]
// 00500393  5d                   pop ebp
// 00500394  d95838               fstp dword ptr [eax + 0x38]
// 00500397  5b                   pop ebx
// 00500398  d9e8                 fld1 
// 0050039a  d9583c               fstp dword ptr [eax + 0x3c]
// 0050039d  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@ABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix4.cpp
