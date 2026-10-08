// from server: 100% by colin
// roc 2007-08 00708490  unit: CXTColorHex  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00708490
//
// 00708490  56                   push esi
// 00708491  8bf1                 mov esi, ecx
// 00708493  e83c78f2ff           call 0x62fcd4
// 00708498  807e6400             cmp byte ptr [esi + 0x64], 0
// 0070849c  740d                 je 0x7084ab
// 0070849e  8b06                 mov eax, dword ptr [esi]
// 007084a0  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 007084a6  8bce                 mov ecx, esi
// 007084a8  5e                   pop esi
// 007084a9  ffe2                 jmp edx
// 007084ab  5e                   pop esi
// 007084ac  c3                   ret 

struct CXTColorHex {
    void base();
    void func();
    char pad[0x64];
    char flag;
};

void CXTColorHex::func()
{
    base();
    if (flag != 0) {
        void (CXTColorHex::*p)() = *(void (CXTColorHex::**)())(*(char**)this + 0x144);
        (this->*p)();
    }
}
