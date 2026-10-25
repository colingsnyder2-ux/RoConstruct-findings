// from server: 100% by king_originala
// roc 2008-06 0064aff0  unit: RBX::SleepStage  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064aff0
//
// 0064aff0  6aff                 push -1
// 0064aff2  686bae7d00           push 0x7dae6b
// 0064aff7  64a100000000         mov eax, dword ptr fs:[0]
// 0064affd  50                   push eax
// 0064affe  64892500000000       mov dword ptr fs:[0], esp
// 0064b005  83ec10               sub esp, 0x10
// 0064b008  56                   push esi
// 0064b009  8b742424             mov esi, dword ptr [esp + 0x24]
// 0064b00d  57                   push edi
// 0064b00e  8bf9                 mov edi, ecx
// 0064b010  57                   push edi
// 0064b011  8bce                 mov ecx, esi
// 0064b013  e818a8ffff           call 0x645830
// 0064b018  6a24                 push 0x24
// 0064b01a  e801590500           call 0x6a0920
// 0064b01f  83c404               add esp, 4
// 0064b022  89442408             mov dword ptr [esp + 8], eax
// 0064b026  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0064b02e  85c0                 test eax, eax
// 0064b030  7409                 je 0x64b03b
// 0064b032  8bc8                 mov ecx, eax
// 0064b034  e8f7aef9ff           call 0x5e5f30
// 0064b039  eb02                 jmp 0x64b03d
// 0064b03b  33c0                 xor eax, eax
// 0064b03d  50                   push eax
// 0064b03e  8bce                 mov ecx, esi
// 0064b040  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0064b048  e893aff9ff           call 0x5e5fe0
// 0064b04d  8b4624               mov eax, dword ptr [esi + 0x24]
// 0064b050  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0064b053  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 0064b059  8b4210               mov eax, dword ptr [edx + 0x10]
// 0064b05c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0064b05f  85c9                 test ecx, ecx
// 0064b061  7405                 je 0x64b068
// 0064b063  e8188efcff           call 0x613e80
// 0064b068  8d4c2428             lea ecx, [esp + 0x28]
// 0064b06c  51                   push ecx
// 0064b06d  8d542410             lea edx, [esp + 0x10]
// 0064b071  52                   push edx
// 0064b072  8d8f00010000         lea ecx, [edi + 0x100]
// 0064b078  e8c3dbf9ff           call 0x5e8c40
// 0064b07d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0064b080  6a01                 push 1
// 0064b082  56                   push esi
// 0064b083  e8f8eaf9ff           call 0x5e9b80
// 0064b088  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0064b08c  5f                   pop edi
// 0064b08d  5e                   pop esi
// 0064b08e  64890d00000000       mov dword ptr fs:[0], ecx
// 0064b095  83c41c               add esp, 0x1c
// 0064b098  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Stage;
struct Body;

struct Joint {
    char storage[36];
    Joint();
};

struct ActiveObject {
    void activate();
};

struct Link3 {
    char pad[44];
    ActiveObject* active;
};

struct Link2 {
    char pad[16];
    Link3* next;
};

struct Link1 {
    char pad[160];
    Link2* next;
};

struct Owner {
    char pad[28];
    Link1* next;
};

struct Body {
    char pad[36];
    Owner* owner;
    void attach(Stage*);
    void setJoint(int);
};

struct InsertResult {
    unsigned int data[3];
};

struct Collection {
    InsertResult insert(Body* const&);
};

struct Manager {
    void update(Body*, int);
};

struct Stage {
    char pad0[12];
    Manager* manager;
    char pad1[240];
    Collection collection;
    void f(Body* volatile);
};

void Stage::f(Body* volatile body)
{
    Body* saved = body;
    saved->attach(this);
    saved->setJoint((int)new Joint);

    ActiveObject* active = saved->owner->next->next->next->active;
    if (active)
        active->activate();

    collection.insert((Body* const&)body);
    manager->update(saved, 1);
}
