// from server: 95% by king_originala
namespace std {
    typedef void (__thiscall *MemberCall)(void*);

    extern MemberCall increfCall;
    extern MemberCall localeDestructorCall;

    class locale {
    public:
        class facet {
        public:
            void _Incref();
        };

        facet* ptr;

        locale(const locale& other);
        ~locale() throw();
    };

    inline void locale::facet::_Incref()
    {
        increfCall(this);
    }

    inline locale::locale(const locale& other) : ptr(other.ptr)
    {
        ptr->_Incref();
    }

    inline locale::~locale() throw()
    {
        localeDestructorCall(this);
    }
}

struct Value {
    unsigned short value;
    std::locale loc;
};

void __cdecl first(void*, Value);
void __cdecl second(void*, Value);

void __cdecl function(void* object, Value value)
{
    first(object, value);
    second(object, value);
}
