// from server: 90% by atomic.potato
struct S
{
    void f();
};

void* const g1 = (void*)0x9d7294;
void* const g2 = (void*)0x9d7288;
void* const g3 = (void*)0x9d727c;
void* const g4 = (void*)0x9d7274;

void S::f()
{
    *(void**)this = g1;
    *(void**)((char*)this + 4) = g2;
    *(void**)((char*)this + 24) = g3;
    *(void**)((char*)this + 28) = g4;
}
