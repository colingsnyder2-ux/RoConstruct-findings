// roc 2009-12 00491b50  unit: Ogre::RbxEntity  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00491b50
//
// 00491b50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491b54  8b442404             mov eax, dword ptr [esp + 4]
// 00491b58  d901                 fld dword ptr [ecx]
// 00491b5a  d918                 fstp dword ptr [eax]
// 00491b5c  d94104               fld dword ptr [ecx + 4]
// 00491b5f  d95804               fstp dword ptr [eax + 4]
// 00491b62  d94108               fld dword ptr [ecx + 8]
// 00491b65  d95808               fstp dword ptr [eax + 8]
// 00491b68  d9410c               fld dword ptr [ecx + 0xc]
// 00491b6b  d9580c               fstp dword ptr [eax + 0xc]
// 00491b6e  c3                   ret 
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