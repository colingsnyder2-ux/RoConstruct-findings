// from server: 27% by colin
struct ThreadLogManager {
    int field0;
    int field4;
    int field8;
    ThreadLogManager(const char* name, int a, int b, int c);
};

extern "C" int __stdcall sub_42A170(int* self);

ThreadLogManager::ThreadLogManager(const char* name, int a, int b, int c)
{
    int local[3];
    int saved;
    int result;

    field0 = 0;
    field4 = 0;
    field8 = 0;
    saved = 0;
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;

    if (name != 0) {
        local[2] = c;
        local[0] = (int)name;
        result = ((int (__stdcall*)(int, const char*))name)(0, name);
        local[1] = result;
    }

    sub_42A170((int*)this);

    saved = -1;
    if (name != 0) {
        ((void (__stdcall*)(int, int))name)(1, saved);
    }
}
