// roc 2009-06 005d9b20  unit: RBX::MD5HasherImpl  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d9b20
//
// 005d9b20  6aff                 push -1
// 005d9b22  6851ed8400           push 0x84ed51
// 005d9b27  64a100000000         mov eax, dword ptr fs:[0]
// 005d9b2d  50                   push eax
// 005d9b2e  64892500000000       mov dword ptr fs:[0], esp
// 005d9b35  51                   push ecx
// 005d9b36  56                   push esi
// 005d9b37  8b742418             mov esi, dword ptr [esp + 0x18]
// 005d9b3b  89742418             mov dword ptr [esp + 0x18], esi
// 005d9b3f  89742404             mov dword ptr [esp + 4], esi
// 005d9b43  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d9b4b  85f6                 test esi, esi
// 005d9b4d  741b                 je 0x5d9b6a
// 005d9b4f  57                   push edi
// 005d9b50  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005d9b54  57                   push edi
// 005d9b55  8bce                 mov ecx, esi
// 005d9b57  ff15b8e48900         call dword ptr [0x89e4b8]
// 005d9b5d  8b4720               mov eax, dword ptr [edi + 0x20]
// 005d9b60  894620               mov dword ptr [esi + 0x20], eax
// 005d9b63  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005d9b66  894e24               mov dword ptr [esi + 0x24], ecx
// 005d9b69  5f                   pop edi
// 005d9b6a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d9b6e  5e                   pop esi
// 005d9b6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9b76  83c410               add esp, 0x10
// 005d9b79  c3                   ret 
// copied from an identical function in another client (function ?construct@@YAXRAUValue@@ABU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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