// from server: 100% by king_originala
// roc 2008-06 00438630  unit: RBX::Soundscape::VSoundId::?$XItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438630
//
// 00438630  56                   push esi
// 00438631  57                   push edi
// 00438632  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00438636  8bf1                 mov esi, ecx
// 00438638  83c704               add edi, 4
// 0043863b  8bcf                 mov ecx, edi
// 0043863d  ff1564248000         call dword ptr [0x802464]
// 00438643  50                   push eax
// 00438644  8bce                 mov ecx, esi
// 00438646  e8651d2c00           call 0x6fa3b0
// 0043864b  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00438651  e80a9e2d00           call 0x712460
// 00438656  85c0                 test eax, eax
// 00438658  7524                 jne 0x43867e
// 0043865a  8bcf                 mov ecx, edi
// 0043865c  ff1564248000         call dword ptr [0x802464]
// 00438662  6a00                 push 0
// 00438664  50                   push eax
// 00438665  8bce                 mov ecx, esi
// 00438667  e8441d2c00           call 0x6fa3b0
// 0043866c  8bc8                 mov ecx, eax
// 0043866e  e8ede82d00           call 0x716f60
// 00438673  8bf0                 mov esi, eax
// 00438675  8bce                 mov ecx, esi
// 00438677  e864912d00           call 0x7117e0
// 0043867c  8bc6                 mov eax, esi
// 0043867e  5f                   pop edi
// 0043867f  5e                   pop esi
// 00438680  c20400               ret 4

struct String;

extern const char* (__thiscall *string_c_str)(const String*);

struct Key {
    char padding[4];
    String* unused;
};

struct Item {
    void initialize();
};

struct Collection {
    Item* find(const char*);
};

struct Container {
    char padding[0xE4];
    Collection* collection;
    Item* create(const char*, int);
};

struct S {
    Container* getContainer();
    Item* resolve(const Key*);
};

Item* S::resolve(const Key* key)
{
    const String* text = reinterpret_cast<const String*>(
        reinterpret_cast<const char*>(key) + 4);

    Item* result = getContainer()->collection->find(string_c_str(text));
    if (!result) {
        const char* name = string_c_str(text);
        result = getContainer()->create(name, 0);
        result->initialize();
    }
    return result;
}
