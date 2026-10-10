// from server: 22% by colin
struct QObject {
    void *vtable;
    void *field4;
    void *field8;
};

struct QDeclarativeListProperty {
    QObject *object;
    void (*append)(QDeclarativeListProperty *, QObject *);
    int (*count)(QDeclarativeListProperty *);
    QObject *(*at)(QDeclarativeListProperty *, int);
    void (*clear)(QDeclarativeListProperty *);
};

struct List {
    List *next;
    List *prev;
    QObject *value;
    int notifyIndex;
};

struct QDeclarativeVMEMetaObject {
    char pad0[0x138];
    int dummy;
    void clearListProperty(int index, QObject *object);
};

extern "C" void __stdcall sub_66e060(QObject *obj);
extern "C" void __stdcall sub_66f110(List *list, int count);
extern "C" void __stdcall sub_66f140(List *list);
extern "C" void __stdcall sub_6e2bd0(void *a, void *b, int c);

void QDeclarativeVMEMetaObject::clearListProperty(int index, QObject *object)
{
    if (object == 0)
        return;

    List *list = (List *)object;

    if (list->notifyIndex == 0)
        list = list->next;

    QObject *obj = (QObject *)((char *)this + 0x40);

    if (obj->field8 == 0) {
        sub_66e060(obj);
        if (list != 0) {
            sub_6e2bd0((char *)list - 0x54, (char *)obj - 0x20, 1);
        } else {
            sub_6e2bd0(0, (char *)obj - 0x20, 1);
        }
    } else {
        List localList;
        sub_66f110(&localList, 10);

        void **vtable = *(void ***)obj;
        void (*func)(QObject *, int, List *) = (void (*)(QObject *, int, List *))vtable[3];
        func(obj, 0, &localList);

        List *cur = localList.next;
        while (cur != 0) {
            List *next = cur->next;
            QObject *val = cur->value;
            sub_66e060(val);
            void *a = (val != 0) ? (char *)val - 0x20 : 0;
            void *b = (list != 0) ? (char *)list - 0x54 : 0;
            sub_6e2bd0(b, a, 1);
            cur = next;
        }

        sub_66f140(&localList);
    }

    *(int *)((char *)this + 0x138) = 0;
}
