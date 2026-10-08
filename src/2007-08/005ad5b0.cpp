// roc 2007-08 005ad5b0  unit: RBX::P8Lighting::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ad5b0
//
// 005ad5b0  8b442404             mov eax, dword ptr [esp + 4]
// 005ad5b4  85c0                 test eax, eax
// 005ad5b6  56                   push esi
// 005ad5b7  8bd1                 mov edx, ecx
// 005ad5b9  7405                 je 0x5ad5c0
// 005ad5bb  8d70fc               lea esi, [eax - 4]
// 005ad5be  eb02                 jmp 0x5ad5c2
// 005ad5c0  33f6                 xor esi, esi
// 005ad5c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ad5c6  d901                 fld dword ptr [ecx]
// 005ad5c8  83ec0c               sub esp, 0xc
// 005ad5cb  8bc4                 mov eax, esp
// 005ad5cd  d918                 fstp dword ptr [eax]
// 005ad5cf  d94104               fld dword ptr [ecx + 4]
// 005ad5d2  d95804               fstp dword ptr [eax + 4]
// 005ad5d5  d94108               fld dword ptr [ecx + 8]
// 005ad5d8  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005ad5db  d95808               fstp dword ptr [eax + 8]
// 005ad5de  8b4210               mov eax, dword ptr [edx + 0x10]
// 005ad5e1  03ce                 add ecx, esi
// 005ad5e3  ffd0                 call eax
// 005ad5e5  5e                   pop esi
// 005ad5e6  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?setValue@?$GetSetImpl@P8Lighting@RBX@@BE?AVColor3@G3D@@XZP812@AEXV34@@Z@?$PropDescriptor@VLighting@RBX@@VColor3@G3D@@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
