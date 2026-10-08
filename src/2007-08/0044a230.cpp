// from server: 37% by colin
// roc 2007-08 0044a230  unit: CRobloxModule  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a230

struct S {
    char pad[0x1c];
};

extern "C" {
    void __stdcall sub_77e69c(void*, const void*);
}

int __fastcall sub_448610(void*, int, const void*);

void* __fastcall find(S* self, void*, void* first, void* last)
{
    void* it = first;
    if (it != last) {
        do {
            char buf[0x1c];
            sub_77e69c(buf, it);
            if (sub_448610(buf, 0, last) != 0)
                break;
            it = (char*)it + 0x1c;
        } while (it != last);
    }
    return it;
}
