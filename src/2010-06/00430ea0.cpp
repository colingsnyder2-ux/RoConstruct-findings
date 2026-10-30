// roc 2010-06 00430ea0  unit: COutputView  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430ea0
//
// 00430ea0  6aff                 push -1
// 00430ea2  6811a69a00           push 0x9aa611
// 00430ea7  64a100000000         mov eax, dword ptr fs:[0]
// 00430ead  50                   push eax
// 00430eae  64892500000000       mov dword ptr fs:[0], esp
// 00430eb5  51                   push ecx
// 00430eb6  56                   push esi
// 00430eb7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00430ebb  89742418             mov dword ptr [esp + 0x18], esi
// 00430ebf  89742404             mov dword ptr [esp + 4], esi
// 00430ec3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00430ecb  85f6                 test esi, esi
// 00430ecd  7423                 je 0x430ef2
// 00430ecf  57                   push edi
// 00430ed0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00430ed4  8b07                 mov eax, dword ptr [edi]
// 00430ed6  8d4f04               lea ecx, [edi + 4]
// 00430ed9  51                   push ecx
// 00430eda  8d4e04               lea ecx, [esi + 4]
// 00430edd  8906                 mov dword ptr [esi], eax
// 00430edf  ff150ca49e00         call dword ptr [0x9ea40c]
// 00430ee5  8b5720               mov edx, dword ptr [edi + 0x20]
// 00430ee8  895620               mov dword ptr [esi + 0x20], edx
// 00430eeb  8b4724               mov eax, dword ptr [edi + 0x24]
// 00430eee  894624               mov dword ptr [esi + 0x24], eax
// 00430ef1  5f                   pop edi
// 00430ef2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00430ef6  5e                   pop esi
// 00430ef7  64890d00000000       mov dword ptr fs:[0], ecx
// 00430efe  83c410               add esp, 0x10
// 00430f01  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00436e40@@YAXRAUEntry@@ABU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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