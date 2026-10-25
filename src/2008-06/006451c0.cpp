// from server: 100% by king_originala
// roc 2008-06 006451c0  unit: RBX::HUMAN::Climbing  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006451c0
//
// 006451c0  53                   push ebx
// 006451c1  55                   push ebp
// 006451c2  8bd9                 mov ebx, ecx
// 006451c4  56                   push esi
// 006451c5  8b7324               mov esi, dword ptr [ebx + 0x24]
// 006451c8  8d6b24               lea ebp, [ebx + 0x24]
// 006451cb  57                   push edi
// 006451cc  8bcd                 mov ecx, ebp
// 006451ce  c6432000             mov byte ptr [ebx + 0x20], 0
// 006451d2  e8a91ce1ff           call 0x456e80
// 006451d7  e884b7ecff           call 0x510960
// 006451dc  d900                 fld dword ptr [eax]
// 006451de  d95b2c               fstp dword ptr [ebx + 0x2c]
// 006451e1  8bcb                 mov ecx, ebx
// 006451e3  d94004               fld dword ptr [eax + 4]
// 006451e6  d95b30               fstp dword ptr [ebx + 0x30]
// 006451e9  d94008               fld dword ptr [eax + 8]
// 006451ec  d95b34               fstp dword ptr [ebx + 0x34]
// 006451ef  8b03                 mov eax, dword ptr [ebx]
// 006451f1  d9430c               fld dword ptr [ebx + 0xc]
// 006451f4  8b500c               mov edx, dword ptr [eax + 0xc]
// 006451f7  d8642414             fsub dword ptr [esp + 0x14]
// 006451fb  d95b0c               fstp dword ptr [ebx + 0xc]
// 006451fe  ffd2                 call edx
// 00645200  0fb6c0               movzx eax, al
// 00645203  50                   push eax
// 00645204  8bcb                 mov ecx, ebx
// 00645206  e815eaffff           call 0x643c20
// 0064520b  8b13                 mov edx, dword ptr [ebx]
// 0064520d  8b4210               mov eax, dword ptr [edx + 0x10]
// 00645210  8bcb                 mov ecx, ebx
// 00645212  ffd0                 call eax
// 00645214  0fb6c8               movzx ecx, al
// 00645217  51                   push ecx
// 00645218  8bcb                 mov ecx, ebx
// 0064521a  e8a1e9ffff           call 0x643bc0
// 0064521f  8b13                 mov edx, dword ptr [ebx]
// 00645221  8b4214               mov eax, dword ptr [edx + 0x14]
// 00645224  8bcb                 mov ecx, ebx
// 00645226  ffd0                 call eax
// 00645228  0fb6c8               movzx ecx, al
// 0064522b  51                   push ecx
// 0064522c  8bcb                 mov ecx, ebx
// 0064522e  e84deaffff           call 0x643c80
// 00645233  8b13                 mov edx, dword ptr [ebx]
// 00645235  8b4208               mov eax, dword ptr [edx + 8]
// 00645238  8bcb                 mov ecx, ebx
// 0064523a  ffd0                 call eax
// 0064523c  8d0cc0               lea ecx, [eax + eax*8]
// 0064523f  bf0d000000           mov edi, 0xd
// 00645244  393ccd54a98400       cmp dword ptr [ecx*8 + 0x84a954], edi
// 0064524b  7519                 jne 0x645266
// 0064524d  8b13                 mov edx, dword ptr [ebx]
// 0064524f  8b4208               mov eax, dword ptr [edx + 8]
// 00645252  8bcb                 mov ecx, ebx
// 00645254  ffd0                 call eax
// 00645256  8d0cc0               lea ecx, [eax + eax*8]
// 00645259  393ccd58a98400       cmp dword ptr [ecx*8 + 0x84a958], edi
// 00645260  0f84f5000000         je 0x64535b
// 00645266  8bcb                 mov ecx, ebx
// 00645268  e893edffff           call 0x644000
// 0064526d  8b4500               mov eax, dword ptr [ebp]
// 00645270  85c0                 test eax, eax
// 00645272  0f84e3000000         je 0x64535b
// 00645278  8b5308               mov edx, dword ptr [ebx + 8]
// 0064527b  8b8a1c020000         mov ecx, dword ptr [edx + 0x21c]
// 00645281  0528020000           add eax, 0x228
// 00645286  6a00                 push 0
// 00645288  50                   push eax
// 00645289  e88241faff           call 0x5e9410
// 0064528e  8b4500               mov eax, dword ptr [ebp]
// 00645291  3bf0                 cmp esi, eax
// 00645293  7558                 jne 0x6452ed
// 00645295  8d4340               lea eax, [ebx + 0x40]
// 00645298  8d6b70               lea ebp, [ebx + 0x70]
// 0064529b  8bf8                 mov edi, eax
// 0064529d  b909000000           mov ecx, 9
// 006452a2  8bf5                 mov esi, ebp
// 006452a4  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006452a6  d94524               fld dword ptr [ebp + 0x24]
// 006452a9  d95824               fstp dword ptr [eax + 0x24]
// 006452ac  d94528               fld dword ptr [ebp + 0x28]
// 006452af  d95828               fstp dword ptr [eax + 0x28]
// 006452b2  d9452c               fld dword ptr [ebp + 0x2c]
// 006452b5  d9582c               fstp dword ptr [eax + 0x2c]
// 006452b8  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006452bb  85c0                 test eax, eax
// 006452bd  7408                 je 0x6452c7
// 006452bf  8d8828020000         lea ecx, [eax + 0x228]
// 006452c5  eb02                 jmp 0x6452c9
// 006452c7  33c9                 xor ecx, ecx
// 006452c9  e8f22ffaff           call 0x5e82c0
// 006452ce  b909000000           mov ecx, 9
// 006452d3  8bf0                 mov esi, eax
// 006452d5  8bfd                 mov edi, ebp
// 006452d7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006452d9  d94024               fld dword ptr [eax + 0x24]
// 006452dc  d95d24               fstp dword ptr [ebp + 0x24]
// 006452df  d94028               fld dword ptr [eax + 0x28]
// 006452e2  d95d28               fstp dword ptr [ebp + 0x28]
// 006452e5  d9402c               fld dword ptr [eax + 0x2c]
// 006452e8  d95d2c               fstp dword ptr [ebp + 0x2c]
// 006452eb  eb69                 jmp 0x645356
// 006452ed  85c0                 test eax, eax
// 006452ef  7408                 je 0x6452f9
// 006452f1  8d8828020000         lea ecx, [eax + 0x228]
// 006452f7  eb02                 jmp 0x6452fb
// 006452f9  33c9                 xor ecx, ecx
// 006452fb  e8c02ffaff           call 0x5e82c0
// 00645300  8d5340               lea edx, [ebx + 0x40]
// 00645303  b909000000           mov ecx, 9
// 00645308  8bf0                 mov esi, eax
// 0064530a  8bfa                 mov edi, edx
// 0064530c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0064530e  d94024               fld dword ptr [eax + 0x24]
// 00645311  d95a24               fstp dword ptr [edx + 0x24]
// 00645314  d94028               fld dword ptr [eax + 0x28]
// 00645317  d95a28               fstp dword ptr [edx + 0x28]
// 0064531a  d9402c               fld dword ptr [eax + 0x2c]
// 0064531d  d95a2c               fstp dword ptr [edx + 0x2c]
// 00645320  8b6d00               mov ebp, dword ptr [ebp]
// 00645323  85ed                 test ebp, ebp
// 00645325  7408                 je 0x64532f
// 00645327  8d8d28020000         lea ecx, [ebp + 0x228]
// 0064532d  eb02                 jmp 0x645331
// 0064532f  33c9                 xor ecx, ecx
// 00645331  e88a2ffaff           call 0x5e82c0
// 00645336  8d5370               lea edx, [ebx + 0x70]
// 00645339  b909000000           mov ecx, 9
// 0064533e  8bf0                 mov esi, eax
// 00645340  8bfa                 mov edi, edx
// 00645342  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00645344  d94024               fld dword ptr [eax + 0x24]
// 00645347  d95a24               fstp dword ptr [edx + 0x24]
// 0064534a  d94028               fld dword ptr [eax + 0x28]
// 0064534d  d95a28               fstp dword ptr [edx + 0x28]
// 00645350  d9402c               fld dword ptr [eax + 0x2c]
// 00645353  d95a2c               fstp dword ptr [edx + 0x2c]
// 00645356  bf0d000000           mov edi, 0xd
// 0064535b  8b03                 mov eax, dword ptr [ebx]
// 0064535d  8b5008               mov edx, dword ptr [eax + 8]
// 00645360  8bcb                 mov ecx, ebx
// 00645362  ffd2                 call edx
// 00645364  8d04c0               lea eax, [eax + eax*8]
// 00645367  393cc54ca98400       cmp dword ptr [eax*8 + 0x84a94c], edi
// 0064536e  7515                 jne 0x645385
// 00645370  8b13                 mov edx, dword ptr [ebx]
// 00645372  8b4208               mov eax, dword ptr [edx + 8]
// 00645375  8bcb                 mov ecx, ebx
// 00645377  ffd0                 call eax
// 00645379  8d0cc0               lea ecx, [eax + eax*8]
// 0064537c  393ccd50a98400       cmp dword ptr [ecx*8 + 0x84a950], edi
// 00645383  740c                 je 0x645391
// 00645385  6a00                 push 0
// 00645387  8bcb                 mov ecx, ebx
// 00645389  e8f2f8ffff           call 0x644c80
// 0064538e  884320               mov byte ptr [ebx + 0x20], al
// 00645391  5f                   pop edi
// 00645392  5e                   pop esi
// 00645393  5d                   pop ebp
// 00645394  5b                   pop ebx
// 00645395  c20400               ret 4

struct Vector3 {
    float x, y, z;
    Vector3& operator=(const Vector3&);
};

inline Vector3& Vector3::operator=(const Vector3& other)
{
    x = other.x;
    y = other.y;
    z = other.z;
    return *this;
}

struct Matrix3 {
    float values[9];
};

struct Transform {
    Matrix3 rotation;
    Vector3 translation;
    Transform& operator=(const Transform&);
};

inline Transform& Transform::operator=(const Transform& other)
{
    rotation = other.rotation;
    translation.x = other.translation.x;
    translation.y = other.translation.y;
    translation.z = other.translation.z;
    return *this;
}

struct Primitive {
    const Vector3& getValue();
};

struct Part {
    char padding[0x228];
    Primitive primitive;
};

struct PartReference {
    Part* pointer;
    void* control;
    void reset();
};

struct Controller {
    void setPrimitive(Primitive*, int);
};

struct Owner {
    char padding[0x21c];
    Controller* controller;
};

struct StateColumn {
    int value;
    char padding[68];
};

extern StateColumn stateFirst[];
extern StateColumn stateSecond[];
extern StateColumn stateThird[];
extern StateColumn stateFourth[];
extern const Vector3& __cdecl zeroVector();

struct Climbing {
    virtual void slot0();
    virtual void slot1();
    virtual int state();
    virtual bool firstFlag();
    virtual bool secondFlag();
    virtual bool thirdFlag();

    int reserved;
    Owner* owner;
    float remaining;
    char padding10[0x10];
    bool active;
    char padding21[3];
    PartReference part;
    Vector3 velocity;
    char padding38[8];
    Transform previous;
    Transform current;

    void update(float);
    void setFirst(bool);
    void setSecond(bool);
    void setThird(bool);
    void refreshPart();
    bool check(int);
};

void Climbing::update(float dt)
{
    Part* oldPart = part.pointer;
    active = false;
    part.reset();

    velocity = zeroVector();

    remaining -= dt;
    setFirst(firstFlag());
    setSecond(secondFlag());
    setThird(thirdFlag());

    if (stateThird[state()].value != 13 ||
        stateFourth[state()].value != 13) {
        refreshPart();
        if (part.pointer) {
            Primitive* selected =
                part.pointer ? &part.pointer->primitive : 0;
            owner->controller->setPrimitive(selected, 0);
            if (oldPart == part.pointer) {
                previous = current;
                Primitive* primitive =
                    part.pointer ? &part.pointer->primitive : 0;
                current = reinterpret_cast<const Transform&>(
                    primitive->getValue());
            } else {
                Primitive* primitive =
                    part.pointer ? &part.pointer->primitive : 0;
                previous = reinterpret_cast<const Transform&>(
                    primitive->getValue());
                primitive = part.pointer ? &part.pointer->primitive : 0;
                current = reinterpret_cast<const Transform&>(
                    primitive->getValue());
            }
        }
    }

    if (stateFirst[state()].value != 13 ||
        stateSecond[state()].value != 13)
        active = check(0);
}
