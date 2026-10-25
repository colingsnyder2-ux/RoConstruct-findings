// from server: 100% by king_originala
// roc 2008-06 0059ddf0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ddf0
//
// 0059ddf0  8a442404             mov al, byte ptr [esp + 4]
// 0059ddf4  3a81f0010000         cmp al, byte ptr [ecx + 0x1f0]
// 0059ddfa  7413                 je 0x59de0f
// 0059ddfc  8881f0010000         mov byte ptr [ecx + 0x1f0], al
// 0059de02  c7442404cc609700     mov dword ptr [esp + 4], 0x9760cc
// 0059de0a  e9f1fce6ff           jmp 0x40db00
// 0059de0f  c20400               ret 4

struct PropertyDescriptor;
extern PropertyDescriptor property;

struct Settings {
    char padding[0x1f0];
    bool value;

    void raisePropertyChanged(const PropertyDescriptor&);
    void setValue(bool);
};

void Settings::setValue(bool newValue)
{
    if (newValue != value) {
        value = newValue;
        raisePropertyChanged(property);
    }
}
