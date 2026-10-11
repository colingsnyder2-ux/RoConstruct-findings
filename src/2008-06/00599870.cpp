// from server: 100% by atomic.potato
// roc 2008-06 00599870  unit: RBX::PartInstance  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599870
//
// 00599870  56                   push esi
// 00599871  8bb1c8020000         mov esi, dword ptr [ecx + 0x2c8]
// 00599877  8bce                 mov ecx, esi
// 00599879  e8e2faffff           call 0x599360
// 0059987e  8d86d0000000         lea eax, [esi + 0xd0]
// 00599884  5e                   pop esi
// 00599885  c3                   ret 

struct Inner {
    void method();
    char pad[0xd0];
};

struct Outer {
    char pad[0x2c8];
    Inner* field;
    char* get();
};

char* Outer::get() {
    Inner* p = field;
    p->method();
    return (char*)p + 0xd0;
}
