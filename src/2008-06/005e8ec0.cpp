// from server: 100% by king_originala
// roc 2008-06 005e8ec0  unit: RBX::PhysicsService  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8ec0
//
// 005e8ec0  56                   push esi
// 005e8ec1  8bf1                 mov esi, ecx
// 005e8ec3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e8ec7  57                   push edi
// 005e8ec8  85c9                 test ecx, ecx
// 005e8eca  7445                 je 0x5e8f11
// 005e8ecc  e81f7ceaff           call 0x490af0
// 005e8ed1  85c0                 test eax, eax
// 005e8ed3  743c                 je 0x5e8f11
// 005e8ed5  8bb8e4020000         mov edi, dword ptr [eax + 0x2e4]
// 005e8edb  85f6                 test esi, esi
// 005e8edd  7408                 je 0x5e8ee7
// 005e8edf  8d8630010000         lea eax, [esi + 0x130]
// 005e8ee5  eb02                 jmp 0x5e8ee9
// 005e8ee7  33c0                 xor eax, eax
// 005e8ee9  85ff                 test edi, edi
// 005e8eeb  7409                 je 0x5e8ef6
// 005e8eed  50                   push eax
// 005e8eee  8d4f40               lea ecx, [edi + 0x40]
// 005e8ef1  e88acbffff           call 0x5e5a80
// 005e8ef6  85f6                 test esi, esi
// 005e8ef8  7408                 je 0x5e8f02
// 005e8efa  8d8634010000         lea eax, [esi + 0x134]
// 005e8f00  eb02                 jmp 0x5e8f04
// 005e8f02  33c0                 xor eax, eax
// 005e8f04  85ff                 test edi, edi
// 005e8f06  7409                 je 0x5e8f11
// 005e8f08  50                   push eax
// 005e8f09  8d4f60               lea ecx, [edi + 0x60]
// 005e8f0c  e86fcbffff           call 0x5e5a80
// 005e8f11  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e8f15  85c9                 test ecx, ecx
// 005e8f17  7445                 je 0x5e8f5e
// 005e8f19  e8d27beaff           call 0x490af0
// 005e8f1e  85c0                 test eax, eax
// 005e8f20  743c                 je 0x5e8f5e
// 005e8f22  8bb8e4020000         mov edi, dword ptr [eax + 0x2e4]
// 005e8f28  85f6                 test esi, esi
// 005e8f2a  7408                 je 0x5e8f34
// 005e8f2c  8d8630010000         lea eax, [esi + 0x130]
// 005e8f32  eb02                 jmp 0x5e8f36
// 005e8f34  33c0                 xor eax, eax
// 005e8f36  85ff                 test edi, edi
// 005e8f38  7409                 je 0x5e8f43
// 005e8f3a  50                   push eax
// 005e8f3b  8d4f40               lea ecx, [edi + 0x40]
// 005e8f3e  e85d89e3ff           call 0x4218a0
// 005e8f43  85f6                 test esi, esi
// 005e8f45  7408                 je 0x5e8f4f
// 005e8f47  8d8634010000         lea eax, [esi + 0x134]
// 005e8f4d  eb02                 jmp 0x5e8f51
// 005e8f4f  33c0                 xor eax, eax
// 005e8f51  85ff                 test edi, edi
// 005e8f53  7409                 je 0x5e8f5e
// 005e8f55  50                   push eax
// 005e8f56  8d4f60               lea ecx, [edi + 0x60]
// 005e8f59  e84289e3ff           call 0x4218a0
// 005e8f5e  5f                   pop edi
// 005e8f5f  5e                   pop esi
// 005e8f60  c20800               ret 8

struct Listener {
    void detach(void*);
    void attach(void*);
    unsigned char storage[0x20];
};

struct Connections {
    unsigned char padding[0x40];
    Listener first;
    Listener second;
};

struct Object {
    unsigned char padding[0x2e4];
    Connections* connections;
};

struct Instance {
    Object* getObject();
};

struct PhysicsService {
    unsigned char padding[0x130];
    unsigned int first;
    unsigned int second;

    void change(Instance*, Instance*);
};

void PhysicsService::change(Instance* previous, Instance* current)
{
    if (previous) {
        Object* object = previous->getObject();
        if (object) {
            Connections* connections = object->connections;
            void* listener = this ? &first : 0;
            if (connections)
                connections->first.detach(listener);
            listener = this ? &second : 0;
            if (connections)
                connections->second.detach(listener);
        }
    }

    if (current) {
        Object* object = current->getObject();
        if (object) {
            Connections* connections = object->connections;
            void* listener = this ? &first : 0;
            if (connections)
                connections->first.attach(listener);
            listener = this ? &second : 0;
            if (connections)
                connections->second.attach(listener);
        }
    }
}
