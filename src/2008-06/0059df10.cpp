// from server: 100% by colin
// roc 2008-06 0059df10  unit: VCRenderSettings::?$EnumPropDescriptor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059df10
//
// 0059df10  d981ec010000         fld dword ptr [ecx + 0x1ec]
// 0059df16  d9442404             fld dword ptr [esp + 4]
// 0059df1a  dde1                 fucom st(1)
// 0059df1c  dfe0                 fnstsw ax
// 0059df1e  ddd9                 fstp st(1)
// 0059df20  f6c444               test ah, 0x44
// 0059df23  7b13                 jnp 0x59df38
// 0059df25  d999ec010000         fstp dword ptr [ecx + 0x1ec]
// 0059df2b  c74424041c609700     mov dword ptr [esp + 4], 0x97601c
// 0059df33  e9c8fbe6ff           jmp 0x40db00
// 0059df38  ddd8                 fstp st(0)
// 0059df3a  c20400               ret 4

// from server: 95% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast

namespace RBX {
namespace Reflection { class PropertyDescriptor; }
class Instance {
public:
    void raisePropertyChanged(const Reflection::PropertyDescriptor& descriptor);
};
class PartInstance : public Instance {
    char padding[0x1ec];
    float renderImportance;
public:
    static const Reflection::PropertyDescriptor prop_RenderImportance;
    float getRenderImportance() const { return renderImportance; }
    void setRenderImportance(float value);
};
void PartInstance::setRenderImportance(float value)
{
    if (value != getRenderImportance())
    {
        renderImportance = value;
        raisePropertyChanged(prop_RenderImportance);
    }
}
}
