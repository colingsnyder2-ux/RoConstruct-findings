// from server: 100% by king_originala
// roc 2008-06 005ffb70  unit: RBX::Tool  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ffb70
//
// 005ffb70  51                   push ecx
// 005ffb71  53                   push ebx
// 005ffb72  55                   push ebp
// 005ffb73  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005ffb77  8d99cc010000         lea ebx, [ecx + 0x1cc]
// 005ffb7d  894c2408             mov dword ptr [esp + 8], ecx
// 005ffb81  53                   push ebx
// 005ffb82  8bcd                 mov ecx, ebp
// 005ffb84  e8576ae7ff           call 0x4765e0
// 005ffb89  84c0                 test al, al
// 005ffb8b  7463                 je 0x5ffbf0
// 005ffb8d  56                   push esi
// 005ffb8e  57                   push edi
// 005ffb8f  b909000000           mov ecx, 9
// 005ffb94  8bf5                 mov esi, ebp
// 005ffb96  8bfb                 mov edi, ebx
// 005ffb98  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ffb9a  d94524               fld dword ptr [ebp + 0x24]
// 005ffb9d  d95b24               fstp dword ptr [ebx + 0x24]
// 005ffba0  d94528               fld dword ptr [ebp + 0x28]
// 005ffba3  d95b28               fstp dword ptr [ebx + 0x28]
// 005ffba6  d9452c               fld dword ptr [ebp + 0x2c]
// 005ffba9  d95b2c               fstp dword ptr [ebx + 0x2c]
// 005ffbac  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ffbb0  56                   push esi
// 005ffbb1  e89a22e9ff           call 0x491e50
// 005ffbb6  83c404               add esp, 4
// 005ffbb9  85c0                 test eax, eax
// 005ffbbb  7415                 je 0x5ffbd2
// 005ffbbd  c644241800           mov byte ptr [esp + 0x18], 0
// 005ffbc2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ffbc6  51                   push ecx
// 005ffbc7  8d8844030000         lea ecx, [eax + 0x344]
// 005ffbcd  e86e6df7ff           call 0x576940
// 005ffbd2  68a8b79700           push 0x97b7a8
// 005ffbd7  8bce                 mov ecx, esi
// 005ffbd9  e822dfe0ff           call 0x40db00
// 005ffbde  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 005ffbe4  5f                   pop edi
// 005ffbe5  5e                   pop esi
// 005ffbe6  85c9                 test ecx, ecx
// 005ffbe8  7406                 je 0x5ffbf0
// 005ffbea  53                   push ebx
// 005ffbeb  e8d048feff           call 0x5e44c0
// 005ffbf0  5d                   pop ebp
// 005ffbf1  5b                   pop ebx
// 005ffbf2  59                   pop ecx
// 005ffbf3  c20400               ret 4

struct Matrix {
    float data[9];
};

struct Frame {
    Matrix rotation;
    float x, y, z;
    bool different(const Frame& other) const;
};

struct Receiver {
    void update(const Frame& value);
};

struct Boolean {
    bool value;
};

struct Event {
    void notify(Boolean value);
};

namespace RBX {
    struct Instance;
    struct ServiceProvider {
        char padding[0x344];
        Event event;
    };
}

extern RBX::ServiceProvider* func_00491e50(RBX::Instance*);
extern char property_0097b7a8;

struct Tool {
    char padding0[0x1a4];
    Receiver* receiver;
    char padding1[0x24];
    Frame frame;

    void propertyChanged(const void* property);
    void func_005ffb70(const Frame& value);
};

void Tool::func_005ffb70(const Frame& value)
{
    Frame& destination = frame;
    if (value.different(destination)) {
        destination.rotation = value.rotation;
        destination.x = value.x;
        destination.y = value.y;
        destination.z = value.z;

        RBX::ServiceProvider* provider =
            func_00491e50(reinterpret_cast<RBX::Instance*>(this));
        if (provider) {
            Boolean flag;
            flag.value = false;
            provider->event.notify(flag);
        }

        propertyChanged(&property_0097b7a8);
        if (receiver)
            receiver->update(destination);
    }
}
