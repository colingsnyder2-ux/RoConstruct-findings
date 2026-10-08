// from server: 100% by colin
// roc 2007-08 00402870  unit: std::bad_alloc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402870
//
// 00402870  8b01                 mov eax, dword ptr [ecx]
// 00402872  50                   push eax
// 00402873  ff15c4e67700         call dword ptr [0x77e6c4]
// 00402879  59                   pop ecx
// 0040287a  c3                   ret 

extern "C" void (*free)(void*);

struct S {
    void* p;
    void f();
};

void S::f() {
    free(p);
}
