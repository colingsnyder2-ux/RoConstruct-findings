// from server: 80% by colin
// roc 2007-08 00691060  unit: CXTSplitterWnd  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691060
//
// 00691060  56                   push esi
// 00691061  8bf1                 mov esi, ecx
// 00691063  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0069106a  7410                 je 0x69107c
// 0069106c  6a00                 push 0
// 0069106e  ff159cd07700         call dword ptr [0x77d09c]
// 00691074  50                   push eax
// 00691075  e8b4f5f9ff           call 0x63062e
// 0069107a  eb05                 jmp 0x691081
// 0069107c  e86b780a00           call 0x7388ec
// 00691081  8b16                 mov edx, dword ptr [esi]
// 00691083  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 00691089  50                   push eax
// 0069108a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069108e  50                   push eax
// 0069108f  8bce                 mov ecx, esi
// 00691091  ffd2                 call edx
// 00691093  5e                   pop esi
// 00691094  c20400               ret 4

extern "C" void* __stdcall GetStockObject(int);
extern "C" void* __cdecl sub_63062E(void*);
extern "C" void* __cdecl sub_7388EC();

struct CXTSplitterWnd {
    int f(int);
};

int CXTSplitterWnd::f(int arg) {
    void* p;
    if (*(int*)((char*)this + 0x104) != 0) {
        p = sub_63062E(GetStockObject(0));
    } else {
        p = sub_7388EC();
    }
    void* (__thiscall *fn)(void*, void*, int);
    fn = *(void* (__thiscall **)(void*, void*, int))((char*)(*(void**)this) + 0x1d4);
    return (int)fn(this, p, arg);
}
