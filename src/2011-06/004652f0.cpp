// roc 2011-06 004652f0  unit: LockPlayModeVerb2  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004652f0
//
// 004652f0  56                   push esi
// 004652f1  8bf1                 mov esi, ecx
// 004652f3  8b06                 mov eax, dword ptr [esi]
// 004652f5  85c0                 test eax, eax
// 004652f7  7418                 je 0x465311
// 004652f9  8b00                 mov eax, dword ptr [eax]
// 004652fb  8d4e08               lea ecx, [esi + 8]
// 004652fe  85c0                 test eax, eax
// 00465300  7409                 je 0x46530b
// 00465302  6a02                 push 2
// 00465304  51                   push ecx
// 00465305  51                   push ecx
// 00465306  ffd0                 call eax
// 00465308  83c40c               add esp, 0xc
// 0046530b  c70600000000         mov dword ptr [esi], 0
// 00465311  5e                   pop esi
// 00465312  c3                   ret 
// copied from an identical function in another client (function ?destroy@UTupleHolder@@QAEXXZ)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
struct UTupleHolder {
    void* ptr;
    char pad[4];
    void destroy();
};

void UTupleHolder::destroy() {
    void* p = ptr;
    if (p != 0) {
        void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))p;
        void* arg = (void*)((char*)this + 8);
        if (fn != 0) {
            fn(arg, arg, (void*)2);
        }
        ptr = 0;
    }
}