// roc 2007-08 0061ad60  unit: RBX::P8Camera::?$GetSetImpl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ad60
//
// 0061ad60  8bc1                 mov eax, ecx
// 0061ad62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061ad66  83ec30               sub esp, 0x30
// 0061ad69  85c9                 test ecx, ecx
// 0061ad6b  7405                 je 0x61ad72
// 0061ad6d  8d51fc               lea edx, [ecx - 4]
// 0061ad70  eb02                 jmp 0x61ad74
// 0061ad72  33d2                 xor edx, edx
// 0061ad74  56                   push esi
// 0061ad75  57                   push edi
// 0061ad76  8d4c2408             lea ecx, [esp + 8]
// 0061ad7a  51                   push ecx
// 0061ad7b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0061ad7e  03ca                 add ecx, edx
// 0061ad80  8b5008               mov edx, dword ptr [eax + 8]
// 0061ad83  ffd2                 call edx
// 0061ad85  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0061ad89  8bf0                 mov esi, eax
// 0061ad8b  56                   push esi
// 0061ad8c  8bcf                 mov ecx, edi
// 0061ad8e  e83de8eeff           call 0x5095d0
// 0061ad93  d94624               fld dword ptr [esi + 0x24]
// 0061ad96  d95f24               fstp dword ptr [edi + 0x24]
// 0061ad99  8bc7                 mov eax, edi
// 0061ad9b  d94628               fld dword ptr [esi + 0x28]
// 0061ad9e  d95f28               fstp dword ptr [edi + 0x28]
// 0061ada1  d9462c               fld dword ptr [esi + 0x2c]
// 0061ada4  d95f2c               fstp dword ptr [edi + 0x2c]
// 0061ada7  5f                   pop edi
// 0061ada8  5e                   pop esi
// 0061ada9  83c430               add esp, 0x30
// 0061adac  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?getValue@?$GetSetImpl@P8Camera@RBX@@BE?AVCoordinateFrame@G3D@@XZP812@AEXABV34@@Z@?$PropDescriptor@VCamera@RBX@@VCoordinateFrame@G3D@@@Reflection@RBX@@UBE?AVCoordinateFrame@G3D@@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
