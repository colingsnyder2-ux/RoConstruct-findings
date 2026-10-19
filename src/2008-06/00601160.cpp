// from server: 95% by colin
// from server: 94% by king_originala
// roc 2008-06 00601160  unit: RBX::VTool::?$BoundPropGetSet  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601160
//
// 00601160  6aff                 push -1
// 00601162  6866b37c00           push 0x7cb366
// 00601167  64a100000000         mov eax, dword ptr fs:[0]
// 0060116d  50                   push eax
// 0060116e  64892500000000       mov dword ptr fs:[0], esp
// 00601175  81eca0000000         sub esp, 0xa0
// 0060117b  56                   push esi
// 0060117c  6a01                 push 1
// 0060117e  6a03                 push 3
// 00601180  8d4c2424             lea ecx, [esp + 0x24]
// 00601184  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 0060118f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00601197  ff1528248000         call dword ptr [0x802428]
// 0060119d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006011a1  8b4004               mov eax, dword ptr [eax + 4]
// 006011a4  8364042cfe           and dword ptr [esp + eax + 0x2c], 0xfffffffe
// 006011a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006011ad  8d44041c             lea eax, [esp + eax + 0x1c]
// 006011b1  8b4104               mov eax, dword ptr [ecx + 4]
// 006011b4  8d44041c             lea eax, [esp + eax + 0x1c]
// 006011b8  c740140a000000       mov dword ptr [eax + 0x14], 0xa
// 006011bf  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 006011c6  8bce                 mov ecx, esi
// 006011c8  c78424ac00000001000000 mov dword ptr [esp + 0xac], 1
// 006011d3  ff1560248000         call dword ptr [0x802460]
// 006011d9  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 006011e0  8b02                 mov eax, dword ptr [edx]
// 006011e2  50                   push eax
// 006011e3  8d4c2428             lea ecx, [esp + 0x28]
// 006011e7  c744240801000000     mov dword ptr [esp + 8], 1
// 006011ef  ff159c258000         call dword ptr [0x80259c]
// 006011f5  8b08                 mov ecx, dword ptr [eax]
// 006011f7  8b5104               mov edx, dword ptr [ecx + 4]
// 006011fa  f644020806           test byte ptr [edx + eax + 8], 6
// 006011ff  7538                 jne 0x601239
// 00601201  56                   push esi
// 00601202  8d4c2420             lea ecx, [esp + 0x20]
// 00601206  e8f505f0ff           call 0x501800
// 0060120b  84c0                 test al, al
// 0060120d  742a                 je 0x601239
// 0060120f  8d4c241c             lea ecx, [esp + 0x1c]
// 00601213  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 0060121b  ff152c248000         call dword ptr [0x80242c]
// 00601221  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00601228  8bc6                 mov eax, esi
// 0060122a  5e                   pop esi
// 0060122b  64890d00000000       mov dword ptr fs:[0], ecx
// 00601232  81c4ac000000         add esp, 0xac
// 00601238  c3                   ret 
// 00601239  6834ba8000           push 0x80ba34
// 0060123e  8d4c240c             lea ecx, [esp + 0xc]
// 00601242  ff1564288000         call dword ptr [0x802864]
// 00601248  c744240824728200     mov dword ptr [esp + 8], 0x827224
// 00601250  c744241478e39400     mov dword ptr [esp + 0x14], 0x94e378
// 00601258  c7442418f8be9200     mov dword ptr [esp + 0x18], 0x92bef8
// 00601260  8d442408             lea eax, [esp + 8]
// 00601264  50                   push eax
// 00601265  c68424b000000002     mov byte ptr [esp + 0xb0], 2
// 0060126d  e81e06f0ff           call 0x501890
#include <intrin.h>

struct String;
struct Stream;
struct Output;
struct BadCast;

typedef void (__thiscall *StringConstructor)(String*);
typedef void (__thiscall *StringDestructor)(String*);
typedef void (__thiscall *StreamConstructor)(Stream*, int, int);
typedef void (__thiscall *StreamDestructor)(Stream*);
typedef Output& (__thiscall *InsertUnsigned)(Output*, unsigned int);
typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;
extern StreamConstructor streamConstructor;
extern StreamDestructor streamDestructor;
extern InsertUnsigned insertUnsigned;
extern BadCastConstructor badCastConstructor;

extern unsigned char lexicalCastVtable;
extern unsigned char sourceType;
extern unsigned char targetType;

struct String {
    unsigned char storage[28];
    String();
    ~String();
};

inline String::String()
{
    stringConstructor(this);
}

inline String::~String()
{
    stringDestructor(this);
}

struct Output {
    int* table;
    Output& operator<<(unsigned int);
    bool failed() const;
};

inline Output& Output::operator<<(unsigned int value)
{
    return insertUnsigned(this, value);
}

inline bool Output::failed() const
{
    return (*(const unsigned char*)((const char*)this + table[1] + 8) & 6) != 0;
}

struct State {
    unsigned char padding[16];
    unsigned int format;
    int digits;

    unsigned int flags(unsigned int);
    void unsetf(unsigned int);
    int precision(int);
};

inline unsigned int State::flags(unsigned int value)
{
    unsigned int old = format;
    format = value;
    return old;
}

inline void State::unsetf(unsigned int mask)
{
    flags(format & ~mask);
}

inline int State::precision(int value)
{
    int old = digits;
    digits = value;
    return old;
}

struct Stream {
    int* table;
    unsigned char storage[132];

    Stream(int, int);
    ~Stream();
    bool extract(String*);
    State& state();
    void configure();
    Output& output();
};

inline Stream::Stream(int mode, int initialize)
{
    streamConstructor(this, mode, initialize);
}

inline Stream::~Stream()
{
    streamDestructor(this);
}

inline State& Stream::state()
{
    return *(State*)((char*)this + table[1]);
}

inline void Stream::configure()
{
    state().unsetf(1);
    state().precision(10);
}

inline Output& Stream::output()
{
    return *(Output*)((char*)this + 8);
}

struct BadCast {
    void* vtable;
    unsigned long base[2];

    BadCast(const char*);
    ~BadCast();
};

inline BadCast::BadCast(const char* message)
{
    badCastConstructor(this, message);
}

struct Exception : BadCast {
    const void* source;
    const void* target;

    Exception();
};

inline Exception::Exception()
    : BadCast("bad lexical cast: source type value could not be interpreted as target")
{
    vtable = &lexicalCastVtable;
    source = &sourceType;
    target = &targetType;
}

extern __declspec(noreturn) void __cdecl raiseLexicalCast(const Exception&);

String __cdecl convert(const unsigned int& value)
{
    Stream stream(3, 1);
    stream.configure();
    _ReadWriteBarrier();
    String result;

    if (!(stream.output() << value).failed() && stream.extract(&result))
        return result;

    Exception exception;
    raiseLexicalCast(exception);
}
