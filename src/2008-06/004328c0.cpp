// from server: 77% by king_originala
extern "C" void (__stdcall* InitializeCriticalSection)(void*);

struct S {
    S();
};

S::S()
{
    try {
        InitializeCriticalSection(this);
    }
    catch (...) {
        throw 0;
    }
}
