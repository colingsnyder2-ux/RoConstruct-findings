// from server: 86% by king_originala
struct Query {
    int (__stdcall **vtable)(Query*, short*);
};

struct Callback {
    virtual void invoke(int value);
};

struct CBrowserView {
    char padding[0xf0];
    Query* query;
    void invoke(Callback* callback);
};

void CBrowserView::invoke(Callback* callback) {
    short value;
    if (query->vtable[31](query, &value) == 0 && value == -1)
        callback->invoke(1);
    else
        callback->invoke(0);
}
