// roc 2007-08 00573750  unit: RBX::NullController  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573750
//
// 00573750  8b442404             mov eax, dword ptr [esp + 4]
// 00573754  53                   push ebx
// 00573755  56                   push esi
// 00573756  8bf1                 mov esi, ecx
// 00573758  8906                 mov dword ptr [esi], eax
// 0057375a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057375e  d900                 fld dword ptr [eax]
// 00573760  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00573764  d95e04               fstp dword ptr [esi + 4]
// 00573767  57                   push edi
// 00573768  d94004               fld dword ptr [eax + 4]
// 0057376b  8d7e38               lea edi, [esi + 0x38]
// 0057376e  d95e08               fstp dword ptr [esi + 8]
// 00573771  53                   push ebx
// 00573772  d94008               fld dword ptr [eax + 8]
// 00573775  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00573779  d95e0c               fstp dword ptr [esi + 0xc]
// 0057377c  d944241c             fld dword ptr [esp + 0x1c]
// 00573780  d95e10               fstp dword ptr [esi + 0x10]
// 00573783  d9442420             fld dword ptr [esp + 0x20]
// 00573787  d95e14               fstp dword ptr [esi + 0x14]
// 0057378a  d9442424             fld dword ptr [esp + 0x24]
// 0057378e  d95e18               fstp dword ptr [esi + 0x18]
// 00573791  d9442428             fld dword ptr [esp + 0x28]
// 00573795  d95e1c               fstp dword ptr [esi + 0x1c]
// 00573798  8b08                 mov ecx, dword ptr [eax]
// 0057379a  894e20               mov dword ptr [esi + 0x20], ecx
// 0057379d  8b5004               mov edx, dword ptr [eax + 4]
// 005737a0  895624               mov dword ptr [esi + 0x24], edx
// 005737a3  8b4808               mov ecx, dword ptr [eax + 8]
// 005737a6  894e28               mov dword ptr [esi + 0x28], ecx
// 005737a9  8b500c               mov edx, dword ptr [eax + 0xc]
// 005737ac  89562c               mov dword ptr [esi + 0x2c], edx
// 005737af  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005737b2  894e30               mov dword ptr [esi + 0x30], ecx
// 005737b5  8b5014               mov edx, dword ptr [eax + 0x14]
// 005737b8  8bcf                 mov ecx, edi
// 005737ba  895634               mov dword ptr [esi + 0x34], edx
// 005737bd  e80e5ef9ff           call 0x5095d0
// 005737c2  d94324               fld dword ptr [ebx + 0x24]
// 005737c5  d95f24               fstp dword ptr [edi + 0x24]
// 005737c8  8bc6                 mov eax, esi
// 005737ca  d94328               fld dword ptr [ebx + 0x28]
// 005737cd  d95f28               fstp dword ptr [edi + 0x28]
// 005737d0  d9432c               fld dword ptr [ebx + 0x2c]
// 005737d3  d95f2c               fstp dword ptr [edi + 0x2c]
// 005737d6  5f                   pop edi
// 005737d7  5e                   pop esi
// 005737d8  5b                   pop ebx
// 005737d9  c22000               ret 0x20
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABV?$Vector6@W4SurfaceType@RBX@@@@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
