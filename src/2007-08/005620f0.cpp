// from server: 73% by colin
struct DataModel;

struct SelectionContainer {
    char pad[4];
    int* begin;
    int* end;
};

struct DataModelImpl {
    char pad[0x104];
    SelectionContainer* selection;
};

struct DuplicateSelectionVerb {
    char pad[0x20];
    void* m_pSomething;
    int isEnabled() const;
};

extern "C" DataModelImpl* __stdcall getDataModel(void*);

int DuplicateSelectionVerb::isEnabled() const {
    DataModelImpl* dm;
    if (m_pSomething) {
        dm = getDataModel(m_pSomething);
    } else {
        dm = 0;
    }
    SelectionContainer* sc = *(SelectionContainer**)((char*)dm + 0x104);
    int* begin = sc->begin;
    if (begin == 0) {
        return 0;
    }
    int* end = sc->end;
    int count = (int)((char*)end - (char*)begin) >> 3;
    return count != 0;
}
