// from server: 78% by colin
// from server: 76% by king_originala
// roc 2008-06 005be480  unit: RBX::Soundscape::SoundService  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005be480
//
// 005be480  6aff                 push -1
// 005be482  68c63e7d00           push 0x7d3ec6
// 005be487  64a100000000         mov eax, dword ptr fs:[0]
// 005be48d  50                   push eax
// 005be48e  64892500000000       mov dword ptr fs:[0], esp
// 005be495  81eca4000000         sub esp, 0xa4
// 005be49b  6a01                 push 1
// 005be49d  6a03                 push 3
// 005be49f  8d4c2424             lea ecx, [esp + 0x24]
// 005be4a3  ff1528248000         call dword ptr [0x802428]
// 005be4a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005be4ad  8b4004               mov eax, dword ptr [eax + 4]
// 005be4b0  8364042cfe           and dword ptr [esp + eax + 0x2c], 0xfffffffe
// 005be4b5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005be4b9  8d44041c             lea eax, [esp + eax + 0x1c]
// 005be4bd  8b4104               mov eax, dword ptr [ecx + 4]
// 005be4c0  8d44041c             lea eax, [esp + eax + 0x1c]
// 005be4c4  c7401407000000       mov dword ptr [eax + 0x14], 7
// 005be4cb  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 005be4d2  52                   push edx
// 005be4d3  8d442428             lea eax, [esp + 0x28]
// 005be4d7  50                   push eax
// 005be4d8  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 005be4e3  ff1584238000         call dword ptr [0x802384]
// 005be4e9  8b08                 mov ecx, dword ptr [eax]
// 005be4eb  8b5104               mov edx, dword ptr [ecx + 4]
// 005be4ee  8b440208             mov eax, dword ptr [edx + eax + 8]
// 005be4f2  83c408               add esp, 8
// 005be4f5  a806                 test al, 6
// 005be4f7  7569                 jne 0x5be562
// 005be4f9  8d442404             lea eax, [esp + 4]
// 005be4fd  50                   push eax
// 005be4fe  8d4c2420             lea ecx, [esp + 0x20]
// 005be502  ff1518258000         call dword ptr [0x802518]
// 005be508  8b08                 mov ecx, dword ptr [eax]
// 005be50a  8b4904               mov ecx, dword ptr [ecx + 4]
// 005be50d  8b540108             mov edx, dword ptr [ecx + eax + 8]
// 005be511  03c8                 add ecx, eax
// 005be513  80e206               and dl, 6
// 005be516  0fbec2               movsx eax, dl
// 005be519  f7d8                 neg eax
// 005be51b  1bc0                 sbb eax, eax
// 005be51d  f7d0                 not eax
// 005be51f  85c1                 test ecx, eax
// 005be521  743f                 je 0x5be562
// 005be523  8d4c241c             lea ecx, [esp + 0x1c]
// 005be527  ff1510258000         call dword ptr [0x802510]
// 005be52d  83f8ff               cmp eax, -1
// 005be530  7530                 jne 0x5be562
// 005be532  d9442404             fld dword ptr [esp + 4]
// 005be536  8d4c241c             lea ecx, [esp + 0x1c]
// 005be53a  d91c24               fstp dword ptr [esp]
// 005be53d  898424ac000000       mov dword ptr [esp + 0xac], eax
// 005be544  ff152c248000         call dword ptr [0x80242c]
// 005be54a  d90424               fld dword ptr [esp]
// 005be54d  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 005be554  64890d00000000       mov dword ptr fs:[0], ecx
// 005be55b  81c4b0000000         add esp, 0xb0
// 005be561  c3                   ret 
// 005be562  6834ba8000           push 0x80ba34
// 005be567  8d4c240c             lea ecx, [esp + 0xc]
// 005be56b  ff1564288000         call dword ptr [0x802864]
// 005be571  c744240824728200     mov dword ptr [esp + 8], 0x827224
// 005be579  c7442414f8be9200     mov dword ptr [esp + 0x14], 0x92bef8
// 005be581  c7442418dcbe9200     mov dword ptr [esp + 0x18], 0x92bedc
// 005be589  8d4c2408             lea ecx, [esp + 8]
// 005be58d  51                   push ecx
// 005be58e  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 005be596  e8f532f4ff           call 0x501890

struct Stream;
struct Exception;

typedef void (__thiscall *StreamConstructor)(Stream*, int, int);
typedef void (__thiscall *StreamDestructor)(Stream*);
typedef Stream* (__thiscall *ReadFloat)(Stream*, float&);
typedef int (__thiscall *ReadCharacter)(Stream*);
typedef void* (__cdecl *WriteString)(void*, const void*);
typedef void (__thiscall *BadCastConstructor)(Exception*, const char*);

extern StreamConstructor streamConstructor;
extern StreamDestructor streamDestructor;
extern ReadFloat readFloat;
extern ReadCharacter readCharacter;
extern WriteString writeString;
extern BadCastConstructor badCastConstructor;

extern unsigned char lexicalCastVtable;
extern unsigned char stringTypeInfo;
extern unsigned char floatTypeInfo;

struct Stream {
    unsigned char storage[136];

    Stream(int mode);
    __declspec(dllimport) ~Stream() throw();
    unsigned char* base();
    operator void*();
};

struct Exception {
    void* vtable;
    unsigned long base[2];
    const void* sourceType;
    const void* targetType;

    Exception(const char* message);
    ~Exception();
};

extern __declspec(noreturn) void __cdecl raiseLexicalCast(Exception*);

inline Stream::Stream(int mode)
{
    streamConstructor(this, mode, 1);
}

inline unsigned char* Stream::base()
{
    return storage + *reinterpret_cast<int*>(
        *reinterpret_cast<unsigned char**>(storage) + 4);
}

inline Stream::operator void*()
{
    unsigned char* p = base();
    return (*reinterpret_cast<unsigned long*>(p + 8) & 6) ? 0 : p;
}

inline Exception::Exception(const char* message)
{
    badCastConstructor(this, message);
}

float func_005be480(const void* value)
{
    Stream stream(3);
    *reinterpret_cast<unsigned long*>(stream.base() + 16) &= ~1UL;
    *reinterpret_cast<int*>(stream.base() + 20) = 7;

    unsigned char* output = static_cast<unsigned char*>(
        writeString(stream.storage + 4, value));
    unsigned char* outputBase = output + *reinterpret_cast<int*>(
        *reinterpret_cast<unsigned char**>(output) + 4);

    float result;
    if (!(*reinterpret_cast<unsigned long*>(outputBase + 8) & 6) &&
        static_cast<void*>(*readFloat(&stream, result)) &&
        readCharacter(&stream) != -1)
        return result;

    Exception error("bad lexical cast: source type value could not be interpreted as target");
    error.vtable = &lexicalCastVtable;
    error.sourceType = &stringTypeInfo;
    error.targetType = &floatTypeInfo;
    raiseLexicalCast(&error);
}
