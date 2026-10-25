// from server: 100% by king_originala
// roc 2008-06 00638c90  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638c90
//
// 00638c90  56                   push esi
// 00638c91  8d44244c             lea eax, [esp + 0x4c]
// 00638c95  50                   push eax
// 00638c96  8d4c2410             lea ecx, [esp + 0x10]
// 00638c9a  e8b123ddff           call 0x40b050
// 00638c9f  84c0                 test al, al
// 00638ca1  0f8584000000         jne 0x638d2b
// 00638ca7  8b3590288000         mov esi, dword ptr [0x802890]
// 00638cad  8d4900               lea ecx, [ecx]
// 00638cb0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00638cb4  803900               cmp byte ptr [ecx], 0
// 00638cb7  7557                 jne 0x638d10
// 00638cb9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00638cbd  85c0                 test eax, eax
// 00638cbf  750a                 jne 0x638ccb
// 00638cc1  ffd6                 call esi
// 00638cc3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00638cc7  85c0                 test eax, eax
// 00638cc9  7404                 je 0x638ccf
// 00638ccb  8b00                 mov eax, dword ptr [eax]
// 00638ccd  eb02                 jmp 0x638cd1
// 00638ccf  33c0                 xor eax, eax
// 00638cd1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638cd5  3b5014               cmp edx, dword ptr [eax + 0x14]
// 00638cd8  7502                 jne 0x638cdc
// 00638cda  ffd6                 call esi
// 00638cdc  8b442420             mov eax, dword ptr [esp + 0x20]
// 00638ce0  8b542444             mov edx, dword ptr [esp + 0x44]
// 00638ce4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00638ce7  d902                 fld dword ptr [edx]
// 00638ce9  83ec0c               sub esp, 0xc
// 00638cec  8bc4                 mov eax, esp
// 00638cee  d918                 fstp dword ptr [eax]
// 00638cf0  83c108               add ecx, 8
// 00638cf3  d94204               fld dword ptr [edx + 4]
// 00638cf6  d95804               fstp dword ptr [eax + 4]
// 00638cf9  d94208               fld dword ptr [edx + 8]
// 00638cfc  d95808               fstp dword ptr [eax + 8]
// 00638cff  e82ca9ffff           call 0x633630
// 00638d04  8b442448             mov eax, dword ptr [esp + 0x48]
// 00638d08  803800               cmp byte ptr [eax], 0
// 00638d0b  7503                 jne 0x638d10
// 00638d0d  c60001               mov byte ptr [eax], 1
// 00638d10  8d4c240c             lea ecx, [esp + 0xc]
// 00638d14  e8b711e6ff           call 0x499ed0
// 00638d19  8d4c244c             lea ecx, [esp + 0x4c]
// 00638d1d  51                   push ecx
// 00638d1e  8d4c2410             lea ecx, [esp + 0x10]
// 00638d22  e82923ddff           call 0x40b050
// 00638d27  84c0                 test al, al
// 00638d29  7485                 je 0x638cb0
// 00638d2b  8b442408             mov eax, dword ptr [esp + 8]
// 00638d2f  5e                   pop esi
// 00638d30  c28400               ret 0x84

struct Vector {
    float x, y, z;
    Vector(const Vector& other);
};

__forceinline Vector::Vector(const Vector& other)
    : x(other.x), y(other.y), z(other.z)
{
}

struct Receiver {
    void set(Vector value);
};

struct Value {
    char padding[8];
    Receiver receiver;
};

struct Node {
    char padding[24];
    Value* value;
};

struct Owner {
    char padding[20];
    Node* end;
};

struct Iterator {
    char padding0[16];
    Owner** owner;
    Node* node;
    char padding1[32];
    Vector* vector;
    unsigned char* flag;

    bool equal(const Iterator& other);
    void next();
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();

void* __stdcall process(void* result, Iterator first, Iterator last)
{
    if (!first.equal(last)) {
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        do {
            if (!*first.flag) {
                if (!first.owner)
                    invalid();

                Owner* owner = first.owner ? *first.owner : 0;
                if (first.node == owner->end)
                    invalid();

                Receiver* receiver = &first.node->value->receiver;
                receiver->set(*first.vector);
                if (!*first.flag)
                    *first.flag = 1;
            }
            first.next();
        } while (!first.equal(last));
    }
    return result;
}
