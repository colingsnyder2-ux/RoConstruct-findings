// from server: 74% by king_originala
struct Exception {
    char data[40];
};

struct Callback {
    virtual void invoke(void* owner, void* argument) = 0;
};

struct Plugin {
    void dispatch(void* argument, Callback* callback);
};

void Plugin::dispatch(void* argument, Callback* callback)
{
    try {
        void* owner = 0;
        if (this)
            owner = reinterpret_cast<char*>(this) - 0x150;
        callback->invoke(owner, argument);
    }
    catch (Exception exception) {
        throw;
    }
}
