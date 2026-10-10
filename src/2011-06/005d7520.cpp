// from server: 74% by atomic.potato
struct S
{
    void ActionStation(int* result);
};

extern "C" void __stdcall CallTarget(void*, int*);

void S::ActionStation(int* result)
{
    CallTarget((char*)this - 192, result);
}
