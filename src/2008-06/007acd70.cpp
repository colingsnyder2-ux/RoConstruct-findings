// from server: 100% by tester
// roc 2008-06 007acd70  unit: RBX::RenderNew::Material  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007acd70
//
// 007acd70  83791000             cmp dword ptr [ecx + 0x10], 0
// 007acd74  7e19                 jle 0x7acd8f
// 007acd76  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007acd79  d905e4a38300         fld dword ptr [0x83a3e4]
// 007acd7f  d85828               fcomp dword ptr [eax + 0x28]
// 007acd82  dfe0                 fnstsw ax
// 007acd84  f6c405               test ah, 5
// 007acd87  7a06                 jp 0x7acd8f
// 007acd89  b801000000           mov eax, 1
// 007acd8e  c3                   ret 
// 007acd8f  33c0                 xor eax, eax
// 007acd91  c3                   ret 

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
