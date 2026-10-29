// roc 2011-06 00937b00  unit: Ogre::VertexStreamer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00937b00
//
// 00937b00  8b442404             mov eax, dword ptr [esp + 4]
// 00937b04  d900                 fld dword ptr [eax]
// 00937b06  56                   push esi
// 00937b07  8bf1                 mov esi, ecx
// 00937b09  d91e                 fstp dword ptr [esi]
// 00937b0b  83c008               add eax, 8
// 00937b0e  d940fc               fld dword ptr [eax - 4]
// 00937b11  50                   push eax
// 00937b12  8d4e08               lea ecx, [esi + 8]
// 00937b15  d95e04               fstp dword ptr [esi + 4]
// 00937b18  ff152c17a400         call dword ptr [0xa4172c]
// 00937b1e  8bc6                 mov eax, esi
// 00937b20  5e                   pop esi
// 00937b21  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@ABU0@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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