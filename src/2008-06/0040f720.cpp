// from server: 38% by colin
// roc 2008-06 0040f720  unit: VCApp::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f720
//
// 0040f720  8b442404             mov eax, dword ptr [esp + 4]
// 0040f724  ff4018               inc dword ptr [eax + 0x18]
// 0040f727  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040f72a  c20400               ret 4

struct Object {
    void* operator new(size_t size, void* pool);
    void operator delete(void* p, void* pool);
    void operator delete(void* p);
};

void* Object::operator new(size_t size, void* pool) {
    void* mem = pool;
    *(void**)mem = pool;
    return (char*)mem + sizeof(void*);
}

void Object::operator delete(void* p, void* pool) {
    pool = (char*)p - sizeof(void*);
    void** ptr = (void**)pool;
    if (*ptr == pool) {
        *ptr = 0;
    }
}

void Object::operator delete(void* p) {
    p = (char*)p - sizeof(void*);
    void** ptr = (void**)p;
    if (*ptr == p) {
        *ptr = 0;
    }
}
