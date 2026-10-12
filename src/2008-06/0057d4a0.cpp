namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}
struct Base {
    unsigned char storage[8];
    Base(void *, std::string);
    virtual void dispatch();
};
struct SignalDesc : Base {
    void *instance;
    SignalDesc(void *);
    virtual void dispatch();
};
SignalDesc::SignalDesc(void *object)
    : Base(object ? static_cast<char *>(object) + 0x1c8 : 0, "ClearBackpack"),
      instance(object)
{
}
