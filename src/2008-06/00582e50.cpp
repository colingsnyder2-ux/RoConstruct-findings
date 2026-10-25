// from server: 100% by king_originala
// roc 2008-06 00582e50  unit: RBX::TrackCameraCommand  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582e50
//
// 00582e50  56                   push esi
// 00582e51  8bf1                 mov esi, ecx
// 00582e53  6a01                 push 1
// 00582e55  8d4e14               lea ecx, [esi + 0x14]
// 00582e58  e863eeffff           call 0x581cc0
// 00582e5d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00582e63  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00582e66  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582e69  c1f903               sar ecx, 3
// 00582e6c  85c9                 test ecx, ecx
// 00582e6e  7704                 ja 0x582e74
// 00582e70  32c0                 xor al, al
// 00582e72  5e                   pop esi
// 00582e73  c3                   ret 
// 00582e74  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00582e77  85c9                 test ecx, ecx
// 00582e79  7407                 je 0x582e82
// 00582e7b  e83025e9ff           call 0x4153b0
// 00582e80  eb02                 jmp 0x582e84
// 00582e82  33c0                 xor eax, eax
// 00582e84  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00582e8a  8b5010               mov edx, dword ptr [eax + 0x10]
// 00582e8d  2b500c               sub edx, dword ptr [eax + 0xc]
// 00582e90  33c0                 xor eax, eax
// 00582e92  83e2f8               and edx, 0xfffffff8
// 00582e95  83fa08               cmp edx, 8
// 00582e98  0f94c0               sete al
// 00582e9b  5e                   pop esi
// 00582e9c  c3                   ret 

struct Entry {
    char data[8];
};

struct Collection {
    char padding[0xC];
    Entry* begin;
    Entry* end;
};

struct Object {
    char padding[0x154];
    Collection* collection;
};

struct Handle {
    char padding[0xC];
    Object* get(int);
};

struct Reference {
    Object* get();
};

struct TrackCameraCommand {
    char padding[0x14];
    Handle handle;
    Reference* reference;
    bool isTracking();
};

bool TrackCameraCommand::isTracking()
{
    Collection* first = handle.get(1)->collection;
    if ((unsigned)(first->end - first->begin) <= 0)
        return false;

    Object* object = reference ? reference->get() : 0;
    Collection* second = object->collection;
    return (unsigned)(second->end - second->begin) == 1;
}
