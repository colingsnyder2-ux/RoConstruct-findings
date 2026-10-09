// roc 2007-03 006b1cc0  unit: seg_006b0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b1cc0
//
// 006b1cc0  56                   push esi
// 006b1cc1  8bf1                 mov esi, ecx
// 006b1cc3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006b1cc9  e8727df8ff           call 0x639a40
// 006b1cce  8b06                 mov eax, dword ptr [esi]
// 006b1cd0  8b5070               mov edx, dword ptr [eax + 0x70]
// 006b1cd3  6a01                 push 1
// 006b1cd5  8bce                 mov ecx, esi
// 006b1cd7  ffd2                 call edx
// 006b1cd9  5e                   pop esi
// 006b1cda  c3                   ret 
// copied from an identical function in another client (function ?method@Outer@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct Inner {
    void method();
};

struct Outer {
    char pad[0xfc];
    Inner* inner;
    void method();
};

void Outer::method()
{
    inner->method();
    (*(void (__thiscall**)(Outer*, int))(*(int*)this + 0x70))(this, 1);
}
}
