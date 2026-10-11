// from server: 100% by colin
// roc 2007-08 004a67c0  unit: RBX::Network::VClient::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a67c0
//
// 004a67c0  56                   push esi
// 004a67c1  57                   push edi
// 004a67c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a67c6  8b8764020000         mov eax, dword ptr [edi + 0x264]
// 004a67cc  8bf1                 mov esi, ecx
// 004a67ce  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a67d1  50                   push eax
// 004a67d2  e8d9b10e00           call 0x5919b0
// 004a67d7  57                   push edi
// 004a67d8  8bce                 mov ecx, esi
// 004a67da  e8a1852600           call 0x70ed80
// 004a67df  5f                   pop edi
// 004a67e0  5e                   pop esi
// 004a67e1  c20400               ret 4

struct Inner {
    void method1(int);
    void method2(void*);
};

struct S {
    char pad[0xc];
    Inner* inner;
    void func(void* arg);
};

void S::func(void* arg)
{
    int v = *(int*)((char*)arg + 0x264);
    inner->method1(v);
    ((Inner*)this)->method2(arg);
}
