// from server: 100% by king_originala
// roc 2008-06 00613fb0  unit: RBX::RevoluteLink  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613fb0
//
// 00613fb0  53                   push ebx
// 00613fb1  8bd9                 mov ebx, ecx
// 00613fb3  837b1400             cmp dword ptr [ebx + 0x14], 0
// 00613fb7  757c                 jne 0x614035
// 00613fb9  8b542408             mov edx, dword ptr [esp + 8]
// 00613fbd  8d8394000000         lea eax, [ebx + 0x94]
// 00613fc3  56                   push esi
// 00613fc4  57                   push edi
// 00613fc5  8bf8                 mov edi, eax
// 00613fc7  b909000000           mov ecx, 9
// 00613fcc  8bf2                 mov esi, edx
// 00613fce  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00613fd0  d94224               fld dword ptr [edx + 0x24]
// 00613fd3  d95824               fstp dword ptr [eax + 0x24]
// 00613fd6  d94228               fld dword ptr [edx + 0x28]
// 00613fd9  d95828               fstp dword ptr [eax + 0x28]
// 00613fdc  d9422c               fld dword ptr [edx + 0x2c]
// 00613fdf  d9582c               fstp dword ptr [eax + 0x2c]
// 00613fe2  d94230               fld dword ptr [edx + 0x30]
// 00613fe5  d95830               fstp dword ptr [eax + 0x30]
// 00613fe8  d94234               fld dword ptr [edx + 0x34]
// 00613feb  d95834               fstp dword ptr [eax + 0x34]
// 00613fee  d94238               fld dword ptr [edx + 0x38]
// 00613ff1  d95838               fstp dword ptr [eax + 0x38]
// 00613ff4  5f                   pop edi
// 00613ff5  d9423c               fld dword ptr [edx + 0x3c]
// 00613ff8  5e                   pop esi
// 00613ff9  d9583c               fstp dword ptr [eax + 0x3c]
// 00613ffc  d94240               fld dword ptr [edx + 0x40]
// 00613fff  d95840               fstp dword ptr [eax + 0x40]
// 00614002  d94244               fld dword ptr [edx + 0x44]
// 00614005  d95844               fstp dword ptr [eax + 0x44]
// 00614008  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 0061400b  85c0                 test eax, eax
// 0061400d  7404                 je 0x614013
// 0061400f  c6400801             mov byte ptr [eax + 8], 1
// 00614013  a198a89500           mov eax, dword ptr [0x95a898]
// 00614018  40                   inc eax
// 00614019  a398a89500           mov dword ptr [0x95a898], eax
// 0061401e  3dffffff7f           cmp eax, 0x7fffffff
// 00614023  750a                 jne 0x61402f
// 00614025  b801000000           mov eax, 1
// 0061402a  a398a89500           mov dword ptr [0x95a898], eax
// 0061402f  898390000000         mov dword ptr [ebx + 0x90], eax
// 00614035  5b                   pop ebx
// 00614036  c20400               ret 4

struct Matrix {
    float values[9];
};

struct Vector {
    float x, y, z;
};

struct State {
    Matrix matrix;
    Vector position;
    Vector linearVelocity;
    Vector angularVelocity;

    State& operator=(const State& value);
};

inline State& State::operator=(const State& value)
{
    matrix = value.matrix;
    position.x = value.position.x;
    position.y = value.position.y;
    position.z = value.position.z;
    linearVelocity.x = value.linearVelocity.x;
    linearVelocity.y = value.linearVelocity.y;
    linearVelocity.z = value.linearVelocity.z;
    angularVelocity.x = value.angularVelocity.x;
    angularVelocity.y = value.angularVelocity.y;
    angularVelocity.z = value.angularVelocity.z;
    return *this;
}

struct DirtyFlag {
    char padding[8];
    unsigned char dirty;
};

extern int sequence;

struct Link {
    char padding0[0x14];
    int locked;
    char padding1[0x14];
    DirtyFlag* flag;
    char padding2[0x60];
    int stamp;
    State state;

    void setState(const State& value);
};

void Link::setState(const State& value)
{
    if (locked == 0) {
        state = value;
        if (flag)
            flag->dirty = 1;
        if (++sequence == 0x7fffffff)
            sequence = 1;
        stamp = sequence;
    }
}
