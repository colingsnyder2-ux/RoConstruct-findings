// from server: 66% by colin
#pragma optimize("g", off)

struct VChunk;

char* __cdecl f(VChunk*);
char* __cdecl g(VChunk*);
char* __cdecl h(VChunk*);
char* __cdecl i(VChunk*);
char* __cdecl j(VChunk*);

struct S {
    char pad[0x18];
    VChunk* chunk;
    int field1c;
    void construct();
};

void S::construct()
{
    chunk = (VChunk*)f((VChunk*)this);
    *g(chunk) = 1;
    *(VChunk**)h((VChunk*)this) = chunk;
    *(VChunk**)i((VChunk*)this) = chunk;
    *(VChunk**)j((VChunk*)this) = chunk;
    field1c = 0;
}
