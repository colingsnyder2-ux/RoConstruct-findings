// from server: 100% by king_originala
// roc 2008-06 0059ddc0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ddc0
//
// 0059ddc0  8b442404             mov eax, dword ptr [esp + 4]
// 0059ddc4  56                   push esi
// 0059ddc5  8bf1                 mov esi, ecx
// 0059ddc7  3a86d1020000         cmp al, byte ptr [esi + 0x2d1]
// 0059ddcd  7418                 je 0x59dde7
// 0059ddcf  50                   push eax
// 0059ddd0  8d8e28020000         lea ecx, [esi + 0x228]
// 0059ddd6  e8f5a20400           call 0x5e80d0
// 0059dddb  68e45f9700           push 0x975fe4
// 0059dde0  8bce                 mov ecx, esi
// 0059dde2  e819fde6ff           call 0x40db00
// 0059dde7  5e                   pop esi
// 0059dde8  c20400               ret 4

extern char descriptor;

struct Property {
    char storage[0xA9];
    void set(bool value);
};

struct S {
    char padding[0x228];
    Property property;
    bool value;

    void notify(const void* descriptor);
    void setValue(bool newValue);
};

void S::setValue(bool newValue)
{
    if (newValue != value) {
        property.set(newValue);
        notify(&descriptor);
    }
}
