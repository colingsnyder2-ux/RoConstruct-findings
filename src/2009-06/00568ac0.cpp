// roc 2009-06 00568ac0  unit: RBX::RbxG3D::RenderScene  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568ac0
//
// 00568ac0  53                   push ebx
// 00568ac1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00568ac5  55                   push ebp
// 00568ac6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00568aca  56                   push esi
// 00568acb  57                   push edi
// 00568acc  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00568ad0  8d743f02             lea esi, [edi + edi + 2]
// 00568ad4  3bf5                 cmp esi, ebp
// 00568ad6  897c2418             mov dword ptr [esp + 0x18], edi
// 00568ada  7d28                 jge 0x568b04
// 00568adc  8d642400             lea esp, [esp]
// 00568ae0  8d04b3               lea eax, [ebx + esi*4]
// 00568ae3  8d48fc               lea ecx, [eax - 4]
// 00568ae6  51                   push ecx
// 00568ae7  50                   push eax
// 00568ae8  ff54242c             call dword ptr [esp + 0x2c]
// 00568aec  83c408               add esp, 8
// 00568aef  84c0                 test al, al
// 00568af1  7401                 je 0x568af4
// 00568af3  4e                   dec esi
// 00568af4  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 00568af7  8914bb               mov dword ptr [ebx + edi*4], edx
// 00568afa  8bfe                 mov edi, esi
// 00568afc  8d743602             lea esi, [esi + esi + 2]
// 00568b00  3bf5                 cmp esi, ebp
// 00568b02  7cdc                 jl 0x568ae0
// 00568b04  750a                 jne 0x568b10
// 00568b06  8b44abfc             mov eax, dword ptr [ebx + ebp*4 - 4]
// 00568b0a  8904bb               mov dword ptr [ebx + edi*4], eax
// 00568b0d  8d7dff               lea edi, [ebp - 1]
// 00568b10  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00568b14  8b542420             mov edx, dword ptr [esp + 0x20]
// 00568b18  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568b1c  51                   push ecx
// 00568b1d  52                   push edx
// 00568b1e  50                   push eax
// 00568b1f  57                   push edi
// 00568b20  53                   push ebx
// 00568b21  e8cafeffff           call 0x5689f0
// 00568b26  83c414               add esp, 0x14
// 00568b29  5f                   pop edi
// 00568b2a  5e                   pop esi
// 00568b2b  5d                   pop ebp
// 00568b2c  5b                   pop ebx
// 00568b2d  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Adjust_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
