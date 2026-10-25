// from server: 100% by king_originala
// roc 2008-06 0041f2b0  unit: InsertDecal  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041f2b0
//
// 0041f2b0  51                   push ecx
// 0041f2b1  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0041f2b4  8b5004               mov edx, dword ptr [eax + 4]
// 0041f2b7  83c110               add ecx, 0x10
// 0041f2ba  56                   push esi
// 0041f2bb  c744240400000000     mov dword ptr [esp + 4], 0
// 0041f2c3  ffd2                 call edx
// 0041f2c5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041f2c9  83c004               add eax, 4
// 0041f2cc  50                   push eax
// 0041f2cd  8bce                 mov ecx, esi
// 0041f2cf  ff155c248000         call dword ptr [0x80245c]
// 0041f2d5  8bc6                 mov eax, esi
// 0041f2d7  5e                   pop esi
// 0041f2d8  59                   pop ecx
// 0041f2d9  c20400               ret 4

struct String {
    char storage[28];
};

struct Value {
    int reserved;
    String text;
};

struct Source {
    virtual void unused();
    virtual Value* get();
};

extern void (__thiscall *copyString)(String*, const String*);

struct InsertDecal {
    char reserved[16];
    Source source;
    String* f(String* result);
};

String* InsertDecal::f(String* result) {
    volatile int temporary = 0;
    Value* value = source.get();
    copyString(result, &value->text);
    return result;
}
