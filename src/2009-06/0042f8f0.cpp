// roc 2009-06 0042f8f0  unit: COutputView  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f8f0
//
// 0042f8f0  6aff                 push -1
// 0042f8f2  6851ed8400           push 0x84ed51
// 0042f8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0042f8fd  50                   push eax
// 0042f8fe  64892500000000       mov dword ptr fs:[0], esp
// 0042f905  51                   push ecx
// 0042f906  56                   push esi
// 0042f907  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042f90b  89742418             mov dword ptr [esp + 0x18], esi
// 0042f90f  89742404             mov dword ptr [esp + 4], esi
// 0042f913  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042f91b  85f6                 test esi, esi
// 0042f91d  7423                 je 0x42f942
// 0042f91f  57                   push edi
// 0042f920  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0042f924  8b07                 mov eax, dword ptr [edi]
// 0042f926  8d4f04               lea ecx, [edi + 4]
// 0042f929  51                   push ecx
// 0042f92a  8d4e04               lea ecx, [esi + 4]
// 0042f92d  8906                 mov dword ptr [esi], eax
// 0042f92f  ff15b8e48900         call dword ptr [0x89e4b8]
// 0042f935  8b5720               mov edx, dword ptr [edi + 0x20]
// 0042f938  895620               mov dword ptr [esi + 0x20], edx
// 0042f93b  8b4724               mov eax, dword ptr [edi + 0x24]
// 0042f93e  894624               mov dword ptr [esi + 0x24], eax
// 0042f941  5f                   pop edi
// 0042f942  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042f946  5e                   pop esi
// 0042f947  64890d00000000       mov dword ptr fs:[0], ecx
// 0042f94e  83c410               add esp, 0x10
// 0042f951  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAXRAUEntry@@ABU1@@Z)

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