// roc 2009-12 004309a0  unit: COutputView  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004309a0
//
// 004309a0  6aff                 push -1
// 004309a2  6891939200           push 0x929391
// 004309a7  64a100000000         mov eax, dword ptr fs:[0]
// 004309ad  50                   push eax
// 004309ae  64892500000000       mov dword ptr fs:[0], esp
// 004309b5  51                   push ecx
// 004309b6  56                   push esi
// 004309b7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004309bb  89742418             mov dword ptr [esp + 0x18], esi
// 004309bf  89742404             mov dword ptr [esp + 4], esi
// 004309c3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004309cb  85f6                 test esi, esi
// 004309cd  7423                 je 0x4309f2
// 004309cf  57                   push edi
// 004309d0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004309d4  8b07                 mov eax, dword ptr [edi]
// 004309d6  8d4f04               lea ecx, [edi + 4]
// 004309d9  51                   push ecx
// 004309da  8d4e04               lea ecx, [esi + 4]
// 004309dd  8906                 mov dword ptr [esi], eax
// 004309df  ff15f0b69800         call dword ptr [0x98b6f0]
// 004309e5  8b5720               mov edx, dword ptr [edi + 0x20]
// 004309e8  895620               mov dword ptr [esi + 0x20], edx
// 004309eb  8b4724               mov eax, dword ptr [edi + 0x24]
// 004309ee  894624               mov dword ptr [esi + 0x24], eax
// 004309f1  5f                   pop edi
// 004309f2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004309f6  5e                   pop esi
// 004309f7  64890d00000000       mov dword ptr fs:[0], ecx
// 004309fe  83c410               add esp, 0x10
// 00430a01  c3                   ret 
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