// from server: 100% by king_originala
// roc 2008-06 0056e180  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e180
//
// 0056e180  51                   push ecx
// 0056e181  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e184  8b01                 mov eax, dword ptr [ecx]
// 0056e186  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e18a  8b4008               mov eax, dword ptr [eax + 8]
// 0056e18d  56                   push esi
// 0056e18e  52                   push edx
// 0056e18f  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e197  ffd0                 call eax
// 0056e199  d95c2410             fstp dword ptr [esp + 0x10]
// 0056e19d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e1a1  8d4c2410             lea ecx, [esp + 0x10]
// 0056e1a5  51                   push ecx
// 0056e1a6  56                   push esi
// 0056e1a7  e894fe0400           call 0x5be040
// 0056e1ac  83c408               add esp, 8
// 0056e1af  8bc6                 mov eax, esi
// 0056e1b1  5e                   pop esi
// 0056e1b2  59                   pop ecx
// 0056e1b3  c20800               ret 8

struct String;
String* __cdecl formatFloat(String* result, const float& value);

struct Getter;

struct GetterTable
{
    void* slots[2];
    float (__thiscall *get)(Getter*, void*);
};

struct Getter
{
    GetterTable* table;
};

struct Descriptor
{
    char padding[24];
    Getter* getter;

    String* getString(String* result, void* object);
};

String* Descriptor::getString(String* result, void* object)
{
    volatile int state = 0;
    reinterpret_cast<float&>(object) = getter->table->get(getter, object);
    formatFloat(result, reinterpret_cast<const float&>(object));
    return result;
}
