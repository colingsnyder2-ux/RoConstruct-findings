// from server: 55% by colin
struct CollisionStage {
    void process(void*);
};

struct Child {
    char pad0[4];
    void* vtable;
    char pad1[0x18];
    int field1c;
};

struct List {
    Child** items;
    int count;
};

struct StageVtbl {
    void* pad0;
    int (__stdcall* getSomething)(void*);
    void* pad2;
    void* pad3;
    void* pad4;
    void (__stdcall* removeChild)(void*, Child*);
};

struct Stage {
    StageVtbl* vtable;
    char pad1[4];
    void* field8;
    char pad2[8];
    void* field14;
    void* field18;
};

struct Helper {
    void* field0;
    Child* field4;
};

extern "C" int __stdcall sub_6275c0(void*, Child*, void*);
extern "C" void __stdcall sub_5ff950(void*, Helper*);

void CollisionStage::process(void* arg)
{
    List* list = (List*)arg;
    int i = 0;
    if (list->count > 0) {
        do {
            Child* child = list->items[i];
            StageVtbl* cv = *(StageVtbl**)child->vtable;
            int a = cv->getSomething(child->vtable);
            Stage* self = (Stage*)this;
            StageVtbl* sv = self->vtable;
            int b = sv->getSomething(this);
            if (a > b) {
                char tmp;
                if (!sub_6275c0(this, child, &tmp)) {
                    StageVtbl* sv2 = self->vtable;
                    sv2->removeChild(self->field8, child);
                }
            }
            if (child->field1c < 0) {
                Helper h;
                h.field0 = self->field18;
                h.field4 = child;
                child->field1c = (int)self->field18;
                sub_5ff950(&self->field14, &h);
            }
            i++;
        } while (i < list->count);
    }
}
