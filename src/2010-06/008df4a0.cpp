// roc 2010-06 008df4a0  unit: Ogre::RbxMaterialAdapter  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008df4a0
//
// 008df4a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008df4a4  8b442404             mov eax, dword ptr [esp + 4]
// 008df4a8  d901                 fld dword ptr [ecx]
// 008df4aa  d918                 fstp dword ptr [eax]
// 008df4ac  d94104               fld dword ptr [ecx + 4]
// 008df4af  d95804               fstp dword ptr [eax + 4]
// 008df4b2  d94108               fld dword ptr [ecx + 8]
// 008df4b5  d95808               fstp dword ptr [eax + 8]
// 008df4b8  d9410c               fld dword ptr [ecx + 0xc]
// 008df4bb  d9580c               fstp dword ptr [eax + 0xc]
// 008df4be  c3                   ret 
// copied from an identical function in another client (function ?copy@@YA?AUS@@PBU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    float x, y, z, w;
};

S __cdecl copy(const S* source)
{
    S result;
    result.x = source->x;
    result.y = source->y;
    result.z = source->z;
    result.w = source->w;
    return result;
}