// from server: 48% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct IDREFItem {
    const void* idref;
    void* propertyOwner;
    int value;
};

struct MergeBinder {
    char pad[4];
    IDREFItem* begin;
    IDREFItem* end;
    IDREFItem* capacity;

    bool processIDREFs();
};

extern "C" void __stdcall sub_442EE0(IDREFItem* first, IDREFItem* last, IDREFItem* dest, int a, int b, int c);
extern "C" void __stdcall sub_443450(IDREFItem* first, IDREFItem* last, IDREFItem* dest, int a);

bool MergeBinder::processIDREFs()
{
    IDREFItem* first = begin;
    IDREFItem* last = end;

    if (first > last)
        _invalid_parameter_noinfo();
    if (begin > end)
        _invalid_parameter_noinfo();
    if (this != this)
        _invalid_parameter_noinfo();

    while (first != last) {
        if (first >= end)
            _invalid_parameter_noinfo();
        if (first >= end)
            _invalid_parameter_noinfo();
        if (first >= end)
            _invalid_parameter_noinfo();

        const void* p = first->idref;
        void (__stdcall *fn)(void*, void*) = *(void (__stdcall **)(void*, void*))p;
        fn(first + 1, first->propertyOwner);
        if (first >= end)
            _invalid_parameter_noinfo();
        first++;
    }

    IDREFItem* e = end;
    if (begin > e)
        _invalid_parameter_noinfo();
    IDREFItem* b = begin;
    if (b > end)
        _invalid_parameter_noinfo();

    if (b != e) {
        IDREFItem* d = end;
        char zero = 0;
        sub_442EE0(b, e, d, zero, zero, zero);
        IDREFItem* newEnd = end;
        int count = (int)((d - e) >> 4);
        sub_443450(b, b + (count << 4), newEnd, 0);
        end = b + (count << 4);
    }

    return true;
}
