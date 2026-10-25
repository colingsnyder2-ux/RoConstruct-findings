// from server: 100% by colin
// roc 2008-06 0059dd50  unit: VCRenderSettings::?$EnumPropDescriptor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059dd50
//
// 0059dd50  d98124020000         fld dword ptr [ecx + 0x224]
// 0059dd56  d9442404             fld dword ptr [esp + 4]
// 0059dd5a  dde1                 fucom st(1)
// 0059dd5c  dfe0                 fnstsw ax
// 0059dd5e  ddd9                 fstp st(1)
// 0059dd60  f6c444               test ah, 0x44
// 0059dd63  7b13                 jnp 0x59dd78
// 0059dd65  d99924020000         fstp dword ptr [ecx + 0x224]
// 0059dd6b  c74424046c629700     mov dword ptr [esp + 4], 0x97626c
// 0059dd73  e988fde6ff           jmp 0x40db00
// 0059dd78  ddd8                 fstp st(0)
// 0059dd7a  c20400               ret 4

// Manually recovered PartInstance float setter (member at 0x224); was 91% via rbxgs-dll PartInstance.cpp.`n// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
struct PropertyDescriptor;

struct PartInstance
{
    char padding[0x224];
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
