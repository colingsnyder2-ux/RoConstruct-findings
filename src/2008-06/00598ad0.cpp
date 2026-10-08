// roc 2008-06 00598ad0  unit: RBX::NullController  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598ad0
//
// 00598ad0  8b442404             mov eax, dword ptr [esp + 4]
// 00598ad4  53                   push ebx
// 00598ad5  56                   push esi
// 00598ad6  8bf1                 mov esi, ecx
// 00598ad8  8906                 mov dword ptr [esi], eax
// 00598ada  8b442410             mov eax, dword ptr [esp + 0x10]
// 00598ade  d900                 fld dword ptr [eax]
// 00598ae0  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00598ae4  d95e04               fstp dword ptr [esi + 4]
// 00598ae7  57                   push edi
// 00598ae8  d94004               fld dword ptr [eax + 4]
// 00598aeb  8d7e38               lea edi, [esi + 0x38]
// 00598aee  d95e08               fstp dword ptr [esi + 8]
// 00598af1  53                   push ebx
// 00598af2  d94008               fld dword ptr [eax + 8]
// 00598af5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00598af9  d95e0c               fstp dword ptr [esi + 0xc]
// 00598afc  d944241c             fld dword ptr [esp + 0x1c]
// 00598b00  d95e10               fstp dword ptr [esi + 0x10]
// 00598b03  d9442420             fld dword ptr [esp + 0x20]
// 00598b07  d95e14               fstp dword ptr [esi + 0x14]
// 00598b0a  d9442424             fld dword ptr [esp + 0x24]
// 00598b0e  d95e18               fstp dword ptr [esi + 0x18]
// 00598b11  d9442428             fld dword ptr [esp + 0x28]
// 00598b15  d95e1c               fstp dword ptr [esi + 0x1c]
// 00598b18  8b08                 mov ecx, dword ptr [eax]
// 00598b1a  894e20               mov dword ptr [esi + 0x20], ecx
// 00598b1d  8b5004               mov edx, dword ptr [eax + 4]
// 00598b20  895624               mov dword ptr [esi + 0x24], edx
// 00598b23  8b4808               mov ecx, dword ptr [eax + 8]
// 00598b26  894e28               mov dword ptr [esi + 0x28], ecx
// 00598b29  8b500c               mov edx, dword ptr [eax + 0xc]
// 00598b2c  89562c               mov dword ptr [esi + 0x2c], edx
// 00598b2f  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00598b32  894e30               mov dword ptr [esi + 0x30], ecx
// 00598b35  8b5014               mov edx, dword ptr [eax + 0x14]
// 00598b38  8bcf                 mov ecx, edi
// 00598b3a  895634               mov dword ptr [esi + 0x34], edx
// 00598b3d  e8dea6f7ff           call 0x513220
// 00598b42  d94324               fld dword ptr [ebx + 0x24]
// 00598b45  d95f24               fstp dword ptr [edi + 0x24]
// 00598b48  8bc6                 mov eax, esi
// 00598b4a  d94328               fld dword ptr [ebx + 0x28]
// 00598b4d  d95f28               fstp dword ptr [edi + 0x28]
// 00598b50  d9432c               fld dword ptr [ebx + 0x2c]
// 00598b53  d95f2c               fstp dword ptr [edi + 0x2c]
// 00598b56  5f                   pop edi
// 00598b57  5e                   pop esi
// 00598b58  5b                   pop ebx
// 00598b59  c22000               ret 0x20
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABV?$Vector6@W4SurfaceType@RBX@@@@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
