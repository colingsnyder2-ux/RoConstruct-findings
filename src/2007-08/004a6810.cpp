// from server: 77% by colin
// roc 2007-08 004a6810  unit: RBX::Network::Replicator  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a6810
//
// 004a6810  8b01                 mov eax, dword ptr [ecx]
// 004a6812  8b5044               mov edx, dword ptr [eax + 0x44]
// 004a6815  ffd2                 call edx
// 004a6817  85c0                 test eax, eax
// 004a6819  7434                 je 0x4a684f
// 004a681b  8b8018010000         mov eax, dword ptr [eax + 0x118]
// 004a6821  85c0                 test eax, eax
// 004a6823  742a                 je 0x4a684f
// 004a6825  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 004a682b  8b5104               mov edx, dword ptr [ecx + 4]
// 004a682e  8d8c02ec000000       lea ecx, [edx + eax + 0xec]
// 004a6835  8b01                 mov eax, dword ptr [ecx]
// 004a6837  8b10                 mov edx, dword ptr [eax]
// 004a6839  ffd2                 call edx
// 004a683b  85c0                 test eax, eax
// 004a683d  7410                 je 0x4a684f
// 004a683f  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 004a6845  50                   push eax
// 004a6846  e8655d1000           call 0x5ac5b0
// 004a684b  83c404               add esp, 4
// 004a684e  c3                   ret 
// 004a684f  33c0                 xor eax, eax
// 004a6851  c3                   ret 

struct Replicator {
    virtual void* getSomething();

    int doWork();
};

struct Inner {
    virtual void* getInner();
};

struct Outer {
    int field_0xec;
};

struct Holder {
    int pad[0x3b];
    Outer* ptr;
};

struct Final {
    int pad[0x76];
    int value;
};

extern "C" int __cdecl sub_5ac5b0(int);

int Replicator::doWork() {
    void* a = getSomething();
    if (!a) return 0;
    void* b = *(void**)((char*)a + 0x118);
    if (!b) return 0;
    int off = *(int*)((char*)b + 0xec);
    int delta = *(int*)(off + 4);
    char* c = (char*)b + off + 0xec + delta;
    void* d = *(void**)c;
    void* e = *(void**)d;
    int (*fn)() = (int(*)())e;
    void* f = (void*)fn();
    if (!f) return 0;
    int val = *(int*)((char*)f + 0x1d8);
    return sub_5ac5b0(val);
}
