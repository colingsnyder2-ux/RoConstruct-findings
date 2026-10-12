// from server: 75% by king_originala
struct S_func_004e5b30 {
    virtual ~S_func_004e5b30();
};

struct S : S_func_004e5b30 {
    virtual ~S();
    void cleanup();
};

#pragma optimize("", off)
S::~S()
{
    cleanup();
}
