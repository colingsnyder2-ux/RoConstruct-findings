// from server: 11% by colin


extern "C" {
    void* __cdecl func_006a0920(unsigned int size);
    void  __cdecl func_006a067a(void* p);
}

struct SpawnerService;

struct SpawnerServiceVtable {
    void* slots[1];
};

struct SpawnerService {
    void* vtable;
    char pad[0x14];
    void* field_18;
    SpawnerService* construct(void* a, void* b, void* c, void* d, void* e);
};

struct Helper {
    void* vtable;
    SpawnerService* owner;
    void* f8;
    void* fc;
    void* f10;
    void* f14;
    void* f18;
};

void* __cdecl func_005d2760(void* a, void* b);

void* __cdecl func_0040a290(SpawnerService* self, void* p);

SpawnerService* SpawnerService::construct(void* a, void* b, void* c, void* d, void* e) {
    void* tmp = func_005d2760(a, b);
    func_0040a290(this, tmp);
    this->vtable = (void*)0x80bc18;
    Helper* h = (Helper*)func_006a0920(0x20);
    if (h) {
        h->vtable = (void*)0x83bc7c;
        h->owner = this;
        h->f8 = c;
        h->fc = d;
        h->f10 = 0;
        h->f14 = 0;
        h->f18 = 0;
    }
    void* old = this->field_18;
    if (h != old) {
        if (old) {
            func_006a067a(old);
        }
    }
    this->field_18 = h;
    return this;
}
