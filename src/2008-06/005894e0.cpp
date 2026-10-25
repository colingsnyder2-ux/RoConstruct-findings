// from server: 100% by king_originala
// roc 2008-06 005894e0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005894e0
//
// 005894e0  56                   push esi
// 005894e1  8b742408             mov esi, dword ptr [esp + 8]
// 005894e5  57                   push edi
// 005894e6  56                   push esi
// 005894e7  83c118               add ecx, 0x18
// 005894ea  e811fbffff           call 0x589000
// 005894ef  8b4e04               mov ecx, dword ptr [esi + 4]
// 005894f2  8908                 mov dword ptr [eax], ecx
// 005894f4  8b4e08               mov ecx, dword ptr [esi + 8]
// 005894f7  8d7804               lea edi, [eax + 4]
// 005894fa  85c9                 test ecx, ecx
// 005894fc  7409                 je 0x589507
// 005894fe  8b11                 mov edx, dword ptr [ecx]
// 00589500  8b4208               mov eax, dword ptr [edx + 8]
// 00589503  ffd0                 call eax
// 00589505  eb02                 jmp 0x589509
// 00589507  33c0                 xor eax, eax
// 00589509  8d4c240c             lea ecx, [esp + 0xc]
// 0058950d  3bcf                 cmp ecx, edi
// 0058950f  7406                 je 0x589517
// 00589511  8bc8                 mov ecx, eax
// 00589513  8b07                 mov eax, dword ptr [edi]
// 00589515  890f                 mov dword ptr [edi], ecx
// 00589517  5f                   pop edi
// 00589518  5e                   pop esi
// 00589519  85c0                 test eax, eax
// 0058951b  7410                 je 0x58952d
// 0058951d  8b10                 mov edx, dword ptr [eax]
// 0058951f  8bc8                 mov ecx, eax
// 00589521  8b02                 mov eax, dword ptr [edx]
// 00589523  c744240401000000     mov dword ptr [esp + 4], 1
// 0058952b  ffe0                 jmp eax
// 0058952d  c20400               ret 4

struct Object {
    virtual ~Object();
    virtual void reserved();
    virtual Object* clone();

    void* value;
    Object* owned;
};

struct Slot {
    void* value;
    Object* owned;
};

struct Storage {
    Slot* get(Object*);
};

struct S {
    char padding[24];
    Storage storage;
    void f(Object*);
};

void S::f(Object* source)
{
    Slot* slot = storage.get(source);
    slot->value = source->value;

    Object*& owned = slot->owned;
    Object* object = source->owned;
    source = object ? object->clone() : 0;

    if (&source != &owned) {
        Object* replacement = source;
        source = owned;
        owned = replacement;
    }

    if (source)
        delete source;
}
