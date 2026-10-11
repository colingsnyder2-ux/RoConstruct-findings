// from server: 100% by colin
// roc 2007-08 0059cd30  unit: RBX::VWidget::?$NonFactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059cd30
//
// 0059cd30  e8cbe4f6ff           call 0x50b200
// 0059cd35  8bc8                 mov ecx, eax
// 0059cd37  8b442404             mov eax, dword ptr [esp + 4]
// 0059cd3b  d901                 fld dword ptr [ecx]
// 0059cd3d  d918                 fstp dword ptr [eax]
// 0059cd3f  d94104               fld dword ptr [ecx + 4]
// 0059cd42  d95804               fstp dword ptr [eax + 4]
// 0059cd45  d94108               fld dword ptr [ecx + 8]
// 0059cd48  d95808               fstp dword ptr [eax + 8]
// 0059cd4b  d9e8                 fld1 
// 0059cd4d  d9580c               fstp dword ptr [eax + 0xc]
// 0059cd50  c20400               ret 4

struct Vec4 {
    float x, y, z, w;
};

struct VWidget {
    Vec4 getColor() const;
};

extern "C" Vec4* __cdecl sub_50B200();

Vec4 VWidget::getColor() const {
    Vec4* src = sub_50B200();
    Vec4 result;
    result.x = src->x;
    result.y = src->y;
    result.z = src->z;
    result.w = 1.0f;
    return result;
}
