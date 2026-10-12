// from server: 100% by king_originala
// roc 2008-06 0048b8a0  unit: boost::any::placeholder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b8a0
//
// 0048b8a0  56                   push esi
// 0048b8a1  57                   push edi
// 0048b8a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0048b8a6  8bf1                 mov esi, ecx
// 0048b8a8  57                   push edi
// 0048b8a9  8d4c2410             lea ecx, [esp + 0x10]
// 0048b8ad  e81e6a0800           call 0x5122d0
// 0048b8b2  85f6                 test esi, esi
// 0048b8b4  7405                 je 0x48b8bb
// 0048b8b6  8d4614               lea eax, [esi + 0x14]
// 0048b8b9  eb02                 jmp 0x48b8bd
// 0048b8bb  33c0                 xor eax, eax
// 0048b8bd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b8c1  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0048b8c4  8b11                 mov edx, dword ptr [ecx]
// 0048b8c6  53                   push ebx
// 0048b8c7  8d5c2410             lea ebx, [esp + 0x10]
// 0048b8cb  53                   push ebx
// 0048b8cc  50                   push eax
// 0048b8cd  8b420c               mov eax, dword ptr [edx + 0xc]
// 0048b8d0  ffd0                 call eax
// 0048b8d2  83c708               add edi, 8
// 0048b8d5  57                   push edi
// 0048b8d6  8d4c2414             lea ecx, [esp + 0x14]
// 0048b8da  e8f1690800           call 0x5122d0
// 0048b8df  5b                   pop ebx
// 0048b8e0  85f6                 test esi, esi
// 0048b8e2  7405                 je 0x48b8e9
// 0048b8e4  8d4614               lea eax, [esi + 0x14]
// 0048b8e7  eb02                 jmp 0x48b8eb
// 0048b8e9  33c0                 xor eax, eax
// 0048b8eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048b8ef  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0048b8f2  8b11                 mov edx, dword ptr [ecx]
// 0048b8f4  8d74240c             lea esi, [esp + 0xc]
// 0048b8f8  56                   push esi
// 0048b8f9  50                   push eax
// 0048b8fa  8b420c               mov eax, dword ptr [edx + 0xc]
// 0048b8fd  ffd0                 call eax
// 0048b8ff  5f                   pop edi
// 0048b900  5e                   pop esi
// 0048b901  c20c00               ret 0xc

struct Vector2 {
    float x, y;
};

struct Vector2int16 {
    short x, y;
    void convert(const Vector2* source);
};

struct Receiver;
struct ReceiverVTable {
    void* unused[3];
    void (__thiscall* invoke)(Receiver*, void*, const Vector2int16*);
};

struct Receiver {
    ReceiverVTable* vtable;
};

struct Context {
    char padding[24];
    Receiver* receiver;
};

struct S {
    char padding[20];
    void f(const Vector2* points, Context* first, Context* second);
};

void S::f(const Vector2* points, Context* first, Context* second)
{
    {
        Vector2int16 value;
        value.convert(points);
        first->receiver->vtable->invoke(
            first->receiver,
            this ? reinterpret_cast<char*>(this) + 20 : 0,
            &value);
    }

    {
        Vector2int16 value;
        value.convert(points + 1);
        second->receiver->vtable->invoke(
            second->receiver,
            this ? reinterpret_cast<char*>(this) + 20 : 0,
            &value);
    }
}
