// from server: 95% by colin
// from server: 94% by king_originala
// roc 2008-06 005018d0  unit: boost::bad_lexical_cast  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005018d0
//
// 005018d0  6aff                 push -1
// 005018d2  6866b37c00           push 0x7cb366
// 005018d7  64a100000000         mov eax, dword ptr fs:[0]
// 005018dd  50                   push eax
// 005018de  64892500000000       mov dword ptr fs:[0], esp
// 005018e5  81eca0000000         sub esp, 0xa0
// 005018eb  56                   push esi
// 005018ec  6a01                 push 1
// 005018ee  6a03                 push 3
// 005018f0  8d4c2424             lea ecx, [esp + 0x24]
// 005018f4  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 005018ff  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00501907  ff1528248000         call dword ptr [0x802428]
// 0050190d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00501911  8b4004               mov eax, dword ptr [eax + 4]
// 00501914  8364042cfe           and dword ptr [esp + eax + 0x2c], 0xfffffffe
// 00501919  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050191d  8d44041c             lea eax, [esp + eax + 0x1c]
// 00501921  8b4104               mov eax, dword ptr [ecx + 4]
// 00501924  8d44041c             lea eax, [esp + eax + 0x1c]
// 00501928  c740140a000000       mov dword ptr [eax + 0x14], 0xa
// 0050192f  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 00501936  8bce                 mov ecx, esi
// 00501938  c78424ac00000001000000 mov dword ptr [esp + 0xac], 1
// 00501943  ff1560248000         call dword ptr [0x802460]
// 00501949  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00501950  8b02                 mov eax, dword ptr [edx]
// 00501952  50                   push eax
// 00501953  8d4c2428             lea ecx, [esp + 0x28]
// 00501957  c744240801000000     mov dword ptr [esp + 8], 1
// 0050195f  ff1570248000         call dword ptr [0x802470]
// 00501965  8b08                 mov ecx, dword ptr [eax]
// 00501967  8b5104               mov edx, dword ptr [ecx + 4]
// 0050196a  f644020806           test byte ptr [edx + eax + 8], 6
// 0050196f  7538                 jne 0x5019a9
// 00501971  56                   push esi
// 00501972  8d4c2420             lea ecx, [esp + 0x20]
// 00501976  e885feffff           call 0x501800
// 0050197b  84c0                 test al, al
// 0050197d  742a                 je 0x5019a9
// 0050197f  8d4c241c             lea ecx, [esp + 0x1c]
// 00501983  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 0050198b  ff152c248000         call dword ptr [0x80242c]
// 00501991  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00501998  8bc6                 mov eax, esi
// 0050199a  5e                   pop esi
// 0050199b  64890d00000000       mov dword ptr fs:[0], ecx
// 005019a2  81c4ac000000         add esp, 0xac
// 005019a8  c3                   ret 
// 005019a9  6834ba8000           push 0x80ba34
// 005019ae  8d4c240c             lea ecx, [esp + 0xc]
// 005019b2  ff1564288000         call dword ptr [0x802864]
// 005019b8  c744240824728200     mov dword ptr [esp + 8], 0x827224
// 005019c0  c7442414d0be9200     mov dword ptr [esp + 0x14], 0x92bed0
// 005019c8  c7442418f8be9200     mov dword ptr [esp + 0x18], 0x92bef8
// 005019d0  8d442408             lea eax, [esp + 8]
// 005019d4  50                   push eax
// 005019d5  c68424b000000002     mov byte ptr [esp + 0xb0], 2
// 005019dd  e8aefeffff           call 0x501890
#include <intrin.h>

struct __declspec(dllimport) String
{
    char data[28];
    String();
    ~String();
};

struct IOS
{
    virtual ~IOS();
    int reserved;
    int state;
    int exceptions;
    unsigned int flags;
    int precisionValue;
    char remainder[40];

    void unsetf(unsigned int);
    int precision(int);
};

inline void IOS::unsetf(unsigned int mask)
{
    flags &= ~mask;
}

inline int IOS::precision(int value)
{
    int previous = precisionValue;
    precisionValue = value;
    return previous;
}

struct __declspec(dllimport) Input : virtual IOS
{
    int reservedInput;
};

struct __declspec(dllimport) Output : virtual IOS
{
    int reservedOutput;
    Output& operator<<(int);
};

struct StreamBase : Input, Output
{
    bool extract(String*);
};

struct __declspec(dllimport) Stream : StreamBase
{
    char buffer[56];
    Stream(int);
    ~Stream();
};

struct TypeInfo;
extern TypeInfo sourceType;
extern TypeInfo targetType;

struct __declspec(dllimport) BadCast
{
    BadCast(const char*);
    virtual ~BadCast();
    virtual const char* what() const;
    const char* message;
    int ownsMessage;
};

struct BadLexicalCast : BadCast
{
    BadLexicalCast(const TypeInfo&, const TypeInfo&);
    virtual const char* what() const;
    const TypeInfo* source;
    const TypeInfo* target;
};

inline BadLexicalCast::BadLexicalCast(const TypeInfo& s, const TypeInfo& t)
    : BadCast("bad lexical cast: source type value could not be interpreted as target"),
      source(&s), target(&t)
{
}

__declspec(noreturn) void __cdecl raiseLexicalCast(const BadLexicalCast&);

String __cdecl convert(const int& value)
{
    Stream stream(3);
    stream.unsetf(1);
    stream.precision(10);
    _ReadWriteBarrier();

    String result;
    Output& output = stream << value;
    if (!(output.state & 6) && stream.extract(&result))
        return result;

    BadLexicalCast error(sourceType, targetType);
    raiseLexicalCast(error);
}
