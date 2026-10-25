// from server: 100% by king_originala
// roc 2008-06 0059d050  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d050
//
// 0059d050  8bc1                 mov eax, ecx
// 0059d052  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059d056  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 0059d05c  56                   push esi
// 0059d05d  8b7040               mov esi, dword ptr [eax + 0x40]
// 0059d060  8b1432               mov edx, dword ptr [edx + esi]
// 0059d063  03503c               add edx, dword ptr [eax + 0x3c]
// 0059d066  8b4038               mov eax, dword ptr [eax + 0x38]
// 0059d069  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 0059d070  ffd0                 call eax
// 0059d072  d95c2408             fstp dword ptr [esp + 8]
// 0059d076  e825fcfcff           call 0x56cca0
// 0059d07b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d07f  6a08                 push 8
// 0059d081  8901                 mov dword ptr [ecx], eax
// 0059d083  8d7104               lea esi, [ecx + 4]
// 0059d086  e895381000           call 0x6a0920
// 0059d08b  83c404               add esp, 4
// 0059d08e  85c0                 test eax, eax
// 0059d090  740f                 je 0x59d0a1
// 0059d092  d9442408             fld dword ptr [esp + 8]
// 0059d096  c700bc068100         mov dword ptr [eax], 0x8106bc
// 0059d09c  d95804               fstp dword ptr [eax + 4]
// 0059d09f  eb02                 jmp 0x59d0a3
// 0059d0a1  33c0                 xor eax, eax
// 0059d0a3  8d542408             lea edx, [esp + 8]
// 0059d0a7  8bc8                 mov ecx, eax
// 0059d0a9  3bd6                 cmp edx, esi
// 0059d0ab  7404                 je 0x59d0b1
// 0059d0ad  8b0e                 mov ecx, dword ptr [esi]
// 0059d0af  8906                 mov dword ptr [esi], eax
// 0059d0b1  5e                   pop esi
// 0059d0b2  85c9                 test ecx, ecx
// 0059d0b4  7408                 je 0x59d0be
// 0059d0b6  8b01                 mov eax, dword ptr [ecx]
// 0059d0b8  8b10                 mov edx, dword ptr [eax]
// 0059d0ba  6a01                 push 1
// 0059d0bc  ffd2                 call edx
// 0059d0be  c20800               ret 8

extern void* __cdecl operator new(unsigned int);
extern void __cdecl operator delete(void*);
extern int __cdecl getType();

struct Base {};

struct Prefix {
    char padding[0x134];
};

struct Object : Prefix, virtual Base {};

struct Holder {
    virtual ~Holder();
    float value;

    Holder(float v) : value(v) {}
};

struct Result {
    int type;
    Holder* value;
};

struct Descriptor {
    char padding[0x38];
    float (Object::*method)();

    void invoke(Object* object, Result* result);
};

void Descriptor::invoke(Object* object, Result* result)
{
    float value = (object->*method)();
    result->type = getType();

    Holder*& destination = result->value;
    Holder* replacement = new Holder(value);
    if (&replacement != &destination) {
        Holder* old = destination;
        destination = replacement;
        replacement = old;
    }
    if (replacement)
        delete replacement;
}
