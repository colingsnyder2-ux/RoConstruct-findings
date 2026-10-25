// from server: 100% by king_originala
// roc 2008-06 00436e40  unit: CStandardOutputView  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436e40
//
// 00436e40  6aff                 push -1
// 00436e42  6811e87c00           push 0x7ce811
// 00436e47  64a100000000         mov eax, dword ptr fs:[0]
// 00436e4d  50                   push eax
// 00436e4e  64892500000000       mov dword ptr fs:[0], esp
// 00436e55  51                   push ecx
// 00436e56  56                   push esi
// 00436e57  8b742418             mov esi, dword ptr [esp + 0x18]
// 00436e5b  89742418             mov dword ptr [esp + 0x18], esi
// 00436e5f  89742404             mov dword ptr [esp + 4], esi
// 00436e63  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00436e6b  85f6                 test esi, esi
// 00436e6d  7423                 je 0x436e92
// 00436e6f  57                   push edi
// 00436e70  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00436e74  8b07                 mov eax, dword ptr [edi]
// 00436e76  8d4f04               lea ecx, [edi + 4]
// 00436e79  51                   push ecx
// 00436e7a  8d4e04               lea ecx, [esi + 4]
// 00436e7d  8906                 mov dword ptr [esi], eax
// 00436e7f  ff155c248000         call dword ptr [0x80245c]
// 00436e85  8b5720               mov edx, dword ptr [edi + 0x20]
// 00436e88  895620               mov dword ptr [esi + 0x20], edx
// 00436e8b  8b4724               mov eax, dword ptr [edi + 0x24]
// 00436e8e  894624               mov dword ptr [esi + 0x24], eax
// 00436e91  5f                   pop edi
// 00436e92  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00436e96  5e                   pop esi
// 00436e97  64890d00000000       mov dword ptr fs:[0], ecx
// 00436e9e  83c410               add esp, 0x10
// 00436ea1  c3                   ret 

typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct String;
extern String* (__thiscall* string_copy)(String*, const String&);

struct String
{
    unsigned char data[28];
    String(const String&);
};

inline String::String(const String& other)
{
    string_copy(this, other);
}

struct Entry
{
    unsigned int first;
    String text;
    unsigned int second;
    unsigned int third;
};

void func_00436e40(Entry* volatile destination, const Entry& source)
{
    Entry* p = destination;
    new (p) Entry(source);
}
