// from server: 76% by king_originala
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
    ~Stream();
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

inline Stream::~Stream()
{
    streamDestructor(this);
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
