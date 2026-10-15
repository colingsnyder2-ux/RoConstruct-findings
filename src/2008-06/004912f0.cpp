// from server: 79% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Iterator
{
    void* owner;
    void* node;
};

struct Container
{
    void* owner;
    unsigned char storage[20];

    Iterator* __thiscall find(Iterator* result, const char* key);
    void __thiscall destroy();
};

char* __cdecl search(char* first, char* last, Container container, void* endNode)
{
    char* current = first;
    while (current != last)
    {
        char key = *current;
        void* owner = container.owner;
        Iterator result;
        Iterator* found = container.find(&result, &key);

        if (found->owner == 0 || found->owner != owner)
            _invalid_parameter_noinfo();

        if (found->node != endNode)
            break;

        ++current;
    }
    container.destroy();
    return current;
}
