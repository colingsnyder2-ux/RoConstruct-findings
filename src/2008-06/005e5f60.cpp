// from server: 100% by colin
// roc 2008-06 005e5f60  unit: RBX::MotorJoint  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5f60
//
// 005e5f60  8b442404             mov eax, dword ptr [esp + 4]
// 005e5f64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e5f68  3bc1                 cmp eax, ecx
// 005e5f6a  7503                 jne 0x5e5f6f
// 005e5f6c  32c0                 xor al, al
// 005e5f6e  c3                   ret 
// 005e5f6f  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005e5f72  56                   push esi
// 005e5f73  8b701c               mov esi, dword ptr [eax + 0x1c]
// 005e5f76  3bf1                 cmp esi, ecx
// 005e5f78  7504                 jne 0x5e5f7e
// 005e5f7a  32c0                 xor al, al
// 005e5f7c  5e                   pop esi
// 005e5f7d  c3                   ret 
// 005e5f7e  e8bd140000           call 0x5e7440
// 005e5f83  50                   push eax
// 005e5f84  8bce                 mov ecx, esi
// 005e5f86  e8b5140000           call 0x5e7440
// 005e5f8b  50                   push eax
// 005e5f8c  e89f23fcff           call 0x5a8330
// 005e5f91  83c408               add esp, 8
// 005e5f94  33c9                 xor ecx, ecx
// 005e5f96  83f8ff               cmp eax, -1
// 005e5f99  0f94c1               sete cl
// 005e5f9c  8ac1                 mov al, cl
// 005e5f9e  5e                   pop esi
// 005e5f9f  c3                   ret 

namespace RBX {
class Body {
public:
    const char* key() const;
};
class Assembly {
public:
    char pad[0x1c];
    Body* body;
};
int __cdecl compareKeys(const char*, const char*);
bool lessAssembly(const Assembly* a, const Assembly* b)
{
    if (a == b)
        return false;
    const Body* x = a->body;
    const Body* y = b->body;
    if (x == y)
        return false;
    return compareKeys(x->key(), y->key()) == -1;
}
}
