// from server: 19% by colin
struct Element {
    unsigned int data[2];
};

struct Mesh {
    Element* begin;
    unsigned int count;
    bool contains(Element* value);
    void insert(Element* pos, Element* value);
    void push_back(Element* value);
    void grow();
    void insert_aux(Element* pos, Element* value);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);

void Mesh::insert(Element* pos, Element* value) {
    if (count < 0) {
        return;
    }
    if (pos < begin || pos > begin + count) {
        if (contains(pos)) {
            Element tmp = *value;
            insert(&tmp, value);
            return;
        }
        grow();
        Element* p = begin + count - 1;
        *p = *value;
        return;
    }
    Element* slot = begin + count;
    Element* newElem = (Element*)operator_new(8);
    if (newElem != 0) {
        *newElem = *value;
    }
    count = count + 1;
}
