// from server: 60% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct VItem {
    void* getValue();
};

struct VItemList {
    VItem** begin;
    VItem** end;
};

struct OutParam {
    void* pad0;
    void* value;
    void** out;
};

struct PropDescriptor {
    char pad[0xc0];
    VItemList* items;
    void copyValue(OutParam* out);
};

void PropDescriptor::copyValue(OutParam* out)
{
    VItemList* list = items;
    if (!list)
        return;

    VItem** it = list->begin;
    if (it > list->end)
        _invalid_parameter_noinfo();

    VItem** end = list->end;
    if (list->begin > end)
        _invalid_parameter_noinfo();

    while (it != end) {
        if (it >= list->end)
            _invalid_parameter_noinfo();

        VItem* item = *it;
        void* value = item->getValue();
        if (value) {
            void** slot = out->out;
            if (!slot)
                out->value = value;
            else
                *slot = value;
            out->out = (void**)value;
        }

        if (it >= list->end)
            _invalid_parameter_noinfo();
        ++it;
    }
}
