// from server: 93% by king_originala
// roc 2008-06 0055ced0  unit: RBX::MD5HasherImpl  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055ced0
//
// 0055ced0  6aff                 push -1
// 0055ced2  6811e87c00           push 0x7ce811
// 0055ced7  64a100000000         mov eax, dword ptr fs:[0]
// 0055cedd  50                   push eax
// 0055cede  64892500000000       mov dword ptr fs:[0], esp
// 0055cee5  51                   push ecx
// 0055cee6  56                   push esi
// 0055cee7  8b742418             mov esi, dword ptr [esp + 0x18]
// 0055ceeb  89742418             mov dword ptr [esp + 0x18], esi
// 0055ceef  89742404             mov dword ptr [esp + 4], esi
// 0055cef3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055cefb  85f6                 test esi, esi
// 0055cefd  741b                 je 0x55cf1a
// 0055ceff  57                   push edi
// 0055cf00  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055cf04  57                   push edi
// 0055cf05  8bce                 mov ecx, esi
// 0055cf07  ff155c248000         call dword ptr [0x80245c]
// 0055cf0d  8b4720               mov eax, dword ptr [edi + 0x20]
// 0055cf10  894620               mov dword ptr [esi + 0x20], eax
// 0055cf13  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0055cf16  894e24               mov dword ptr [esi + 0x24], ecx
// 0055cf19  5f                   pop edi
// 0055cf1a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055cf1e  5e                   pop esi
// 0055cf1f  64890d00000000       mov dword ptr fs:[0], ecx
// 0055cf26  83c410               add esp, 0x10
// 0055cf29  c3                   ret 

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
    destination = p;
    ::new (static_cast<void*>(p)) Value(source);
}
