// roc 2009-06 00847e50  unit: RBX::RbxG3D::Material  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847e50
//
// 00847e50  83791000             cmp dword ptr [ecx + 0x10], 0
// 00847e54  7e19                 jle 0x847e6f
// 00847e56  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00847e59  d905c4018c00         fld dword ptr [0x8c01c4]
// 00847e5f  d85828               fcomp dword ptr [eax + 0x28]
// 00847e62  dfe0                 fnstsw ax
// 00847e64  f6c405               test ah, 5
// 00847e67  7a06                 jp 0x847e6f
// 00847e69  b801000000           mov eax, 1
// 00847e6e  c3                   ret 
// 00847e6f  33c0                 xor eax, eax
// 00847e71  c3                   ret 
// copied from an identical function in another client (function ?veryTransparent@Material@Render@RBX@@QBE_NXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
namespace G3D {
template<class T>
class Array
{
    T* data;
    int num;
    int numAllocated;
public:
    int size() const { return num; }
    const T& front() const { return data[0]; }
};
}

namespace RBX {
namespace Render {
class Material
{
public:
    class Level
    {
        char gap0[0x28];
    public:
        float mTransparent;
    };

private:
    char gap0[0xc];
    G3D::Array<Level> levels;

public:
    bool veryTransparent() const;
};

bool Material::veryTransparent() const
{
    return levels.size() > 0 && levels.front().mTransparent > 0.25f;
}
}
}