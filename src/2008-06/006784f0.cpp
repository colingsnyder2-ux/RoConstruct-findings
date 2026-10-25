// from server: 100% by king_originala
// roc 2008-06 006784f0  unit: Ogre::RbxSceneManagerFactory  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006784f0
//
// 006784f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006784f4  8b442404             mov eax, dword ptr [esp + 4]
// 006784f8  d901                 fld dword ptr [ecx]
// 006784fa  d918                 fstp dword ptr [eax]
// 006784fc  d94104               fld dword ptr [ecx + 4]
// 006784ff  d95804               fstp dword ptr [eax + 4]
// 00678502  d94108               fld dword ptr [ecx + 8]
// 00678505  d95808               fstp dword ptr [eax + 8]
// 00678508  d9410c               fld dword ptr [ecx + 0xc]
// 0067850b  d9580c               fstp dword ptr [eax + 0xc]
// 0067850e  c3                   ret 

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
