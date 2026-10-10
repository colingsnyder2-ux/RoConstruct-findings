// from server: 58% by colin
// roc 2007-08 004138a0  unit: DHTMLWindowService  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004138a0

extern "C" void* __stdcall sub_56D350();
extern "C" void* __stdcall sub_56D6F0(void*);
extern "C" void* __stdcall sub_52C940(void*, int, void*);
extern "C" void* __stdcall sub_56D400(void*, void*);
extern "C" void* __stdcall sub_56DA00(void*);

struct DHTMLWindowService {
    char pad[0x14];
    void* field14;
    char pad2[0x18];
    char field30;
    char field38;
    char field40;
    void init(void* a, void* b, void* c);
};

void DHTMLWindowService::init(void* a, void* b, void* c) {
    void* p;
    field14 = sub_56D350();
    p = sub_56D6F0(&field30);
    p = sub_52C940(a, -1, p);
    sub_56D400(&field14, p);
    p = sub_56DA00(&field38);
    p = sub_52C940(b, -1, p);
    sub_56D400(&field14, p);
    p = sub_56DA00(&field40);
    p = sub_52C940(c, -1, p);
    sub_56D400(&field14, p);
}
