// from server: 100% by colin
// roc 2007-08 006c6a40  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6a40
//
// 006c6a40  56                   push esi
// 006c6a41  8bf1                 mov esi, ecx
// 006c6a43  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006c6a49  e842dcf7ff           call 0x644690
// 006c6a4e  8b06                 mov eax, dword ptr [esi]
// 006c6a50  8b5070               mov edx, dword ptr [eax + 0x70]
// 006c6a53  6a01                 push 1
// 006c6a55  8bce                 mov ecx, esi
// 006c6a57  ffd2                 call edx
// 006c6a59  5e                   pop esi
// 006c6a5a  c3                   ret 

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
