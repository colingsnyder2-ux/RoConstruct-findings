// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct String {
    const char* __thiscall c_str() const;
};

struct Name {
    int unused;
    String text;
};

struct Node {
    int unused;
    Name* name;
    char padding[0x9c];
    void* children;
    int reserved[2];
    unsigned int first;
    unsigned int last;
};

struct Reference {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Target {
    int invoke(int, int);
};

struct Manager {
    char padding[0x130];
    Target* target;
    int invoke(int, int);
};

struct Shared {
    Manager* object;
    Reference* reference;

    ~Shared() {
        Reference* p = reference;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

Shared __cdecl getManager();

struct Declaration {
    char padding[0x130];
    unsigned char visible;
    unsigned char restricted;
    unsigned char special;
};

struct Settings {
    char padding[0x130];
    unsigned char allowRestricted;
    unsigned char allowSpecial;
};

Settings* __cdecl getSettings();

struct Iterator {
    void* container;
    unsigned int index;
};

struct __multiple_inheritance CDeclarationView;

struct Callback {
    void (__thiscall CDeclarationView::*function)(Node*);
    CDeclarationView* object;
    int unused;
};

Iterator __cdecl visitChildren(Iterator, Iterator, Callback);

struct ViewBase1 {};
struct ViewBase2 {};

struct __multiple_inheritance CDeclarationView : ViewBase1, ViewBase2 {
    void func(Node*);
    void* insert(int, const char*, int, int, int, int, int, unsigned int, unsigned int);
    void setItem(void*, int, int, int, int, int, int, Node*);
    void configure(void*, Declaration*);
};

void CDeclarationView::func(Node* node) {
    Declaration* declaration;
    {
        Shared manager = getManager();
        declaration = reinterpret_cast<Declaration*>(
            manager.object->invoke(reinterpret_cast<int>(node), 0));
    }

    bool show = true;
    if (declaration) {
        Settings* settings = getSettings();
        if (declaration->restricted && !settings->allowRestricted)
            show = false;
        else if (declaration->special && !settings->allowSpecial)
            show = false;
        else if (!declaration->visible)
            show = false;
    }

    if (show) {
        void* item = insert(0x23, node->name->text.c_str(),
                            3, 3, 0, 0, 0, 0xffff0000, 0xffff0002);
        setItem(item, 4, 0, 0, 0, 0, 0, node);
        configure(item, declaration);
    }

    unsigned int endIndex = node->last;
    Callback callback;
    callback.function = &CDeclarationView::func;
    callback.object = this;

    if (node->first > endIndex)
        _invalid_parameter_noinfo();

    unsigned int beginIndex = node->first;
    void* beginContainer = node->children;

    if (beginIndex > node->last)
        _invalid_parameter_noinfo();

    Iterator begin;
    begin.container = beginContainer;
    begin.index = beginIndex;

    Iterator end;
    end.container = node->children;
    end.index = endIndex;

    visitChildren(begin, end, callback);
}
