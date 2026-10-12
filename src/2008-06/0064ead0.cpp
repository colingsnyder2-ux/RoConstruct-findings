// from server: 71% by king_originala
namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class C, class T, class A>
    class basic_string {
        char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    template<class C, class T, class A>
    basic_string<C, T, A> operator+(
        const C*, const basic_string<C, T, A>&);
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

struct Hit {
    float data[4];
    bool contains();
};

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        virtual void v01();
        virtual void v02();
        virtual void v03();
        virtual void v04();
        virtual void v05();
        virtual void v06();
        virtual void v07();
        virtual void v08();
        virtual void v09();
        virtual void v10();
        virtual void v11();
        virtual void v12();
        virtual void v13();
        virtual void v14();
        virtual void v15();
        virtual void v16();
        virtual void v17();
        virtual void v18();
        virtual void v19();
        virtual void v20();
        virtual bool enabled();

        Hit hit(int);
    };

    class ServiceProvider : public Instance {
    public:
        void send(String);
        void select(int);
    };
}

RBX::ServiceProvider* func_00491d50(RBX::Instance*);
RBX::ServiceProvider* func_005807b0(RBX::Instance*);

struct Event {
    int type;
    int unused;
    int position;
};

struct Result {
    int state;
    int value;
};

struct ChatWidget {
    char padding[0x18];
    String text;

    Result* fallback(Result*, Event*);
    Result* f(Result*, Event*);
};

Result* ChatWidget::f(Result* result, Event* event) {
    RBX::Instance* owner =
        reinterpret_cast<RBX::Instance*>(
            reinterpret_cast<char*>(this) - 0x130);

    if (owner->enabled()) {
        int type = event->type;
        if (type >= 1 && type <= 7 && type == 4) {
            if (owner->hit(event->position).contains()) {
                RBX::ServiceProvider* service = func_00491d50(owner);
                if (service) {
                    func_005807b0(owner)->select(4);
                    String message = "/sc " + text;
                    service->send(message);
                    result->state = 2;
                    result->value = 0;
                    return result;
                }
            }
        }
    }

    fallback(result, event);
    return result;
}
