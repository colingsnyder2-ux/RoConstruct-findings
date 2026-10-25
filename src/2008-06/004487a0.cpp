// from server: 100% by king_originala
// roc 2008-06 004487a0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004487a0
//
// 004487a0  56                   push esi
// 004487a1  8bf1                 mov esi, ecx
// 004487a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004487a7  57                   push edi
// 004487a8  ff1564248000         call dword ptr [0x802464]
// 004487ae  8b7e20               mov edi, dword ptr [esi + 0x20]
// 004487b1  8d4c2410             lea ecx, [esp + 0x10]
// 004487b5  51                   push ecx
// 004487b6  50                   push eax
// 004487b7  e8d4ba1000           call 0x554290
// 004487bc  83c404               add esp, 4
// 004487bf  50                   push eax
// 004487c0  8bcf                 mov ecx, edi
// 004487c2  e8394b1a00           call 0x5ed300
// 004487c7  84c0                 test al, al
// 004487c9  7423                 je 0x4487ee
// 004487cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004487cf  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004487d2  89542410             mov dword ptr [esp + 0x10], edx
// 004487d6  8b01                 mov eax, dword ptr [ecx]
// 004487d8  8b400c               mov eax, dword ptr [eax + 0xc]
// 004487db  8d542410             lea edx, [esp + 0x10]
// 004487df  52                   push edx
// 004487e0  8b542410             mov edx, dword ptr [esp + 0x10]
// 004487e4  52                   push edx
// 004487e5  ffd0                 call eax
// 004487e7  5f                   pop edi
// 004487e8  b001                 mov al, 1
// 004487ea  5e                   pop esi
// 004487eb  c20800               ret 8
// 004487ee  5f                   pop edi
// 004487ef  32c0                 xor al, al
// 004487f1  5e                   pop esi
// 004487f2  c20800               ret 8

struct String;
extern const char* (__thiscall *string_c_str)(const String*);

extern const void* __cdecl internName(const char*);

struct EnumMap {
    bool lookup(const void*, int*);
};

struct Property {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const int&);
};

struct Descriptor {
    char padding[0x1c];
    Property* property;
    EnumMap* enumMap;

    bool set(void*, const String&);
};

bool Descriptor::set(void* instance, const String& text)
{
    int result;
    const char* name = string_c_str(&text);
    EnumMap* map = enumMap;

    if (map->lookup(internName(name), &result)) {
        *(volatile int*)&result = result;
        property->set(instance, result);
        return true;
    }

    return false;
}
