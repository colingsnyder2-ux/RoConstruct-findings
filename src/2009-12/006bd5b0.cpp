// roc 2009-12 006bd5b0  unit: CPropGrid::UpdateItemsJob  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bd5b0
//
// 006bd5b0  6aff                 push -1
// 006bd5b2  6891939200           push 0x929391
// 006bd5b7  64a100000000         mov eax, dword ptr fs:[0]
// 006bd5bd  50                   push eax
// 006bd5be  64892500000000       mov dword ptr fs:[0], esp
// 006bd5c5  51                   push ecx
// 006bd5c6  56                   push esi
// 006bd5c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 006bd5cb  89742418             mov dword ptr [esp + 0x18], esi
// 006bd5cf  89742404             mov dword ptr [esp + 4], esi
// 006bd5d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006bd5db  85f6                 test esi, esi
// 006bd5dd  741b                 je 0x6bd5fa
// 006bd5df  57                   push edi
// 006bd5e0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006bd5e4  57                   push edi
// 006bd5e5  8bce                 mov ecx, esi
// 006bd5e7  ff15f0b69800         call dword ptr [0x98b6f0]
// 006bd5ed  8b4720               mov eax, dword ptr [edi + 0x20]
// 006bd5f0  894620               mov dword ptr [esi + 0x20], eax
// 006bd5f3  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 006bd5f6  894e24               mov dword ptr [esi + 0x24], ecx
// 006bd5f9  5f                   pop edi
// 006bd5fa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bd5fe  5e                   pop esi
// 006bd5ff  64890d00000000       mov dword ptr fs:[0], ecx
// 006bd606  83c410               add esp, 0x10
// 006bd609  c3                   ret 
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