// from server: 100% by king_originala
// roc 2008-06 00666980  unit: RBX::HUMAN::Landed  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666980
//
// 00666980  6aff                 push -1
// 00666982  68b8c27d00           push 0x7dc2b8
// 00666987  64a100000000         mov eax, dword ptr fs:[0]
// 0066698d  50                   push eax
// 0066698e  64892500000000       mov dword ptr fs:[0], esp
// 00666995  51                   push ecx
// 00666996  d905a49b8100         fld dword ptr [0x819ba4]
// 0066699c  56                   push esi
// 0066699d  57                   push edi
// 0066699e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006669a2  83ec08               sub esp, 8
// 006669a5  d95c2404             fstp dword ptr [esp + 4]
// 006669a9  8bf1                 mov esi, ecx
// 006669ab  d9055ccc8400         fld dword ptr [0x84cc5c]
// 006669b1  89742410             mov dword ptr [esp + 0x10], esi
// 006669b5  d91c24               fstp dword ptr [esp]
// 006669b8  57                   push edi
// 006669b9  e8a27c0000           call 0x66e660
// 006669be  d9ee                 fldz 
// 006669c0  c70638cc8400         mov dword ptr [esi], 0x84cc38
// 006669c6  c7460430cc8400       mov dword ptr [esi + 4], 0x84cc30
// 006669cd  d996a8000000         fst dword ptr [esi + 0xa8]
// 006669d3  d996ac000000         fst dword ptr [esi + 0xac]
// 006669d9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006669e1  d996b0000000         fst dword ptr [esi + 0xb0]
// 006669e7  d996b4000000         fst dword ptr [esi + 0xb4]
// 006669ed  d996b8000000         fst dword ptr [esi + 0xb8]
// 006669f3  d996bc000000         fst dword ptr [esi + 0xbc]
// 006669f9  d996c0000000         fst dword ptr [esi + 0xc0]
// 006669ff  d996c4000000         fst dword ptr [esi + 0xc4]
// 00666a05  d99ec8000000         fstp dword ptr [esi + 0xc8]
// 00666a0b  85ff                 test edi, edi
// 00666a0d  7405                 je 0x666a14
// 00666a0f  8d4714               lea eax, [edi + 0x14]
// 00666a12  eb02                 jmp 0x666a16
// 00666a14  33c0                 xor eax, eax
// 00666a16  50                   push eax
// 00666a17  b904a59700           mov ecx, 0x97a504
// 00666a1c  e8ff4bf0ff           call 0x56b620
// 00666a21  85c0                 test eax, eax
// 00666a23  7413                 je 0x666a38
// 00666a25  d9ee                 fldz 
// 00666a27  51                   push ecx
// 00666a28  8d4c2420             lea ecx, [esp + 0x20]
// 00666a2c  d91c24               fstp dword ptr [esp]
// 00666a2f  51                   push ecx
// 00666a30  8d4810               lea ecx, [eax + 0x10]
// 00666a33  e8b8cde2ff           call 0x4937f0
// 00666a38  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00666a3c  5f                   pop edi
// 00666a3d  8bc6                 mov eax, esi
// 00666a3f  5e                   pop esi
// 00666a40  64890d00000000       mov dword ptr fs:[0], ecx
// 00666a47  83c410               add esp, 0x10
// 00666a4a  c20400               ret 4

extern const float initialX;
extern const float initialY;

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct GroupDragTool : Primary, Secondary {
    char pad[0x98];
    float fieldA0;
    float fieldA4;

    GroupDragTool(void* a, float x, float y);
    ~GroupDragTool();
};

struct ValueResult {
    void* value;
};

struct RunStateOwner {
    ValueResult setValue(float value);
};

struct LookupResult {
    char pad[0x10];
    RunStateOwner owner;
};

struct Lookup {
    LookupResult* find(void* object);
};

extern Lookup lookup;

struct Vector {
    float x;
    float y;
    float z;

    Vector();
};

inline Vector::Vector() : x(0.0f), y(0.0f), z(0.0f)
{
}

struct Landed : GroupDragTool {
    Vector first;
    Vector second;
    Vector third;

    Landed(void* a);
    virtual ~Landed();
};

Landed::Landed(void* a)
    : GroupDragTool(a, initialX, initialY)
{
    LookupResult* result =
        lookup.find(a ? static_cast<char*>(a) + 0x14 : 0);
    if (result)
        result->owner.setValue(0.0f);
}
