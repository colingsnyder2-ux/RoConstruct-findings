// from server: 100% by king_originala
// roc 2008-06 005e9130  unit: RBX::PhysicsService  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9130
//
// 005e9130  8b442408             mov eax, dword ptr [esp + 8]
// 005e9134  56                   push esi
// 005e9135  50                   push eax
// 005e9136  8bf1                 mov esi, ecx
// 005e9138  e8430efbff           call 0x599f80
// 005e913d  83c404               add esp, 4
// 005e9140  50                   push eax
// 005e9141  8d8eccfeffff         lea ecx, [esi - 0x134]
// 005e9147  e8f4feffff           call 0x5e9040
// 005e914c  5e                   pop esi
// 005e914d  c20800               ret 8

struct PartInstance;

struct GetSetImpl {
    static PartInstance* get(PartInstance* p);
};

struct PhysicsService {
    void g(PartInstance* p);
};

struct S {
    void f(void* unused, PartInstance* p);
};

void S::f(void* unused, PartInstance* p)
{
    PartInstance* part = GetSetImpl::get(p);
    ((PhysicsService*)((char*)this - 0x134))->g(part);
}
