// from server: 100% by king_originala
// roc 2008-06 0057b070  unit: RBX::DataModel  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b070
//
// 0057b070  8b442404             mov eax, dword ptr [esp + 4]
// 0057b074  56                   push esi
// 0057b075  50                   push eax
// 0057b076  8bf1                 mov esi, ecx
// 0057b078  e84376ffff           call 0x5726c0
// 0057b07d  8b96f0010000         mov edx, dword ptr [esi + 0x1f0]
// 0057b083  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0057b089  5e                   pop esi
// 0057b08a  c744240401000000     mov dword ptr [esp + 4], 1
// 0057b092  8b02                 mov eax, dword ptr [edx]
// 0057b094  ffe0                 jmp eax

struct Interface {
    virtual void invoke(int) = 0;
};

struct S {
    char padding[0x1f0];
    void base(void*);
    void f(void*);
};

void S::f(void* argument)
{
    base(argument);
    reinterpret_cast<Interface*>(reinterpret_cast<char*>(this) + 0x1f0)->invoke(1);
}
