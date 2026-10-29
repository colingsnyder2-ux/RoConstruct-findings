// roc 2012-06 008b7f10  unit: seg_008b0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b7f10
//
// 008b7f10  6aff                 push -1
// 008b7f12  6851f6aa00           push 0xaaf651
// 008b7f17  64a100000000         mov eax, dword ptr fs:[0]
// 008b7f1d  50                   push eax
// 008b7f1e  64892500000000       mov dword ptr fs:[0], esp
// 008b7f25  51                   push ecx
// 008b7f26  56                   push esi
// 008b7f27  8b742418             mov esi, dword ptr [esp + 0x18]
// 008b7f2b  89742418             mov dword ptr [esp + 0x18], esi
// 008b7f2f  89742404             mov dword ptr [esp + 4], esi
// 008b7f33  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008b7f3b  85f6                 test esi, esi
// 008b7f3d  741b                 je 0x8b7f5a
// 008b7f3f  57                   push edi
// 008b7f40  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008b7f44  57                   push edi
// 008b7f45  8bce                 mov ecx, esi
// 008b7f47  ff154426b200         call dword ptr [0xb22644]
// 008b7f4d  8b4720               mov eax, dword ptr [edi + 0x20]
// 008b7f50  894620               mov dword ptr [esi + 0x20], eax
// 008b7f53  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008b7f56  894e24               mov dword ptr [esi + 0x24], ecx
// 008b7f59  5f                   pop edi
// 008b7f5a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008b7f5e  5e                   pop esi
// 008b7f5f  64890d00000000       mov dword ptr fs:[0], ecx
// 008b7f66  83c410               add esp, 0x10
// 008b7f69  c3                   ret 
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