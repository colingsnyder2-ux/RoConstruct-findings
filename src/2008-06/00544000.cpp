// from server: 80% by colin
#pragma optimize("g", off)

struct VChunk { char pad[0x15]; };
char* __cdecl f(VChunk* p);

struct VChunk2 { char pad[8]; };
char* __cdecl f2(VChunk2* p);

struct S {
    char pad[0x18];
    VChunk* chunk;
    char* get();
    char* get2();
    char* get3();
    char* get4();
    void init();
};

char* __cdecl f(VChunk* p) { return p->pad + 0x15; }
char* __cdecl f2(VChunk2* p) { return p->pad + 8; }

char* S::get() { return f(chunk); }
char* S::get2() { return f(chunk); }
char* S::get3() { return f(chunk); }
char* S::get4() { return f(chunk); }

void S::init()
{
    chunk = (VChunk*)f2((VChunk2*)this);
    *f((VChunk*)chunk) = 1;
    *(char**)get() = (char*)chunk;
    *(char**)get2() = (char*)chunk;
    *(char**)get3() = (char*)chunk;
    *(int*)((char*)this + 0x1c) = 0;
}
