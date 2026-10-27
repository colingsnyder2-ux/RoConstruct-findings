#include <exception>
struct StandardOut {
    void print(int, const char *, ...);
};
struct OutHandle {
    StandardOut *pointer;
    void *count;
    ~OutHandle();
    StandardOut *operator->() const { return pointer; }
};
OutHandle __cdecl singleton();
struct __declspec(dllimport) RocString {
    char storage[28];
    RocString(const char *);
    ~RocString();
    const char *c_str() const;
};
struct Arguments {
    unsigned int second;
    unsigned int first;
    Arguments(const Arguments& other);
};
inline Arguments::Arguments(const Arguments& other)
{
    unsigned int b = other.second;
    unsigned int a = other.first;
    second = b;
    first = a;
}
struct Callback {
    virtual void invoke(void* object, Arguments arguments) = 0;
};
struct S {
    void f(Arguments arguments, Callback* callback);
};
void S::f(Arguments arguments, Callback* callback)
{
    try {
        void* object = 0;
        if (this)
            object = reinterpret_cast<char*>(this) - 0xC4;
        callback->invoke(object, arguments);
    }
    catch (std::exception& error) {
        RocString what(error.what());
        singleton()->print(2, "Exception caught in onEvent. %s", what.c_str());
    }
}
