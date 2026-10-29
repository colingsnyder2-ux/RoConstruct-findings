// roc 2012-06 0044d630  unit: PasteVerb  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044d630
//
// 0044d630  6aff                 push -1
// 0044d632  6851f6aa00           push 0xaaf651
// 0044d637  64a100000000         mov eax, dword ptr fs:[0]
// 0044d63d  50                   push eax
// 0044d63e  64892500000000       mov dword ptr fs:[0], esp
// 0044d645  51                   push ecx
// 0044d646  56                   push esi
// 0044d647  8b742418             mov esi, dword ptr [esp + 0x18]
// 0044d64b  89742418             mov dword ptr [esp + 0x18], esi
// 0044d64f  89742404             mov dword ptr [esp + 4], esi
// 0044d653  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044d65b  85f6                 test esi, esi
// 0044d65d  7423                 je 0x44d682
// 0044d65f  57                   push edi
// 0044d660  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0044d664  8b07                 mov eax, dword ptr [edi]
// 0044d666  8d4f04               lea ecx, [edi + 4]
// 0044d669  51                   push ecx
// 0044d66a  8d4e04               lea ecx, [esi + 4]
// 0044d66d  8906                 mov dword ptr [esi], eax
// 0044d66f  ff154426b200         call dword ptr [0xb22644]
// 0044d675  8b5720               mov edx, dword ptr [edi + 0x20]
// 0044d678  895620               mov dword ptr [esi + 0x20], edx
// 0044d67b  8b4724               mov eax, dword ptr [edi + 0x24]
// 0044d67e  894624               mov dword ptr [esi + 0x24], eax
// 0044d681  5f                   pop edi
// 0044d682  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044d686  5e                   pop esi
// 0044d687  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d68e  83c410               add esp, 0x10
// 0044d691  c3                   ret 
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