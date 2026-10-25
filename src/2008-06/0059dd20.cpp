// from server: 100% by king_originala
// roc 2008-06 0059dd20  unit: VCRenderSettings::?$EnumPropDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059dd20
//
// 0059dd20  8b442404             mov eax, dword ptr [esp + 4]
// 0059dd24  56                   push esi
// 0059dd25  8bf1                 mov esi, ecx
// 0059dd27  3a86d0020000         cmp al, byte ptr [esi + 0x2d0]
// 0059dd2d  7418                 je 0x59dd47
// 0059dd2f  50                   push eax
// 0059dd30  8d8e28020000         lea ecx, [esi + 0x228]
// 0059dd36  e815a30400           call 0x5e8050
// 0059dd3b  68c85f9700           push 0x975fc8
// 0059dd40  8bce                 mov ecx, esi
// 0059dd42  e8b9fde6ff           call 0x40db00
// 0059dd47  5e                   pop esi
// 0059dd48  c20400               ret 4

extern char descriptor;

struct Property {
    char storage[0xA8];
    void enable(bool value);
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
        property.enable(newValue);
        notify(&descriptor);
    }
}
