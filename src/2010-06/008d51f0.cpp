// roc 2010-06 008d51f0  unit: Ogre::VertexStreamer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d51f0
//
// 008d51f0  8b442404             mov eax, dword ptr [esp + 4]
// 008d51f4  d900                 fld dword ptr [eax]
// 008d51f6  56                   push esi
// 008d51f7  8bf1                 mov esi, ecx
// 008d51f9  d91e                 fstp dword ptr [esi]
// 008d51fb  83c008               add eax, 8
// 008d51fe  d940fc               fld dword ptr [eax - 4]
// 008d5201  50                   push eax
// 008d5202  8d4e08               lea ecx, [esi + 8]
// 008d5205  d95e04               fstp dword ptr [esi + 4]
// 008d5208  ff1564b69e00         call dword ptr [0x9eb664]
// 008d520e  8bc6                 mov eax, esi
// 008d5210  5e                   pop esi
// 008d5211  c20400               ret 4
// copied from an identical function in another client (function ??0S@ns_ROCX000003@@QAE@ABU01@@Z)

namespace ns_ROCX000003 {
class TexturePtr {
public:
    __declspec(dllimport) TexturePtr(const TexturePtr& r);
private:
    char pad0[0x10];
};

struct S
{
    float x;
    float y;
    TexturePtr texture;
    S(const S& value);
};

S::S(const S& value)
    : x(value.x), y(value.y), texture(value.texture)
{
}
}
