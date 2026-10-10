// from server: 40% by colin
struct RefCounted {
    void AddRef();
    void Release();
};

struct LuaFunctionRef {
    void* vtable;
    RefCounted* refcount;
    char pad0[8];
    void* node;
    void* prev;
    void* next;
    void* value;
    void* value2;
    void assign(LuaFunctionRef* other);
};

void LuaFunctionRef::assign(LuaFunctionRef* other) {
    if (this->value != other->value) {
        RefCounted* rc = this->refcount;
        rc->AddRef();
        this->vtable = 0;
        void* v = other->value;
        this->value = v;
        if (v != 0) {
            void* p = 0;
            this->value2 = 0;
        }
        rc->Release();
    }
    if (this->node != other->node) {
        RefCounted* rc = this->refcount;
        rc->AddRef();
        if (this->node != 0) {
            void* n = this->node;
            void* a = this->prev;
            if (a != 0) {
                *(void**)((char*)a + 0x10) = n;
            }
            void* b = this->next;
            if (b != 0) {
                *(void**)((char*)b + 0x14) = this->prev;
            }
            void* c = this->node;
            if (*(void**)c == this) {
                *(void**)c = this->next;
            }
            this->next = 0;
            this->prev = 0;
        }
        void* d = other->node;
        this->node = d;
        if (d != 0) {
            void* e = *(void**)d;
            if (e != 0) {
                this->next = e;
                *(void**)((char*)e + 0x10) = this;
            } else {
                this->next = 0;
            }
            void* f = this->node;
            this->prev = 0;
            *(void**)f = this;
        }
        rc->Release();
    }
}
