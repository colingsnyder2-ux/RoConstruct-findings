// from server: 100% by king_originala
// roc 2008-06 0064a6c0  unit: RBX::CleanStage  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a6c0
//
// 0064a6c0  83ec30               sub esp, 0x30
// 0064a6c3  56                   push esi
// 0064a6c4  8b742438             mov esi, dword ptr [esp + 0x38]
// 0064a6c8  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0064a6cb  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0064a6ce  8b8aa0000000         mov ecx, dword ptr [edx + 0xa0]
// 0064a6d4  8d442404             lea eax, [esp + 4]
// 0064a6d8  50                   push eax
// 0064a6d9  e8029efcff           call 0x6144e0
// 0064a6de  807e5400             cmp byte ptr [esi + 0x54], 0
// 0064a6e2  7412                 je 0x64a6f6
// 0064a6e4  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0064a6e7  034e58               add ecx, dword ptr [esi + 0x58]
// 0064a6ea  8b4660               mov eax, dword ptr [esi + 0x60]
// 0064a6ed  ffd0                 call eax
// 0064a6ef  d95e50               fstp dword ptr [esi + 0x50]
// 0064a6f2  c6465400             mov byte ptr [esi + 0x54], 0
// 0064a6f6  d94650               fld dword ptr [esi + 0x50]
// 0064a6f9  8b7618               mov esi, dword ptr [esi + 0x18]
// 0064a6fc  51                   push ecx
// 0064a6fd  d954243c             fst dword ptr [esp + 0x3c]
// 0064a701  8d4c2408             lea ecx, [esp + 8]
// 0064a705  d91c24               fstp dword ptr [esp]
// 0064a708  83c608               add esi, 8
// 0064a70b  51                   push ecx
// 0064a70c  8bce                 mov ecx, esi
// 0064a70e  e80de30100           call 0x668a20
// 0064a713  d90588748200         fld dword ptr [0x827488]
// 0064a719  83ec08               sub esp, 8
// 0064a71c  d95c2404             fstp dword ptr [esp + 4]
// 0064a720  8d54240c             lea edx, [esp + 0xc]
// 0064a724  d9442440             fld dword ptr [esp + 0x40]
// 0064a728  8bce                 mov ecx, esi
// 0064a72a  d91c24               fstp dword ptr [esp]
// 0064a72d  52                   push edx
// 0064a72e  e8bde30100           call 0x668af0
// 0064a733  5e                   pop esi
// 0064a734  83c430               add esp, 0x30
// 0064a737  c20400               ret 4

struct Transform {
    float data[12];
};

struct Source {
    void read(Transform* result);
};

struct Node {
    char padding[0xA0];
    Source* source;
};

struct Link {
    char padding[0x1C];
    Node* node;
};

struct Controller {
    void apply(Transform* transform, float depth);
    void finish(Transform* transform, float depth, float scale);
};

struct Owner {
    char padding[8];
    Controller controller;
};

typedef float (__thiscall* Getter)(void*);

struct Object {
    char padding0[0x18];
    Owner* owner;
    char padding1[8];
    Link* link;
    char padding2[0x28];
    float depth;
    unsigned char dirty;
    char padding3[3];
    char* context;
    int reserved;
    Getter getter;
    int adjustment;
};

extern const float scale;

#pragma float_control(precise, off, push)

void __stdcall update(Object* object)
{
    Transform transform;
    object->link->node->source->read(&transform);

    if (object->dirty) {
        object->depth = object->getter(object->context + object->adjustment);
        object->dirty = 0;
    }

    float depth = object->depth;
    Controller* controller = &object->owner->controller;
    controller->apply(&transform, depth);
    controller->finish(&transform, depth, scale);
}

#pragma float_control(pop)
