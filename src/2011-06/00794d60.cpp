// roc 2011-06 00794d60  unit: seg_00790000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794d60
//
// 00794d60  6aff                 push -1
// 00794d62  6881669e00           push 0x9e6681
// 00794d67  64a100000000         mov eax, dword ptr fs:[0]
// 00794d6d  50                   push eax
// 00794d6e  64892500000000       mov dword ptr fs:[0], esp
// 00794d75  51                   push ecx
// 00794d76  56                   push esi
// 00794d77  8b742418             mov esi, dword ptr [esp + 0x18]
// 00794d7b  89742418             mov dword ptr [esp + 0x18], esi
// 00794d7f  89742404             mov dword ptr [esp + 4], esi
// 00794d83  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00794d8b  85f6                 test esi, esi
// 00794d8d  741b                 je 0x794daa
// 00794d8f  57                   push edi
// 00794d90  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00794d94  57                   push edi
// 00794d95  8bce                 mov ecx, esi
// 00794d97  ff15c804a400         call dword ptr [0xa404c8]
// 00794d9d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00794da0  894620               mov dword ptr [esi + 0x20], eax
// 00794da3  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00794da6  894e24               mov dword ptr [esi + 0x24], ecx
// 00794da9  5f                   pop edi
// 00794daa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00794dae  5e                   pop esi
// 00794daf  64890d00000000       mov dword ptr fs:[0], ecx
// 00794db6  83c410               add esp, 0x10
// 00794db9  c3                   ret 
// copied from an identical function in another client (function ?construct@@YAXRAUValue@@ABU1@@Z)

typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct String {
    char storage[32];
    String(const String&);
};

typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copyString;

inline String::String(const String& source)
{
    copyString(this, source);
}

struct Value {
    String text;
    unsigned int first;
    unsigned int second;

    Value(const Value&);
};

inline Value::Value(const Value& source)
    : text(source.text), first(source.first), second(source.second) {}

void __cdecl construct(Value* volatile destination, const Value& source)
{
    Value* p = destination;
    ::new (static_cast<void*>(p)) Value(source);
}