// roc 2009-06 00499eb0  unit: Ogre::RbxManualResourceLoaderChain  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00499eb0
//
// 00499eb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00499eb4  8b442404             mov eax, dword ptr [esp + 4]
// 00499eb8  d901                 fld dword ptr [ecx]
// 00499eba  d918                 fstp dword ptr [eax]
// 00499ebc  d94104               fld dword ptr [ecx + 4]
// 00499ebf  d95804               fstp dword ptr [eax + 4]
// 00499ec2  d94108               fld dword ptr [ecx + 8]
// 00499ec5  d95808               fstp dword ptr [eax + 8]
// 00499ec8  d9410c               fld dword ptr [ecx + 0xc]
// 00499ecb  d9580c               fstp dword ptr [eax + 0xc]
// 00499ece  c3                   ret 
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