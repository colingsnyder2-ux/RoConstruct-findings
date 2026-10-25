// from server: 100% by king_originala
// roc 2008-06 004aafd0  unit: RBX::Network::Replicator  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aafd0
//
// 004aafd0  56                   push esi
// 004aafd1  8bf1                 mov esi, ecx
// 004aafd3  83be502d000000       cmp dword ptr [esi + 0x2d50], 0
// 004aafda  741f                 je 0x4aaffb
// 004aafdc  8b96582d0000         mov edx, dword ptr [esi + 0x2d58]
// 004aafe2  8b8e502d0000         mov ecx, dword ptr [esi + 0x2d50]
// 004aafe8  8b01                 mov eax, dword ptr [ecx]
// 004aafea  8b4064               mov eax, dword ptr [eax + 0x64]
// 004aafed  6a00                 push 0
// 004aafef  6a01                 push 1
// 004aaff1  52                   push edx
// 004aaff2  8b96542d0000         mov edx, dword ptr [esi + 0x2d54]
// 004aaff8  52                   push edx
// 004aaff9  ffd0                 call eax
// 004aaffb  6a00                 push 0
// 004aaffd  8bce                 mov ecx, esi
// 004aafff  e8ecf80a00           call 0x55a8f0
// 004ab004  5e                   pop esi
// 004ab005  c3                   ret 

struct Object {
    typedef void (__thiscall *Method)(Object*, int, int, int, int);
    Method* table;
};

struct S {
    char padding[0x2d50];
    Object* object;
    int first;
    int second;

    void f();
    void finish(int);
};

void S::f()
{
    if (object)
        object->table[25](object, first, second, 1, 0);
    finish(0);
}
