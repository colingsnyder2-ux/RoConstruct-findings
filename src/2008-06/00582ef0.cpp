// from server: 93% by colin
// roc 2008-06 00582ef0  unit: RBX::ControllerCommand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582ef0
//
// 00582ef0  56                   push esi
// 00582ef1  8bf1                 mov esi, ecx
// 00582ef3  6a01                 push 1
// 00582ef5  8d4e14               lea ecx, [esi + 0x14]
// 00582ef8  e8c3edffff           call 0x581cc0
// 00582efd  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00582f03  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00582f06  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582f09  c1f903               sar ecx, 3
// 00582f0c  85c9                 test ecx, ecx
// 00582f0e  7704                 ja 0x582f14
// 00582f10  32c0                 xor al, al
// 00582f12  5e                   pop esi
// 00582f13  c3                   ret 
// 00582f14  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00582f17  85c9                 test ecx, ecx
// 00582f19  7419                 je 0x582f34
// 00582f1b  e8b0d6ffff           call 0x5805d0
// 00582f20  6850d55700           push 0x57d550
// 00582f25  8bc8                 mov ecx, eax
// 00582f27  e884beffff           call 0x57edb0
// 00582f2c  f7d8                 neg eax
// 00582f2e  1bc0                 sbb eax, eax
// 00582f30  f7d8                 neg eax
// 00582f32  5e                   pop esi
// 00582f33  c3                   ret 
// 00582f34  33c0                 xor eax, eax
// 00582f36  6850d55700           push 0x57d550
// 00582f3b  8bc8                 mov ecx, eax
// 00582f3d  e86ebeffff           call 0x57edb0
// 00582f42  f7d8                 neg eax
// 00582f44  1bc0                 sbb eax, eax
// 00582f46  f7d8                 neg eax
// 00582f48  5e                   pop esi
// 00582f49  c3                   ret 

struct Entry {
    unsigned long first;
    unsigned long second;
};

struct Container {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Object {
    char padding[0x154];
    Container* container;
};

struct Handle {
    Object* get(int);
    char padding[12];
};

struct Query {
    void* cast(const void*);
};

struct Source {
    Query* get();
};

struct ControllerCommand {
    char padding[0x14];
    Handle handle;
    Source* source;
    bool execute();
};

bool ControllerCommand::execute()
{
    Container* container = handle.get(1)->container;
    if ((unsigned int)(container->last - container->first) <= 0)
        return false;

    if (source) {
        Query* query = source->get();
        return query->cast((const void*)0x57d550) != 0;
    } else {
        Query* query = 0;
        return query->cast((const void*)0x57d550) != 0;
    }
}
