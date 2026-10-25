// from server: 100% by colin
// roc 2008-06 00589410  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00589410
//
// 00589410  64a100000000         mov eax, dword ptr fs:[0]
// 00589416  6aff                 push -1
// 00589418  68a8257d00           push 0x7d25a8
// 0058941d  50                   push eax
// 0058941e  64892500000000       mov dword ptr fs:[0], esp
// 00589425  83ec08               sub esp, 8
// 00589428  56                   push esi
// 00589429  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058942d  8b06                 mov eax, dword ptr [esi]
// 0058942f  8b5004               mov edx, dword ptr [eax + 4]
// 00589432  57                   push edi
// 00589433  8bf9                 mov edi, ecx
// 00589435  8bce                 mov ecx, esi
// 00589437  ffd2                 call edx
// 00589439  84c0                 test al, al
// 0058943b  7570                 jne 0x5894ad
// 0058943d  8b06                 mov eax, dword ptr [esi]
// 0058943f  8b5008               mov edx, dword ptr [eax + 8]
// 00589442  8bce                 mov ecx, esi
// 00589444  ffd2                 call edx
// 00589446  84c0                 test al, al
// 00589448  7563                 jne 0x5894ad
// 0058944a  8d4c2408             lea ecx, [esp + 8]
// 0058944e  e86db60000           call 0x594ac0
// 00589453  8b4704               mov eax, dword ptr [edi + 4]
// 00589456  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058945e  85c0                 test eax, eax
// 00589460  7405                 je 0x589467
// 00589462  83c014               add eax, 0x14
// 00589465  eb02                 jmp 0x589469
// 00589467  33c0                 xor eax, eax
// 00589469  8b16                 mov edx, dword ptr [esi]
// 0058946b  8b5210               mov edx, dword ptr [edx + 0x10]
// 0058946e  8d4c2408             lea ecx, [esp + 8]
// 00589472  51                   push ecx
// 00589473  50                   push eax
// 00589474  8bce                 mov ecx, esi
// 00589476  ffd2                 call edx
// 00589478  8d442408             lea eax, [esp + 8]
// 0058947c  50                   push eax
// 0058947d  8d4c2424             lea ecx, [esp + 0x24]
// 00589481  51                   push ecx
// 00589482  8d4f18               lea ecx, [edi + 0x18]
// 00589485  89742428             mov dword ptr [esp + 0x28], esi
// 00589489  e872fbffff           call 0x589000
// 0058948e  8bc8                 mov ecx, eax
// 00589490  e80b3ceaff           call 0x42d0a0
// 00589495  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00589499  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005894a1  85c9                 test ecx, ecx
// 005894a3  7408                 je 0x5894ad
// 005894a5  8b11                 mov edx, dword ptr [ecx]
// 005894a7  8b02                 mov eax, dword ptr [edx]
// 005894a9  6a01                 push 1
// 005894ab  ffd0                 call eax
// 005894ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005894b1  5f                   pop edi
// 005894b2  5e                   pop esi
// 005894b3  64890d00000000       mov dword ptr fs:[0], ecx
// 005894ba  83c414               add esp, 0x14
// 005894bd  c20400               ret 4

struct Resource {
    virtual ~Resource();
};

struct Value {
    void* type;
    Resource* data;

    Value();
    ~Value();
};

inline Value::~Value()
{
    if (data)
        delete data;
}

struct Property {
    virtual void slot0();
    virtual bool excluded();
    virtual bool readOnly();
    virtual void slot3();
    virtual void read(void* object, Value* value);
};

struct Result {
    void finish();
};

struct Container {
    Result* store(Property** property, Value* value);
};

struct S {
    unsigned long reserved;
    char* object;
    char padding[16];
    Container values;

    void f(Property* property);
};

void S::f(Property* property)
{
    if (property->excluded())
        return;
    if (property->readOnly())
        return;

    Value value;
    property->read(object ? object + 20 : 0, &value);
    Property* p = property;
    values.store(&p, &value)->finish();
}
