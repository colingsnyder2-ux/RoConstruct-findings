// from server: 100% by colin
// roc 2008-06 0059dee0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059dee0
//
// 0059dee0  d98128030000         fld dword ptr [ecx + 0x328]
// 0059dee6  d9442404             fld dword ptr [esp + 4]
// 0059deea  dde1                 fucom st(1)
// 0059deec  dfe0                 fnstsw ax
// 0059deee  ddd9                 fstp st(1)
// 0059def0  f6c444               test ah, 0x44
// 0059def3  7b13                 jnp 0x59df08
// 0059def5  d99928030000         fstp dword ptr [ecx + 0x328]
// 0059defb  c744240428619700     mov dword ptr [esp + 4], 0x976128
// 0059df03  e9f8fbe6ff           jmp 0x40db00
// 0059df08  ddd8                 fstp st(0)
// 0059df0a  c20400               ret 4

// from server: 91% (rbxgs-dll PartInstance.cpp, wrong member offset)
// Manually recovered: PartInstance float setter with member at 0x328 and the
// raisePropertyChanged tail call. Standalone codegen analog.
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
struct PropertyDescriptor;

struct PartInstance
{
    char padding[0x328];
    float renderImportance;
    void setRenderImportance(float value);
    void raisePropertyChanged(const PropertyDescriptor&);
};

extern const PropertyDescriptor prop_RenderImportance;

void PartInstance::setRenderImportance(float value)
{
    if (value != renderImportance)
    {
        renderImportance = value;
        raisePropertyChanged(prop_RenderImportance);
    }
}
