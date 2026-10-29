// roc 2011-06 00440d60  unit: COutputView  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00440d60
//
// 00440d60  6aff                 push -1
// 00440d62  6881669e00           push 0x9e6681
// 00440d67  64a100000000         mov eax, dword ptr fs:[0]
// 00440d6d  50                   push eax
// 00440d6e  64892500000000       mov dword ptr fs:[0], esp
// 00440d75  51                   push ecx
// 00440d76  56                   push esi
// 00440d77  8b742418             mov esi, dword ptr [esp + 0x18]
// 00440d7b  89742418             mov dword ptr [esp + 0x18], esi
// 00440d7f  89742404             mov dword ptr [esp + 4], esi
// 00440d83  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00440d8b  85f6                 test esi, esi
// 00440d8d  7423                 je 0x440db2
// 00440d8f  57                   push edi
// 00440d90  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00440d94  8b07                 mov eax, dword ptr [edi]
// 00440d96  8d4f04               lea ecx, [edi + 4]
// 00440d99  51                   push ecx
// 00440d9a  8d4e04               lea ecx, [esi + 4]
// 00440d9d  8906                 mov dword ptr [esi], eax
// 00440d9f  ff15c804a400         call dword ptr [0xa404c8]
// 00440da5  8b5720               mov edx, dword ptr [edi + 0x20]
// 00440da8  895620               mov dword ptr [esi + 0x20], edx
// 00440dab  8b4724               mov eax, dword ptr [edi + 0x24]
// 00440dae  894624               mov dword ptr [esi + 0x24], eax
// 00440db1  5f                   pop edi
// 00440db2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00440db6  5e                   pop esi
// 00440db7  64890d00000000       mov dword ptr fs:[0], ecx
// 00440dbe  83c410               add esp, 0x10
// 00440dc1  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00436e40@@YAXRAUEntry@@ABU1@@Z)

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