// from server: 90% by king_originala
struct List;
struct Node;

struct Proxy {
    List* owner;
};

struct Node {
    Node* next;
    Node* prev;
    void (__cdecl *callback)();
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct List {
    Proxy* proxy;
    unsigned char padding[16];
    Node* head;
    unsigned int size;

    void erase(Iterator* result, Proxy* owner, Node* node);
    void clear();
};

extern unsigned long tlsIndex;
extern int referenceCount;

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void*);
    extern void (__stdcall *LeaveCriticalSection)(void*);
    extern void* (__stdcall *TlsGetValue)(unsigned long);
    extern int (__stdcall *TlsSetValue)(unsigned long, void*);
    extern void (__cdecl *_invalid_parameter_noinfo)();

    void __cdecl initialize(void (__cdecl *)(), int*);
    void __cdecl deallocate(void*);
}

void cleanup()
{
    Iterator result;
    void (__cdecl *initializationCallback)() =
        reinterpret_cast<void (__cdecl *)()>(0x61a080);

    initialize(initializationCallback, reinterpret_cast<int*>(0x97bf54));
    EnterCriticalSection(reinterpret_cast<void*>(0x97bf3c));

    if (tlsIndex == ~0UL) {
        LeaveCriticalSection(reinterpret_cast<void*>(0x97bf3c));
        return;
    }

    List* list = static_cast<List*>(TlsGetValue(tlsIndex));
    if (list && TlsSetValue(tlsIndex, 0)) {
        --referenceCount;
        LeaveCriticalSection(reinterpret_cast<void*>(0x97bf3c));

        if (list->size != 0) {
            void (__cdecl *invalid)() = _invalid_parameter_noinfo;
            do {
                Node* node = list->head->next;
                List* owner;
                if (!list->proxy) {
                    invalid();
                    owner = 0;
                } else {
                    owner = list->proxy->owner;
                }

                if (node == owner->head)
                    invalid();

                if (node->callback)
                    node->callback();

                list->erase(&result, list->proxy, list->head->next);
            } while (list->size != 0);
        }

        list->clear();
        deallocate(list->proxy);
        deallocate(list);
    } else {
        LeaveCriticalSection(reinterpret_cast<void*>(0x97bf3c));
    }
}
