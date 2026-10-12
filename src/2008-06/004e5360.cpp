// from server: 98% by colin
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S {
    char storage[44];
    S();
};

extern S* globalInstance;

void __cdecl initializeInstance()
{
    globalInstance = new S;
}
