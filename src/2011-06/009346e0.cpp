// roc 2011-06 009346e0  unit: Ogre::RbxSceneManagerFactory  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009346e0
//
// 009346e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009346e4  8b442404             mov eax, dword ptr [esp + 4]
// 009346e8  d901                 fld dword ptr [ecx]
// 009346ea  d918                 fstp dword ptr [eax]
// 009346ec  d94104               fld dword ptr [ecx + 4]
// 009346ef  d95804               fstp dword ptr [eax + 4]
// 009346f2  d94108               fld dword ptr [ecx + 8]
// 009346f5  d95808               fstp dword ptr [eax + 8]
// 009346f8  d9410c               fld dword ptr [ecx + 0xc]
// 009346fb  d9580c               fstp dword ptr [eax + 0xc]
// 009346fe  c3                   ret 
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