// from server: 81% by king_originala
struct Message {
    char data[72];
    Message(const Message&);
    ~Message();
};

struct Callback {
    virtual void invoke(void*, Message) = 0;
};

struct Plugin {
    void dispatch(Message, Callback*);
};

void Plugin::dispatch(Message message, Callback* callback)
{
    try {
        void* owner = this ? reinterpret_cast<char*>(this) - 0x130 : 0;
        callback->invoke(owner, message);
    }
    catch (...) {
    }
}
