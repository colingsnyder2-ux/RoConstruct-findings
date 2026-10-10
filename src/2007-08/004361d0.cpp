// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct QWidget;
struct QTextBrowser {
    QTextBrowser(QWidget*);
};

struct DeclarationView : QTextBrowser {
    DeclarationView(QWidget* parent);
};

struct ObjectBrowserItem {
    char pad[0xe8];
    bool restricted;
};

struct Descriptor;

struct RefCounted {
    long refs;
};

struct StringRep {
    void* vtable;
    long refs;
};

struct String {
    StringRep* rep;
};

extern "C" void* __stdcall sub_444B70(String* out);
extern "C" void* __stdcall sub_442C60(void* self, ObjectBrowserItem* item, int flag);
extern "C" void* __stdcall sub_630634();
extern "C" void* __stdcall sub_63063A();
extern "C" void __stdcall sub_434C70();
extern "C" void __stdcall sub_4360A0();
extern "C" void __stdcall sub_77E6A8();
extern "C" void __stdcall sub_77E6D8();

DeclarationView::DeclarationView(QWidget* parent)
    : QTextBrowser(parent)
{
    String decl;
    void* desc = sub_444B70(&decl);
    void* d = *(void**)desc;
    ObjectBrowserItem* item = (ObjectBrowserItem*)parent;
    void* member = sub_442C60(d, item, 0);

    if (decl.rep) {
        StringRep* r = decl.rep;
        if (_InterlockedExchangeAdd(&r->refs, -1) == 1) {
            void** vt = (void**)r->vtable;
            ((void (__stdcall*)(StringRep*))vt[1])(r);
            if (_InterlockedExchangeAdd(&r->refs, -1) == 1) {
                void** vt2 = (void**)r->vtable;
                ((void (__stdcall*)(StringRep*))vt2[2])(r);
            }
        }
    }

    if (member == 0 || ((char*)member)[0xe8] == 0) {
        void* p = *(void**)((char*)item + 4);
        sub_77E6A8();
        void* a = sub_630634();
        void* b = sub_63063A();
        sub_434C70();
    }

    sub_4360A0();
}
