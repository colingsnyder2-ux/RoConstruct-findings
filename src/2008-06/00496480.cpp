// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct String;
extern String* (__thiscall *stringCopy)(String*, const String&);

struct String {
    char data[28];
    String(const String&);
    ~String();
};

inline String::String(const String& source)
{
    stringCopy(this, source);
}

inline void increment(volatile long* value)
{
    _ReadWriteBarrier();
    _InterlockedExchangeAdd(value, 1);
}

struct RefCount {
    long reserved;
    volatile long count;
};

struct S {
    String first;
    String second;
    void* firstObject;
    RefCount* firstRef;
    void* secondObject;
    RefCount* secondRef;

    S(const S&);
};

S::S(const S& source)
    : first(source.first), second(source.second)
{
    firstObject = source.firstObject;
    firstRef = source.firstRef;
    if (firstRef)
        increment(&firstRef->count);

    secondObject = source.secondObject;
    secondRef = source.secondRef;
    if (secondRef)
        increment(&secondRef->count);
}
