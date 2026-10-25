// from server: 100% by king_originala
// roc 2008-06 0059df40  unit: VCRenderSettings::?$EnumPropDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059df40
//
// 0059df40  8b442404             mov eax, dword ptr [esp + 4]
// 0059df44  56                   push esi
// 0059df45  8bf1                 mov esi, ecx
// 0059df47  3b86e4010000         cmp eax, dword ptr [esi + 0x1e4]
// 0059df4d  741c                 je 0x59df6b
// 0059df4f  68d0629700           push 0x9762d0
// 0059df54  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0059df5a  e8a1fbe6ff           call 0x40db00
// 0059df5f  680c619700           push 0x97610c
// 0059df64  8bce                 mov ecx, esi
// 0059df66  e895fbe6ff           call 0x40db00
// 0059df6b  5e                   pop esi
// 0059df6c  c20400               ret 4

extern unsigned char propertyA;
extern unsigned char propertyB;

struct Settings {
    unsigned char padding[0x1e4];
    int value;

    void notify(void*);
    void setValue(int);
};

void Settings::setValue(int v)
{
    if (v != value) {
        value = v;
        notify(&propertyA);
        notify(&propertyB);
    }
}
