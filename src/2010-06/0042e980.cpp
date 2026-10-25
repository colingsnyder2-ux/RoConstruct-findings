// from server: 70% by atomic.potato
// roc 2010-06 0042e980  unit: CObjectBrowser  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042e980
//
// 0042e980  8b442404             mov eax, dword ptr [esp + 4]
// 0042e984  57                   push edi
// 0042e985  50                   push eax
// 0042e986  8bf9                 mov edi, ecx
// 0042e988  e82f9b3700           call 0x7a84bc
// 0042e98d  83f8ff               cmp eax, -1
// 0042e990  742b                 je 0x42e9bd
// 0042e992  8b5760               mov edx, dword ptr [edi + 0x60]
// 0042e995  8b4248               mov eax, dword ptr [edx + 0x48]
// 0042e998  8d4f60               lea ecx, [edi + 0x60]
// 0042e99b  ffd0                 call eax
// 0042e99d  56                   push esi
// 0042e99e  8db7a0000000         lea esi, [edi + 0xa0]
// 0042e9a4  68c4000000           push 0xc4
// 0042e9a9  e852f7ffff           call 0x42e100
// 0042e9ae  83c404               add esp, 4
// 0042e9b1  85c0                 test eax, eax
// 0042e9b3  750f                 jne 0x42e9c4
// 0042e9b5  5e                   pop esi
// 0042e9b6  83c8ff               or eax, 0xffffffff
// 0042e9b9  5f                   pop edi
// 0042e9ba  c20400               ret 4
// 0042e9bd  83c8ff               or eax, 0xffffffff
// 0042e9c0  5f                   pop edi
// 0042e9c1  c20400               ret 4
// 0042e9c4  85f6                 test esi, esi
// 0042e9c6  7403                 je 0x42e9cb
// 0042e9c8  8b7604               mov esi, dword ptr [esi + 4]
// 0042e9cb  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0042e9ce  56                   push esi
// 0042e9cf  6a00                 push 0
// 0042e9d1  6809110000           push 0x1109
// 0042e9d6  51                   push ecx
// 0042e9d7  ff1554ba9e00         call dword ptr [0x9eba54]
// 0042e9dd  50                   push eax
// 0042e9de  e8c9983700           call 0x7a82ac
// 0042e9e3  5e                   pop esi
// 0042e9e4  33c0                 xor eax, eax
// 0042e9e6  5f                   pop edi
// 0042e9e7  c20400               ret 4

struct CObjectBrowser {
    char pad0[0x20];
    void* field20;
    char pad24[0x3c];
    void* field60;
    char pad64[0x3c];
    void* fieldA0;
    int method(int);
};

extern "C" int __stdcall sub_7a84bc(int);
extern "C" int __stdcall sub_7a82ac(int);
extern "C" void* __stdcall sub_42e100(int);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

int CObjectBrowser::method(int a) {
    int r = sub_7a84bc(a);
    if (r == -1) {
        return -1;
    }
    void* p = field60;
    int (*fn)(void*) = *(int (**)(void*))((char*)p + 0x48);
    fn((char*)this + 0x60);
    void* esi = (char*)this + 0xa0;
    void* q = sub_42e100(0xc4);
    if (q == 0) {
        return -1;
    }
    if (esi != 0) {
        esi = *(void**)((char*)esi + 4);
    }
    void* h = field20;
    void* res = SendMessageA(h, 0x1109, 0, (int)esi);
    sub_7a82ac((int)res);
    return 0;
}
