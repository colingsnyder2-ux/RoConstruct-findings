// from server: 94% by colin
struct CXTPImageManagerIconSet {
    char pad[0x24];
    int Find(int* p);
    int Contains(int key);
};

extern "C" int __stdcall sub_634a60(void* container, int key, int* out);

int CXTPImageManagerIconSet::Contains(int key) {
    int result;
    int found = sub_634a60((char*)this + 0x24, key, &result);
    return (found == 0) ? 0 : result;
}
