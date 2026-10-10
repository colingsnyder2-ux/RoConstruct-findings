// from server: 78% by colin
struct GWindow {
    void* field0;
    unsigned char* field4;
    void increment();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void GWindow::increment()
{
    if (field0 == 0)
        _invalid_parameter_noinfo();

    unsigned char* node = field4;
    if (node[0xe] != 0) {
        node = *(unsigned char**)(node + 8);
        field4 = node;
        if (node[0xe] == 0)
            return;
        _invalid_parameter_noinfo();
        return;
    }

    unsigned char* left = *(unsigned char**)node;
    if (left[0xe] == 0) {
        unsigned char* p = *(unsigned char**)(left + 8);
        if (p[0xe] == 0) {
            do {
                left = p;
                p = *(unsigned char**)(left + 8);
            } while (p[0xe] == 0);
        }
        field4 = left;
        return;
    }

    unsigned char* p = *(unsigned char**)(node + 4);
    if (p[0xe] == 0) {
        do {
            unsigned char* cur = field4;
            if (cur != *(unsigned char**)p)
                break;
            field4 = p;
            unsigned char* q = p;
            p = *(unsigned char**)(q + 4);
        } while (p[0xe] == 0);
    }

    if (field4[0xe] != 0) {
        _invalid_parameter_noinfo();
        return;
    }
    field4 = p;
}
