// from server: 100% by king_originala
// roc 2008-06 005c3ab0  unit: RBX::VObjectValue::?$FactoryProduct  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3ab0
//
// 005c3ab0  6aff                 push -1
// 005c3ab2  688f487d00           push 0x7d488f
// 005c3ab7  64a100000000         mov eax, dword ptr fs:[0]
// 005c3abd  50                   push eax
// 005c3abe  64892500000000       mov dword ptr fs:[0], esp
// 005c3ac5  83ec20               sub esp, 0x20
// 005c3ac8  56                   push esi
// 005c3ac9  8bf1                 mov esi, ecx
// 005c3acb  89742404             mov dword ptr [esp + 4], esi
// 005c3acf  e88cfeffff           call 0x5c3960
// 005c3ad4  33c0                 xor eax, eax
// 005c3ad6  c706048c8300         mov dword ptr [esi], 0x838c04
// 005c3adc  c74610f88b8300       mov dword ptr [esi + 0x10], 0x838bf8
// 005c3ae3  c74614f08b8300       mov dword ptr [esi + 0x14], 0x838bf0
// 005c3aea  c74620e88b8300       mov dword ptr [esi + 0x20], 0x838be8
// 005c3af1  c74624d88b8300       mov dword ptr [esi + 0x24], 0x838bd8
// 005c3af8  c74644c88b8300       mov dword ptr [esi + 0x44], 0x838bc8
// 005c3aff  c74664b88b8300       mov dword ptr [esi + 0x64], 0x838bb8
// 005c3b06  c78684000000a88b8300 mov dword ptr [esi + 0x84], 0x838ba8
// 005c3b10  c786a4000000988b8300 mov dword ptr [esi + 0xa4], 0x838b98
// 005c3b1a  c786c4000000888b8300 mov dword ptr [esi + 0xc4], 0x838b88
// 005c3b24  898630010000         mov dword ptr [esi + 0x130], eax
// 005c3b2a  8944242c             mov dword ptr [esp + 0x2c], eax
// 005c3b2e  898634010000         mov dword ptr [esi + 0x134], eax
// 005c3b34  6878848100           push 0x818478
// 005c3b39  8d4c240c             lea ecx, [esp + 0xc]
// 005c3b3d  c644243001           mov byte ptr [esp + 0x30], 1
// 005c3b42  ff1558248000         call dword ptr [0x802458]
// 005c3b48  8d442408             lea eax, [esp + 8]
// 005c3b4c  50                   push eax
// 005c3b4d  8bce                 mov ecx, esi
// 005c3b4f  c644243002           mov byte ptr [esp + 0x30], 2
// 005c3b54  e83774f9ff           call 0x55af90
// 005c3b59  8d4c2408             lea ecx, [esp + 8]
// 005c3b5d  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005c3b62  ff1568248000         call dword ptr [0x802468]
// 005c3b68  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005c3b6c  8bc6                 mov eax, esi
// 005c3b6e  5e                   pop esi
// 005c3b6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3b76  83c42c               add esp, 0x2c
// 005c3b79  c3                   ret 

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

__forceinline String::String(const char* text) {
    stringConstruct(this, text);
}

__forceinline String::~String() {
    stringDestroy(this);
}

struct Base {
    unsigned long storage[0x130 / 4];
    Base();
    ~Base();
};

struct ObjectBase : Base {
    void* object;
    ObjectBase();
    ~ObjectBase();
};

__forceinline ObjectBase::ObjectBase() {
    storage[0x00 / 4] = 0x00838c04;
    storage[0x10 / 4] = 0x00838bf8;
    storage[0x14 / 4] = 0x00838bf0;
    storage[0x20 / 4] = 0x00838be8;
    storage[0x24 / 4] = 0x00838bd8;
    storage[0x44 / 4] = 0x00838bc8;
    storage[0x64 / 4] = 0x00838bb8;
    storage[0x84 / 4] = 0x00838ba8;
    storage[0xa4 / 4] = 0x00838b98;
    storage[0xc4 / 4] = 0x00838b88;
    object = 0;
}

struct Control {
    void* pointer;
    Control();
    ~Control();
};

__forceinline Control::Control() {
    pointer = 0;
}

struct S : ObjectBase {
    Control control;
    S();
    void setValue(const String&);
};

S::S() {
    setValue(String("Value"));
}
