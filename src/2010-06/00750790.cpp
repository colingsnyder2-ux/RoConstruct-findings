// from server: 100% by tester
// roc 2010-06 00750790  unit: RBX::IndexedMesh  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750790
//
// 00750790  56                   push esi
// 00750791  8bf1                 mov esi, ecx
// 00750793  8b06                 mov eax, dword ptr [esi]
// 00750795  8b5020               mov edx, dword ptr [eax + 0x20]
// 00750798  8bce                 mov ecx, esi
// 0075079a  ffd2                 call edx
// 0075079c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0075079f  85c9                 test ecx, ecx
// 007507a1  7405                 je 0x7507a8
// 007507a3  e8e8ffffff           call 0x750790
// 007507a8  8b7618               mov esi, dword ptr [esi + 0x18]
// 007507ab  85f6                 test esi, esi
// 007507ad  75e4                 jne 0x750793
// 007507af  5e                   pop esi
// 007507b0  c3                   ret 

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

    ContentProviderJob* next = *(ContentProviderJob**)((char*)this + 0x18);
    if (next)
        next->f();
}
