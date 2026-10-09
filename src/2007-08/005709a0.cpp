// from server: 57% by colin
// roc 2007-08 005709a0  unit: RBX::Reflection::VGenericSlotWrapper  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005709a0

extern "C" void __stdcall _invalid_parameter_noinfo();

struct EventArguments {
    int* begin;
    int* end;
    int* capacity;
    char pad[0x20 - 12];
    EventArguments* next;
};

struct GenericSlotWrapper {
    void execute(const EventArguments& arguments);
};

void GenericSlotWrapper::execute(const EventArguments& arguments)
{
    const EventArguments* args = &arguments;
    while (args) {
        int* first = args->begin;
        int* last = args->end;
        if (first > last) {
            _invalid_parameter_noinfo();
        }
        int* cap = args->capacity;
        if (args->begin > cap) {
            _invalid_parameter_noinfo();
        }
        while (first != cap) {
            if (first >= args->capacity) {
                _invalid_parameter_noinfo();
            }
            int v = *first;
            execute(*(EventArguments*)v);
            if (first >= args->capacity) {
                _invalid_parameter_noinfo();
            }
            first++;
        }
        args = args->next;
    }
}
