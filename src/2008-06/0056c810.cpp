// from server: 100% by king_originala
// roc 2008-06 0056c810  unit: RBX::Reflection::EnumDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c810
//
// 0056c810  6aff                 push -1
// 0056c812  6898987d00           push 0x7d9898
// 0056c817  64a100000000         mov eax, dword ptr fs:[0]
// 0056c81d  50                   push eax
// 0056c81e  64892500000000       mov dword ptr fs:[0], esp
// 0056c825  51                   push ecx
// 0056c826  53                   push ebx
// 0056c827  56                   push esi
// 0056c828  8bf1                 mov esi, ecx
// 0056c82a  57                   push edi
// 0056c82b  8974240c             mov dword ptr [esp + 0xc], esi
// 0056c82f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0056c833  8d7e04               lea edi, [esi + 4]
// 0056c836  53                   push ebx
// 0056c837  8bcf                 mov ecx, edi
// 0056c839  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056c841  c70664f68200         mov dword ptr [esi], 0x82f664
// 0056c847  ff155c248000         call dword ptr [0x80245c]
// 0056c84d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0056c850  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056c854  89471c               mov dword ptr [edi + 0x1c], eax
// 0056c857  5f                   pop edi
// 0056c858  8bc6                 mov eax, esi
// 0056c85a  5e                   pop esi
// 0056c85b  5b                   pop ebx
// 0056c85c  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c863  83c410               add esp, 0x10
// 0056c866  c20400               ret 4

struct String;
typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copyString;

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& source)
{
    copyString(this, source);
}

struct Value {
    String name;
    int value;

    Value(const Value&);
};

inline Value::Value(const Value& source)
    : name(source.name), value(source.value)
{
}

struct Base {
    virtual ~Base();
};

struct S : Base {
    Value data;

    S(const Value&);
    virtual ~S();
};

S::S(const Value& source)
    : data(source)
{
}
