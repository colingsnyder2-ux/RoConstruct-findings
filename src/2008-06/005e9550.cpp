// from server: 100% by colin
// roc 2008-06 005e9550  unit: RBX::PhysicsService  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9550
//
// 005e9550  55                   push ebp
// 005e9551  57                   push edi
// 005e9552  8be9                 mov ebp, ecx
// 005e9554  33ff                 xor edi, edi
// 005e9556  39bdb0000000         cmp dword ptr [ebp + 0xb0], edi
// 005e955c  7e55                 jle 0x5e95b3
// 005e955e  53                   push ebx
// 005e955f  56                   push esi
// 005e9560  8b85ac000000         mov eax, dword ptr [ebp + 0xac]
// 005e9566  8b34b8               mov esi, dword ptr [eax + edi*4]
// 005e9569  8bce                 mov ecx, esi
// 005e956b  e800e0ffff           call 0x5e7570
// 005e9570  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005e9573  85c9                 test ecx, ecx
// 005e9575  7411                 je 0x5e9588
// 005e9577  8b09                 mov ecx, dword ptr [ecx]
// 005e9579  83f903               cmp ecx, 3
// 005e957c  740e                 je 0x5e958c
// 005e957e  83f901               cmp ecx, 1
// 005e9581  7409                 je 0x5e958c
// 005e9583  83f902               cmp ecx, 2
// 005e9586  7404                 je 0x5e958c
// 005e9588  32db                 xor bl, bl
// 005e958a  eb0a                 jmp 0x5e9596
// 005e958c  8b4824               mov ecx, dword ptr [eax + 0x24]
// 005e958f  b301                 mov bl, 1
// 005e9591  3b711c               cmp esi, dword ptr [ecx + 0x1c]
// 005e9594  7512                 jne 0x5e95a8
// 005e9596  8bce                 mov ecx, esi
// 005e9598  e823edffff           call 0x5e82c0
// 005e959d  84db                 test bl, bl
// 005e959f  7507                 jne 0x5e95a8
// 005e95a1  8bce                 mov ecx, esi
// 005e95a3  e8a8e4ffff           call 0x5e7a50
// 005e95a8  47                   inc edi
// 005e95a9  3bbdb0000000         cmp edi, dword ptr [ebp + 0xb0]
// 005e95af  7caf                 jl 0x5e9560
// 005e95b1  5e                   pop esi
// 005e95b2  5b                   pop ebx
// 005e95b3  5f                   pop edi
// 005e95b4  5d                   pop ebp
// 005e95b5  c20400               ret 4

struct Vector3 { float x, y, z; };

struct Item {
    int getBulletSphereShape() const;
    const Vector3& getValue();
    const void* get();
};

struct Kind {
    int value;
};

struct Link {
    char pad[0x1c];
    Item* item;
};

struct Shape {
    char pad0[0x18];
    Kind* kind;
    char pad1[8];
    Link* link;
};

struct Service {
    char pad[0xac];
    Item** items;
    int count;
    void f(void*);
};

void Service::f(void*)
{
    for (int i = 0; i < count; ++i) {
        Item* item = items[i];
        Shape* shape = (Shape*)item->getBulletSphereShape();
        bool special;

        if (!shape->kind)
            goto ordinary;
        if (shape->kind->value == 3 || shape->kind->value == 1 || shape->kind->value == 2)
            goto chosen;
ordinary:
        special = false;
        goto process;
chosen:
        special = true;
        if (item != shape->link->item)
            continue;
process:

        item->getValue();
        if (!special)
            item->get();
    }
}
