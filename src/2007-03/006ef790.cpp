// from server: 100% by tester
// roc 2007-03 006ef790  unit: seg_006e0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ef790
//
// 006ef790  56                   push esi
// 006ef791  8bf1                 mov esi, ecx
// 006ef793  e8d0e9f2ff           call 0x61e168
// 006ef798  807e6400             cmp byte ptr [esi + 0x64], 0
// 006ef79c  740d                 je 0x6ef7ab
// 006ef79e  8b06                 mov eax, dword ptr [esi]
// 006ef7a0  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006ef7a6  8bce                 mov ecx, esi
// 006ef7a8  5e                   pop esi
// 006ef7a9  ffe2                 jmp edx
// 006ef7ab  5e                   pop esi
// 006ef7ac  c3                   ret 

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
        void (CXTColorHex::*p)() = *(void (CXTColorHex::**)())(*(char**)this + 0x150);
        (this->*p)();
    }
}
