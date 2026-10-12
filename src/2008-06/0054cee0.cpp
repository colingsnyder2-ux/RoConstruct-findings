// from server: 28% by colin
struct VChunk {
    char pad[0x2d];
};

struct VChunk8 {
    char pad[0x8];
};

struct VChunk4 {
    char pad[4];
};

char* __cdecl f8(VChunk8* p);
char* __cdecl f2d(VChunk* p);
void* __cdecl identity(void* arg);
char* __cdecl getPointer(VChunk4* p);

struct S {
    char pad[0x18];
    VChunk4* pointer;
    char* getPointerMember();
};

char* S::getPointerMember() {
    return getPointer(pointer);
}

struct Mesh {
    char pad[0x18];
    VChunk4* pointer;
    void insert(void* node);
    char* getPointerMember();
};

char* Mesh::getPointerMember() {
    return getPointer(pointer);
}

void Mesh::insert(void* node) {
    void* a = identity(node);
    void* saved = *(void**)a;

    char* p1 = f8((VChunk8*)saved);
    void* r1 = identity(node);
    *(void**)r1 = *(void**)p1;

    char* p2 = f8((VChunk8*)saved);
    char* p3 = f2d(*(VChunk**)p2);
    if (*p3 == 0) {
        char* p4 = f8((VChunk8*)saved);
        void* r2 = f2d(*(VChunk**)p4);
        *(void**)r2 = node;
    }

    void* r3 = f2d((VChunk*)node);
    void* r4 = f2d((VChunk*)saved);
    *(void**)r3 = *(void**)r4;

    char* self = getPointerMember();
    if (node == *(void**)self) {
        char* self2 = getPointerMember();
        *(void**)self2 = saved;
    } else {
        void* r5 = f2d((VChunk*)node);
        void* r6 = f8((VChunk8*)*(void**)r5);
        if (node == *(void**)r6) {
            void* r7 = f2d((VChunk*)node);
            void* r8 = f8((VChunk8*)*(void**)r7);
            *(void**)r8 = saved;
        } else {
            void* r9 = f2d((VChunk*)node);
            void* r10 = identity(*(void**)r9);
            *(void**)r10 = saved;
        }
    }

    void* r11 = f8((VChunk8*)saved);
    *(void**)r11 = node;

    void* r12 = f2d((VChunk*)node);
    *(void**)r12 = saved;
}
