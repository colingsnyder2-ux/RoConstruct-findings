// from server: 66% by colin
struct AssemblySetNode {
    AssemblySetNode* parent;
    AssemblySetNode* left;
    AssemblySetNode* right;
    char color;
    char pad[3];
    int key;
};

struct AssemblySet {
    AssemblySetNode* head;
    unsigned int size;
};

struct SleepStage {
    char pad[0x9c];
    AssemblySet recursiveWakePending;
    int numContactsInStage;

    void stepAssembliesRecursiveWakePending();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __cdecl func_5375c0(void*, void*, void*, void*, void*, void*);
extern "C" int __cdecl func_5b3a60(void*, void*, void*, void*, void*, void*);
extern "C" int __cdecl func_609130(void*, void*);
extern "C" int __cdecl func_627f20(void*, void*);

void SleepStage::stepAssembliesRecursiveWakePending()
{
    if (numContactsInStage == 0)
        return;

    AssemblySet* set = &recursiveWakePending;

    while (numContactsInStage != 0) {
        AssemblySetNode* header = set->head;
        AssemblySetNode* first = header->parent;
        if (first == header)
            _invalid_parameter_noinfo();

        AssemblySetNode* node = set->head->parent;
        int key = node->key;

        AssemblySetNode* lower = set->head;
        AssemblySetNode* p = set->head->parent;
        while (p->color == 0) {
            if (key < p->key) {
                lower = p;
                p = p->parent;
            } else {
                p = p->right;
            }
        }

        AssemblySetNode* upper = set->head;
        p = set->head->parent;
        while (p->color == 0) {
            if (p->key < key) {
                p = p->right;
            } else {
                upper = p;
                p = p->parent;
            }
        }

        int tmp = 0;
        func_5375c0(set, upper, lower, set, &tmp, &tmp);
        func_5b3a60(set, &tmp, set, upper, lower, set);
        func_609130((void*)key, set);
        func_627f20((void*)key, set->head->parent);
    }
}
