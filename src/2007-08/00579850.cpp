// roc 2007-08 00579850  unit: RBX::P8SpecialShape::?$GetSetImpl  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579850
//
// 00579850  8bc1                 mov eax, ecx
// 00579852  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00579856  85c9                 test ecx, ecx
// 00579858  7405                 je 0x57985f
// 0057985a  8d51fc               lea edx, [ecx - 4]
// 0057985d  eb02                 jmp 0x579861
// 0057985f  33d2                 xor edx, edx
// 00579861  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00579864  8b4008               mov eax, dword ptr [eax + 8]
// 00579867  03ca                 add ecx, edx
// 00579869  ffd0                 call eax
// 0057986b  d900                 fld dword ptr [eax]
// 0057986d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00579871  d919                 fstp dword ptr [ecx]
// 00579873  d94004               fld dword ptr [eax + 4]
// 00579876  d95904               fstp dword ptr [ecx + 4]
// 00579879  d94008               fld dword ptr [eax + 8]
// 0057987c  8bc1                 mov eax, ecx
// 0057987e  d95908               fstp dword ptr [ecx + 8]
// 00579881  c20800               ret 8
// library rbxgs/v8datamodel\custommesh.cpp (function ?getValue@?$GetSetImpl@P8SpecialShape@RBX@@BEABVVector3@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VSpecialShape@RBX@@VVector3@G3D@@@Reflection@RBX@@UBE?AVVector3@G3D@@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
