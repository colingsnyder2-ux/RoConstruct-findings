// from server: 100% by king_originala
// roc 2008-06 005e9110  unit: RBX::PhysicsService  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9110
//
// 005e9110  8b442408             mov eax, dword ptr [esp + 8]
// 005e9114  56                   push esi
// 005e9115  50                   push eax
// 005e9116  8bf1                 mov esi, ecx
// 005e9118  e8630efbff           call 0x599f80
// 005e911d  83c404               add esp, 4
// 005e9120  50                   push eax
// 005e9121  8d8ed0feffff         lea ecx, [esi - 0x130]
// 005e9127  e844feffff           call 0x5e8f70
// 005e912c  5e                   pop esi
// 005e912d  c20800               ret 8

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
    ((PhysicsService*)((char*)this - 0x130))->g(part);
}
