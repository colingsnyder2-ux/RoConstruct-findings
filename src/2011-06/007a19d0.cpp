// from server: 100% by tester
// roc 2011-06 007a19d0  unit: RBX::IndexedMesh  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a19d0
//
// 007a19d0  56                   push esi
// 007a19d1  8bf1                 mov esi, ecx
// 007a19d3  8b06                 mov eax, dword ptr [esi]
// 007a19d5  8b5020               mov edx, dword ptr [eax + 0x20]
// 007a19d8  8bce                 mov ecx, esi
// 007a19da  ffd2                 call edx
// 007a19dc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007a19df  85c9                 test ecx, ecx
// 007a19e1  7405                 je 0x7a19e8
// 007a19e3  e8e8ffffff           call 0x7a19d0
// 007a19e8  8b761c               mov esi, dword ptr [esi + 0x1c]
// 007a19eb  85f6                 test esi, esi
// 007a19ed  75e4                 jne 0x7a19d3
// 007a19ef  5e                   pop esi
// 007a19f0  c3                   ret 

extern "C" void G1_func_00905e00();

struct ContentProviderJob
{
    void f();
};

void ContentProviderJob::f()
{
    (*(void (__thiscall **)(ContentProviderJob*))(*(int*)this + 0x20))(this);

    ContentProviderJob* child = *(ContentProviderJob**)((char*)this + 4);
    if (child)
        child->f();

    ContentProviderJob* next = *(ContentProviderJob**)((char*)this + 0x1c);
    if (next)
        next->f();
}
