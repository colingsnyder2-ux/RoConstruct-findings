// from server: 58% by atomic.potato
// roc 2009-06 005dc720  unit: RBX::VInstance::?$NonFactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dc720
//
// 005dc720  53                   push ebx
// 005dc721  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005dc725  56                   push esi
// 005dc726  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dc72a  3bf3                 cmp esi, ebx
// 005dc72c  742a                 je 0x5dc758
// 005dc72e  57                   push edi
// 005dc72f  8d7e08               lea edi, [esi + 8]
// 005dc732  8b06                 mov eax, dword ptr [esi]
// 005dc734  85c0                 test eax, eax
// 005dc736  7415                 je 0x5dc74d
// 005dc738  8b00                 mov eax, dword ptr [eax]
// 005dc73a  85c0                 test eax, eax
// 005dc73c  7409                 je 0x5dc747
// 005dc73e  6a02                 push 2
// 005dc740  57                   push edi
// 005dc741  57                   push edi
// 005dc742  ffd0                 call eax
// 005dc744  83c40c               add esp, 0xc
// 005dc747  c70600000000         mov dword ptr [esi], 0
// 005dc74d  83c620               add esi, 0x20
// 005dc750  83c720               add edi, 0x20
// 005dc753  3bf3                 cmp esi, ebx
// 005dc755  75db                 jne 0x5dc732
// 005dc757  5f                   pop edi
// 005dc758  5e                   pop esi
// 005dc759  5b                   pop ebx
// 005dc75a  c3                   ret 

struct Elem {
    void* vtbl;
    char pad[0x1c];
};

struct S {
    static void f(Elem* first, Elem* last);
};

void S::f(Elem* first, Elem* last) {
    if (first == last)
        return;
    Elem* p = first;
    char* q = (char*)first + 8;
    do {
        void** v = (void**)p->vtbl;
        if (v != 0) {
            void* fn = *v;
            if (fn != 0) {
                typedef void (__stdcall *F)(int, void*, void*);
                ((F)fn)(2, q, q);
            }
            p->vtbl = 0;
        }
        p = (Elem*)((char*)p + 0x20);
        q += 0x20;
    } while (p != last);
}
