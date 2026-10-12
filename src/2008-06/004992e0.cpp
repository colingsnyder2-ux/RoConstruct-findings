// from server: 71% by king_originala
struct Node {
    Node* next;
    void* previous;
    char value;
};

typedef void (__cdecl *Callback)(void*, void*);

struct Result {
    Callback callback;
    void* context;
};

Result* __cdecl func(Result* result, void* unused1, Node* first,
                     void* unused2, Node* last,
                     Callback volatile callback, void* volatile context)
{
    while (first != last) {
        callback(&first->value, context);
        first = first->next;
    }
    result->callback = callback;
    result->context = context;
    return result;
}
