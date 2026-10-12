// from server: 79% by king_originala
typedef unsigned long DWORD;

extern "C" int __stdcall CheckNetwork(DWORD *);
extern DWORD (__stdcall *GetModuleFileNameA)(void *, char *, DWORD);

struct ModuleState {
    char unused[12];
    void *module;
};

extern ModuleState *__cdecl GetModuleState();
extern bool __cdecl IsSpecialURL(const char *);

struct Text;
extern void (__thiscall *TextInit)(Text *);
extern void (__thiscall *TextInitFrom)(Text *, const char *);
extern void (__thiscall *TextDestroy)(Text *);
extern void (__cdecl *TextFormat)(Text *, const char *, ...);
extern int (__thiscall *TextCompare)(Text *, const char *);
extern const char *(__thiscall *TextData)(const Text *);

struct Text {
    void *data;
    Text() { TextInit(this); }
    Text(const char *s) { TextInitFrom(this, s); }
    __declspec(nothrow) ~Text() { TextDestroy(this); }
};

struct String;
extern void (__thiscall *StringInit)(String *, const char *);
extern void (__thiscall *StringDestroy)(String *);

struct String {
    unsigned char storage[28];
    String(const char *s) { StringInit(this, s); }
    __declspec(nothrow) ~String() { StringDestroy(this); }
};

struct Node {
    Node *next;
    Node *prev;
};

struct History {
    void *allocator;
    char unused[16];
    Node *head;
    unsigned int count;

    Node *Insert(Node *, Node *, const String *);
    void Reserve(unsigned int);
    void *Erase(void **, Node *, Node *);
};

struct Browser {
    char unused[252];
    History history;

    void Navigate(const char *, void *, const char *, void *, void *, void *);
    void BaseNavigate(const char *, void *, void *, void *, void *, int *);
    void OnNavigate(const char *, void *, void *, void *, void *, int *);
};

void Browser::OnNavigate(const char *url, void *a, void *b,
                         void *c, void *d, int *handled)
{
    DWORD network = 0;
    char path[260];

    if (!CheckNetwork(&network) || network == 0) {
        void *module = GetModuleState()->module;
        if (GetModuleFileNameA(module, path, 260)) {
            Text resource;
            TextFormat(&resource, "res://%s/%d", path, 215);
            if (TextCompare(&resource, url)) {
                Navigate(TextData(&resource), 0, 0, 0, 0, 0);
                *handled = 1;
                return;
            }
        }
    }

    BaseNavigate(url, a, b, c, d, handled);
    if (*handled) {
        Navigate(url, 0, "_blank", 0, 0, 0);
    } else {
        Text saved(url);
        if (!IsSpecialURL(url)) {
            History *list;
            {
                String value(url);
                Node *head = history.head;
                list = &history;
                Node *node = list->Insert(head, head->prev, &value);
                list->Reserve(1);
                head->prev = node;
                node->prev->next = node;
            }
            if (history.count > 50) {
                void *result;
                list->Erase(&result, static_cast<Node *>(list->allocator),
                            list->head->next);
            }
        }
    }
}
