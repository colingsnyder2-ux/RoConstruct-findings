// from server: 63% by king_originala
void __cdecl release(void *);

struct Allocation
{
    void *pointer;
    __forceinline ~Allocation();
};

struct S
{
    Allocation allocation;
    void __thiscall cleanup();
    __stdcall ~S();
};

__forceinline Allocation::~Allocation()
{
    release(pointer);
}

S::~S()
{
    cleanup();
}
