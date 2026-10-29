// roc 2010-06 00740650  unit: seg_00740000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00740650
//
// 00740650  6aff                 push -1
// 00740652  6811a69a00           push 0x9aa611
// 00740657  64a100000000         mov eax, dword ptr fs:[0]
// 0074065d  50                   push eax
// 0074065e  64892500000000       mov dword ptr fs:[0], esp
// 00740665  51                   push ecx
// 00740666  56                   push esi
// 00740667  8b742418             mov esi, dword ptr [esp + 0x18]
// 0074066b  89742418             mov dword ptr [esp + 0x18], esi
// 0074066f  89742404             mov dword ptr [esp + 4], esi
// 00740673  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0074067b  85f6                 test esi, esi
// 0074067d  741b                 je 0x74069a
// 0074067f  57                   push edi
// 00740680  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00740684  57                   push edi
// 00740685  8bce                 mov ecx, esi
// 00740687  ff150ca49e00         call dword ptr [0x9ea40c]
// 0074068d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00740690  894620               mov dword ptr [esi + 0x20], eax
// 00740693  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00740696  894e24               mov dword ptr [esi + 0x24], ecx
// 00740699  5f                   pop edi
// 0074069a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0074069e  5e                   pop esi
// 0074069f  64890d00000000       mov dword ptr fs:[0], ecx
// 007406a6  83c410               add esp, 0x10
// 007406a9  c3                   ret 
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