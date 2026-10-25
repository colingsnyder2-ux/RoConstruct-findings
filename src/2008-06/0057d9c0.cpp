// from server: 100% by king_originala
// roc 2008-06 0057d9c0  unit: RBX::FirstPersonCommand  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d9c0
//
// 0057d9c0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0057d9c3  8b8004020000         mov eax, dword ptr [eax + 0x204]
// 0057d9c9  8b9088020000         mov edx, dword ptr [eax + 0x288]
// 0057d9cf  8d8888020000         lea ecx, [eax + 0x288]
// 0057d9d5  8b4204               mov eax, dword ptr [edx + 4]
// 0057d9d8  ffd0                 call eax
// 0057d9da  8bc8                 mov ecx, eax
// 0057d9dc  e91ff10400           jmp 0x5ccb00

struct Result {
    int finish();
};

struct Interface {
    virtual void slot0();
    virtual Result* get();
};

struct Object {
    char padding[0x288];
    Interface interfaceObject;
};

struct Owner {
    char padding[0x204];
    Object* object;
};

struct FirstPersonCommand {
    char padding[0x0c];
    Owner* owner;
    int execute();
};

int FirstPersonCommand::execute()
{
    return owner->object->interfaceObject.get()->finish();
}
