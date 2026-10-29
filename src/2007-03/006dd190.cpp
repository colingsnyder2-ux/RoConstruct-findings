// from server: 100% by tester
// roc 2007-03 006dd190  unit: seg_006d0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dd190
//
// 006dd190  56                   push esi
// 006dd191  8bf1                 mov esi, ecx
// 006dd193  e83a15f4ff           call 0x61e6d2
// 006dd198  6a00                 push 0
// 006dd19a  e8910af9ff           call 0x66dc30
// 006dd19f  8b06                 mov eax, dword ptr [esi]
// 006dd1a1  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006dd1a7  83c404               add esp, 4
// 006dd1aa  8bce                 mov ecx, esi
// 006dd1ac  ffd2                 call edx
// 006dd1ae  8b06                 mov eax, dword ptr [esi]
// 006dd1b0  8b5068               mov edx, dword ptr [eax + 0x68]
// 006dd1b3  8bce                 mov ecx, esi
// 006dd1b5  ffd2                 call edx
// 006dd1b7  5e                   pop esi
// 006dd1b8  c20400               ret 4

struct CXTPPropertyGridInplaceList {
    void f(unsigned int);
};

extern "C" void __cdecl sub_63023e();
extern "C" void __cdecl sub_682740(int);

void CXTPPropertyGridInplaceList::f(unsigned int arg) {
    sub_63023e();
    sub_682740(0);
    (*(void (__thiscall **)(void *))(*(int *)this + 0x160))(this);
    (*(void (__thiscall **)(void *))(*(int *)this + 0x68))(this);
}
